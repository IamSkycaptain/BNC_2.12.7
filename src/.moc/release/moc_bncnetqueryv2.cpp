/****************************************************************************
** Meta object code from reading C++ file 'bncnetqueryv2.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../bncnetqueryv2.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bncnetqueryv2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_bncNetQueryV2[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      32,   30,   14,   14, 0x08,
      95,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_bncNetQueryV2[] = {
    "bncNetQueryV2\0\0slotFinished()\0,\0"
    "slotProxyAuthenticationRequired(QNetworkProxy,QAuthenticator*)\0"
    "slotSslErrors(QList<QSslError>)\0"
};

void bncNetQueryV2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        bncNetQueryV2 *_t = static_cast<bncNetQueryV2 *>(_o);
        switch (_id) {
        case 0: _t->slotFinished(); break;
        case 1: _t->slotProxyAuthenticationRequired((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 2: _t->slotSslErrors((*reinterpret_cast< QList<QSslError>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData bncNetQueryV2::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject bncNetQueryV2::staticMetaObject = {
    { &bncNetQuery::staticMetaObject, qt_meta_stringdata_bncNetQueryV2,
      qt_meta_data_bncNetQueryV2, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &bncNetQueryV2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *bncNetQueryV2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *bncNetQueryV2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_bncNetQueryV2))
        return static_cast<void*>(const_cast< bncNetQueryV2*>(this));
    return bncNetQuery::qt_metacast(_clname);
}

int bncNetQueryV2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = bncNetQuery::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
