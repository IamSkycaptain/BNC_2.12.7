/****************************************************************************
** Meta object code from reading C++ file 'graphwin.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../rinex/graphwin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphwin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_t_graphWin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      24,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_t_graphWin[] = {
    "t_graphWin\0\0slotClose()\0slotPrint()\0"
};

void t_graphWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        t_graphWin *_t = static_cast<t_graphWin *>(_o);
        switch (_id) {
        case 0: _t->slotClose(); break;
        case 1: _t->slotPrint(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData t_graphWin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject t_graphWin::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_t_graphWin,
      qt_meta_data_t_graphWin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &t_graphWin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *t_graphWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *t_graphWin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_t_graphWin))
        return static_cast<void*>(const_cast< t_graphWin*>(this));
    return QDialog::qt_metacast(_clname);
}

int t_graphWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
