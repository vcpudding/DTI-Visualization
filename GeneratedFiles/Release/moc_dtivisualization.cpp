/****************************************************************************
** Meta object code from reading C++ file 'dtivisualization.h'
**
** Created: Fri Nov 25 01:01:23 2011
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dtivisualization.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dtivisualization.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DTIVisualization[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x09,
      42,   37,   17,   17, 0x09,
      82,   17,   17,   17, 0x09,
     101,   17,   17,   17, 0x09,
     117,   17,   17,   17, 0x09,
     133,   17,   17,   17, 0x09,
     152,   17,   17,   17, 0x09,
     174,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_DTIVisualization[] = {
    "DTIVisualization\0\0handleOpenFolder()\0"
    "item\0handleTreeItemClicked(QTreeWidgetItem*)\0"
    "handleLoadSeries()\0handleLoadDTI()\0"
    "handleSaveDTI()\0handleFuseSeries()\0"
    "handleFiberTracking()\0handleTest()\0"
};

const QMetaObject DTIVisualization::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DTIVisualization,
      qt_meta_data_DTIVisualization, 0 }
};

const QMetaObject *DTIVisualization::metaObject() const
{
    return &staticMetaObject;
}

void *DTIVisualization::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DTIVisualization))
        return static_cast<void*>(const_cast< DTIVisualization*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int DTIVisualization::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: handleOpenFolder(); break;
        case 1: handleTreeItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: handleLoadSeries(); break;
        case 3: handleLoadDTI(); break;
        case 4: handleSaveDTI(); break;
        case 5: handleFuseSeries(); break;
        case 6: handleFiberTracking(); break;
        case 7: handleTest(); break;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
