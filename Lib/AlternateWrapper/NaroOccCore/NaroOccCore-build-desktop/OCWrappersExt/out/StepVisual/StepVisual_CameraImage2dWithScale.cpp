// File generated by CPPExt (CPP file)
//

#include "StepVisual_CameraImage2dWithScale.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCStepVisual_CameraImage2dWithScale::OCStepVisual_CameraImage2dWithScale(Handle(StepVisual_CameraImage2dWithScale)* nativeHandle) : OCStepVisual_CameraImage((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepVisual_CameraImage2dWithScale(*nativeHandle);
}

OCStepVisual_CameraImage2dWithScale::OCStepVisual_CameraImage2dWithScale() : OCStepVisual_CameraImage((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepVisual_CameraImage2dWithScale(new StepVisual_CameraImage2dWithScale());
}

