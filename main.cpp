#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);  // Initializes the application

     app.setApplicationName("Nexus");
    
    QWidget window;  // Create a window
    window.resize(250, 150);  // Set the size of the window
    window.setWindowTitle("Basic Qt Application");  // Set the title of the window
    window.show();  // Show the window

    return app.exec();  // Starts the application event loop
}
