#include <QApplication>
#include <QPushButton>

#include "MainWindow.h"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow b;
    b.resize(800, 600);
    b.show();
    QPushButton button("Hello world!", nullptr);
    button.resize(200, 100);
    button.show();
    return QApplication::exec();
}
