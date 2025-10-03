/****************************************************************************
** Meta object code from reading C++ file 'themeswitcher.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/themeswitcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'themeswitcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ThemeSwitcher_t {
    QByteArrayData data[10];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ThemeSwitcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ThemeSwitcher_t qt_meta_stringdata_ThemeSwitcher = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ThemeSwitcher"
QT_MOC_LITERAL(1, 14, 12), // "themeChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "onThemeChanged"
QT_MOC_LITERAL(4, 43, 16), // "onCustomizeTheme"
QT_MOC_LITERAL(5, 60, 12), // "onResetTheme"
QT_MOC_LITERAL(6, 73, 14), // "onColorChanged"
QT_MOC_LITERAL(7, 88, 17), // "onFontSizeChanged"
QT_MOC_LITERAL(8, 106, 19), // "onFontFamilyChanged"
QT_MOC_LITERAL(9, 126, 14) // "onPreviewTheme"

    },
    "ThemeSwitcher\0themeChanged\0\0onThemeChanged\0"
    "onCustomizeTheme\0onResetTheme\0"
    "onColorChanged\0onFontSizeChanged\0"
    "onFontFamilyChanged\0onPreviewTheme"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ThemeSwitcher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ThemeSwitcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ThemeSwitcher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->themeChanged(); break;
        case 1: _t->onThemeChanged(); break;
        case 2: _t->onCustomizeTheme(); break;
        case 3: _t->onResetTheme(); break;
        case 4: _t->onColorChanged(); break;
        case 5: _t->onFontSizeChanged(); break;
        case 6: _t->onFontFamilyChanged(); break;
        case 7: _t->onPreviewTheme(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ThemeSwitcher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThemeSwitcher::themeChanged)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ThemeSwitcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ThemeSwitcher.data,
    qt_meta_data_ThemeSwitcher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ThemeSwitcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThemeSwitcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ThemeSwitcher.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ThemeSwitcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ThemeSwitcher::themeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
