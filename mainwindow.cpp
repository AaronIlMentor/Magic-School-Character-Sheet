#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include "character.h"
#include "geomancyCores.h"
#include "item.h"
#include "skill.h"
#include "spell.h"
#include <stdlib.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    createActions();
    on_actionNew_Character_triggered(); 
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createActions() {
    connect(ui->actionNew_Character, &QAction::triggered, this, &MainWindow::on_actionNew_Character_triggered);
    connect(ui->actionLoad_Character, &QAction::triggered, this, &MainWindow::on_actionOpen_triggered);
    connect(ui->actionSave_Character, &QAction::triggered, this, &MainWindow::on_actionSave_triggered);
    connect(ui->actionSave_As, &QAction::triggered, this, &MainWindow::on_actionSave_as_triggered);
}

void MainWindow::on_actionNew_Character_triggered()
{
    ui->nameInputField->setText(QString("Name"));
    ui->organizationInputField->setText(QString("Organization"));
    ui->CampaignInputField->setText(QString("Campaign"));
    ui->HarmCurrentField->setValue(0);
    ui->HarmThresholdField->setValue(4);
    ui->StressCurrentField->setValue(0);
    ui->StressThresholdField->setValue(10);
    ui->MentalHarmCurrentField->setValue(0);
    ui->MentalHarmThresholdField->setValue(4);
    ui->SpiritualHarmCurrentField->setValue(0);
    ui->SpiritualHarmThresholdField->setValue(4);
    ui->WillpowerField->setText(QString("10"));
    ui->HeatField->setText(QString("0"));
    ui->FavorField->setText(QString("0"));
}

void MainWindow::on_actionOpen_triggered() {

}

void MainWindow::on_actionSave_triggered() {

}

void MainWindow::on_actionSave_as_triggered() {

}

void MainWindow::on_actionExit_triggered() {

}

void MainWindow::on_actionAbout_triggered() {

}

void MainWindow::onactionAbout_qt_triggered() {

}