
// This file is generated by src/Tools/generateTemaplates/templateClassPyExport.py out of the .XML file
// Every change you make here get lost at the next full rebuild!
// This File is normaly build as an include in ArcOfCirclePyImp.cpp! Its not intended to be in a project!

#include <boost/filesystem/path.hpp>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/exception.hpp>
#include <Base/PyObjectBase.h>
#include <Base/Console.h>
#include <Base/Exception.h>
#include <CXX/Objects.hxx>

using Base::streq;
using namespace Part;

/// Type structure of ArcOfCirclePy
PyTypeObject ArcOfCirclePy::Type = {
    PyObject_HEAD_INIT(&PyType_Type)
    0,                                                /*ob_size*/
    "Part.GeomArcOfCircle",     /*tp_name*/
    sizeof(ArcOfCirclePy),                       /*tp_basicsize*/
    0,                                                /*tp_itemsize*/
    /* methods */
    PyDestructor,                                     /*tp_dealloc*/
    0,                                                /*tp_print*/
    __getattr,                                        /*tp_getattr*/
    __setattr,                                        /*tp_setattr*/
    0,                                                /*tp_compare*/
    __repr,                                           /*tp_repr*/
    0,                                                /*tp_as_number*/
    0,                                                /*tp_as_sequence*/
    0,                                                /*tp_as_mapping*/
    0,                                                /*tp_hash*/
    0,                                                /*tp_call */
    0,                                                /*tp_str  */
    0,                                                /*tp_getattro*/
    0,                                                /*tp_setattro*/
    /* --- Functions to access object as input/output buffer ---------*/
    0,                                                /* tp_as_buffer */
    /* --- Flags to define presence of optional/expanded features */
    Py_TPFLAGS_HAVE_CLASS,        /*tp_flags */
    "Describes a portion of a circle",           /*tp_doc */
    0,                                                /*tp_traverse */
    0,                                                /*tp_clear */
    0,                                                /*tp_richcompare */
    0,                                                /*tp_weaklistoffset */
    0,                                                /*tp_iter */
    0,                                                /*tp_iternext */
    Part::ArcOfCirclePy::Methods,                     /*tp_methods */
    0,                                                /*tp_members */
    Part::ArcOfCirclePy::GetterSetter,                     /*tp_getset */
    &Part::GeometryCurvePy::Type,                        /*tp_base */
    0,                                                /*tp_dict */
    0,                                                /*tp_descr_get */
    0,                                                /*tp_descr_set */
    0,                                                /*tp_dictoffset */
    __PyInit,                                         /*tp_init */
    0,                                                /*tp_alloc */
    Part::ArcOfCirclePy::PyMake,/*tp_new */
    0,                                                /*tp_free   Low-level free-memory routine */
    0,                                                /*tp_is_gc  For PyObject_IS_GC */
    0,                                                /*tp_bases */
    0,                                                /*tp_mro    method resolution order */
    0,                                                /*tp_cache */
    0,                                                /*tp_subclasses */
    0,                                                /*tp_weaklist */
    0                                                 /*tp_del */
};

/// Methods structure of ArcOfCirclePy
PyMethodDef ArcOfCirclePy::Methods[] = {
    {NULL, NULL, 0, NULL}		/* Sentinel */
};



/// Attribute structure of ArcOfCirclePy
PyGetSetDef ArcOfCirclePy::GetterSetter[] = {
    {"Radius",
        (getter) staticCallback_getRadius,
        (setter) staticCallback_setRadius, 
        "The radius of the circle.",
        NULL
    },
    {"Center",
        (getter) staticCallback_getCenter,
        (setter) staticCallback_setCenter, 
        "Center of the circle.",
        NULL
    },
    {"Axis",
        (getter) staticCallback_getAxis,
        (setter) staticCallback_setAxis, 
        "The axis direction of the circle",
        NULL
    },
    {"Circle",
        (getter) staticCallback_getCircle,
        (setter) staticCallback_setCircle, 
        "The internal circle representation",
        NULL
    },
    {NULL, NULL, NULL, NULL, NULL}		/* Sentinel */
};

// Radius() callback and implementer
// PyObject*  ArcOfCirclePy::Radius(PyObject *args){};
// has to be implemented in ArcOfCirclePyImp.cpp
PyObject * ArcOfCirclePy::staticCallback_getRadius (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(static_cast<ArcOfCirclePy*>(self)->getRadius());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while reading attribute 'Radius' of object 'GeomArcOfCircle'");
        return NULL;
    }
}

