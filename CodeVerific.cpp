#include "CodeVerific.h"




CodeVerific::CodeVerific(QDialog*parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.result->hide();
	connect(ui.pushButton, &QPushButton::clicked, this, [&]() {
		if (ui.lineEdit->text().toUInt() == CodeVerific::password) {
			ui.result->setText("激活成功");
		} else {
			ui.result->setText("激活失败, 请检查授权码");
		}
		ui.result->show();
	});
}

CodeVerific::~CodeVerific()
{
}