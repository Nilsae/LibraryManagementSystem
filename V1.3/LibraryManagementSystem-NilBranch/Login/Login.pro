QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    window_addbook.cpp \
    window_cancelmembership.cpp \
    window_chechoutbook.cpp \
    window_editbook.cpp \
    window_issuebook.cpp \
    window_librarian.cpp \
    window_member.cpp \
    window_registernewaccount.cpp \
    window_removebook.cpp \
    window_removereservation.cpp \
    window_renewbook.cpp \
    window_reservebook.cpp \
    window_returnbook.cpp \
    window_search.cpp \
    window_updateaccount.cpp \
    window_viewaccount.cpp

HEADERS += \
    mainwindow.h \
    window_addbook.h \
    window_cancelmembership.h \
    window_chechoutbook.h \
    window_editbook.h \
    window_issuebook.h \
    window_librarian.h \
    window_member.h \
    window_registernewaccount.h \
    window_removebook.h \
    window_removereservation.h \
    window_renewbook.h \
    window_reservebook.h \
    window_returnbook.h \
    window_search.h \
    window_updateaccount.h \
    window_viewaccount.h

FORMS += \
    mainwindow.ui \
    window_addbook.ui \
    window_cancelmembership.ui \
    window_chechoutbook.ui \
    window_editbook.ui \
    window_issuebook.ui \
    window_librarian.ui \
    window_member.ui \
    window_registernewaccount.ui \
    window_removebook.ui \
    window_removereservation.ui \
    window_renewbook.ui \
    window_reservebook.ui \
    window_returnbook.ui \
    window_search.ui \
    window_updateaccount.ui \
    window_viewaccount.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    UserAndPass.qrc
