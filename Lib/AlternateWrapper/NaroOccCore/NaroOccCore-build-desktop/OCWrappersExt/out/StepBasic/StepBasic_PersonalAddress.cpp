// File generated by CPPExt (CPP file)
//

#include "StepBasic_PersonalAddress.h"
#include "../Converter.h"
#include "StepBasic_HArray1OfPerson.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepBasic_Person.h"


using namespace OCNaroWrappers;

OCStepBasic_PersonalAddress::OCStepBasic_PersonalAddress(Handle(StepBasic_PersonalAddress)* nativeHandle) : OCStepBasic_Address((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_PersonalAddress(*nativeHandle);
}

OCStepBasic_PersonalAddress::OCStepBasic_PersonalAddress() : OCStepBasic_Address((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepBasic_PersonalAddress(new StepBasic_PersonalAddress());
}

 void OCStepBasic_PersonalAddress::Init(System::Boolean hasAinternalLocation, OCNaroWrappers::OCTCollection_HAsciiString^ aInternalLocation, System::Boolean hasAstreetNumber, OCNaroWrappers::OCTCollection_HAsciiString^ aStreetNumber, System::Boolean hasAstreet, OCNaroWrappers::OCTCollection_HAsciiString^ aStreet, System::Boolean hasApostalBox, OCNaroWrappers::OCTCollection_HAsciiString^ aPostalBox, System::Boolean hasAtown, OCNaroWrappers::OCTCollection_HAsciiString^ aTown, System::Boolean hasAregion, OCNaroWrappers::OCTCollection_HAsciiString^ aRegion, System::Boolean hasApostalCode, OCNaroWrappers::OCTCollection_HAsciiString^ aPostalCode, System::Boolean hasAcountry, OCNaroWrappers::OCTCollection_HAsciiString^ aCountry, System::Boolean hasAfacsimileNumber, OCNaroWrappers::OCTCollection_HAsciiString^ aFacsimileNumber, System::Boolean hasAtelephoneNumber, OCNaroWrappers::OCTCollection_HAsciiString^ aTelephoneNumber, System::Boolean hasAelectronicMailAddress, OCNaroWrappers::OCTCollection_HAsciiString^ aElectronicMailAddress, System::Boolean hasAtelexNumber, OCNaroWrappers::OCTCollection_HAsciiString^ aTelexNumber)
{
  (*((Handle_StepBasic_PersonalAddress*)nativeHandle))->Init(OCConverter::BooleanToStandardBoolean(hasAinternalLocation), *((Handle_TCollection_HAsciiString*)aInternalLocation->Handle), OCConverter::BooleanToStandardBoolean(hasAstreetNumber), *((Handle_TCollection_HAsciiString*)aStreetNumber->Handle), OCConverter::BooleanToStandardBoolean(hasAstreet), *((Handle_TCollection_HAsciiString*)aStreet->Handle), OCConverter::BooleanToStandardBoolean(hasApostalBox), *((Handle_TCollection_HAsciiString*)aPostalBox->Handle), OCConverter::BooleanToStandardBoolean(hasAtown), *((Handle_TCollection_HAsciiString*)aTown->Handle), OCConverter::BooleanToStandardBoolean(hasAregion), *((Handle_TCollection_HAsciiString*)aRegion->Handle), OCConverter::BooleanToStandardBoolean(hasApostalCode), *((Handle_TCollection_HAsciiString*)aPostalCode->Handle), OCConverter::BooleanToStandardBoolean(hasAcountry), *((Handle_TCollection_HAsciiString*)aCountry->Handle), OCConverter::BooleanToStandardBoolean(hasAfacsimileNumber), *((Handle_TCollection_HAsciiString*)aFacsimileNumber->Handle), OCConverter::BooleanToStandardBoolean(hasAtelephoneNumber), *((Handle_TCollection_HAsciiString*)aTelephoneNumber->Handle), OCConverter::BooleanToStandardBoolean(hasAelectronicMailAddress), *((Handle_TCollection_HAsciiString*)aElectronicMailAddress->Handle), OCConverter::BooleanToStandardBoolean(hasAtelexNumber), *((Handle_TCollection_HAsciiString*)aTelexNumber->Handle));
}

 void OCStepBasic_PersonalAddress::Init(System::Boolean hasAinternalLocation, OCNaroWrappers::OCTCollection_HAsciiString^ aInternalLocation, System::Boolean hasAstreetNumber, OCNaroWrappers::OCTCollection_HAsciiString^ aStreetNumber, System::Boolean hasAstreet, OCNaroWrappers::OCTCollection_HAsciiString^ aStreet, System::Boolean hasApostalBox, OCNaroWrappers::OCTCollection_HAsciiString^ aPostalBox, System::Boolean hasAtown, OCNaroWrappers::OCTCollection_HAsciiString^ aTown, System::Boolean hasAregion, OCNaroWrappers::OCTCollection_HAsciiString^ aRegion, System::Boolean hasApostalCode, OCNaroWrappers::OCTCollection_HAsciiString^ aPostalCode, System::Boolean hasAcountry, OCNaroWrappers::OCTCollection_HAsciiString^ aCountry, System::Boolean hasAfacsimileNumber, OCNaroWrappers::OCTCollection_HAsciiString^ aFacsimileNumber, System::Boolean hasAtelephoneNumber, OCNaroWrappers::OCTCollection_HAsciiString^ aTelephoneNumber, System::Boolean hasAelectronicMailAddress, OCNaroWrappers::OCTCollection_HAsciiString^ aElectronicMailAddress, System::Boolean hasAtelexNumber, OCNaroWrappers::OCTCollection_HAsciiString^ aTelexNumber, OCNaroWrappers::OCStepBasic_HArray1OfPerson^ aPeople, OCNaroWrappers::OCTCollection_HAsciiString^ aDescription)
{
  (*((Handle_StepBasic_PersonalAddress*)nativeHandle))->Init(OCConverter::BooleanToStandardBoolean(hasAinternalLocation), *((Handle_TCollection_HAsciiString*)aInternalLocation->Handle), OCConverter::BooleanToStandardBoolean(hasAstreetNumber), *((Handle_TCollection_HAsciiString*)aStreetNumber->Handle), OCConverter::BooleanToStandardBoolean(hasAstreet), *((Handle_TCollection_HAsciiString*)aStreet->Handle), OCConverter::BooleanToStandardBoolean(hasApostalBox), *((Handle_TCollection_HAsciiString*)aPostalBox->Handle), OCConverter::BooleanToStandardBoolean(hasAtown), *((Handle_TCollection_HAsciiString*)aTown->Handle), OCConverter::BooleanToStandardBoolean(hasAregion), *((Handle_TCollection_HAsciiString*)aRegion->Handle), OCConverter::BooleanToStandardBoolean(hasApostalCode), *((Handle_TCollection_HAsciiString*)aPostalCode->Handle), OCConverter::BooleanToStandardBoolean(hasAcountry), *((Handle_TCollection_HAsciiString*)aCountry->Handle), OCConverter::BooleanToStandardBoolean(hasAfacsimileNumber), *((Handle_TCollection_HAsciiString*)aFacsimileNumber->Handle), OCConverter::BooleanToStandardBoolean(hasAtelephoneNumber), *((Handle_TCollection_HAsciiString*)aTelephoneNumber->Handle), OCConverter::BooleanToStandardBoolean(hasAelectronicMailAddress), *((Handle_TCollection_HAsciiString*)aElectronicMailAddress->Handle), OCConverter::BooleanToStandardBoolean(hasAtelexNumber), *((Handle_TCollection_HAsciiString*)aTelexNumber->Handle), *((Handle_StepBasic_HArray1OfPerson*)aPeople->Handle), *((Handle_TCollection_HAsciiString*)aDescription->Handle));
}

 void OCStepBasic_PersonalAddress::SetPeople(OCNaroWrappers::OCStepBasic_HArray1OfPerson^ aPeople)
{
  (*((Handle_StepBasic_PersonalAddress*)nativeHandle))->SetPeople(*((Handle_StepBasic_HArray1OfPerson*)aPeople->Handle));
}

OCStepBasic_HArray1OfPerson^ OCStepBasic_PersonalAddress::People()
{
  Handle(StepBasic_HArray1OfPerson) tmp = (*((Handle_StepBasic_PersonalAddress*)nativeHandle))->People();
  return gcnew OCStepBasic_HArray1OfPerson(&tmp);
}

OCStepBasic_Person^ OCStepBasic_PersonalAddress::PeopleValue(Standard_Integer num)
{
  Handle(StepBasic_Person) tmp = (*((Handle_StepBasic_PersonalAddress*)nativeHandle))->PeopleValue(num);
  return gcnew OCStepBasic_Person(&tmp);
}

 Standard_Integer OCStepBasic_PersonalAddress::NbPeople()
{
  return (*((Handle_StepBasic_PersonalAddress*)nativeHandle))->NbPeople();
}

 void OCStepBasic_PersonalAddress::SetDescription(OCNaroWrappers::OCTCollection_HAsciiString^ aDescription)
{
  (*((Handle_StepBasic_PersonalAddress*)nativeHandle))->SetDescription(*((Handle_TCollection_HAsciiString*)aDescription->Handle));
}

OCTCollection_HAsciiString^ OCStepBasic_PersonalAddress::Description()
{
  Handle(TCollection_HAsciiString) tmp = (*((Handle_StepBasic_PersonalAddress*)nativeHandle))->Description();
  return gcnew OCTCollection_HAsciiString(&tmp);
}


