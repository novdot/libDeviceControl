/****************************************************************************
** Meta object code from reading C++ file 'protocolinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/protocolinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'protocolinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeviceInterface_t {
    QByteArrayData data[20];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeviceInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeviceInterface_t qt_meta_stringdata_DeviceInterface = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DeviceInterface"
QT_MOC_LITERAL(1, 16, 4), // "send"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 16), // "slaveListUpdated"
QT_MOC_LITERAL(4, 39, 11), // "receiveDone"
QT_MOC_LITERAL(5, 51, 7), // "add2Log"
QT_MOC_LITERAL(6, 59, 8), // "timStart"
QT_MOC_LITERAL(7, 68, 6), // "period"
QT_MOC_LITERAL(8, 75, 7), // "timStop"
QT_MOC_LITERAL(9, 83, 14), // "timUpdateEvent"
QT_MOC_LITERAL(10, 98, 21), // "receiveDataFromDevice"
QT_MOC_LITERAL(11, 120, 6), // "a_data"
QT_MOC_LITERAL(12, 127, 16), // "sendDataToDevice"
QT_MOC_LITERAL(13, 144, 13), // "showRobotView"
QT_MOC_LITERAL(14, 158, 18), // "updateSlaveControl"
QT_MOC_LITERAL(15, 177, 13), // "itemConnected"
QT_MOC_LITERAL(16, 191, 7), // "a_pitem"
QT_MOC_LITERAL(17, 199, 9), // "a_strName"
QT_MOC_LITERAL(18, 209, 14), // "itemDisconnect"
QT_MOC_LITERAL(19, 224, 10) // "getCOMName"

    },
    "DeviceInterface\0send\0\0slaveListUpdated\0"
    "receiveDone\0add2Log\0timStart\0period\0"
    "timStop\0timUpdateEvent\0receiveDataFromDevice\0"
    "a_data\0sendDataToDevice\0showRobotView\0"
    "updateSlaveControl\0itemConnected\0"
    "a_pitem\0a_strName\0itemDisconnect\0"
    "getCOMName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeviceInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       3,    0,   87,    2, 0x06 /* Public */,
       4,    1,   88,    2, 0x06 /* Public */,
       5,    1,   91,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   94,    2, 0x0a /* Public */,
       8,    0,   97,    2, 0x0a /* Public */,
       9,    0,   98,    2, 0x0a /* Public */,
      10,    1,   99,    2, 0x0a /* Public */,
      12,    1,  102,    2, 0x0a /* Public */,
      13,    0,  105,    2, 0x0a /* Public */,
      14,    0,  106,    2, 0x0a /* Public */,
      15,    2,  107,    2, 0x0a /* Public */,
      18,    1,  112,    2, 0x0a /* Public */,
      19,    0,  115,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   11,
    QMetaType::Void, QMetaType::QByteArray,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::VoidStar, QMetaType::QString,   16,   17,
    QMetaType::Void, QMetaType::VoidStar,   16,
    QMetaType::QString,

       0        // eod
};

void DeviceInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->send((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->slaveListUpdated(); break;
        case 2: _t->receiveDone((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->add2Log((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->timStart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->timStop(); break;
        case 6: _t->timUpdateEvent(); break;
        case 7: _t->receiveDataFromDevice((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 8: _t->sendDataToDevice((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 9: _t->showRobotView(); break;
        case 10: _t->updateSlaveControl(); break;
        case 11: _t->itemConnected((*reinterpret_cast< void*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 12: _t->itemDisconnect((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 13: { QString _r = _t->getCOMName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeviceInterface::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceInterface::send)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeviceInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceInterface::slaveListUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DeviceInterface::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceInterface::receiveDone)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DeviceInterface::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceInterface::add2Log)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DeviceInterface::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_DeviceInterface.data,
    qt_meta_data_DeviceInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DeviceInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceInterface.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DeviceInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void DeviceInterface::send(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DeviceInterface::slaveListUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DeviceInterface::receiveDone(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DeviceInterface::add2Log(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
