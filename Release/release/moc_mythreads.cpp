/****************************************************************************
** Meta object code from reading C++ file 'mythreads.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../AQRVison/mythreads.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mythreads.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyThreads_t {
    QByteArrayData data[8];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyThreads_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyThreads_t qt_meta_stringdata_MyThreads = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MyThreads"
QT_MOC_LITERAL(1, 10, 21), // "signal_transmit_image"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 7), // "Hobject"
QT_MOC_LITERAL(4, 41, 29), // "slot_heartbeat_sender_control"
QT_MOC_LITERAL(5, 71, 18), // "modbus_tcp_server*"
QT_MOC_LITERAL(6, 90, 8), // "m_modbus"
QT_MOC_LITERAL(7, 99, 18) // "slot_image_capture"

    },
    "MyThreads\0signal_transmit_image\0\0"
    "Hobject\0slot_heartbeat_sender_control\0"
    "modbus_tcp_server*\0m_modbus\0"
    "slot_image_capture"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyThreads[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x0a /* Public */,
       7,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

void MyThreads::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyThreads *_t = static_cast<MyThreads *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_transmit_image((*reinterpret_cast< Hobject(*)>(_a[1]))); break;
        case 1: _t->slot_heartbeat_sender_control((*reinterpret_cast< modbus_tcp_server*(*)>(_a[1]))); break;
        case 2: _t->slot_image_capture(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< modbus_tcp_server* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MyThreads::*_t)(Hobject );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyThreads::signal_transmit_image)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MyThreads::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MyThreads.data,
      qt_meta_data_MyThreads,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MyThreads::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyThreads::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MyThreads.stringdata0))
        return static_cast<void*>(const_cast< MyThreads*>(this));
    return QObject::qt_metacast(_clname);
}

int MyThreads::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MyThreads::signal_transmit_image(Hobject _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE