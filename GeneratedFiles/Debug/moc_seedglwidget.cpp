/****************************************************************************
** Meta object code from reading C++ file 'seedglwidget.h'
**
** Created: Fri Dec 9 10:23:54 2011
**      by: The Qt Meta Object Compiler version 59 (Qt 4.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../seedglwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'seedglwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.4.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SeedGLWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      16,   14,   13,   13, 0x0a,
      46,   34,   13,   13, 0x0a,
      71,   13,   13,   13, 0x0a,
      80,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SeedGLWidget[] = {
    "SeedGLWidget\0\0v\0setViewpoint(int)\0"
    "index,color\0setCurrentSeed(int,uint)\0"
    "zoomIn()\0zoomOut()\0"
};

const QMetaObject SeedGLWidget::staticMetaObject = {
    { &GLWidget::staticMetaObject, qt_meta_stringdata_SeedGLWidget,
      qt_meta_data_SeedGLWidget, 0 }
};

const QMetaObject *SeedGLWidget::metaObject() const
{
    return &staticMetaObject;
}

void *SeedGLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SeedGLWidget))
        return static_cast<void*>(const_cast< SeedGLWidget*>(this));
    return GLWidget::qt_metacast(_clname);
}

int SeedGLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setViewpoint((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: setCurrentSeed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 2: zoomIn(); break;
        case 3: zoomOut(); break;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
