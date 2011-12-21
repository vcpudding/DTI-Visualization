/****************************************************************************
** Meta object code from reading C++ file 'glwidget.h'
**
** Created: Fri Dec 9 10:23:55 2011
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../glwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GLWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   29,    9,    9, 0x0a,
      57,   29,    9,    9, 0x0a,
      78,   29,    9,    9, 0x0a,
      99,   97,    9,    9, 0x0a,
     119,   29,    9,    9, 0x0a,
     143,  141,    9,    9, 0x0a,
     167,  161,    9,    9, 0x0a,
     186,  161,    9,    9, 0x0a,
     207,  161,    9,    9, 0x0a,
     235,  229,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GLWidget[] = {
    "GLWidget\0\0viewpointChanged()\0bShow\0"
    "setShowSagittal(bool)\0setShowCoronal(bool)\0"
    "setShowAxial(bool)\0m\0setDisplayMode(int)\0"
    "setShowSliceIdx(bool)\0v\0setViewpoint(int)\0"
    "slice\0setAxialSlice(int)\0setCoronalSlice(int)\0"
    "setSagittalSlice(int)\0x,y,z\0"
    "setAxisDirs(int,int,int)\0"
};

const QMetaObject GLWidget::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_GLWidget,
      qt_meta_data_GLWidget, 0 }
};

const QMetaObject *GLWidget::metaObject() const
{
    return &staticMetaObject;
}

void *GLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GLWidget))
        return static_cast<void*>(const_cast< GLWidget*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int GLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: viewpointChanged(); break;
        case 1: setShowSagittal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: setShowCoronal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: setShowAxial((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: setDisplayMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: setShowSliceIdx((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: setViewpoint((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: setAxialSlice((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: setCoronalSlice((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: setSagittalSlice((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: setAxisDirs((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void GLWidget::viewpointChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
