/****************************************************************************
** Meta object code from reading C++ file 'modernoverviewpage.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/modernoverviewpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modernoverviewpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModernOverviewPage_t {
    QByteArrayData data[13];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModernOverviewPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModernOverviewPage_t qt_meta_stringdata_ModernOverviewPage = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ModernOverviewPage"
QT_MOC_LITERAL(1, 19, 9), // "sendCoins"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "receiveCoins"
QT_MOC_LITERAL(4, 43, 11), // "showHistory"
QT_MOC_LITERAL(5, 55, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(6, 73, 13), // "onSendClicked"
QT_MOC_LITERAL(7, 87, 16), // "onReceiveClicked"
QT_MOC_LITERAL(8, 104, 16), // "onHistoryClicked"
QT_MOC_LITERAL(9, 121, 16), // "onRefreshClicked"
QT_MOC_LITERAL(10, 138, 21), // "updateTransactionList"
QT_MOC_LITERAL(11, 160, 20), // "updateNetworkDisplay"
QT_MOC_LITERAL(12, 181, 14) // "updateBalances"

    },
    "ModernOverviewPage\0sendCoins\0\0"
    "receiveCoins\0showHistory\0updateDisplayUnit\0"
    "onSendClicked\0onReceiveClicked\0"
    "onHistoryClicked\0onRefreshClicked\0"
    "updateTransactionList\0updateNetworkDisplay\0"
    "updateBalances"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModernOverviewPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ModernOverviewPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModernOverviewPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendCoins(); break;
        case 1: _t->receiveCoins(); break;
        case 2: _t->showHistory(); break;
        case 3: _t->updateDisplayUnit(); break;
        case 4: _t->onSendClicked(); break;
        case 5: _t->onReceiveClicked(); break;
        case 6: _t->onHistoryClicked(); break;
        case 7: _t->onRefreshClicked(); break;
        case 8: _t->updateTransactionList(); break;
        case 9: _t->updateNetworkDisplay(); break;
        case 10: _t->updateBalances(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ModernOverviewPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModernOverviewPage::sendCoins)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ModernOverviewPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModernOverviewPage::receiveCoins)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ModernOverviewPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModernOverviewPage::showHistory)) {
                *result = 2;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ModernOverviewPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ModernOverviewPage.data,
    qt_meta_data_ModernOverviewPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ModernOverviewPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModernOverviewPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModernOverviewPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ModernOverviewPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ModernOverviewPage::sendCoins()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ModernOverviewPage::receiveCoins()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ModernOverviewPage::showHistory()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
