// File generated by CPPExt (CPP file)
//

#include "StepBasic_MassUnit.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCStepBasic_MassUnit::OCStepBasic_MassUnit(Handle(StepBasic_MassUnit)* nativeHandle) : OCStepBasic_NamedUnit((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_MassUnit(*nativeHandle);
}

OCStepBasic_MassUnit::OCStepBasic_MassUnit() : OCStepBasic_NamedUnit((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_MassUnit(new StepBasic_MassUnit());
}


