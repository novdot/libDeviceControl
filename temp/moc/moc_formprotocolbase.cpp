/****************************************************************************
** Meta object code from reading C++ file 'formprotocolbase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/formprotocolbase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formprotocolbase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FormProtocolBase_t {
    QByteArrayData data[20];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormProtocolBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormProtocolBase_t qt_meta_stringdata_FormProtocolBase = {
    {
QT_MOC_LITERAL(0, 0, 16), // "FormProtocolBase"
QT_MOC_LITERAL(1, 17, 21), // "receiveDataFromDevice"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 6), // "a_data"
QT_MOC_LITERAL(4, 47, 16), // "sendDataToDevice"
QT_MOC_LITERAL(5, 64, 13), // "showRobotView"
QT_MOC_LITERAL(6, 78, 18), // "updateSlaveControl"
QT_MOC_LITERAL(7, 97, 7), // "timStop"
QT_MOC_LITERAL(8, 105, 14), // "timUpdateEvent"
QT_MOC_LITERAL(9, 120, 5), // "robot"
QT_MOC_LITERAL(10, 126, 5), // "a_msg"
QT_MOC_LITERAL(11, 132, 12), // "clearRecText"
QT_MOC_LITERAL(12, 145, 8), // "sendText"
QT_MOC_LITERAL(13, 154, 14), // "doSlaveControl"
QT_MOC_LITERAL(14, 169, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(15, 186, 7), // "a_pItem"
QT_MOC_LITERAL(16, 194, 11), // "sendListAll"
QT_MOC_LITERAL(17, 206, 21), // "updateCurrentCmd2List"
QT_MOC_LITERAL(18, 228, 18), // "addCurrentCmd2List"
QT_MOC_LITERAL(19, 247, 13) // "openRobotList"

    },
    "FormProtocolBase\0receiveDataFromDevice\0"
    "\0a_data\0sendDataToDevice\0showRobotView\0"
    "updateSlaveControl\0timStop\0timUpdateEvent\0"
    "robot\0a_msg\0clearRecText\0sendText\0"
    "doSlaveControl\0QListWidgetItem*\0a_pItem\0"
    "sendListAll\0updateCurrentCmd2List\0"
    "addCurrentCmd2List\0openRobotList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormProtocolBase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x0a /* Public */,
       4,    1,   87,    2, 0x0a /* Public */,
       5,    0,   90,    2, 0x0a /* Public */,
       6,    0,   91,    2, 0x0a /* Public */,
       7,    0,   92,    2, 0x0a /* Public */,
       8,    0,   93,    2, 0x0a /* Public */,
       9,    1,   94,    2, 0x08 /* Private */,
      11,    0,   97,    2, 0x08 /* Private */,
      12,    0,   98,    2, 0x08 /* Private */,
      13,    1,   99,    2, 0x08 /* Private */,
      16,    0,  102,    2, 0x08 /* Private */,
      17,    0,  103,    2, 0x08 /* Private */,
      18,    0,  104,    2, 0x08 /* Private */,
      19,    0,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FormProtocolBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FormProtocolBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receiveDataFromDevice((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->sendDataToDevice((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->showRobotView(); break;
        case 3: _t->updateSlaveControl(); break;
        case 4: _t->timStop(); break;
        case 5: _t->timUpdateEvent(); break;
        case 6: _t->robot((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 7: _t->clearRecText(); break;
        case 8: _t->sendText(); break;
        case 9: _t->doSlaveControl((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 10: _t->sendListAll(); break;
        case 11: _t->updateCurrentCmd2List(); break;
        case 12: _t->addCurrentCmd2List(); break;
        case 13: _t->openRobotList(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FormProtocolBase::staticMetaObject = { {
    &DeviceInterface::staticMetaObject,
    qt_meta_stringdata_FormProtocolBase.data,
    qt_meta_data_FormProtocolBase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FormProtocolBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormProtocolBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FormProtocolBase.stringdata0))
        return static_cast<void*>(this);
    return DeviceInterface::qt_metacast(_clname);
}

int FormProtocolBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DeviceInterface::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
