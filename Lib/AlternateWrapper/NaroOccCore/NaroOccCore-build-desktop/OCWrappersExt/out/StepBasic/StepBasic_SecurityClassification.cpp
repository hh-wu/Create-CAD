// File generated by CPPExt (CPP file)
//

#include "StepBasic_SecurityClassification.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepBasic_SecurityClassificationLevel.h"


using namespace OCNaroWrappers;

OCStepBasic_SecurityClassification::OCStepBasic_SecurityClassification(Handle(StepBasic_SecurityClassification)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_SecurityClassification(*nativeHandle);
}

OCStepBasic_SecurityClassification::OCStepBasic_SecurityClassification() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_SecurityClassification(new StepBasic_SecurityClassification());
}

 void OCStepBasic_SecurityClassification::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCTCollection_HAsciiString^ aPurpose, OCNaroWrappers::OCStepBasic_SecurityClassificationLevel^ aSecurityLevel)
{
  (*((Handle_StepBasic_SecurityClassification*)nativeHandle))->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((Handle_TCollection_HAsciiString*)aPurpose->Handle), *((Handle_StepBasic_SecurityClassificationLevel*)aSecurityLevel->Handle));
}

 void OCStepBasic_SecurityClassification::SetName(OCNaroWrappers::OCTCollection_HAsciiString^ aName)
{
  (*((Handle_StepBasic_SecurityClassification*)nativeHandle))->SetName(*((Handle_TCollection_HAsciiString*)aName->Handle));
}

OCTCollection_HAsciiString^ OCStepBasic_SecurityClassification::Name()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_StepBasic_SecurityClassification*)nativeHandle))->Name();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 void OCStepBasic_SecurityClassification::SetPurpose(OCNaroWrappers::OCTCollection_HAsciiString^ aPurpose)
{
  (*((Handle_StepBasic_SecurityClassification*)nativeHandle))->SetPurpose(*((Handle_TCollection_HAsciiString*)aPurpose->Handle));
}

OCTCollection_HAsciiString^ OCStepBasic_SecurityClassification::Purpose()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_StepBasic_SecurityClassification*)nativeHandle))->Purpose();
  return gcnew OCTCollection_HAsciiString(&tmp);
}

 void OCStepBasic_SecurityClassification::SetSecurityLevel(OCNaroWrappers::OCStepBasic_SecurityClassificationLevel^ aSecurityLevel)
{
  (*((Handle_StepBasic_SecurityClassification*)nativeHandle))->SetSecurityLevel(*((Handle_StepBasic_SecurityClassificationLevel*)aSecurityLevel->Handle));
}

OCStepBasic_SecurityClassificationLevel^ OCStepBasic_SecurityClassification::SecurityLevel()
{
  Handle(StepBasic_SecurityClassificationLevel) tmp = (*((Handle_StepBasic_SecurityClassification*)nativeHandle))->SecurityLevel();
  return gcnew OCStepBasic_SecurityClassificationLevel(&tmp);
}


