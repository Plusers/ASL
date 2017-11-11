#-------------------------------------------------
#
# Project created by QtCreator 2017-11-11T11:54:12
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ASL
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    vydacha_sdacha/dejurniy.cpp \
    vydacha_sdacha/vvod_id.cpp \
    vydacha_sdacha/action_with_qr_code.cpp \
    vydacha_sdacha/uslovie.cpp \
    vydacha_sdacha/qr_code_unread.cpp \
    add_book/add_book_start.cpp \
    add_book/add_book_end.cpp \
    list_of_students_book/info_from_id.cpp \
    add_new_student/new_student.cpp \
    History_of_book/book_history.cpp \
    History_of_book/book_history_end.cpp

HEADERS += \
        mainwindow.h \
    vydacha_sdacha/dejurniy.h \
    vydacha_sdacha/vvod_id.h \
    vydacha_sdacha/action_with_qr_code.h \
    vydacha_sdacha/uslovie.h \
    vydacha_sdacha/qr_code_unread.h \
    add_book/add_book_start.h \
    add_book/add_book_end.h \
    list_of_students_book/info_from_id.h \
    add_new_student/new_student.h \
    History_of_book/book_history.h \
    History_of_book/book_history_end.h

FORMS += \
        mainwindow.ui \
    vydacha_sdacha/dejurniy.ui \
    vydacha_sdacha/vvod_id.ui \
    vydacha_sdacha/action_with_qr_code.ui \
    vydacha_sdacha/uslovie.ui \
    vydacha_sdacha/qr_code_unread.ui \
    add_book/add_book_start.ui \
    add_book/add_book_end.ui \
    list_of_students_book/info_from_id.ui \
    add_new_student/new_student.ui \
    History_of_book/book_history.ui \
    History_of_book/book_history_end.ui
