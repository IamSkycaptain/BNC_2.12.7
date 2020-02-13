/****************************************************************************
** Meta object code from reading C++ file 'bnccomb.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../combination/bnccomb.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bnccomb.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_bncComb[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,    9,    8,    8, 0x05,
      54,    8,    8,    8, 0x05,
      90,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
     137,  126,    8,    8, 0x0a,
     183,  168,    8,    8, 0x0a,
     238,  223,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_bncComb[] = {
    "bncComb\0\0msg,showOnScreen\0"
    "newMessage(QByteArray,bool)\0"
    "newOrbCorrections(QList<t_orbCorr>)\0"
    "newClkCorrections(QList<t_clkCorr>)\0"
    "mountPoint\0slotProviderIDChanged(QString)\0"
    "orbCorrections\0slotNewOrbCorrections(QList<t_orbCorr>)\0"
    "clkCorrections\0slotNewClkCorrections(QList<t_clkCorr>)\0"
};

void bncComb::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        bncComb *_t = static_cast<bncComb *>(_o);
        switch (_id) {
        case 0: _t->newMessage((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->newOrbCorrections((*reinterpret_cast< QList<t_orbCorr>(*)>(_a[1]))); break;
        case 2: _t->newClkCorrections((*reinterpret_cast< QList<t_clkCorr>(*)>(_a[1]))); break;
        case 3: _t->slotProviderIDChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->slotNewOrbCorrections((*reinterpret_cast< QList<t_orbCorr>(*)>(_a[1]))); break;
        case 5: _t->slotNewClkCorrections((*reinterpret_cast< QList<t_clkCorr>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData bncComb::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject bncComb::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_bncComb,
      qt_meta_data_bncComb, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &bncComb::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *bncComb::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *bncComb::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_bncComb))
        return static_cast<void*>(const_cast< bncComb*>(this));
    return QObject::qt_metacast(_clname);
}

int bncComb::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void bncComb::newMessage(QByteArray _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void bncComb::newOrbCorrections(QList<t_orbCorr> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void bncComb::newClkCorrections(QList<t_clkCorr> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
