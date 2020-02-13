/****************************************************************************
** Meta object code from reading C++ file 'bnccore.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../bnccore.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bnccore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_t_bncCore[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   11,   10,   10, 0x05,
      60,   56,   10,   10, 0x05,
      80,   56,   10,   10, 0x05,
     104,   56,   10,   10, 0x05,
     126,   56,   10,   10, 0x05,
     150,   56,   10,   10, 0x05,
     170,   10,   10,   10, 0x05,
     206,   10,   10,   10, 0x05,
     242,   10,   10,   10, 0x05,
     278,   10,   10,   10, 0x05,
     316,   10,   10,   10, 0x05,
     331,   10,   10,   10, 0x05,
     372,  358,   10,   10, 0x05,
     430,  420,   10,   10, 0x05,
     464,   10,   10,   10, 0x05,
     484,   10,   10,   10, 0x05,
     501,   10,   10,   10, 0x05,
     528,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     543,   11,   10,   10, 0x0a,
     572,   10,   10,   10, 0x0a,
     596,   10,   10,   10, 0x0a,
     624,   10,   10,   10, 0x0a,
     652,   10,   10,   10, 0x0a,
     678,   10,   10,   10, 0x0a,
     702,   10,   10,   10, 0x0a,
     742,   10,   10,   10, 0x0a,
     782,   10,   10,   10, 0x0a,
     822,   10,   10,   10, 0x0a,
     864,   10,   10,   10, 0x0a,
     883,   10,   10,   10, 0x0a,
     894,   10,   10,   10, 0x08,
     917,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_t_bncCore[] = {
    "t_bncCore\0\0msg,showOnScreen\0"
    "newMessage(QByteArray,bool)\0eph\0"
    "newGPSEph(t_ephGPS)\0newGlonassEph(t_ephGlo)\0"
    "newSBASEph(t_ephSBAS)\0newGalileoEph(t_ephGal)\0"
    "newBDSEph(t_ephBDS)\0"
    "newOrbCorrections(QList<t_orbCorr>)\0"
    "newClkCorrections(QList<t_clkCorr>)\0"
    "newCodeBiases(QList<t_satCodeBias>)\0"
    "newPhaseBiases(QList<t_satPhaseBias>)\0"
    "newTec(t_vTec)\0providerIDChanged(QString)\0"
    "staID,time,xx\0"
    "newPosition(QByteArray,bncTime,QVector<double>)\0"
    "staID,str\0newNMEAstr(QByteArray,QByteArray)\0"
    "progressRnxPPP(int)\0finishedRnxPPP()\0"
    "mapSpeedSliderChanged(int)\0stopRinexPPP()\0"
    "slotMessage(QByteArray,bool)\0"
    "slotNewGPSEph(t_ephGPS)\0"
    "slotNewGlonassEph(t_ephGlo)\0"
    "slotNewGalileoEph(t_ephGal)\0"
    "slotNewSBASEph(t_ephSBAS)\0"
    "slotNewBDSEph(t_ephBDS)\0"
    "slotNewOrbCorrections(QList<t_orbCorr>)\0"
    "slotNewClkCorrections(QList<t_clkCorr>)\0"
    "slotNewCodeBiases(QList<t_satCodeBias>)\0"
    "slotNewPhaseBiases(QList<t_satPhaseBias>)\0"
    "slotNewTec(t_vTec)\0slotQuit()\0"
    "slotNewConnectionEph()\0slotNewConnectionCorr()\0"
};

void t_bncCore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        t_bncCore *_t = static_cast<t_bncCore *>(_o);
        switch (_id) {
        case 0: _t->newMessage((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->newGPSEph((*reinterpret_cast< t_ephGPS(*)>(_a[1]))); break;
        case 2: _t->newGlonassEph((*reinterpret_cast< t_ephGlo(*)>(_a[1]))); break;
        case 3: _t->newSBASEph((*reinterpret_cast< t_ephSBAS(*)>(_a[1]))); break;
        case 4: _t->newGalileoEph((*reinterpret_cast< t_ephGal(*)>(_a[1]))); break;
        case 5: _t->newBDSEph((*reinterpret_cast< t_ephBDS(*)>(_a[1]))); break;
        case 6: _t->newOrbCorrections((*reinterpret_cast< QList<t_orbCorr>(*)>(_a[1]))); break;
        case 7: _t->newClkCorrections((*reinterpret_cast< QList<t_clkCorr>(*)>(_a[1]))); break;
        case 8: _t->newCodeBiases((*reinterpret_cast< QList<t_satCodeBias>(*)>(_a[1]))); break;
        case 9: _t->newPhaseBiases((*reinterpret_cast< QList<t_satPhaseBias>(*)>(_a[1]))); break;
        case 10: _t->newTec((*reinterpret_cast< t_vTec(*)>(_a[1]))); break;
        case 11: _t->providerIDChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->newPosition((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< bncTime(*)>(_a[2])),(*reinterpret_cast< QVector<double>(*)>(_a[3]))); break;
        case 13: _t->newNMEAstr((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 14: _t->progressRnxPPP((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->finishedRnxPPP(); break;
        case 16: _t->mapSpeedSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->stopRinexPPP(); break;
        case 18: _t->slotMessage((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 19: _t->slotNewGPSEph((*reinterpret_cast< t_ephGPS(*)>(_a[1]))); break;
        case 20: _t->slotNewGlonassEph((*reinterpret_cast< t_ephGlo(*)>(_a[1]))); break;
        case 21: _t->slotNewGalileoEph((*reinterpret_cast< t_ephGal(*)>(_a[1]))); break;
        case 22: _t->slotNewSBASEph((*reinterpret_cast< t_ephSBAS(*)>(_a[1]))); break;
        case 23: _t->slotNewBDSEph((*reinterpret_cast< t_ephBDS(*)>(_a[1]))); break;
        case 24: _t->slotNewOrbCorrections((*reinterpret_cast< QList<t_orbCorr>(*)>(_a[1]))); break;
        case 25: _t->slotNewClkCorrections((*reinterpret_cast< QList<t_clkCorr>(*)>(_a[1]))); break;
        case 26: _t->slotNewCodeBiases((*reinterpret_cast< QList<t_satCodeBias>(*)>(_a[1]))); break;
        case 27: _t->slotNewPhaseBiases((*reinterpret_cast< QList<t_satPhaseBias>(*)>(_a[1]))); break;
        case 28: _t->slotNewTec((*reinterpret_cast< t_vTec(*)>(_a[1]))); break;
        case 29: _t->slotQuit(); break;
        case 30: _t->slotNewConnectionEph(); break;
        case 31: _t->slotNewConnectionCorr(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData t_bncCore::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject t_bncCore::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_t_bncCore,
      qt_meta_data_t_bncCore, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &t_bncCore::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *t_bncCore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *t_bncCore::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_t_bncCore))
        return static_cast<void*>(const_cast< t_bncCore*>(this));
    return QObject::qt_metacast(_clname);
}

int t_bncCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void t_bncCore::newMessage(QByteArray _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void t_bncCore::newGPSEph(t_ephGPS _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void t_bncCore::newGlonassEph(t_ephGlo _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void t_bncCore::newSBASEph(t_ephSBAS _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void t_bncCore::newGalileoEph(t_ephGal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void t_bncCore::newBDSEph(t_ephBDS _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void t_bncCore::newOrbCorrections(QList<t_orbCorr> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void t_bncCore::newClkCorrections(QList<t_clkCorr> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void t_bncCore::newCodeBiases(QList<t_satCodeBias> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void t_bncCore::newPhaseBiases(QList<t_satPhaseBias> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void t_bncCore::newTec(t_vTec _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void t_bncCore::providerIDChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void t_bncCore::newPosition(QByteArray _t1, bncTime _t2, QVector<double> _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void t_bncCore::newNMEAstr(QByteArray _t1, QByteArray _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void t_bncCore::progressRnxPPP(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void t_bncCore::finishedRnxPPP()
{
    QMetaObject::activate(this, &staticMetaObject, 15, 0);
}

// SIGNAL 16
void t_bncCore::mapSpeedSliderChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void t_bncCore::stopRinexPPP()
{
    QMetaObject::activate(this, &staticMetaObject, 17, 0);
}
QT_END_MOC_NAMESPACE
