// File generated by CPPExt (CPP file)
//

#include "MoniTool_Option.h"
#include "../Converter.h"
#include "../Standard/Standard_Type.h"
#include "MoniTool_TypedValue.h"
#include "../Dico/Dico_DictionaryOfTransient.h"
#include "../Standard/Standard_Transient.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "../TColStd/TColStd_HSequenceOfAsciiString.h"


using namespace OCNaroWrappers;

OCMoniTool_Option::OCMoniTool_Option(Handle(MoniTool_Option)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_MoniTool_Option(*nativeHandle);
}

OCMoniTool_Option::OCMoniTool_Option(OCNaroWrappers::OCStandard_Type^ atype, System::String^ aname) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_MoniTool_Option(new MoniTool_Option(*((Handle_Standard_Type*)atype->Handle), OCConverter::StringToStandardCString(aname)));
}

OCMoniTool_Option::OCMoniTool_Option(OCNaroWrappers::OCMoniTool_TypedValue^ aval, System::String^ aname) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_MoniTool_Option(new MoniTool_Option(*((Handle_MoniTool_TypedValue*)aval->Handle), OCConverter::StringToStandardCString(aname)));
}

OCMoniTool_Option::OCMoniTool_Option(OCNaroWrappers::OCMoniTool_Option^ other, System::String^ aname) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_MoniTool_Option(new MoniTool_Option(*((Handle_MoniTool_Option*)other->Handle), OCConverter::StringToStandardCString(aname)));
}

 System::Boolean OCMoniTool_Option::Add(System::String^ name, OCNaroWrappers::OCStandard_Transient^ val)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MoniTool_Option*)nativeHandle))->Add(OCConverter::StringToStandardCString(name), *((Handle_Standard_Transient*)val->Handle)));
}

 System::Boolean OCMoniTool_Option::AddBasic(System::String^ name, System::String^ val)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MoniTool_Option*)nativeHandle))->AddBasic(OCConverter::StringToStandardCString(name), OCConverter::StringToStandardCString(val)));
}

 void OCMoniTool_Option::Duplicate()
{
  (*((Handle_MoniTool_Option*)nativeHandle))->Duplicate();
}

OCTCollection_AsciiString^ OCMoniTool_Option::Name()
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = (*((Handle_MoniTool_Option*)nativeHandle))->Name();
  return gcnew OCTCollection_AsciiString(tmp);
}

OCStandard_Type^ OCMoniTool_Option::Type()
{
  Handle(Standard_Type) tmp = (*((Handle_MoniTool_Option*)nativeHandle))->Type();
  return gcnew OCStandard_Type(&tmp);
}

OCMoniTool_TypedValue^ OCMoniTool_Option::TypedValue()
{
  Handle(MoniTool_TypedValue) tmp = (*((Handle_MoniTool_Option*)nativeHandle))->TypedValue();
  return gcnew OCMoniTool_TypedValue(&tmp);
}

 System::Boolean OCMoniTool_Option::Item(System::String^ name, OCNaroWrappers::OCStandard_Transient^ val)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MoniTool_Option*)nativeHandle))->Item(OCConverter::StringToStandardCString(name), *((Handle_Standard_Transient*)val->Handle)));
}

OCTColStd_HSequenceOfAsciiString^ OCMoniTool_Option::ItemList()
{
  Handle(TColStd_HSequenceOfAsciiString) tmp = (*((Handle_MoniTool_Option*)nativeHandle))->ItemList();
  return gcnew OCTColStd_HSequenceOfAsciiString(&tmp);
}

OCTColStd_HSequenceOfAsciiString^ OCMoniTool_Option::Aliases(System::String^ name, System::Boolean exact)
{
  Handle(TColStd_HSequenceOfAsciiString) tmp = (*((Handle_MoniTool_Option*)nativeHandle))->Aliases(OCConverter::StringToStandardCString(name), OCConverter::BooleanToStandardBoolean(exact));
  return gcnew OCTColStd_HSequenceOfAsciiString(&tmp);
}

 System::Boolean OCMoniTool_Option::Switch(System::String^ name)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MoniTool_Option*)nativeHandle))->Switch(OCConverter::StringToStandardCString(name)));
}

OCTCollection_AsciiString^ OCMoniTool_Option::CaseName()
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = (*((Handle_MoniTool_Option*)nativeHandle))->CaseName();
  return gcnew OCTCollection_AsciiString(tmp);
}

OCStandard_Transient^ OCMoniTool_Option::CaseValue()
{
  Handle(Standard_Transient) tmp = (*((Handle_MoniTool_Option*)nativeHandle))->CaseValue();
  return gcnew OCStandard_Transient(&tmp);
}

 void OCMoniTool_Option::Value(OCNaroWrappers::OCStandard_Transient^ val)
{
  (*((Handle_MoniTool_Option*)nativeHandle))->Value(*((Handle_Standard_Transient*)val->Handle));
}

