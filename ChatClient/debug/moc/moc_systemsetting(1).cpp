/****************************************************************************
** Meta object code from reading C++ file 'systemsetting.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../uipage/systemsetting.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemsetting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SystemSetting_t {
    QByteArrayData data[7];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemSetting_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemSetting_t qt_meta_stringdata_SystemSetting = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SystemSetting"
QT_MOC_LITERAL(1, 14, 12), // "signalRotate"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 25), // "on_btnSaveSetting_clicked"
QT_MOC_LITERAL(4, 54, 21), // "on_toolButton_clicked"
QT_MOC_LITERAL(5, 76, 25), // "on_toolBtnLeftClr_clicked"
QT_MOC_LITERAL(6, 102, 21) // "on_toolBtnClr_clicked"

    },
    "SystemSetting\0signalRotate\0\0"
    "on_btnSaveSetting_clicked\0"
    "on_toolButton_clicked\0on_toolBtnLeftClr_clicked\0"
    "on_toolBtnClr_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemSetting[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SystemSetting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SystemSetting *_t = static_cast<SystemSetting *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalRotate(); break;
        case 1: _t->on_btnSaveSetting_clicked(); break;
        case 2: _t->on_toolButton_clicked(); break;
        case 3: _t->on_toolBtnLeftClr_clicked(); break;
        case 4: _t->on_toolBtnClr_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SystemSetting::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemSetting::signalRotate)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SystemSetting::staticMetaObject = {
    { &CustomDialog::staticMetaObject, qt_meta_stringdata_SystemSetting.data,
      qt_meta_data_SystemSetting,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SystemSetting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemSetting::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemSetting.stringdata0))
        return static_cast<void*>(this);
    return CustomDialog::qt_metacast(_clname);
}

int SystemSetting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CustomDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SystemSetting::signalRotate()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
