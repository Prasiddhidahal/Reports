#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include "signup.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Login_clicked()
{
    QString VoterID =ui->lineEdit_Name->text();
    QString password =ui->lineEdit_2_Password->text();

    if(VoterID== "prasiddhi" && password=="test"){
        QMessageBox::information(this,"Login","Voter ID and password is correct");
    }
    else if(VoterID== "prasi" && password=="test"){
        QMessageBox::information(this,"Login","Voter ID and password is correct");}
    else{
        QMessageBox::warning(this,"login","Voter ID and password is incorrect");
    }
}


void MainWindow::on_pushButton_clicked()
{
    Signup signup;
    signup.setModal(true);
    signup.exec();

}

