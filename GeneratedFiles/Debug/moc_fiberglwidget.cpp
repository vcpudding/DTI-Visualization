/****************************************************************************
** Meta object code from reading C++ file 'fiberglwidget.h'
**
** Created: Fri Dec 9 10:23:55 2011
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fiberglwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fiberglwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FiberGLWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      28,   15,   14,   14, 0x05,
      68,   59,   14,   14, 0x05,
      99,   97,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     131,  125,   14,   14, 0x0a,
     165,  155,   14,   14, 0x0a,
     187,  183,   14,   14, 0x0a,
     213,  125,   14,   14, 0x0a,
     237,  125,   14,   14, 0x0a,
     269,  264,   14,   14, 0x0a,
     299,  294,   14,   14, 0x0a,
     328,  322,   14,   14, 0x0a,
     355,   15,   14,   14, 0x0a,
     392,   59,   14,   14, 0x0a,
     430,  427,   14,   14, 0x0a,
     459,  454,   14,   14, 0x0a,
     492,  481,   14,   14, 0x0a,
     518,  454,   14,   14, 0x0a,
     540,  454,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FiberGLWidget[] = {
    "FiberGLWidget\0\0selectionBuf\0"
    "selectionChanged(vector<bool>)\0clusters\0"
    "clustersChanged(vector<int>)\0g\0"
    "graphUpdated(Hypergraph*)\0bShow\0"
    "setShowVolumeData(bool)\0colorMode\0"
    "setColorMode(int)\0thk\0setFiberThickness(double)\0"
    "setShowEmbeddings(bool)\0"
    "setShowClusterLabels(bool)\0bSet\0"
    "setIsColorEmbByTpl(bool)\0bAmb\0"
    "setDispEmbedType(bool)\0thres\0"
    "setEmbMinDistThres(double)\0"
    "handleSelectionChanged(vector<bool>)\0"
    "handleClustersChanged(vector<int>)\0"
    "op\0handleSetOperation(int)\0mode\0"
    "handleSetSelMode(int)\0clusterIdx\0"
    "handleAssignClusters(int)\0"
    "handleSetClrMode(int)\0handleSetDispMode(int)\0"
};

const QMetaObject FiberGLWidget::staticMetaObject = {
    { &GLWidget::staticMetaObject, qt_meta_stringdata_FiberGLWidget,
      qt_meta_data_FiberGLWidget, 0 }
};

const QMetaObject *FiberGLWidget::metaObject() const
{
    return &staticMetaObject;
}

void *FiberGLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FiberGLWidget))
        return static_cast<void*>(const_cast< FiberGLWidget*>(this));
    return GLWidget::qt_metacast(_clname);
}

int FiberGLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selectionChanged((*reinterpret_cast< const vector<bool>(*)>(_a[1]))); break;
        case 1: clustersChanged((*reinterpret_cast< const vector<int>(*)>(_a[1]))); break;
        case 2: graphUpdated((*reinterpret_cast< Hypergraph*(*)>(_a[1]))); break;
        case 3: setShowVolumeData((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: setColorMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: setFiberThickness((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: setShowEmbeddings((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: setShowClusterLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: setIsColorEmbByTpl((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: setDispEmbedType((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: setEmbMinDistThres((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: handleSelectionChanged((*reinterpret_cast< const vector<bool>(*)>(_a[1]))); break;
        case 12: handleClustersChanged((*reinterpret_cast< const vector<int>(*)>(_a[1]))); break;
        case 13: handleSetOperation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: handleSetSelMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: handleAssignClusters((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: handleSetClrMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: handleSetDispMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        }
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void FiberGLWidget::selectionChanged(const vector<bool> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FiberGLWidget::clustersChanged(const vector<int> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FiberGLWidget::graphUpdated(Hypergraph * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
