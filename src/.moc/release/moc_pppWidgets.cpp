/****************************************************************************
** Meta object code from reading C++ file 'pppWidgets.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pppWidgets.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pppWidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_t_pppWidgets[] = {

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
      14,   13,   13,   13, 0x08,
      34,   13,   13,   13, 0x08,
      51,   13,   13,   13, 0x08,
      68,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_t_pppWidgets[] = {
    "t_pppWidgets\0\0slotEnableWidgets()\0"
    "slotAddStation()\0slotDelStation()\0"
    "slotPPPTextChanged()\0"
};

void t_pppWidgets::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        t_pppWidgets *_t = static_cast<t_pppWidgets *>(_o);
        switch (_id) {
        case 0: _t->slotEnableWidgets(); break;
        case 1: _t->slotAddStation(); break;
        case 2: _t->slotDelStation(); break;
        case 3: _t->slotPPPTextChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData t_pppWidgets::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject t_pppWidgets::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_t_pppWidgets,
      qt_meta_data_t_pppWidgets, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &t_pppWidgets::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *t_pppWidgets::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *t_pppWidgets::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_t_pppWidgets))
        return static_cast<void*>(const_cast< t_pppWidgets*>(this));
    return QObject::qt_metacast(_clname);
}

int t_pppWidgets::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
