#include "form.h"

#include <QApplication>

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    Form form;
    form.show();
    return app.exec();
}
