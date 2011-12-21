/****************************************************************************
** Meta object code from reading C++ file 'seedvis.h'
**
** Created: Fri Nov 25 01:01:22 2011
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../seedvis.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'seedvis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SeedVis[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      32,    8,    8,    8, 0x08,
      48,    8,    8,    8, 0x08,
      77,    8,    8,    8, 0x08,
      98,    8,    8,    8, 0x08,
     117,    8,    8,    8, 0x08,
     146,  136,    8,    8, 0x08,
     170,  136,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SeedVis[] = {
    "SeedVis\0\0fiberTrackingStarted()\0"
    "addSeedRegion()\0handleSeedSelectionChanged()\0"
    "handleRemoveRegion()\0handleSaveRegion()\0"
    "handleLoadRegion()\0seedIndex\0"
    "handleEnableRegion(int)\0"
    "handleSetRegionType(int)\0"
};

const QMetaObject SeedVis::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SeedVis,
      qt_meta_data_SeedVis, 0 }
};

const QMetaObject *SeedVis::metaObject() const
{
    return &staticMetaObject;
}

void *SeedVis::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SeedVis))
        return static_cast<void*>(const_cast< SeedVis*>(this));
    return QWidget::qt_metacast(_clname);
}

int SeedVis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: fiberTrackingStarted(); break;
        case 1: addSeedRegion(); break;
        case 2: handleSeedSelectionChanged(); break;
        case 3: handleRemoveRegion(); break;
        case 4: handleSaveRegion(); break;
        case 5: handleLoadRegion(); break;
        case 6: handleEnableRegion((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: handleSetRegionType((*reinterpret_cast< int(*)>(_a[1]))); break;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SeedVis::fiberTrackingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
