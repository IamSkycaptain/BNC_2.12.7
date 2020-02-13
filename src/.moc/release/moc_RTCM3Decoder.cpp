/****************************************************************************
** Meta object code from reading C++ file 'RTCM3Decoder.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RTCM3/RTCM3Decoder.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RTCM3Decoder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RTCM3Decoder[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      31,   14,   13,   13, 0x05,
      63,   59,   13,   13, 0x05,
      83,   59,   13,   13, 0x05,
     107,   59,   13,   13, 0x05,
     129,   59,   13,   13, 0x05,
     153,   59,   13,   13, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_RTCM3Decoder[] = {
    "RTCM3Decoder\0\0msg,showOnScreen\0"
    "newMessage(QByteArray,bool)\0eph\0"
    "newGPSEph(t_ephGPS)\0newGlonassEph(t_ephGlo)\0"
    "newSBASEph(t_ephSBAS)\0newGalileoEph(t_ephGal)\0"
    "newBDSEph(t_ephBDS)\0"
};

void RTCM3Decoder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RTCM3Decoder *_t = static_cast<RTCM3Decoder *>(_o);
        switch (_id) {
        case 0: _t->newMessage((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->newGPSEph((*reinterpret_cast< t_ephGPS(*)>(_a[1]))); break;
        case 2: _t->newGlonassEph((*reinterpret_cast< t_ephGlo(*)>(_a[1]))); break;
        case 3: _t->newSBASEph((*reinterpret_cast< t_ephSBAS(*)>(_a[1]))); break;
        case 4: _t->newGalileoEph((*reinterpret_cast< t_ephGal(*)>(_a[1]))); break;
        case 5: _t->newBDSEph((*reinterpret_cast< t_ephBDS(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RTCM3Decoder::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RTCM3Decoder::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RTCM3Decoder,
      qt_meta_data_RTCM3Decoder, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RTCM3Decoder::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RTCM3Decoder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RTCM3Decoder::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RTCM3Decoder))
        return static_cast<void*>(const_cast< RTCM3Decoder*>(this));
    if (!strcmp(_clname, "GPSDecoder"))
        return static_cast< GPSDecoder*>(const_cast< RTCM3Decoder*>(this));
    return QObject::qt_metacast(_clname);
}

int RTCM3Decoder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void RTCM3Decoder::newMessage(QByteArray _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RTCM3Decoder::newGPSEph(t_ephGPS _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RTCM3Decoder::newGlonassEph(t_ephGlo _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RTCM3Decoder::newSBASEph(t_ephSBAS _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RTCM3Decoder::newGalileoEph(t_ephGal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RTCM3Decoder::newBDSEph(t_ephBDS _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