int ArcOfCirclePy::staticCallback_setRadius (PyObject *self, PyObject *value, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }
    if (static_cast<PyObjectBase*>(self)->isConst()){
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a method");
        return -1;
    }

    try {
        static_cast<ArcOfCirclePy*>(self)->setRadius(Py::Float(PyNumber_Float(value),true));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while writing attribute 'Radius' of object 'GeomArcOfCircle'");
        return -1;
    }
}

// Center() callback and implementer
// PyObject*  ArcOfCirclePy::Center(PyObject *args){};
// has to be implemented in ArcOfCirclePyImp.cpp
PyObject * ArcOfCirclePy::staticCallback_getCenter (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(static_cast<ArcOfCirclePy*>(self)->getCenter());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while reading attribute 'Center' of object 'GeomArcOfCircle'");
        return NULL;
    }
}

int ArcOfCirclePy::staticCallback_setCenter (PyObject *self, PyObject *value, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }
    if (static_cast<PyObjectBase*>(self)->isConst()){
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a method");
        return -1;
    }

    try {
        static_cast<ArcOfCirclePy*>(self)->setCenter(Py::Object(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while writing attribute 'Center' of object 'GeomArcOfCircle'");
        return -1;
    }
}

// Axis() callback and implementer
// PyObject*  ArcOfCirclePy::Axis(PyObject *args){};
// has to be implemented in ArcOfCirclePyImp.cpp
PyObject * ArcOfCirclePy::staticCallback_getAxis (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(static_cast<ArcOfCirclePy*>(self)->getAxis());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while reading attribute 'Axis' of object 'GeomArcOfCircle'");
        return NULL;
    }
}

int ArcOfCirclePy::staticCallback_setAxis (PyObject *self, PyObject *value, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }
    if (static_cast<PyObjectBase*>(self)->isConst()){
        PyErr_SetString(PyExc_ReferenceError, "This object is immutable, you can not set any attribute or call a method");
        return -1;
    }

    try {
        static_cast<ArcOfCirclePy*>(self)->setAxis(Py::Object(value,false));
        return 0;
    } catch (const Py::Exception&) {
        // The exception text is already set
        return -1;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while writing attribute 'Axis' of object 'GeomArcOfCircle'");
        return -1;
    }
}

// Circle() callback and implementer
// PyObject*  ArcOfCirclePy::Circle(PyObject *args){};
// has to be implemented in ArcOfCirclePyImp.cpp
PyObject * ArcOfCirclePy::staticCallback_getCircle (PyObject *self, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return NULL;
    }

    try {
        return Py::new_reference_to(static_cast<ArcOfCirclePy*>(self)->getCircle());
    } catch (const Py::Exception&) {
        // The exception text is already set
        return NULL;
    } catch (...) {
        PyErr_SetString(Base::BaseExceptionFreeCADError, "Unknown exception while reading attribute 'Circle' of object 'GeomArcOfCircle'");
        return NULL;
    }
}

int ArcOfCirclePy::staticCallback_setCircle (PyObject *self, PyObject * /*value*/, void * /*closure*/)
{
    if (!static_cast<PyObjectBase*>(self)->isValid()){
        PyErr_SetString(PyExc_ReferenceError, "This object is already deleted most likely through closing a document. This reference is no longer valid!");
        return -1;
    }

    PyErr_SetString(PyExc_AttributeError, "Attribute 'Circle' of object 'GeomArcOfCircle' is read-only");
    return -1;
}




//--------------------------------------------------------------------------
// Constructor
//--------------------------------------------------------------------------
ArcOfCirclePy::ArcOfCirclePy(GeomArcOfCircle *pcObject, PyTypeObject *T)
    : GeometryCurvePy(static_cast<GeometryCurvePy::PointerType>(pcObject), T)
{
}


//--------------------------------------------------------------------------
// destructor
//--------------------------------------------------------------------------
ArcOfCirclePy::~ArcOfCirclePy()                                // Everything handled in parent
{
}

//--------------------------------------------------------------------------
// ArcOfCirclePy representation
//--------------------------------------------------------------------------
PyObject *ArcOfCirclePy::_repr(void)
{
    return Py_BuildValue("s", representation().c_str());
}

