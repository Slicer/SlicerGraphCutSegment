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
#include "qSlicerInteractiveSegFooBarWidget.h"
#include "ui_qSlicerInteractiveSegFooBarWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_InteractiveSeg
class qSlicerInteractiveSegFooBarWidgetPrivate
  : public Ui_qSlicerInteractiveSegFooBarWidget
{
  Q_DECLARE_PUBLIC(qSlicerInteractiveSegFooBarWidget);
protected:
  qSlicerInteractiveSegFooBarWidget* const q_ptr;

public:
  qSlicerInteractiveSegFooBarWidgetPrivate(
    qSlicerInteractiveSegFooBarWidget& object);
  virtual void setupUi(qSlicerInteractiveSegFooBarWidget*);
};

// --------------------------------------------------------------------------
qSlicerInteractiveSegFooBarWidgetPrivate
::qSlicerInteractiveSegFooBarWidgetPrivate(
  qSlicerInteractiveSegFooBarWidget& object)
  : q_ptr(&object)
{
}

// --------------------------------------------------------------------------
void qSlicerInteractiveSegFooBarWidgetPrivate
::setupUi(qSlicerInteractiveSegFooBarWidget* widget)
{
  this->Ui_qSlicerInteractiveSegFooBarWidget::setupUi(widget);
}

//-----------------------------------------------------------------------------
// qSlicerInteractiveSegFooBarWidget methods

//-----------------------------------------------------------------------------
qSlicerInteractiveSegFooBarWidget
::qSlicerInteractiveSegFooBarWidget(QWidget* parentWidget)
  : Superclass( parentWidget )
  , d_ptr( new qSlicerInteractiveSegFooBarWidgetPrivate(*this) )
{
  Q_D(qSlicerInteractiveSegFooBarWidget);
  d->setupUi(this);
}

//-----------------------------------------------------------------------------
qSlicerInteractiveSegFooBarWidget
::~qSlicerInteractiveSegFooBarWidget()
{
}
