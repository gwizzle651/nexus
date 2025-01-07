cmake_minimum_required(VERSION 3.16)  # Adjust based on your version of CMake
project(nexus VERSION 1.0 LANGUAGES CXX)

# Set the C++ standard to C++11
set(CMAKE_CXX_STANDARD 11)

# Find the required Qt modules (Core, Quick, and GUI)
find_package(Qt6 REQUIRED COMPONENTS Core Quick Gui)

# Specify the sources and headers
set(SOURCES
    main.cpp
)

set(HEADERS
    mainwindow.h
)

set(FORMS
    mainwindow.ui
)

# Create the Qt6 UI code from .ui file (if you have any .ui files)
qt_wrap_ui(UI_HEADERS ${FORMS})

# Add the executable target
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS} ${UI_HEADERS})

# Link the necessary Qt libraries
target_link_libraries(${PROJECT_NAME} Qt6::Core Qt6::Gui Qt6::Quick)

# Optional: Set the output name (target) if needed (this step is usually automatic)
set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "nexus")

# Set Qt Quick specific QML files (if you have any QML files)
set(QML_FILES
    qml/main.qml
)

# Install QML files (optional, depending on your deployment needs)
install(FILES ${QML_FILES} DESTINATION ${CMAKE_INSTALL_PREFIX}/qml)

# Optional: Enable the Qt Quick module for your application
qt_add_qml_module(${PROJECT_NAME} URI nexus QML_FILES ${QML_FILES})

