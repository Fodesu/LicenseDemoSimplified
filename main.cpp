#include <QApplication>
#include <QPushButton>

#include "MainWindow.h"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow b;
    b.show();
    //QPushButton button("Hello world!", &b);
    //
    //button.setGeometry(10, 10, 200, 200);
    //button.show();
    return QApplication::exec();
}
