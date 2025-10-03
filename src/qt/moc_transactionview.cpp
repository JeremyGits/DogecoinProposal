/****************************************************************************
** Meta object code from reading C++ file 'transactionview.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/transactionview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transactionview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TransactionView_t {
    QByteArrayData data[32];
    char stringdata0[371];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransactionView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransactionView_t qt_meta_stringdata_TransactionView = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TransactionView"
QT_MOC_LITERAL(1, 16, 13), // "doubleClicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 43, 7), // "message"
QT_MOC_LITERAL(5, 51, 5), // "title"
QT_MOC_LITERAL(6, 57, 5), // "style"
QT_MOC_LITERAL(7, 63, 14), // "contextualMenu"
QT_MOC_LITERAL(8, 78, 16), // "dateRangeChanged"
QT_MOC_LITERAL(9, 95, 11), // "showDetails"
QT_MOC_LITERAL(10, 107, 11), // "copyAddress"
QT_MOC_LITERAL(11, 119, 9), // "editLabel"
QT_MOC_LITERAL(12, 129, 9), // "copyLabel"
QT_MOC_LITERAL(13, 139, 10), // "copyAmount"
QT_MOC_LITERAL(14, 150, 8), // "copyTxID"
QT_MOC_LITERAL(15, 159, 9), // "copyTxHex"
QT_MOC_LITERAL(16, 169, 15), // "copyTxPlainText"
QT_MOC_LITERAL(17, 185, 19), // "openThirdPartyTxUrl"
QT_MOC_LITERAL(18, 205, 3), // "url"
QT_MOC_LITERAL(19, 209, 21), // "updateWatchOnlyColumn"
QT_MOC_LITERAL(20, 231, 14), // "fHaveWatchOnly"
QT_MOC_LITERAL(21, 246, 9), // "abandonTx"
QT_MOC_LITERAL(22, 256, 10), // "chooseDate"
QT_MOC_LITERAL(23, 267, 3), // "idx"
QT_MOC_LITERAL(24, 271, 10), // "chooseType"
QT_MOC_LITERAL(25, 282, 15), // "chooseWatchonly"
QT_MOC_LITERAL(26, 298, 13), // "changedPrefix"
QT_MOC_LITERAL(27, 312, 6), // "prefix"
QT_MOC_LITERAL(28, 319, 13), // "changedAmount"
QT_MOC_LITERAL(29, 333, 6), // "amount"
QT_MOC_LITERAL(30, 340, 13), // "exportClicked"
QT_MOC_LITERAL(31, 354, 16) // "focusTransaction"

    },
    "TransactionView\0doubleClicked\0\0"
    "QModelIndex\0message\0title\0style\0"
    "contextualMenu\0dateRangeChanged\0"
    "showDetails\0copyAddress\0editLabel\0"
    "copyLabel\0copyAmount\0copyTxID\0copyTxHex\0"
    "copyTxPlainText\0openThirdPartyTxUrl\0"
    "url\0updateWatchOnlyColumn\0fHaveWatchOnly\0"
    "abandonTx\0chooseDate\0idx\0chooseType\0"
    "chooseWatchonly\0changedPrefix\0prefix\0"
    "changedAmount\0amount\0exportClicked\0"
    "focusTransaction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransactionView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  124,    2, 0x06 /* Public */,
       4,    3,  127,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,  134,    2, 0x08 /* Private */,
       8,    0,  137,    2, 0x08 /* Private */,
       9,    0,  138,    2, 0x08 /* Private */,
      10,    0,  139,    2, 0x08 /* Private */,
      11,    0,  140,    2, 0x08 /* Private */,
      12,    0,  141,    2, 0x08 /* Private */,
      13,    0,  142,    2, 0x08 /* Private */,
      14,    0,  143,    2, 0x08 /* Private */,
      15,    0,  144,    2, 0x08 /* Private */,
      16,    0,  145,    2, 0x08 /* Private */,
      17,    1,  146,    2, 0x08 /* Private */,
      19,    1,  149,    2, 0x08 /* Private */,
      21,    0,  152,    2, 0x08 /* Private */,
      22,    1,  153,    2, 0x0a /* Public */,
      24,    1,  156,    2, 0x0a /* Public */,
      25,    1,  159,    2, 0x0a /* Public */,
      26,    1,  162,    2, 0x0a /* Public */,
      28,    1,  165,    2, 0x0a /* Public */,
      30,    0,  168,    2, 0x0a /* Public */,
      31,    1,  169,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    5,    4,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void TransactionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TransactionView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 2: _t->contextualMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 3: _t->dateRangeChanged(); break;
        case 4: _t->showDetails(); break;
        case 5: _t->copyAddress(); break;
        case 6: _t->editLabel(); break;
        case 7: _t->copyLabel(); break;
        case 8: _t->copyAmount(); break;
        case 9: _t->copyTxID(); break;
        case 10: _t->copyTxHex(); break;
        case 11: _t->copyTxPlainText(); break;
        case 12: _t->openThirdPartyTxUrl((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->updateWatchOnlyColumn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->abandonTx(); break;
        case 15: _t->chooseDate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->chooseType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->chooseWatchonly((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->changedPrefix((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->changedAmount((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->exportClicked(); break;
        case 21: _t->focusTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TransactionView::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransactionView::doubleClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TransactionView::*)(const QString & , const QString & , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransactionView::message)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TransactionView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TransactionView.data,
    qt_meta_data_TransactionView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TransactionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransactionView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TransactionView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TransactionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void TransactionView::doubleClicked(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TransactionView::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
