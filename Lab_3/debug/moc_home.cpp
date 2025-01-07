/****************************************************************************
** Meta object code from reading C++ file 'home.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "C:/Users/user/Downloads/Lab_3 (3)/Lab_3/home.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'home.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Home_t {
    uint offsetsAndSizes[20];
    char stringdata0[5];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[27];
    char stringdata5[19];
    char stringdata6[17];
    char stringdata7[27];
    char stringdata8[24];
    char stringdata9[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Home_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_Home_t qt_meta_stringdata_Home = {
    {
        QT_MOC_LITERAL(0, 4),  // "Home"
        QT_MOC_LITERAL(5, 9),  // "dointimes"
        QT_MOC_LITERAL(15, 0),  // ""
        QT_MOC_LITERAL(16, 11),  // "checkChange"
        QT_MOC_LITERAL(28, 26),  // "server_socket_Disconnected"
        QT_MOC_LITERAL(55, 18),  // "server_New_Connect"
        QT_MOC_LITERAL(74, 16),  // "server_Read_Data"
        QT_MOC_LITERAL(91, 26),  // "client_socket_Disconnected"
        QT_MOC_LITERAL(118, 23),  // "client_socket_Send_Data"
        QT_MOC_LITERAL(142, 21)   // "on_connectBtn_clicked"
    },
    "Home",
    "dointimes",
    "",
    "checkChange",
    "server_socket_Disconnected",
    "server_New_Connect",
    "server_Read_Data",
    "client_socket_Disconnected",
    "client_socket_Send_Data",
    "on_connectBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Home[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x0a,    1 /* Public */,
       3,    1,   63,    2, 0x0a,    2 /* Public */,
       4,    0,   66,    2, 0x0a,    4 /* Public */,
       5,    0,   67,    2, 0x0a,    5 /* Public */,
       6,    0,   68,    2, 0x0a,    6 /* Public */,
       7,    0,   69,    2, 0x0a,    7 /* Public */,
       8,    0,   70,    2, 0x0a,    8 /* Public */,
       9,    0,   71,    2, 0x0a,    9 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Home::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Home *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dointimes(); break;
        case 1: _t->checkChange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->server_socket_Disconnected(); break;
        case 3: _t->server_New_Connect(); break;
        case 4: _t->server_Read_Data(); break;
        case 5: _t->client_socket_Disconnected(); break;
        case 6: _t->client_socket_Send_Data(); break;
        case 7: _t->on_connectBtn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Home::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Home.offsetsAndSizes,
    qt_meta_data_Home,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Home_t
, QtPrivate::TypeAndForceComplete<Home, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Home::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Home::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Home.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Home::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
