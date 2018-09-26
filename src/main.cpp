#include "./src/gui/mainwindow.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char* argv[])
{
    QApplication application(argc, argv);

    MainWindow mainWindow;
    mainWindow.show();

    return application.exec();
}
