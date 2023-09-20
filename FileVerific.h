#pragma once

#include <QDialog>
#include <QFileDialog>

#include "ui_FileVerific.h"

class FileVerific : public QDialog
{
	Q_OBJECT
	

public:
	FileVerific(QWidget *parent = nullptr);
	~FileVerific();

private:
	Ui::FileVerific ui;
	//QFileDialog* chooseFileDialog;
};
