// This file is originally from CPython 2.7, with modifications for Pyston

#ifndef Py_ITEROBJECT_H
#define Py_ITEROBJECT_H
/* Iterators (the basic kind, over a sequence) */
#ifdef __cplusplus
extern "C" {
#endif

// Pyston change: this is no longer a static object
//PyAPI_DATA(PyTypeObject) PySeqIter_Type;

#define PySeqIter_Check(op) (Py_TYPE(op) == &PySeqIter_Type)

PyAPI_FUNC(PyObject *) PySeqIter_New(PyObject *) PYSTON_NOEXCEPT;

// Pyston change: this is no longer a static object
//PyAPI_DATA(PyTypeObject) PyCallIter_Type;

#define PyCallIter_Check(op) (Py_TYPE(op) == &PyCallIter_Type)

PyAPI_FUNC(PyObject *) PyCallIter_New(PyObject *, PyObject *) PYSTON_NOEXCEPT;
#ifdef __cplusplus
}
#endif
#endif /* !Py_ITEROBJECT_H */

