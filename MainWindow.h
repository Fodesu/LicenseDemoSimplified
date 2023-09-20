#pragma once

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>

#include "FileVerific.h"
#include "ui_MainWindow.h"
#include "ui_FileVerific.h"
#include "CodeVerific.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = nullptr);
	~MainWindow();

private:
	Ui::MainWindow ui;
	//QLabel* chooseLabel = nullptr;
	//QPushButton* fileBtn = nullptr, * hardBtn = nullptr;
	// FileVerific* fileVerific;
	QPushButton* m_tmp;
	CodeVerific* m_codeverf;
};
