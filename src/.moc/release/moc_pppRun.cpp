/****************************************************************************
** Meta object code from reading C++ file 'pppRun.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pppRun.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pppRun.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BNC_PPP__t_pppRun[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      36,   19,   18,   18, 0x05,
      78,   64,   18,   18, 0x05,
     136,  126,   18,   18, 0x05,
     170,   18,   18,   18, 0x05,
     190,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     207,   18,   18,   18, 0x0a,
     231,   18,   18,   18, 0x0a,
     259,   18,   18,   18, 0x0a,
     287,   18,   18,   18, 0x0a,
     311,   18,   18,   18, 0x0a,
     338,  330,   18,   18, 0x0a,
     386,  378,   18,   18, 0x0a,
     437,  426,   18,   18, 0x0a,
     489,  477,   18,   18, 0x0a,
     545,  531,   18,   18, 0x0a,
     590,  584,   18,   18, 0x0a,
     608,   18,   18,   18, 0x0a,
     637,  626,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BNC_PPP__t_pppRun[] = {
    "BNC_PPP::t_pppRun\0\0msg,showOnScreen\0"
    "newMessage(QByteArray,bool)\0staID,time,xx\0"
    "newPosition(QByteArray,bncTime,QVector<double>)\0"
    "staID,str\0newNMEAstr(QByteArray,QByteArray)\0"
    "progressRnxPPP(int)\0finishedRnxPPP()\0"
    "slotNewGPSEph(t_ephGPS)\0"
    "slotNewGlonassEph(t_ephGlo)\0"
    "slotNewGalileoEph(t_ephGal)\0"
    "slotNewBDSEph(t_ephBDS)\0slotNewTec(t_vTec)\0"
    "orbCorr\0slotNewOrbCorrections(QList<t_orbCorr>)\0"
    "clkCorr\0slotNewClkCorrections(QList<t_clkCorr>)\0"
    "codeBiases\0slotNewCodeBiases(QList<t_satCodeBias>)\0"
    "phaseBiases\0slotNewPhaseBiases(QList<t_satPhaseBias>)\0"
    "staID,obsList\0slotNewObs(QByteArray,QList<t_satObs>)\0"
    "speed\0slotSetSpeed(int)\0slotSetStopFlag()\0"
    "mountPoint\0slotProviderIDChanged(QString)\0"
};

void BNC_PPP::t_pppRun::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        t_pppRun *_t = static_cast<t_pppRun *>(_o);
        switch (_id) {
        case 0: _t->newMessage((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->newPosition((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< bncTime(*)>(_a[2])),(*reinterpret_cast< QVector<double>(*)>(_a[3]))); break;
        case 2: _t->newNMEAstr((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 3: _t->progressRnxPPP((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->finishedRnxPPP(); break;
        case 5: _t->slotNewGPSEph((*reinterpret_cast< t_ephGPS(*)>(_a[1]))); break;
        case 6: _t->slotNewGlonassEph((*reinterpret_cast< t_ephGlo(*)>(_a[1]))); break;
        case 7: _t->slotNewGalileoEph((*reinterpret_cast< t_ephGal(*)>(_a[1]))); break;
        case 8: _t->slotNewBDSEph((*reinterpret_cast< t_ephBDS(*)>(_a[1]))); break;
        case 9: _t->slotNewTec((*reinterpret_cast< t_vTec(*)>(_a[1]))); break;
        case 10: _t->slotNewOrbCorrections((*reinterpret_cast< QList<t_orbCorr>(*)>(_a[1]))); break;
        case 11: _t->slotNewClkCorrections((*reinterpret_cast< QList<t_clkCorr>(*)>(_a[1]))); break;
        case 12: _t->slotNewCodeBiases((*reinterpret_cast< QList<t_satCodeBias>(*)>(_a[1]))); break;
        case 13: _t->slotNewPhaseBiases((*reinterpret_cast< QList<t_satPhaseBias>(*)>(_a[1]))); break;
        case 14: _t->slotNewObs((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QList<t_satObs>(*)>(_a[2]))); break;
        case 15: _t->slotSetSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->slotSetStopFlag(); break;
        case 17: _t->slotProviderIDChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BNC_PPP::t_pppRun::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BNC_PPP::t_pppRun::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BNC_PPP__t_pppRun,
      qt_meta_data_BNC_PPP__t_pppRun, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BNC_PPP::t_pppRun::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BNC_PPP::t_pppRun::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BNC_PPP::t_pppRun::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BNC_PPP__t_pppRun))
        return static_cast<void*>(const_cast< t_pppRun*>(this));
    return QObject::qt_metacast(_clname);
}

int BNC_PPP::t_pppRun::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void BNC_PPP::t_pppRun::newMessage(QByteArray _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BNC_PPP::t_pppRun::newPosition(QByteArray _t1, bncTime _t2, QVector<double> _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BNC_PPP::t_pppRun::newNMEAstr(QByteArray _t1, QByteArray _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BNC_PPP::t_pppRun::progressRnxPPP(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void BNC_PPP::t_pppRun::finishedRnxPPP()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
