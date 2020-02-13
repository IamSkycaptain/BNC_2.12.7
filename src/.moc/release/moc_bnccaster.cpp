/****************************************************************************
** Meta object code from reading C++ file 'bnccaster.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../bnccaster.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bnccaster.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_bncCaster[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      49,   10,   10,   10, 0x05,
      87,   70,   10,   10, 0x05,
     129,  115,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     164,  115,   10,   10, 0x0a,
     214,  203,   10,   10, 0x0a,
     252,   10,   10,   10, 0x0a,
     276,   10,   10,   10, 0x08,
     298,   10,   10,   10, 0x08,
     318,   10,   10,   10, 0x08,
     345,  339,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_bncCaster[] = {
    "bncCaster\0\0mountPointsRead(QList<bncGetThread*>)\0"
    "getThreadsFinished()\0msg,showOnScreen\0"
    "newMessage(QByteArray,bool)\0staID,obsList\0"
    "newObs(QByteArray,QList<t_satObs>)\0"
    "slotNewObs(QByteArray,QList<t_satObs>)\0"
    "staID,data\0slotNewRawData(QByteArray,QByteArray)\0"
    "slotNewMiscConnection()\0slotReadMountPoints()\0"
    "slotNewConnection()\0slotNewUConnection()\0"
    "staID\0slotGetThreadFinished(QByteArray)\0"
};

void bncCaster::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        bncCaster *_t = static_cast<bncCaster *>(_o);
        switch (_id) {
        case 0: _t->mountPointsRead((*reinterpret_cast< QList<bncGetThread*>(*)>(_a[1]))); break;
        case 1: _t->getThreadsFinished(); break;
        case 2: _t->newMessage((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->newObs((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QList<t_satObs>(*)>(_a[2]))); break;
        case 4: _t->slotNewObs((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QList<t_satObs>(*)>(_a[2]))); break;
        case 5: _t->slotNewRawData((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 6: _t->slotNewMiscConnection(); break;
        case 7: _t->slotReadMountPoints(); break;
        case 8: _t->slotNewConnection(); break;
        case 9: _t->slotNewUConnection(); break;
        case 10: _t->slotGetThreadFinished((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData bncCaster::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject bncCaster::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_bncCaster,
      qt_meta_data_bncCaster, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &bncCaster::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *bncCaster::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *bncCaster::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_bncCaster))
        return static_cast<void*>(const_cast< bncCaster*>(this));
    return QObject::qt_metacast(_clname);
}

int bncCaster::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void bncCaster::mountPointsRead(QList<bncGetThread*> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void bncCaster::getThreadsFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void bncCaster::newMessage(QByteArray _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void bncCaster::newObs(QByteArray _t1, QList<t_satObs> _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
