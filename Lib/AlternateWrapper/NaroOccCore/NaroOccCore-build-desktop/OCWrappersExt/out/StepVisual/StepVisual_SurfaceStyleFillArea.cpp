// File generated by CPPExt (CPP file)
//

#include "StepVisual_SurfaceStyleFillArea.h"
#include "../Converter.h"
#include "StepVisual_FillAreaStyle.h"


using namespace OCNaroWrappers;

OCStepVisual_SurfaceStyleFillArea::OCStepVisual_SurfaceStyleFillArea(Handle(StepVisual_SurfaceStyleFillArea)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepVisual_SurfaceStyleFillArea(*nativeHandle);
}

OCStepVisual_SurfaceStyleFillArea::OCStepVisual_SurfaceStyleFillArea() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepVisual_SurfaceStyleFillArea(new StepVisual_SurfaceStyleFillArea());
}

 void OCStepVisual_SurfaceStyleFillArea::Init(OCNaroWrappers::OCStepVisual_FillAreaStyle^ aFillArea)
{
  (*((Handle_StepVisual_SurfaceStyleFillArea*)nativeHandle))->Init(*((Handle_StepVisual_FillAreaStyle*)aFillArea->Handle));
}

 void OCStepVisual_SurfaceStyleFillArea::SetFillArea(OCNaroWrappers::OCStepVisual_FillAreaStyle^ aFillArea)
{
  (*((Handle_StepVisual_SurfaceStyleFillArea*)nativeHandle))->SetFillArea(*((Handle_StepVisual_FillAreaStyle*)aFillArea->Handle));
}

OCStepVisual_FillAreaStyle^ OCStepVisual_SurfaceStyleFillArea::FillArea()
{
  Handle(StepVisual_FillAreaStyle) tmp = (*((Handle_StepVisual_SurfaceStyleFillArea*)nativeHandle))->FillArea();
  return gcnew OCStepVisual_FillAreaStyle(&tmp);
}

