/****************************************************************************
** Meta object code from reading C++ file 'graphglwidget.h'
**
** Created: Fri Dec 9 10:23:55 2011
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../graphglwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphglwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GraphGLWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      28,   15,   14,   14, 0x05,
      68,   59,   14,   14, 0x05,
     108,   97,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     130,   15,   14,   14, 0x0a,
     169,  167,   14,   14, 0x0a,
     193,  191,   14,   14, 0x0a,
     223,  221,   14,   14, 0x0a,
     245,  191,   14,   14, 0x0a,
     271,  167,   14,   14, 0x0a,
     305,  303,   14,   14, 0x0a,
     328,   59,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GraphGLWidget[] = {
    "GraphGLWidget\0\0selectionBuf\0"
    "selectionChanged(vector<bool>)\0clusters\0"
    "clustersChanged(vector<int>)\0clusterIdx\0"
    "clustersAssigned(int)\0"
    "handleSelectionChanged(vector<bool>)\0"
    "g\0handleSetGesture(int)\0f\0"
    "handleInSelectLinkage(bool)\0m\0"
    "handleSetSelMode(int)\0handleAssignCluster(bool)\0"
    "handleGraphUpdated(Hypergraph*)\0d\0"
    "handleSetDispMode(int)\0"
    "handleClustersChanged(vector<int>)\0"
};

const QMetaObject GraphGLWidget::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_GraphGLWidget,
      qt_meta_data_GraphGLWidget, 0 }
};

const QMetaObject *GraphGLWidget::metaObject() const
{
    return &staticMetaObject;
}

void *GraphGLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GraphGLWidget))
        return static_cast<void*>(const_cast< GraphGLWidget*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int GraphGLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: selectionChanged((*reinterpret_cast< const vector<bool>(*)>(_a[1]))); break;
        case 1: clustersChanged((*reinterpret_cast< const vector<int>(*)>(_a[1]))); break;
        case 2: clustersAssigned((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: handleSelectionChanged((*reinterpret_cast< const vector<bool>(*)>(_a[1]))); break;
        case 4: handleSetGesture((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: handleInSelectLinkage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: handleSetSelMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: handleAssignCluster((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: handleGraphUpdated((*reinterpret_cast< Hypergraph*(*)>(_a[1]))); break;
        case 9: handleSetDispMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: handleClustersChanged((*reinterpret_cast< const vector<int>(*)>(_a[1]))); break;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void GraphGLWidget::selectionChanged(const vector<bool> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GraphGLWidget::clustersChanged(const vector<int> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GraphGLWidget::clustersAssigned(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
