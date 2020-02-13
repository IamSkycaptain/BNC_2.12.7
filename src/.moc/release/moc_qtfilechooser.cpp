/****************************************************************************
** Meta object code from reading C++ file 'qtfilechooser.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qtfilechooser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtfilechooser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qtFileChooser[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   34, // properties
       1,   40, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      49,   40,   14,   14, 0x0a,
      75,   70,   14,   14, 0x0a,
      89,   14,   14,   14, 0x08,

 // properties: name, type, flags
      70,  102, 0x0009510b,
      40,  107, 0x0a095103,

 // enums: name, flags, count, data
     102, 0x0,    3,   44,

 // enum data: key, value
     115, uint(qtFileChooser::File),
     120, uint(qtFileChooser::Files),
     126, uint(qtFileChooser::Directory),

       0        // eod
};

static const char qt_meta_stringdata_qtFileChooser[] = {
    "qtFileChooser\0\0fileNameChanged(QString)\0"
    "fileName\0setFileName(QString)\0mode\0"
    "setMode(Mode)\0chooseFile()\0Mode\0QString\0"
    "File\0Files\0Directory\0"
};

void qtFileChooser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        qtFileChooser *_t = static_cast<qtFileChooser *>(_o);
        switch (_id) {
        case 0: _t->fileNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setFileName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setMode((*reinterpret_cast< Mode(*)>(_a[1]))); break;
        case 3: _t->chooseFile(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qtFileChooser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qtFileChooser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_qtFileChooser,
      qt_meta_data_qtFileChooser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qtFileChooser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qtFileChooser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qtFileChooser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qtFileChooser))
        return static_cast<void*>(const_cast< qtFileChooser*>(this));
    return QWidget::qt_metacast(_clname);
}

int qtFileChooser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Mode*>(_v) = mode(); break;
        case 1: *reinterpret_cast< QString*>(_v) = fileName(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setMode(*reinterpret_cast< Mode*>(_v)); break;
        case 1: setFileName(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void qtFileChooser::fileNameChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
