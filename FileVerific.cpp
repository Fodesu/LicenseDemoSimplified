#include "FileVerific.h"

FileVerific::FileVerific(QWidget *parent)
	: QDialog(parent)
{
	
	ui.setupUi(this);
	//chooseFileDialog = new QFileDialog();
	//connect(ui.fileBtn, &QPushButton::clicked, chooseFileDialog, [&]() {
	//	chooseFileDialog->getOpenFileName(this, tr("open file"), "C:/", tr())
	//});


	
}

FileVerific::~FileVerific()
{
}
