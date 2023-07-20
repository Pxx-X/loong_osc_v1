/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../loong_osc/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Worker_t {
    QByteArrayData data[6];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Worker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Worker_t qt_meta_stringdata_Worker = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Worker"
QT_MOC_LITERAL(1, 7, 11), // "resultReady"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 6), // "result"
QT_MOC_LITERAL(4, 27, 7), // "doWork1"
QT_MOC_LITERAL(5, 35, 9) // "parameter"

    },
    "Worker\0resultReady\0\0result\0doWork1\0"
    "parameter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Worker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void Worker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Worker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resultReady((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->doWork1((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Worker::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Worker::resultReady)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Worker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Worker.data,
    qt_meta_data_Worker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Worker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Worker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Worker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Worker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Worker::resultReady(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[25];
    char stringdata0[499];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "startWork1"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "timerTimeOut"
QT_MOC_LITERAL(4, 36, 13), // "handleResults"
QT_MOC_LITERAL(5, 50, 23), // "on_volt_mag_add_clicked"
QT_MOC_LITERAL(6, 74, 23), // "on_volt_mag_sub_clicked"
QT_MOC_LITERAL(7, 98, 26), // "on_volt_offset_add_clicked"
QT_MOC_LITERAL(8, 125, 25), // "on_volt_mag_sub_2_clicked"
QT_MOC_LITERAL(9, 151, 26), // "on_time_offset_add_clicked"
QT_MOC_LITERAL(10, 178, 26), // "on_time_offset_sub_clicked"
QT_MOC_LITERAL(11, 205, 20), // "on_testopenT_clicked"
QT_MOC_LITERAL(12, 226, 21), // "on_testcloseT_clicked"
QT_MOC_LITERAL(13, 248, 23), // "on_time_mag_add_clicked"
QT_MOC_LITERAL(14, 272, 23), // "on_time_mag_sub_clicked"
QT_MOC_LITERAL(15, 296, 22), // "on_trigger_add_clicked"
QT_MOC_LITERAL(16, 319, 22), // "on_trigger_sub_clicked"
QT_MOC_LITERAL(17, 342, 17), // "on_Cursor_clicked"
QT_MOC_LITERAL(18, 360, 21), // "on_cursor_add_clicked"
QT_MOC_LITERAL(19, 382, 21), // "on_cursor_sub_clicked"
QT_MOC_LITERAL(20, 404, 21), // "on_cursor_add_pressed"
QT_MOC_LITERAL(21, 426, 21), // "on_cursor_sub_pressed"
QT_MOC_LITERAL(22, 448, 15), // "on_save_clicked"
QT_MOC_LITERAL(23, 464, 15), // "on_load_clicked"
QT_MOC_LITERAL(24, 480, 18) // "on_trigger_clicked"

    },
    "MainWindow\0startWork1\0\0timerTimeOut\0"
    "handleResults\0on_volt_mag_add_clicked\0"
    "on_volt_mag_sub_clicked\0"
    "on_volt_offset_add_clicked\0"
    "on_volt_mag_sub_2_clicked\0"
    "on_time_offset_add_clicked\0"
    "on_time_offset_sub_clicked\0"
    "on_testopenT_clicked\0on_testcloseT_clicked\0"
    "on_time_mag_add_clicked\0on_time_mag_sub_clicked\0"
    "on_trigger_add_clicked\0on_trigger_sub_clicked\0"
    "on_Cursor_clicked\0on_cursor_add_clicked\0"
    "on_cursor_sub_clicked\0on_cursor_add_pressed\0"
    "on_cursor_sub_pressed\0on_save_clicked\0"
    "on_load_clicked\0on_trigger_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  129,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  132,    2, 0x08 /* Private */,
       4,    1,  133,    2, 0x08 /* Private */,
       5,    0,  136,    2, 0x08 /* Private */,
       6,    0,  137,    2, 0x08 /* Private */,
       7,    0,  138,    2, 0x08 /* Private */,
       8,    0,  139,    2, 0x08 /* Private */,
       9,    0,  140,    2, 0x08 /* Private */,
      10,    0,  141,    2, 0x08 /* Private */,
      11,    0,  142,    2, 0x08 /* Private */,
      12,    0,  143,    2, 0x08 /* Private */,
      13,    0,  144,    2, 0x08 /* Private */,
      14,    0,  145,    2, 0x08 /* Private */,
      15,    0,  146,    2, 0x08 /* Private */,
      16,    0,  147,    2, 0x08 /* Private */,
      17,    0,  148,    2, 0x08 /* Private */,
      18,    0,  149,    2, 0x08 /* Private */,
      19,    0,  150,    2, 0x08 /* Private */,
      20,    0,  151,    2, 0x08 /* Private */,
      21,    0,  152,    2, 0x08 /* Private */,
      22,    0,  153,    2, 0x08 /* Private */,
      23,    0,  154,    2, 0x08 /* Private */,
      24,    0,  155,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startWork1((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->timerTimeOut(); break;
        case 2: _t->handleResults((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_volt_mag_add_clicked(); break;
        case 4: _t->on_volt_mag_sub_clicked(); break;
        case 5: _t->on_volt_offset_add_clicked(); break;
        case 6: _t->on_volt_mag_sub_2_clicked(); break;
        case 7: _t->on_time_offset_add_clicked(); break;
        case 8: _t->on_time_offset_sub_clicked(); break;
        case 9: _t->on_testopenT_clicked(); break;
        case 10: _t->on_testcloseT_clicked(); break;
        case 11: _t->on_time_mag_add_clicked(); break;
        case 12: _t->on_time_mag_sub_clicked(); break;
        case 13: _t->on_trigger_add_clicked(); break;
        case 14: _t->on_trigger_sub_clicked(); break;
        case 15: _t->on_Cursor_clicked(); break;
        case 16: _t->on_cursor_add_clicked(); break;
        case 17: _t->on_cursor_sub_clicked(); break;
        case 18: _t->on_cursor_add_pressed(); break;
        case 19: _t->on_cursor_sub_pressed(); break;
        case 20: _t->on_save_clicked(); break;
        case 21: _t->on_load_clicked(); break;
        case 22: _t->on_trigger_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::startWork1)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::startWork1(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
