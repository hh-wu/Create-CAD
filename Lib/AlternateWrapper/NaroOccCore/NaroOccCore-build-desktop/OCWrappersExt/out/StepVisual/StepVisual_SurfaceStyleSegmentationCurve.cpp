// File generated by CPPExt (CPP file)
//

#include "StepVisual_SurfaceStyleSegmentationCurve.h"
#include "../Converter.h"
#include "StepVisual_CurveStyle.h"


using namespace OCNaroWrappers;

OCStepVisual_SurfaceStyleSegmentationCurve::OCStepVisual_SurfaceStyleSegmentationCurve(Handle(StepVisual_SurfaceStyleSegmentationCurve)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepVisual_SurfaceStyleSegmentationCurve(*nativeHandle);
}

OCStepVisual_SurfaceStyleSegmentationCurve::OCStepVisual_SurfaceStyleSegmentationCurve() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepVisual_SurfaceStyleSegmentationCurve(new StepVisual_SurfaceStyleSegmentationCurve());
}

 void OCStepVisual_SurfaceStyleSegmentationCurve::Init(OCNaroWrappers::OCStepVisual_CurveStyle^ aStyleOfSegmentationCurve)
{
  (*((Handle_StepVisual_SurfaceStyleSegmentationCurve*)nativeHandle))->Init(*((Handle_StepVisual_CurveStyle*)aStyleOfSegmentationCurve->Handle));
}

 void OCStepVisual_SurfaceStyleSegmentationCurve::SetStyleOfSegmentationCurve(OCNaroWrappers::OCStepVisual_CurveStyle^ aStyleOfSegmentationCurve)
{
  (*((Handle_StepVisual_SurfaceStyleSegmentationCurve*)nativeHandle))->SetStyleOfSegmentationCurve(*((Handle_StepVisual_CurveStyle*)aStyleOfSegmentationCurve->Handle));
}

OCStepVisual_CurveStyle^ OCStepVisual_SurfaceStyleSegmentationCurve::StyleOfSegmentationCurve()
{
  Handle(StepVisual_CurveStyle) tmp = (*((Handle_StepVisual_SurfaceStyleSegmentationCurve*)nativeHandle))->StyleOfSegmentationCurve();
  return gcnew OCStepVisual_CurveStyle(&tmp);
}


