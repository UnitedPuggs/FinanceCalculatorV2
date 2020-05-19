/****************************************************************************
** Meta object code from reading C++ file 'finance_page.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../FinanceCalculatorV2/finance_page.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'finance_page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_finance_page_t {
    QByteArrayData data[13];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_finance_page_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_finance_page_t qt_meta_stringdata_finance_page = {
    {
QT_MOC_LITERAL(0, 0, 12), // "finance_page"
QT_MOC_LITERAL(1, 13, 15), // "searchPurchases"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14), // "addToPurchases"
QT_MOC_LITERAL(4, 45, 13), // "goToPurchases"
QT_MOC_LITERAL(5, 59, 16), // "refreshPurchases"
QT_MOC_LITERAL(6, 76, 14), // "contentClicked"
QT_MOC_LITERAL(7, 91, 11), // "QModelIndex"
QT_MOC_LITERAL(8, 103, 5), // "index"
QT_MOC_LITERAL(9, 109, 13), // "editPurchases"
QT_MOC_LITERAL(10, 123, 15), // "deletePurchases"
QT_MOC_LITERAL(11, 139, 15), // "accountSettings"
QT_MOC_LITERAL(12, 155, 13) // "goToPaychecks"

    },
    "finance_page\0searchPurchases\0\0"
    "addToPurchases\0goToPurchases\0"
    "refreshPurchases\0contentClicked\0"
    "QModelIndex\0index\0editPurchases\0"
    "deletePurchases\0accountSettings\0"
    "goToPaychecks"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_finance_page[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    1,   63,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,
      11,    0,   68,    2, 0x08 /* Private */,
      12,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void finance_page::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<finance_page *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchPurchases(); break;
        case 1: _t->addToPurchases(); break;
        case 2: _t->goToPurchases(); break;
        case 3: _t->refreshPurchases(); break;
        case 4: _t->contentClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->editPurchases(); break;
        case 6: _t->deletePurchases(); break;
        case 7: _t->accountSettings(); break;
        case 8: _t->goToPaychecks(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject finance_page::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_finance_page.data,
    qt_meta_data_finance_page,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *finance_page::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *finance_page::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_finance_page.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int finance_page::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
