/****************************************************************************
** Meta object code from reading C++ file 'bncgetthread.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../bncgetthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bncgetthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_bncGetThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   14,   13,   13, 0x05,
      65,   54,   13,   13, 0x05,
     111,   99,   13,   13, 0x05,
     155,  141,   13,   13, 0x05,
     216,  190,   13,   13, 0x05,
     294,  277,   13,   13, 0x05,
     334,  322,   13,   13, 0x05,
     371,  365,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     411,  401,   13,   13, 0x0a,
     449,   13,   13,   13, 0x08,
     471,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_bncGetThread[] = {
    "bncGetThread\0\0staID,nbyte\0"
    "newBytes(QByteArray,double)\0staID,data\0"
    "newRawData(QByteArray,QByteArray)\0"
    "staID,clate\0newLatency(QByteArray,double)\0"
    "staID,obsList\0newObs(QByteArray,QList<t_satObs>)\0"
    "staID,xx,yy,zz,hh,antType\0"
    "newAntCrd(QByteArray,double,double,double,double,QByteArray)\0"
    "msg,showOnScreen\0newMessage(QByteArray,bool)\0"
    "staID,msgID\0newRTCMMessage(QByteArray,int)\0"
    "staID\0getThreadFinished(QByteArray)\0"
    "staID,str\0slotNewNMEAstr(QByteArray,QByteArray)\0"
    "slotSerialReadyRead()\0slotNewNMEAConnection()\0"
};

void bncGetThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        bncGetThread *_t = static_cast<bncGetThread *>(_o);
        switch (_id) {
        case 0: _t->newBytes((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->newRawData((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 2: _t->newLatency((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->newObs((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QList<t_satObs>(*)>(_a[2]))); break;
        case 4: _t->newAntCrd((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< QByteArray(*)>(_a[6]))); break;
        case 5: _t->newMessage((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->newRTCMMessage((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->getThreadFinished((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 8: _t->slotNewNMEAstr((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 9: _t->slotSerialReadyRead(); break;
        case 10: _t->slotNewNMEAConnection(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData bncGetThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject bncGetThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_bncGetThread,
      qt_meta_data_bncGetThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &bncGetThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *bncGetThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *bncGetThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_bncGetThread))
        return static_cast<void*>(const_cast< bncGetThread*>(this));
    return QThread::qt_metacast(_clname);
}

int bncGetThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void bncGetThread::newBytes(QByteArray _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void bncGetThread::newRawData(QByteArray _t1, QByteArray _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void bncGetThread::newLatency(QByteArray _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void bncGetThread::newObs(QByteArray _t1, QList<t_satObs> _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void bncGetThread::newAntCrd(QByteArray _t1, double _t2, double _t3, double _t4, double _t5, QByteArray _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void bncGetThread::newMessage(QByteArray _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void bncGetThread::newRTCMMessage(QByteArray _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void bncGetThread::getThreadFinished(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
