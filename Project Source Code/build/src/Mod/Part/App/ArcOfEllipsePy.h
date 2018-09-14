
// This file is generated by src/Tools/generateTemaplates/templateClassPyExport.py out of the XML file
// Every change you make here get lost at the next full rebuild!
#ifndef PART_ARCOFELLIPSEPY_H
#define PART_ARCOFELLIPSEPY_H

#include <Mod/Part/App/GeometryCurvePy.h>
#include <Mod/Part/App/Geometry.h>
#include <string>

namespace Part
{

//===========================================================================
// ArcOfEllipsePy - Python wrapper
//===========================================================================

/** The python export class for GeomArcOfEllipse
 */
class PartExport ArcOfEllipsePy : public Part::GeometryCurvePy
{
public:
    static PyTypeObject   Type;
    static PyMethodDef    Methods[];
    static PyGetSetDef    GetterSetter[];
    virtual PyTypeObject *GetType(void) {return &Type;};

public:
    ArcOfEllipsePy(GeomArcOfEllipse *pcObject, PyTypeObject *T = &Type);
    static PyObject *PyMake(struct _typeobject *, PyObject *, PyObject *);
    virtual int PyInit(PyObject* args, PyObject*k);
    ~ArcOfEllipsePy();

    typedef GeomArcOfEllipse* PointerType ;

    virtual PyObject *_repr(void);        // the representation
    std::string representation(void) const;

    /** @name callbacks and implementers for the python object methods */
    //@{
    //@}


    /** @name callbacks and implementers for the python object attributes */
    //@{
    ///getter callback for the MajorRadius attribute
    static PyObject * staticCallback_getMajorRadius (PyObject *self, void *closure);
    /// getter for the MajorRadius attribute
    Py::Float getMajorRadius(void) const;
    /// setter callback for the MajorRadius attribute
    static int staticCallback_setMajorRadius (PyObject *self, PyObject *value, void *closure);
    /// setter for the MajorRadius attribute
    void setMajorRadius(Py::Float arg);
    ///getter callback for the MinorRadius attribute
    static PyObject * staticCallback_getMinorRadius (PyObject *self, void *closure);
    /// getter for the MinorRadius attribute
    Py::Float getMinorRadius(void) const;
    /// setter callback for the MinorRadius attribute
    static int staticCallback_setMinorRadius (PyObject *self, PyObject *value, void *closure);
    /// setter for the MinorRadius attribute
    void setMinorRadius(Py::Float arg);
    ///getter callback for the AngleXU attribute
    static PyObject * staticCallback_getAngleXU (PyObject *self, void *closure);
    /// getter for the AngleXU attribute
    Py::Float getAngleXU(void) const;
    /// setter callback for the AngleXU attribute
    static int staticCallback_setAngleXU (PyObject *self, PyObject *value, void *closure);
    /// setter for the AngleXU attribute
    void setAngleXU(Py::Float arg);
    ///getter callback for the Center attribute
    static PyObject * staticCallback_getCenter (PyObject *self, void *closure);
    /// getter for the Center attribute
    Py::Object getCenter(void) const;
    /// setter callback for the Center attribute
    static int staticCallback_setCenter (PyObject *self, PyObject *value, void *closure);
    /// setter for the Center attribute
    void setCenter(Py::Object arg);
    ///getter callback for the Axis attribute
    static PyObject * staticCallback_getAxis (PyObject *self, void *closure);
    /// getter for the Axis attribute
    Py::Object getAxis(void) const;
    /// setter callback for the Axis attribute
    static int staticCallback_setAxis (PyObject *self, PyObject *value, void *closure);
    /// setter for the Axis attribute
    void setAxis(Py::Object arg);
    ///getter callback for the Ellipse attribute
    static PyObject * staticCallback_getEllipse (PyObject *self, void *closure);
    /// getter for the Ellipse attribute
    Py::Object getEllipse(void) const;
    /// setter callback for the Ellipse attribute
    static int staticCallback_setEllipse (PyObject *self, PyObject *value, void *closure);
    // no setter method,  Ellipse is read only!
    //@}

    /// getter method for special attributes (e.g. dynamic ones)
    PyObject *getCustomAttributes(const char* attr) const;
    /// setter for special attributes (e.g. dynamic ones)
    /// Output: Success=1, Failure=-1, Ignore=0
    int setCustomAttributes(const char* attr, PyObject *obj);
    PyObject *_getattr(char *attr);              // __getattr__ function
    int _setattr(char *attr, PyObject *value);        // __setattr__ function

    /// getter for the object handled by this class
    GeomArcOfEllipse *getGeomArcOfEllipsePtr(void) const;

    /** @name additional declarations and methods for the wrapper class */
    //@{

    //@}
};

}  //namespace Part

#endif  // PART_ARCOFELLIPSEPY_H


