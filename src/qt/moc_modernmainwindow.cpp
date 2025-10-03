/****************************************************************************
** Meta object code from reading C++ file 'modernmainwindow.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/modernmainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modernmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModernMainWindow_t {
    QByteArrayData data[11];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModernMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModernMainWindow_t qt_meta_stringdata_ModernMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ModernMainWindow"
QT_MOC_LITERAL(1, 17, 9), // "sendCoins"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "receiveCoins"
QT_MOC_LITERAL(4, 41, 11), // "showHistory"
QT_MOC_LITERAL(5, 53, 23), // "onNavigationItemClicked"
QT_MOC_LITERAL(6, 77, 25), // "ModernNavigation::NavItem"
QT_MOC_LITERAL(7, 103, 4), // "item"
QT_MOC_LITERAL(8, 108, 11), // "onSendCoins"
QT_MOC_LITERAL(9, 120, 14), // "onReceiveCoins"
QT_MOC_LITERAL(10, 135, 13) // "onShowHistory"

    },
    "ModernMainWindow\0sendCoins\0\0receiveCoins\0"
    "showHistory\0onNavigationItemClicked\0"
    "ModernNavigation::NavItem\0item\0"
    "onSendCoins\0onReceiveCoins\0onShowHistory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModernMainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   52,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,
       9,    0,   56,    2, 0x08 /* Private */,
      10,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ModernMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModernMainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendCoins(); break;
        case 1: _t->receiveCoins(); break;
        case 2: _t->showHistory(); break;
        case 3: _t->onNavigationItemClicked((*reinterpret_cast< ModernNavigation::NavItem(*)>(_a[1]))); break;
        case 4: _t->onSendCoins(); break;
        case 5: _t->onReceiveCoins(); break;
        case 6: _t->onShowHistory(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ModernMainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModernMainWindow::sendCoins)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ModernMainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModernMainWindow::receiveCoins)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ModernMainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModernMainWindow::showHistory)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ModernMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ModernMainWindow.data,
    qt_meta_data_ModernMainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ModernMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModernMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModernMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ModernMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ModernMainWindow::sendCoins()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ModernMainWindow::receiveCoins()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ModernMainWindow::showHistory()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
