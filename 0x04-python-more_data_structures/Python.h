#ifndef PYTHON_H
#define PYTHON_H

/**
 * struct PyObject - Represents a Python object
 * @ob_refcnt: Reference count for garbage collection
 * @ob_type: Pointer to the object type
 */
typedef struct {
    int ob_refcnt;
    struct _typeobject *ob_type;
} PyObject;

/**
 * struct _typeobject - Represents the type of a Python object
 * @tp_name: Name of the type
 * @tp_basicsize: Basic size of the type
 * @tp_itemsize: Item size for variable-sized data types
 */
typedef struct {
    const char *tp_name;
    int tp_basicsize;
    int tp_itemsize;
} _typeobject;

/**
 * Function prototypes
 */
void Py_Initialize(void);
void Py_Finalize(void);
PyObject *Py_BuildValue(const char *format, ...);

#endif /* PYTHON_H */
