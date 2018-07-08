/****************************************************************************
** Meta object code from reading C++ file 'RankList.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RankList.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RankList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RankList_t {
    QByteArrayData data[12];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RankList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RankList_t qt_meta_stringdata_RankList = {
    {
QT_MOC_LITERAL(0, 0, 8), // "RankList"
QT_MOC_LITERAL(1, 9, 6), // "click1"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 6), // "click2"
QT_MOC_LITERAL(4, 24, 6), // "click3"
QT_MOC_LITERAL(5, 31, 6), // "click4"
QT_MOC_LITERAL(6, 38, 6), // "click5"
QT_MOC_LITERAL(7, 45, 6), // "click6"
QT_MOC_LITERAL(8, 52, 6), // "click7"
QT_MOC_LITERAL(9, 59, 6), // "click8"
QT_MOC_LITERAL(10, 66, 6), // "click9"
QT_MOC_LITERAL(11, 73, 7) // "click10"

    },
    "RankList\0click1\0\0click2\0click3\0click4\0"
    "click5\0click6\0click7\0click8\0click9\0"
    "click10"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RankList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
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

void RankList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RankList *_t = static_cast<RankList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->click1(); break;
        case 1: _t->click2(); break;
        case 2: _t->click3(); break;
        case 3: _t->click4(); break;
        case 4: _t->click5(); break;
        case 5: _t->click6(); break;
        case 6: _t->click7(); break;
        case 7: _t->click8(); break;
        case 8: _t->click9(); break;
        case 9: _t->click10(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject RankList::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RankList.data,
      qt_meta_data_RankList,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RankList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RankList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RankList.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int RankList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
