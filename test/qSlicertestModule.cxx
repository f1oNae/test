/*==============================================================================

  Program: 3D Slicer

  Portions (c) Copyright Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

==============================================================================*/

// test Logic includes
#include <vtkSlicertestLogic.h>

// test includes
#include "qSlicertestModule.h"
#include "qSlicertestModuleWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicertestModulePrivate
{
public:
  qSlicertestModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicertestModulePrivate methods

//-----------------------------------------------------------------------------
qSlicertestModulePrivate::qSlicertestModulePrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicertestModule methods

//-----------------------------------------------------------------------------
qSlicertestModule::qSlicertestModule(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicertestModulePrivate)
{
}

//-----------------------------------------------------------------------------
qSlicertestModule::~qSlicertestModule()
{
}

//-----------------------------------------------------------------------------
QString qSlicertestModule::helpText() const
{
  return "This is a loadable module that can be bundled in an extension";
}

//-----------------------------------------------------------------------------
QString qSlicertestModule::acknowledgementText() const
{
  return "This work was partially funded by NIH grant NXNNXXNNNNNN-NNXN";
}

//-----------------------------------------------------------------------------
QStringList qSlicertestModule::contributors() const
{
  QStringList moduleContributors;
  moduleContributors << QString("John Doe (AnyWare Corp.)");
  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicertestModule::icon() const
{
  return QIcon(":/Icons/test.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicertestModule::categories() const
{
  return QStringList() << "Examples";
}

//-----------------------------------------------------------------------------
QStringList qSlicertestModule::dependencies() const
{
  return QStringList();
}

//-----------------------------------------------------------------------------
void qSlicertestModule::setup()
{
  this->Superclass::setup();
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation* qSlicertestModule
::createWidgetRepresentation()
{
  return new qSlicertestModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicertestModule::createLogic()
{
  return vtkSlicertestLogic::New();
}
