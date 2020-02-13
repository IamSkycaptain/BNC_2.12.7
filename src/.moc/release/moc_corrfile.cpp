/****************************************************************************
** Meta object code from reading C++ file 'corrfile.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../rinex/corrfile.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'corrfile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_t_corrFile[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      48,   11,   11,   11, 0x05,
      84,   11,   11,   11, 0x05,
     120,   11,   11,   11, 0x05,
     158,   11,   11,   11, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_t_corrFile[] = {
    "t_corrFile\0\0newOrbCorrections(QList<t_orbCorr>)\0"
    "newClkCorrections(QList<t_clkCorr>)\0"
    "newCodeBiases(QList<t_satCodeBias>)\0"
    "newPhaseBiases(QList<t_satPhaseBias>)\0"
    "newTec(t_vTec)\0"
};

void t_corrFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        t_corrFile *_t = static_cast<t_corrFile *>(_o);
        switch (_id) {
        case 0: _t->newOrbCorrections((*reinterpret_cast< QList<t_orbCorr>(*)>(_a[1]))); break;
        case 1: _t->newClkCorrections((*reinterpret_cast< QList<t_clkCorr>(*)>(_a[1]))); break;
        case 2: _t->newCodeBiases((*reinterpret_cast< QList<t_satCodeBias>(*)>(_a[1]))); break;
        case 3: _t->newPhaseBiases((*reinterpret_cast< QList<t_satPhaseBias>(*)>(_a[1]))); break;
        case 4: _t->newTec((*reinterpret_cast< t_vTec(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData t_corrFile::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject t_corrFile::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_t_corrFile,
      qt_meta_data_t_corrFile, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &t_corrFile::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *t_corrFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *t_corrFile::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_t_corrFile))
        return static_cast<void*>(const_cast< t_corrFile*>(this));
    return QObject::qt_metacast(_clname);
}

int t_corrFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void t_corrFile::newOrbCorrections(QList<t_orbCorr> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void t_corrFile::newClkCorrections(QList<t_clkCorr> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void t_corrFile::newCodeBiases(QList<t_satCodeBias> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void t_corrFile::newPhaseBiases(QList<t_satPhaseBias> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void t_corrFile::newTec(t_vTec _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
