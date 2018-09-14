
// This file is generated by src/Tools/generateTemaplates/templateClassPyExport.py out of the XML file
// Every change you make here get lost at the next full rebuild!
#ifndef PART_GEOMETRYPY_H
#define PART_GEOMETRYPY_H

#include <Base/PyObjectBase.h>
#include <Mod/Part/App/Geometry.h>
#include <string>

namespace Part
{

//===========================================================================
// GeometryPy - Python wrapper
//===========================================================================

/** The python export class for Geometry
 */
class PartExport GeometryPy : public Base::PyObjectBase
{
public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType(void) {return &Type;};

public:
    GeometryPy(Geometry *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);
    ~GeometryPy();

    typedef Geometry* PointerType ;

    virtual PyObject *_repr(void);        // the representation
    std::string representation(void) const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    /// callback for the mirror() method
    static PyObject * staticCallback_mirror (PyObject *self, PyObject *args);
    /// implementer for the mirror() method
    PyObject*  mirror(PyObject *args);
    /// callback for the rotate() method
    static PyObject * staticCallback_rotate (PyObject *self, PyObject *args);
    /// implementer for the rotate() method
    PyObject*  rotate(PyObject *args);
    /// callback for the scale() method
    static PyObject * staticCallback_scale (PyObject *self, PyObject *args);
    /// implementer for the scale() method
    PyObject*  scale(PyObject *args);
    /// callback for the transform() method
    static PyObject * staticCallback_transform (PyObject *self, PyObject *args);
    /// implementer for the transform() method
    PyObject*  transform(PyObject *args);
    /// callback for the translate() method
    static PyObject * staticCallback_translate (PyObject *self, PyObject *args);
    /// implementer for the translate() method
    PyObject*  translate(PyObject *args);
    /// callback for the copy() method
    static PyObject * staticCallback_copy (PyObject *self, PyObject *args);
    /// implementer for the copy() method
    PyObject*  copy(PyObject *args);
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the Construction attribute
    static PyObject * staticCallback_getConstruction (PyObject *self, void *closure);
    /// getter for the Construction attribute
    Py::Boolean getConstruction(void) const;
    /// setter callback for the Construction attribute
    static int staticCallback_setConstruction (PyObject *self, PyObject *value, void *closure);
    /// setter for the Construction attribute
    void setConstruction(Py::Boolean arg);
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(char *attr);              // __getattr__ function
    int _setattr(char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    Geometry *getGeometryPtr(void) const;

    /** @name additional declarations and methods for the wrapper class */
    //@{

    //@}
};

}  //namespace Part

#endif  // PART_GEOMETRYPY_H


