/*==============================================================================

  Program: 3D Slicer

  Copyright (c) Kitware Inc.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Jean-Christophe Fillion-Robin, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

// FooBar Widgets includes
#include "qSlicertestFooBarWidget.h"
#include "ui_qSlicertestFooBarWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_test
class qSlicertestFooBarWidgetPrivate
  : public Ui_qSlicertestFooBarWidget
{
  Q_DECLARE_PUBLIC(qSlicertestFooBarWidget);
protected:
  qSlicertestFooBarWidget* const q_ptr;

public:
  qSlicertestFooBarWidgetPrivate(
    qSlicertestFooBarWidget& object);
  virtual void setupUi(qSlicertestFooBarWidget*);
};

// --------------------------------------------------------------------------
qSlicertestFooBarWidgetPrivate
::qSlicertestFooBarWidgetPrivate(
  qSlicertestFooBarWidget& object)
  : q_ptr(&object)
{
}

// --------------------------------------------------------------------------
void qSlicertestFooBarWidgetPrivate
::setupUi(qSlicertestFooBarWidget* widget)
{
  this->Ui_qSlicertestFooBarWidget::setupUi(widget);
}

//-----------------------------------------------------------------------------
// qSlicertestFooBarWidget methods

//-----------------------------------------------------------------------------
qSlicertestFooBarWidget
::qSlicertestFooBarWidget(QWidget* parentWidget)
  : Superclass( parentWidget )
  , d_ptr( new qSlicertestFooBarWidgetPrivate(*this) )
{
  Q_D(qSlicertestFooBarWidget);
  d->setupUi(this);
}

//-----------------------------------------------------------------------------
qSlicertestFooBarWidget
::~qSlicertestFooBarWidget()
{
}
