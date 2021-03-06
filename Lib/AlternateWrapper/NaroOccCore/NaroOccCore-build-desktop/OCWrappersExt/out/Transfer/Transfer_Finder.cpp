// File generated by CPPExt (CPP file)
//

#include "Transfer_Finder.h"
#include "../Converter.h"
#include "../Dico/Dico_DictionaryOfTransient.h"
#include "../Standard/Standard_Type.h"
#include "../Standard/Standard_Transient.h"


using namespace OCNaroWrappers;

OCTransfer_Finder::OCTransfer_Finder(Handle(Transfer_Finder)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Transfer_Finder(*nativeHandle);
}

 Standard_Integer OCTransfer_Finder::GetHashCode()
{
  return (*((Handle_Transfer_Finder*)nativeHandle))->GetHashCode();
}

OCStandard_Type^ OCTransfer_Finder::ValueType()
{
  Handle(Standard_Type) tmp = (*((Handle_Transfer_Finder*)nativeHandle))->ValueType();
  return gcnew OCStandard_Type(&tmp);
}

 System::String^ OCTransfer_Finder::ValueTypeName()
{
  return OCConverter::StandardCStringToString((*((Handle_Transfer_Finder*)nativeHandle))->ValueTypeName());
}

 void OCTransfer_Finder::SetAttribute(System::String^ name, OCNaroWrappers::OCStandard_Transient^ val)
{
  (*((Handle_Transfer_Finder*)nativeHandle))->SetAttribute(OCConverter::StringToStandardCString(name), *((Handle_Standard_Transient*)val->Handle));
}

 System::Boolean OCTransfer_Finder::RemoveAttribute(System::String^ name)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Transfer_Finder*)nativeHandle))->RemoveAttribute(OCConverter::StringToStandardCString(name)));
}

 System::Boolean OCTransfer_Finder::GetAttribute(System::String^ name, OCNaroWrappers::OCStandard_Type^ type, OCNaroWrappers::OCStandard_Transient^ val)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Transfer_Finder*)nativeHandle))->GetAttribute(OCConverter::StringToStandardCString(name), *((Handle_Standard_Type*)type->Handle), *((Handle_Standard_Transient*)val->Handle)));
}

OCStandard_Transient^ OCTransfer_Finder::Attribute(System::String^ name)
{
  Handle(Standard_Transient) tmp = (*((Handle_Transfer_Finder*)nativeHandle))->Attribute(OCConverter::StringToStandardCString(name));
  return gcnew OCStandard_Transient(&tmp);
}

 OCInterface_ParamType OCTransfer_Finder::AttributeType(System::String^ name)
{
  return (OCInterface_ParamType)((*((Handle_Transfer_Finder*)nativeHandle))->AttributeType(OCConverter::StringToStandardCString(name)));
}

 void OCTransfer_Finder::SetIntegerAttribute(System::String^ name, Standard_Integer val)
{
  (*((Handle_Transfer_Finder*)nativeHandle))->SetIntegerAttribute(OCConverter::StringToStandardCString(name), val);
}

 System::Boolean OCTransfer_Finder::GetIntegerAttribute(System::String^ name, Standard_Integer& val)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Transfer_Finder*)nativeHandle))->GetIntegerAttribute(OCConverter::StringToStandardCString(name), val));
}

 Standard_Integer OCTransfer_Finder::IntegerAttribute(System::String^ name)
{
  return (*((Handle_Transfer_Finder*)nativeHandle))->IntegerAttribute(OCConverter::StringToStandardCString(name));
}

 void OCTransfer_Finder::SetRealAttribute(System::String^ name, Standard_Real val)
{
  (*((Handle_Transfer_Finder*)nativeHandle))->SetRealAttribute(OCConverter::StringToStandardCString(name), val);
}

 System::Boolean OCTransfer_Finder::GetRealAttribute(System::String^ name, Standard_Real& val)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Transfer_Finder*)nativeHandle))->GetRealAttribute(OCConverter::StringToStandardCString(name), val));
}

 Standard_Real OCTransfer_Finder::RealAttribute(System::String^ name)
{
  return (*((Handle_Transfer_Finder*)nativeHandle))->RealAttribute(OCConverter::StringToStandardCString(name));
}

 void OCTransfer_Finder::SetStringAttribute(System::String^ name, System::String^ val)
{
  (*((Handle_Transfer_Finder*)nativeHandle))->SetStringAttribute(OCConverter::StringToStandardCString(name), OCConverter::StringToStandardCString(val));
}

 System::Boolean OCTransfer_Finder::GetStringAttribute(System::String^ name, System::String^& val)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Transfer_Finder*)nativeHandle))->GetStringAttribute(OCConverter::StringToStandardCString(name), OCConverter::StringToStandardCString(val)));
}

 System::String^ OCTransfer_Finder::StringAttribute(System::String^ name)
{
  return OCConverter::StandardCStringToString((*((Handle_Transfer_Finder*)nativeHandle))->StringAttribute(OCConverter::StringToStandardCString(name)));
}

OCDico_DictionaryOfTransient^ OCTransfer_Finder::AttrList()
{
  Handle(Dico_DictionaryOfTransient) tmp = (*((Handle_Transfer_Finder*)nativeHandle))->AttrList();
  return gcnew OCDico_DictionaryOfTransient(&tmp);
}

 void OCTransfer_Finder::SameAttributes(OCNaroWrappers::OCTransfer_Finder^ other)
{
  (*((Handle_Transfer_Finder*)nativeHandle))->SameAttributes(*((Handle_Transfer_Finder*)other->Handle));
}

 void OCTransfer_Finder::GetAttributes(OCNaroWrappers::OCTransfer_Finder^ other, System::String^ fromname, System::Boolean copied)
{
  (*((Handle_Transfer_Finder*)nativeHandle))->GetAttributes(*((Handle_Transfer_Finder*)other->Handle), OCConverter::StringToStandardCString(fromname), OCConverter::BooleanToStandardBoolean(copied));
}


