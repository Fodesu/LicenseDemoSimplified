#include <QApplication>
#include <QPushButton>
#include <iostream>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QPushButton button("Hello world!", nullptr);
    button.resize(200, 100);
    button.show();


    std::cout << "test" << std::endl;
    return QApplication::exec();
}
