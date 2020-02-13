/****************************************************************************
** Meta object code from reading C++ file 'bncmap.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../bncmap.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bncmap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_t_bncMap[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   10,    9,    9, 0x0a,
      65,    9,    9,    9, 0x08,
      77,    9,    9,    9, 0x08,
      89,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_t_bncMap[] = {
    "t_bncMap\0\0name,latDeg,lonDeg\0"
    "slotNewPoint(QString,double,double)\0"
    "slotClose()\0slotPrint()\0slotWhatsThis()\0"
};

void t_bncMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        t_bncMap *_t = static_cast<t_bncMap *>(_o);
        switch (_id) {
        case 0: _t->slotNewPoint((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->slotClose(); break;
        case 2: _t->slotPrint(); break;
        case 3: _t->slotWhatsThis(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData t_bncMap::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject t_bncMap::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_t_bncMap,
      qt_meta_data_t_bncMap, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &t_bncMap::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *t_bncMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *t_bncMap::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_t_bncMap))
        return static_cast<void*>(const_cast< t_bncMap*>(this));
    return QDialog::qt_metacast(_clname);
}

int t_bncMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
