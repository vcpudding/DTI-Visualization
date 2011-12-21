/****************************************************************************
** Meta object code from reading C++ file 'fibervis.h'
**
** Created: Fri Dec 9 10:23:55 2011
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fibervis.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fibervis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FiberVis[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      30,    9,    9,    9, 0x0a,
      50,    9,    9,    9, 0x0a,
      70,    9,    9,    9, 0x0a,
      94,    9,    9,    9, 0x0a,
     116,    9,    9,    9, 0x0a,
     130,    9,    9,    9, 0x0a,
     151,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FiberVis[] = {
    "FiberVis\0\0handlePrevCluster()\0"
    "handleNextCluster()\0handleAllClusters()\0"
    "handleOpenClusterFile()\0handleOpenEmbedFile()\0"
    "handleEmbed()\0handleLoadNormFile()\0"
    "handleAssignLabel()\0"
};

const QMetaObject FiberVis::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FiberVis,
      qt_meta_data_FiberVis, 0 }
};

const QMetaObject *FiberVis::metaObject() const
{
    return &staticMetaObject;
}

void *FiberVis::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FiberVis))
        return static_cast<void*>(const_cast< FiberVis*>(this));
    return QWidget::qt_metacast(_clname);
}

int FiberVis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: handlePrevCluster(); break;
        case 1: handleNextCluster(); break;
        case 2: handleAllClusters(); break;
        case 3: handleOpenClusterFile(); break;
        case 4: handleOpenEmbedFile(); break;
        case 5: handleEmbed(); break;
        case 6: handleLoadNormFile(); break;
        case 7: handleAssignLabel(); break;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
