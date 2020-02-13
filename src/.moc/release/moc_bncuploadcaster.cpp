/****************************************************************************
** Meta object code from reading C++ file 'bncuploadcaster.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../upload/bncuploadcaster.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bncuploadcaster.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_bncUploadCaster[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      34,   17,   16,   16, 0x05,
      74,   62,   16,   16, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_bncUploadCaster[] = {
    "bncUploadCaster\0\0msg,showOnScreen\0"
    "newMessage(QByteArray,bool)\0staID,nbyte\0"
    "newBytes(QByteArray,double)\0"
};

void bncUploadCaster::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        bncUploadCaster *_t = static_cast<bncUploadCaster *>(_o);
        switch (_id) {
        case 0: _t->newMessage((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->newBytes((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData bncUploadCaster::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject bncUploadCaster::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_bncUploadCaster,
      qt_meta_data_bncUploadCaster, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &bncUploadCaster::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *bncUploadCaster::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *bncUploadCaster::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_bncUploadCaster))
        return static_cast<void*>(const_cast< bncUploadCaster*>(this));
    return QThread::qt_metacast(_clname);
}

int bncUploadCaster::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void bncUploadCaster::newMessage(const QByteArray _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void bncUploadCaster::newBytes(QByteArray _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
