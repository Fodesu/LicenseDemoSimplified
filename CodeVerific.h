#pragma once

#include <QDialog>
#include <string>
#include "ui_CodeVerific.h"

class CodeVerific : public QDialog
{
	Q_OBJECT

public:
	CodeVerific(QDialog* parent = nullptr);
	~CodeVerific();

private:
	Ui::CodeVerific ui;
	const static uint32_t password = 12345;
};
