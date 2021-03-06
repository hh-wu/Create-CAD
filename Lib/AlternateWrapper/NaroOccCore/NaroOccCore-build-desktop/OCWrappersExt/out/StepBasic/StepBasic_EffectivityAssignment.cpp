// File generated by CPPExt (CPP file)
//

#include "StepBasic_EffectivityAssignment.h"
#include "../Converter.h"
#include "StepBasic_Effectivity.h"


using namespace OCNaroWrappers;

OCStepBasic_EffectivityAssignment::OCStepBasic_EffectivityAssignment(Handle(StepBasic_EffectivityAssignment)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_EffectivityAssignment(*nativeHandle);
}

OCStepBasic_EffectivityAssignment::OCStepBasic_EffectivityAssignment() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_EffectivityAssignment(new StepBasic_EffectivityAssignment());
}

 void OCStepBasic_EffectivityAssignment::Init(OCNaroWrappers::OCStepBasic_Effectivity^ aAssignedEffectivity)
{
  (*((Handle_StepBasic_EffectivityAssignment*)nativeHandle))->Init(*((Handle_StepBasic_Effectivity*)aAssignedEffectivity->Handle));
}

OCStepBasic_Effectivity^ OCStepBasic_EffectivityAssignment::AssignedEffectivity()
{
  Handle(StepBasic_Effectivity) tmp = (*((Handle_StepBasic_EffectivityAssignment*)nativeHandle))->AssignedEffectivity();
  return gcnew OCStepBasic_Effectivity(&tmp);
}

 void OCStepBasic_EffectivityAssignment::SetAssignedEffectivity(OCNaroWrappers::OCStepBasic_Effectivity^ AssignedEffectivity)
{
  (*((Handle_StepBasic_EffectivityAssignment*)nativeHandle))->SetAssignedEffectivity(*((Handle_StepBasic_Effectivity*)AssignedEffectivity->Handle));
}


