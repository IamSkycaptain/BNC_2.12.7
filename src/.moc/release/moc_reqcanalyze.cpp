/****************************************************************************
** Meta object code from reading C++ file 'reqcanalyze.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../rinex/reqcanalyze.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reqcanalyze.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_t_reqcAnalyze[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      33,   26,   14,   14, 0x05,
     137,  135,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     225,  170,   14,   14, 0x08,
     346,  331,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_t_reqcAnalyze[] = {
    "t_reqcAnalyze\0\0finished()\0,,,,,,\0"
    "dspSkyPlot(QString,QString,QVector<t_polarPoint*>*,QString,QVector<t_p"
    "olarPoint*>*,QByteArray,double)\0"
    ",\0dspAvailPlot(QString,QByteArray)\0"
    "fileName,title1,data1,title2,data2,scaleTitle,maxValue\0"
    "slotDspSkyPlot(QString,QString,QVector<t_polarPoint*>*,QString,QVector"
    "<t_polarPoint*>*,QByteArray,double)\0"
    "fileName,title\0slotDspAvailPlot(QString,QByteArray)\0"
};

void t_reqcAnalyze::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        t_reqcAnalyze *_t = static_cast<t_reqcAnalyze *>(_o);
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->dspSkyPlot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QVector<t_polarPoint*>*(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< QVector<t_polarPoint*>*(*)>(_a[5])),(*reinterpret_cast< const QByteArray(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7]))); break;
        case 2: _t->dspAvailPlot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 3: _t->slotDspSkyPlot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QVector<t_polarPoint*>*(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< QVector<t_polarPoint*>*(*)>(_a[5])),(*reinterpret_cast< const QByteArray(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7]))); break;
        case 4: _t->slotDspAvailPlot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData t_reqcAnalyze::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject t_reqcAnalyze::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_t_reqcAnalyze,
      qt_meta_data_t_reqcAnalyze, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &t_reqcAnalyze::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *t_reqcAnalyze::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *t_reqcAnalyze::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_t_reqcAnalyze))
        return static_cast<void*>(const_cast< t_reqcAnalyze*>(this));
    return QThread::qt_metacast(_clname);
}

int t_reqcAnalyze::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void t_reqcAnalyze::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void t_reqcAnalyze::dspSkyPlot(const QString & _t1, const QString & _t2, QVector<t_polarPoint*> * _t3, const QString & _t4, QVector<t_polarPoint*> * _t5, const QByteArray & _t6, double _t7)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void t_reqcAnalyze::dspAvailPlot(const QString & _t1, const QByteArray & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
