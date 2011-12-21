/****************************************************************************
** Meta object code from reading C++ file 'tractvisualization.h'
**
** Created: Fri Dec 9 10:23:54 2011
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tractvisualization.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tractvisualization.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TractVisualization[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      43,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      42,   19,   19,   19, 0x08,
      60,   19,   19,   19, 0x08,
      81,   19,   19,   19, 0x08,
     103,   19,   19,   19, 0x08,
     132,  125,   19,   19, 0x08,
     169,   19,   19,   19, 0x08,
     190,   19,   19,   19, 0x08,
     204,   19,   19,   19, 0x08,
     217,   19,   19,   19, 0x08,
     237,   19,   19,   19, 0x08,
     254,   19,   19,   19, 0x08,
     273,   19,   19,   19, 0x08,
     294,  291,   19,   19, 0x08,
     313,   19,   19,   19, 0x08,
     333,   19,   19,   19, 0x08,
     355,   19,   19,   19, 0x08,
     386,   19,   19,   19, 0x08,
     413,   19,   19,   19, 0x08,
     434,   19,   19,   19, 0x08,
     461,   19,   19,   19, 0x08,
     484,   19,   19,   19, 0x08,
     512,   19,   19,   19, 0x08,
     530,   19,   19,   19, 0x08,
     548,   19,   19,   19, 0x08,
     568,   19,   19,   19, 0x08,
     594,   19,   19,   19, 0x08,
     618,   19,   19,   19, 0x08,
     642,   19,   19,   19, 0x08,
     660,   19,   19,   19, 0x08,
     679,   19,   19,   19, 0x08,
     703,   19,   19,   19, 0x08,
     724,   19,   19,   19, 0x08,
     749,   19,   19,   19, 0x08,
     769,   19,   19,   19, 0x08,
     796,   19,   19,   19, 0x08,
     822,   19,   19,   19, 0x08,
     848,   19,   19,   19, 0x08,
     865,   19,   19,   19, 0x08,
     882,   19,   19,   19, 0x08,
     901,   19,   19,   19, 0x08,
     920,   19,   19,   19, 0x08,
     937,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TractVisualization[] = {
    "TractVisualization\0\0handleOpenFiberFile()\0"
    "handleSaveFiber()\0handleSaveClusters()\0"
    "handleClusterEditor()\0handleTemplateMaker()\0"
    "subWin\0handleActivateWindow(QMdiSubWindow*)\0"
    "handleLoadNormFile()\0handleEmbed()\0"
    "handleTest()\0handleAssignLabel()\0"
    "handleTractMDS()\0handleClusterMDS()\0"
    "handleExpResult()\0op\0handleFiberOp(int)\0"
    "handleResampleFib()\0handleClusterKMeans()\0"
    "handleClusterKMeansWithPrune()\0"
    "handleSaveClusterCenters()\0"
    "handleLoadClusters()\0handleLoadClusterCenters()\0"
    "handleGetGraphKMeans()\0"
    "handleGetGraphFuzzyCMeans()\0"
    "handleSaveGraph()\0handleLoadGraph()\0"
    "handleLayoutGraph()\0handleLayoutPartitioned()\0"
    "handleSaveGraphLayout()\0handleLoadGraphLayout()\0"
    "handleShowGraph()\0handleFastLayout()\0"
    "handleClusteredLayout()\0handleLengthFilter()\0"
    "handleDownsampleRandom()\0handleCompoundWin()\0"
    "handleClusterFuzzyCMeans()\0"
    "handleLoadFuzzyClusters()\0"
    "handleSaveFuzzyClusters()\0handleFiberWin()\0"
    "demoAtlasTract()\0demoTargetTracts()\0"
    "demoLabeledTract()\0demoWholeBrain()\0"
    "demoNumOfNeighbors()\0"
};

const QMetaObject TractVisualization::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TractVisualization,
      qt_meta_data_TractVisualization, 0 }
};

const QMetaObject *TractVisualization::metaObject() const
{
    return &staticMetaObject;
}

void *TractVisualization::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TractVisualization))
        return static_cast<void*>(const_cast< TractVisualization*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int TractVisualization::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: handleOpenFiberFile(); break;
        case 1: handleSaveFiber(); break;
        case 2: handleSaveClusters(); break;
        case 3: handleClusterEditor(); break;
        case 4: handleTemplateMaker(); break;
        case 5: handleActivateWindow((*reinterpret_cast< QMdiSubWindow*(*)>(_a[1]))); break;
        case 6: handleLoadNormFile(); break;
        case 7: handleEmbed(); break;
        case 8: handleTest(); break;
        case 9: handleAssignLabel(); break;
        case 10: handleTractMDS(); break;
        case 11: handleClusterMDS(); break;
        case 12: handleExpResult(); break;
        case 13: handleFiberOp((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: handleResampleFib(); break;
        case 15: handleClusterKMeans(); break;
        case 16: handleClusterKMeansWithPrune(); break;
        case 17: handleSaveClusterCenters(); break;
        case 18: handleLoadClusters(); break;
        case 19: handleLoadClusterCenters(); break;
        case 20: handleGetGraphKMeans(); break;
        case 21: handleGetGraphFuzzyCMeans(); break;
        case 22: handleSaveGraph(); break;
        case 23: handleLoadGraph(); break;
        case 24: handleLayoutGraph(); break;
        case 25: handleLayoutPartitioned(); break;
        case 26: handleSaveGraphLayout(); break;
        case 27: handleLoadGraphLayout(); break;
        case 28: handleShowGraph(); break;
        case 29: handleFastLayout(); break;
        case 30: handleClusteredLayout(); break;
        case 31: handleLengthFilter(); break;
        case 32: handleDownsampleRandom(); break;
        case 33: handleCompoundWin(); break;
        case 34: handleClusterFuzzyCMeans(); break;
        case 35: handleLoadFuzzyClusters(); break;
        case 36: handleSaveFuzzyClusters(); break;
        case 37: handleFiberWin(); break;
        case 38: demoAtlasTract(); break;
        case 39: demoTargetTracts(); break;
        case 40: demoLabeledTract(); break;
        case 41: demoWholeBrain(); break;
        case 42: demoNumOfNeighbors(); break;
        }
        _id -= 43;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
