/****************************************************************************
** Meta object code from reading C++ file 'modifystadiumselector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "include/modifystadiumselector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modifystadiumselector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_modifyStadiumSelector_t {
    QByteArrayData data[7];
    char stringdata[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_modifyStadiumSelector_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_modifyStadiumSelector_t qt_meta_stringdata_modifyStadiumSelector = {
    {
QT_MOC_LITERAL(0, 0, 21),
QT_MOC_LITERAL(1, 22, 23),
QT_MOC_LITERAL(2, 46, 0),
QT_MOC_LITERAL(3, 47, 23),
QT_MOC_LITERAL(4, 71, 14),
QT_MOC_LITERAL(5, 86, 11),
QT_MOC_LITERAL(6, 98, 7)
    },
    "modifyStadiumSelector\0on_modifyButton_clicked\0"
    "\0on_cancelButton_clicked\0getSelectedRow\0"
    "std::string\0isValid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_modifyStadiumSelector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       6,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 5,
    QMetaType::Bool,

       0        // eod
};

void modifyStadiumSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        modifyStadiumSelector *_t = static_cast<modifyStadiumSelector *>(_o);
        switch (_id) {
        case 0: _t->on_modifyButton_clicked(); break;
        case 1: _t->on_cancelButton_clicked(); break;
        case 2: { std::string _r = _t->getSelectedRow();
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->isValid();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject modifyStadiumSelector::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_modifyStadiumSelector.data,
      qt_meta_data_modifyStadiumSelector,  qt_static_metacall, 0, 0}
};


const QMetaObject *modifyStadiumSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modifyStadiumSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_modifyStadiumSelector.stringdata))
        return static_cast<void*>(const_cast< modifyStadiumSelector*>(this));
    return QDialog::qt_metacast(_clname);
}

int modifyStadiumSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE