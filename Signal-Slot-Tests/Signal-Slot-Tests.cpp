// Singal-Slot Tests

#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QPushButton button("Click me");
    QObject::connect(&button, &QPushButton::clicked, &app, &QApplication::quit);

    button.show();
    return app.exec();
}
