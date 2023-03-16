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

// Qt includes
#include <QDebug>

// Slicer includes
#include "qSlicertestModuleWidget.h"
#include "ui_qSlicertestModuleWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicertestModuleWidgetPrivate: public Ui_qSlicertestModuleWidget
{
public:
  qSlicertestModuleWidgetPrivate();
};

//-----------------------------------------------------------------------------
// qSlicertestModuleWidgetPrivate methods

//-----------------------------------------------------------------------------
qSlicertestModuleWidgetPrivate::qSlicertestModuleWidgetPrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicertestModuleWidget methods

//-----------------------------------------------------------------------------
qSlicertestModuleWidget::qSlicertestModuleWidget(QWidget* _parent)
  : Superclass( _parent )
  , d_ptr( new qSlicertestModuleWidgetPrivate )
{
}

//-----------------------------------------------------------------------------
qSlicertestModuleWidget::~qSlicertestModuleWidget()
{
}

//-----------------------------------------------------------------------------
void qSlicertestModuleWidget::setup()
{
  Q_D(qSlicertestModuleWidget);
  d->setupUi(this);
  this->Superclass::setup();
}