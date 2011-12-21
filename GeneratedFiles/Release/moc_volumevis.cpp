/****************************************************************************
** Meta object code from reading C++ file 'volumevis.h'
**
** Created: Fri Nov 25 01:01:22 2011
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../volumevis.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'volumevis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VolumeVis[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      20,   11,   10,   10, 0x0a,
      48,   11,   10,   10, 0x0a,
      97,   76,   10,   10, 0x0a,
     130,   11,   10,   10, 0x2a,
     168,  159,  155,   10, 0x0a,
     193,   10,   10,   10, 0x0a,
     223,  218,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_VolumeVis[] = {
    "VolumeVis\0\0fileList\0loadVolumeData(QStringList)\0"
    "fuseVolumeData(QStringList)\0"
    "fileList,dtiFileName\0"
    "loadDTIData(QStringList,QString)\0"
    "loadDTIData(QStringList)\0int\0fileName\0"
    "saveTensorField(QString)\0"
    "handleViewpointChanged()\0bSet\0"
    "handleSetInterpolate(bool)\0"
};

const QMetaObject VolumeVis::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VolumeVis,
      qt_meta_data_VolumeVis, 0 }
};

const QMetaObject *VolumeVis::metaObject() const
{
    return &staticMetaObject;
}

void *VolumeVis::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VolumeVis))
        return static_cast<void*>(const_cast< VolumeVis*>(this));
    return QWidget::qt_metacast(_clname);
}

int VolumeVis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: loadVolumeData((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: fuseVolumeData((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 2: loadDTIData((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: loadDTIData((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 4: { int _r = saveTensorField((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: handleViewpointChanged(); break;
        case 6: handleSetInterpolate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
