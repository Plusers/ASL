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
        mainwindow.cpp

HEADERS += \
        mainwindow.h

FORMS += \
        mainwindow.ui \
    menu/menu.ui \
    add_book/1_add_book(start).ui \
    add_book/2_add_book(end).ui \
    add_student/add_student.ui \
    auth_form/auth_form.ui \
    history_book/1_histori_books.ui \
    history_book/2_hisotori_books.ui \
    history_vidachi/books_for_ID.ui \
    print_qr_code/print_QR_code.ui \
    vydacha_sdacha/1_dejurniy.ui \
    vydacha_sdacha/2_vvod_ID.ui \
    vydacha_sdacha/3_action_with_QR_code.ui \
    vydacha_sdacha/4_uslovie.ui \
    vydacha_sdacha/QR_code_unread.ui
