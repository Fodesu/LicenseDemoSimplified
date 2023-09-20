#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	// fileVerific = new FileVerific();
	// fileVerific->hide();
	m_codeverf = new CodeVerific();
	ui.setupUi(this);
	connect(ui.chooseCodeBtn, &QPushButton::clicked, m_codeverf, &CodeVerific::exec);
	// connect(ui.fileBtn, &QPushButton::clicked, fileVerific, &FileVerific::exec);
	
}

MainWindow::~MainWindow()
{
}
