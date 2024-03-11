QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = greedySnake
TEMPLATE = app


SOURCES +=  src/main.cpp\
            src/mainwindow.cpp \
            src/food.cpp \
            src/gamecontroller.cpp \
            src/snake.cpp \
            src/boundary.cpp

HEADERS  += include/mainwindow.h \
            include/food.h \
            include/gamecontroller.h \
            include/constants.h \
            include/snake.h \
            include/boundary.h

RESOURCES += \
            resource/res.qrc

