/****************************************************************************
** Meta object code from reading C++ file 'bncfigureppp.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../bncfigureppp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bncfigureppp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_bncFigurePPP[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   14,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_bncFigurePPP[] = {
    "bncFigurePPP\0\0staID,time,xx\0"
    "slotNewPosition(QByteArray,bncTime,QVector<double>)\0"
};

void bncFigurePPP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        bncFigurePPP *_t = static_cast<bncFigurePPP *>(_o);
        switch (_id) {
        case 0: _t->slotNewPosition((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< bncTime(*)>(_a[2])),(*reinterpret_cast< QVector<double>(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData bncFigurePPP::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject bncFigurePPP::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_bncFigurePPP,
      qt_meta_data_bncFigurePPP, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &bncFigurePPP::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *bncFigurePPP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *bncFigurePPP::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_bncFigurePPP))
        return static_cast<void*>(const_cast< bncFigurePPP*>(this));
    return QWidget::qt_metacast(_clname);
}

int bncFigurePPP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
