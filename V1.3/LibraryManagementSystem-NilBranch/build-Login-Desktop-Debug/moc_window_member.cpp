/****************************************************************************
** Meta object code from reading C++ file 'window_member.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Login/window_member.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window_member.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Window_Member_t {
    QByteArrayData data[11];
    char stringdata0[317];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Window_Member_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Window_Member_t qt_meta_stringdata_Window_Member = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Window_Member"
QT_MOC_LITERAL(1, 14, 32), // "on_pushButton_ReturnBook_clicked"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 33), // "on_pushButton_ViewAccount_cli..."
QT_MOC_LITERAL(4, 82, 28), // "on_pushButton_Logout_clicked"
QT_MOC_LITERAL(5, 111, 39), // "on_pushButton_RemoveReservati..."
QT_MOC_LITERAL(6, 151, 31), // "on_pushButton_RenewBook_clicked"
QT_MOC_LITERAL(7, 183, 33), // "on_pushButton_ReserveBook_cli..."
QT_MOC_LITERAL(8, 217, 28), // "on_pushButton_Search_clicked"
QT_MOC_LITERAL(9, 246, 35), // "on_pushButton_UpdateAccount_c..."
QT_MOC_LITERAL(10, 282, 34) // "on_pushButton_ChechOutBook_cl..."

    },
    "Window_Member\0on_pushButton_ReturnBook_clicked\0"
    "\0on_pushButton_ViewAccount_clicked\0"
    "on_pushButton_Logout_clicked\0"
    "on_pushButton_RemoveReservation_clicked\0"
    "on_pushButton_RenewBook_clicked\0"
    "on_pushButton_ReserveBook_clicked\0"
    "on_pushButton_Search_clicked\0"
    "on_pushButton_UpdateAccount_clicked\0"
    "on_pushButton_ChechOutBook_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Window_Member[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Window_Member::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Window_Member *_t = static_cast<Window_Member *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_ReturnBook_clicked(); break;
        case 1: _t->on_pushButton_ViewAccount_clicked(); break;
        case 2: _t->on_pushButton_Logout_clicked(); break;
        case 3: _t->on_pushButton_RemoveReservation_clicked(); break;
        case 4: _t->on_pushButton_RenewBook_clicked(); break;
        case 5: _t->on_pushButton_ReserveBook_clicked(); break;
        case 6: _t->on_pushButton_Search_clicked(); break;
        case 7: _t->on_pushButton_UpdateAccount_clicked(); break;
        case 8: _t->on_pushButton_ChechOutBook_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Window_Member::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Window_Member.data,
      qt_meta_data_Window_Member,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Window_Member::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Window_Member::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Window_Member.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Window_Member::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
