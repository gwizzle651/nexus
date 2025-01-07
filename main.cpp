#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    
    // Set application metadata
    app.setOrganizationName("Sentinels' Forge");
    //app.setOrganizationDomain("mycompany.com");
    app.setApplicationName("Nexus");

    QWidget window;
    window.resize(250, 150);
    window.setWindowTitle(app.applicationName());  // Use the application name as the window title
    window.show();

    return app.exec();
}
