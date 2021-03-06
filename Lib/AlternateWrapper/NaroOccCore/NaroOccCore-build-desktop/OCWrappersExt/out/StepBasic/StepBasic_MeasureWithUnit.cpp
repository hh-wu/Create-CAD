// File generated by CPPExt (CPP file)
//

#include "StepBasic_MeasureWithUnit.h"
#include "../Converter.h"
#include "StepBasic_MeasureValueMember.h"
#include "StepBasic_Unit.h"


using namespace OCNaroWrappers;

OCStepBasic_MeasureWithUnit::OCStepBasic_MeasureWithUnit(Handle(StepBasic_MeasureWithUnit)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_MeasureWithUnit(*nativeHandle);
}

OCStepBasic_MeasureWithUnit::OCStepBasic_MeasureWithUnit() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_MeasureWithUnit(new StepBasic_MeasureWithUnit());
}

 void OCStepBasic_MeasureWithUnit::Init(OCNaroWrappers::OCStepBasic_MeasureValueMember^ aValueComponent, OCNaroWrappers::OCStepBasic_Unit^ aUnitComponent)
{
  (*((Handle_StepBasic_MeasureWithUnit*)nativeHandle))->Init(*((StepBasic_MeasureValueMember*)aValueComponent->Handle), *((StepBasic_Unit*)aUnitComponent->Handle));
}

 void OCStepBasic_MeasureWithUnit::SetValueComponent(Standard_Real aValueComponent)
{
  (*((Handle_StepBasic_MeasureWithUnit*)nativeHandle))->SetValueComponent(aValueComponent);
}

 Standard_Real OCStepBasic_MeasureWithUnit::ValueComponent()
{
  return (*((Handle_StepBasic_MeasureWithUnit*)nativeHandle))->ValueComponent();
}

OCStepBasic_MeasureValueMember^ OCStepBasic_MeasureWithUnit::ValueComponentMember()
{
  StepBasic_MeasureValueMember* tmp = new StepBasic_MeasureValueMember();
  *tmp = (*((Handle_StepBasic_MeasureWithUnit*)nativeHandle))->ValueComponentMember();
  return gcnew OCStepBasic_MeasureValueMember(tmp);
}

 void OCStepBasic_MeasureWithUnit::SetValueComponentMember(OCNaroWrappers::OCStepBasic_MeasureValueMember^ val)
{
  (*((Handle_StepBasic_MeasureWithUnit*)nativeHandle))->SetValueComponentMember(*((StepBasic_MeasureValueMember*)val->Handle));
}

 void OCStepBasic_MeasureWithUnit::SetUnitComponent(OCNaroWrappers::OCStepBasic_Unit^ aUnitComponent)
{
  (*((Handle_StepBasic_MeasureWithUnit*)nativeHandle))->SetUnitComponent(*((StepBasic_Unit*)aUnitComponent->Handle));
}

OCStepBasic_Unit^ OCStepBasic_MeasureWithUnit::UnitComponent()
{
  StepBasic_Unit* tmp = new StepBasic_Unit();
  *tmp = (*((Handle_StepBasic_MeasureWithUnit*)nativeHandle))->UnitComponent();
  return gcnew OCStepBasic_Unit(tmp);
}


