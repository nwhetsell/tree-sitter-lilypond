#include <Python.h>

typedef struct TSLanguage TSLanguage;

TSLanguage *tree_sitter_lilypond(void);
TSLanguage *tree_sitter_lilypond_scheme(void);

static PyObject* _binding_language_lilypond(PyObject *Py_UNUSED(self), PyObject *Py_UNUSED(args)) {
    return PyCapsule_New(tree_sitter_lilypond(), "tree_sitter.Language", NULL);
}

static PyObject* _binding_language_lilypond_scheme(PyObject *Py_UNUSED(self), PyObject *Py_UNUSED(args)) {
    return PyCapsule_New(tree_sitter_lilypond_scheme(), "tree_sitter.Language", NULL);
}

static PyMethodDef methods[] = {
    {"language_lilypond", _binding_language_lilypond, METH_NOARGS,
     "Get the tree-sitter language for LilyPond."},
    {"language_lilypond_scheme", _binding_language_lilypond_scheme, METH_NOARGS,
     "Get the tree-sitter language for LilyPond Scheme."},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef module = {
    .m_base = PyModuleDef_HEAD_INIT,
    .m_name = "_binding",
    .m_doc = NULL,
    .m_size = -1,
    .m_methods = methods
};

PyMODINIT_FUNC PyInit__binding(void) {
    return PyModule_Create(&module);
}