//--------------------------------------------------------------------------
// ArcOfCirclePy Attributes
//--------------------------------------------------------------------------
PyObject *ArcOfCirclePy::_getattr(char *attr)				// __getattr__ function: note only need to handle new state
{
    try {
        // getter method for special Attributes (e.g. dynamic ones)
        PyObject *r = getCustomAttributes(attr);
        if(r) return r;
    }
#ifndef DONT_CATCH_CXX_EXCEPTIONS 
    catch(const Base::Exception& e) // catch the FreeCAD exceptions
    {
        std::string str;
        str += "FreeCAD exception thrown (";
        str += e.what();
        str += ")";
        e.ReportException();
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(const std::exception& e) // catch other c++ exceptions
    {
        std::string str;
        str += "FC++ exception thrown (";
        str += e.what();
        str += ")";
        Base::Console().Error(str.c_str());
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return NULL;
    }
    catch(...)  // catch the rest!
    {
        PyErr_SetString(Base::BaseExceptionFreeCADError,"Unknown C++ exception");
        return NULL;
    }
#else  // DONT_CATCH_CXX_EXCEPTIONS  
    catch(const Base::Exception& e) // catch the FreeCAD exceptions
    {
        std::string str;
        str += "FreeCAD exception thrown (";
        str += e.what();
        str += ")";
        e.ReportException();
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return NULL;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return NULL;
    }
#endif  // DONT_CATCH_CXX_EXCEPTIONS

    PyObject *rvalue = Py_FindMethod(Methods, this, attr);
    if (rvalue == NULL)
    {
        PyErr_Clear();
        return GeometryCurvePy::_getattr(attr);
    }
    else
    {
        return rvalue;
    }
}

int ArcOfCirclePy::_setattr(char *attr, PyObject *value) // __setattr__ function: note only need to handle new state
{
    try {
        // setter for  special Attributes (e.g. dynamic ones)
        int r = setCustomAttributes(attr, value);
        // r = 1: handled
        // r = -1: error
        // r = 0: ignore
        if (r == 1)
            return 0;
        else if (r == -1)
            return -1;
    }
#ifndef DONT_CATCH_CXX_EXCEPTIONS 
    catch(const Base::Exception& e) // catch the FreeCAD exceptions
    {
        std::string str;
        str += "FreeCAD exception thrown (";
        str += e.what();
        str += ")";
        e.ReportException();
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return -1;
    }
    catch(const std::exception& e) // catch other c++ exceptions
    {
        std::string str;
        str += "FC++ exception thrown (";
        str += e.what();
        str += ")";
        Base::Console().Error(str.c_str());
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return -1;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return -1;
    }
    catch(...)  // catch the rest!
    {
        PyErr_SetString(Base::BaseExceptionFreeCADError,"Unknown C++ exception");
        return -1;
    }
#else  // DONT_CATCH_CXX_EXCEPTIONS  
    catch(const Base::Exception& e) // catch the FreeCAD exceptions
    {
        std::string str;
        str += "FreeCAD exception thrown (";
        str += e.what();
        str += ")";
        e.ReportException();
        PyErr_SetString(Base::BaseExceptionFreeCADError,str.c_str());
        return -1;
    }
    catch(const Py::Exception&)
    {
        // The exception text is already set
        return -1;
    }
#endif  // DONT_CATCH_CXX_EXCEPTIONS

    return GeometryCurvePy::_setattr(attr, value);
}

GeomArcOfCircle *ArcOfCirclePy::getGeomArcOfCirclePtr(void) const
{
    return static_cast<GeomArcOfCircle *>(_pcTwinPointer);
}

#if 0
/* From here on come the methods you have to implement, but NOT in this module. Implement in ArcOfCirclePyImp.cpp! This prototypes 
 * are just for convenience when you add a new method.
 */

PyObject *ArcOfCirclePy::PyMake(struct _typeobject *, PyObject *, PyObject *)  // Python wrapper
{
    // create a new instance of ArcOfCirclePy and the Twin object 
    return new ArcOfCirclePy(new GeomArcOfCircle);
}

// constructor method
int ArcOfCirclePy::PyInit(PyObject* /*args*/, PyObject* /*kwd*/)
{
    return 0;
}

// returns a string which represents the object e.g. when printed in python
std::string ArcOfCirclePy::representation(void) const
{
    return std::string("<GeomArcOfCircle object>");
}



Py::Float ArcOfCirclePy::getRadius(void) const
{
    //return Py::Float();
    throw Py::AttributeError("Not yet implemented");
}

void  ArcOfCirclePy::setRadius(Py::Float arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Object ArcOfCirclePy::getCenter(void) const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

void  ArcOfCirclePy::setCenter(Py::Object arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Object ArcOfCirclePy::getAxis(void) const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

void  ArcOfCirclePy::setAxis(Py::Object arg)
{
    throw Py::AttributeError("Not yet implemented");
}

Py::Object ArcOfCirclePy::getCircle(void) const
{
    //return Py::Object();
    throw Py::AttributeError("Not yet implemented");
}

PyObject *ArcOfCirclePy::getCustomAttributes(const char* attr) const
{
    return 0;
}

int ArcOfCirclePy::setCustomAttributes(const char* attr, PyObject *obj)
{
    return 0; 
}
#endif



