#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->sbObjectMass, SIGNAL(valueChanged(double)), this, SLOT(sbObjectMassValueChanged(double)));
    QObject::connect(ui->txtGoalPose, SIGNAL(returnPressed()), this, SLOT(txtGoalPoseReturnPressed()));
    QObject::connect(ui->cbPredefPoses, SIGNAL(currentIndexChanged(int)), this, SLOT(cbPredefPosesCurrentIndexChanged(int)));
}

MainWindow::~MainWindow()
{    
    delete ui;
}

void MainWindow::setRosNode(QtRosNode* qtRosNode)
{
    this->qtRosNode = qtRosNode;
    //Connect signals from QtRosNode to MainWindow
    //For example, when ros finishes or when a rostopic is received
    QObject::connect(qtRosNode, SIGNAL(onRosNodeFinished()), this, SLOT(close()));
    QObject::connect(qtRosNode, SIGNAL(updateGraphics()), this, SLOT(updateGraphicsReceived()));
}

//
//SLOTS FOR SIGNALS EMITTED IN THE MAINWINDOW
//
void MainWindow::closeEvent(QCloseEvent *event)
{
    this->qtRosNode->gui_closed = true;
    this->qtRosNode->wait();
    //event->accept();
}

//
//SLOTS FOR SIGNALS EMITTED IN THE QTROSNODE
//

void MainWindow::updateGraphicsReceived()
{
    QString str("<html><head/><body><p><span style=\" font-size:20pt; font-weight:600;\">");
    str += QString::number(qtRosNode->estimated_mass,'f',3) + "</span></p></body></html>";
    this->ui->lblEstimatedMass->setText(str);

    QString strPose("");
    for(size_t i=0; i < qtRosNode->current_pose.size(); i++)
        strPose += QString::number(qtRosNode->current_pose[i],'f',2) + "   ";
    this->ui->lblCurrentPose->setText(strPose);
}

//
//SLOTS FOR SIGNALS EMITTED IN THE MAIN WINDOW
//
void MainWindow::sbObjectMassValueChanged(double m)
{
    qtRosNode->publishObjectMass(m);
}

void MainWindow::txtGoalPoseReturnPressed()
{
    std::vector<double> goal_pose;
    std::vector<std::string> parts;
    std::string str = this->ui->txtGoalPose->text().toStdString();
    boost::split(parts, str, boost::is_any_of(" ,\t\r\n"), boost::token_compress_on);
    if(parts.size() != 7)
    {
        this->ui->txtGoalPose->setText("Invalid format");
        return;
    }

    if(!strToDoubleArray(str, goal_pose))
    {
        this->ui->txtGoalPose->setText("Invalid format");
        return;
    }
    qtRosNode->publishGoalPose(goal_pose);
}

void MainWindow::cbPredefPosesCurrentIndexChanged(int i)
{
    std::vector<double> goal_pose;
    std::string str[7] = {"-1 0 0 1.5 0 0.9 0", "-0.5 0 0 1.2 0 0.6 0", "0.3 0 0 0.5 0 0.7 0",
                          "0.6 0 0 0.4 0 0.6 0", "0 -0.5 0.5 1 0 1 -0.3", "0.4 -0.1 1 0.8 0 0.7 -0.4",
                          "0 0 0 0 0 0 0"};
    strToDoubleArray(str[i], goal_pose);
    this->ui->txtGoalPose->setEnabled(false);
    this->ui->txtGoalPose->setText(QString(str[i].c_str()));
    this->ui->txtGoalPose->setEnabled(true);
    qtRosNode->publishGoalPose(goal_pose);
}

bool MainWindow::strToDoubleArray(std::string str, std::vector<double>& result)
{
    result.clear();
    std::vector<std::string> parts;
    boost::split(parts, str, boost::is_any_of(" ,\t\r\n"), boost::token_compress_on);
    for(size_t i=0; i < parts.size(); i++)
    {
        std::stringstream ssValue(parts[i]);
        float value;
        if(!(ssValue >> value))
            return false;
        result.push_back(value);
    }
    return true;
}
