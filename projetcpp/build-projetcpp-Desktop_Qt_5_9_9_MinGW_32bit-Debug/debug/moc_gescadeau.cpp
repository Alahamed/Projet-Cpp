/****************************************************************************
** Meta object code from reading C++ file 'gescadeau.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../projetcpp/gescadeau.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gescadeau.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gescadeau_t {
    QByteArrayData data[13];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gescadeau_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gescadeau_t qt_meta_stringdata_gescadeau = {
    {
QT_MOC_LITERAL(0, 0, 9), // "gescadeau"
QT_MOC_LITERAL(1, 10, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(4, 59, 26), // "on_modifier_cadeau_clicked"
QT_MOC_LITERAL(5, 86, 27), // "on_supprimer_cadeau_clicked"
QT_MOC_LITERAL(6, 114, 18), // "on_reloadd_clicked"
QT_MOC_LITERAL(7, 133, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(8, 157, 18), // "on_print_2_clicked"
QT_MOC_LITERAL(9, 176, 13), // "on_up_clicked"
QT_MOC_LITERAL(10, 190, 22), // "on_tabcadeau_activated"
QT_MOC_LITERAL(11, 213, 5), // "index"
QT_MOC_LITERAL(12, 219, 20) // "on_tabcadeau_clicked"

    },
    "gescadeau\0on_pushButton_2_clicked\0\0"
    "on_pushButton_5_clicked\0"
    "on_modifier_cadeau_clicked\0"
    "on_supprimer_cadeau_clicked\0"
    "on_reloadd_clicked\0on_pushButton_7_clicked\0"
    "on_print_2_clicked\0on_up_clicked\0"
    "on_tabcadeau_activated\0index\0"
    "on_tabcadeau_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gescadeau[] = {

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
      10,    1,   72,    2, 0x08 /* Private */,
      12,    1,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   11,
    QMetaType::Void, QMetaType::QModelIndex,   11,

       0        // eod
};

void gescadeau::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        gescadeau *_t = static_cast<gescadeau *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_2_clicked(); break;
        case 1: _t->on_pushButton_5_clicked(); break;
        case 2: _t->on_modifier_cadeau_clicked(); break;
        case 3: _t->on_supprimer_cadeau_clicked(); break;
        case 4: _t->on_reloadd_clicked(); break;
        case 5: _t->on_pushButton_7_clicked(); break;
        case 6: _t->on_print_2_clicked(); break;
        case 7: _t->on_up_clicked(); break;
        case 8: _t->on_tabcadeau_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->on_tabcadeau_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject gescadeau::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_gescadeau.data,
      qt_meta_data_gescadeau,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *gescadeau::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gescadeau::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gescadeau.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int gescadeau::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
