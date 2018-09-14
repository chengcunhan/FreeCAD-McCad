/***************************************************************************
 *   Copyright (c) YEAR YOUR NAME         <Your e-mail address>            *
 *                                                                         *
 *   This file is part of the FreeCAD CAx development system.              *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Library General Public           *
 *   License as published by the Free Software Foundation; either          *
 *   version 2 of the License, or (at your option) any later version.      *
 *                                                                         *
 *   This library  is distributed in the hope that it will be useful,      *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU Library General Public License for more details.                  *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this library; see the file COPYING.LIB. If not,    *
 *   write to the Free Software Foundation, Inc., 59 Temple Place,         *
 *   Suite 330, Boston, MA  02111-1307, USA                                *
 *                                                                         *
 ***************************************************************************/


#include "PreCompiled.h"
#ifndef _PreComp_
# include <Python.h>
#endif

#include <Base/Console.h>
#include <Gui/Application.h>

#include "Workbench.h"

#include <CXX/Extensions.hxx>
#include <CXX/Objects.hxx>

// use a different name to CreateCommand()
void CreatePythonTestCommands(void);


namespace PythonTestGui {
class Module : public Py::ExtensionModule<Module>
{
public:
    Module() : Py::ExtensionModule<Module>("PythonTestGui")
    {
        initialize("This module is the PythonTestGui module."); // register with Python
    }

    virtual ~Module() {}

private:
};
} // namespace PythonTestGui


/* Python entry */
PyMODINIT_FUNC initPythonTestGui()
{
    if (!Gui::Application::Instance) {
        PyErr_SetString(PyExc_ImportError, "Cannot load Gui module in console application.");
        return;
    }

    // instanciating the commands
    CreatePythonTestCommands();
    PythonTestGui::Workbench::init();

    // ADD YOUR CODE HERE
    //
    //
    new PythonTestGui::Module();
    Base::Console().Log("Loading GUI of PythonTest module... done\n");
}
