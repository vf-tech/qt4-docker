#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    uint8_t deneme = 0;
    uint8_t dener_arr[20];
    memset(dener_arr, 0x00, sizeof(dener_arr));
    qDebug() << "deneme";
}

MainWindow::~MainWindow()
{
    delete ui;
}

