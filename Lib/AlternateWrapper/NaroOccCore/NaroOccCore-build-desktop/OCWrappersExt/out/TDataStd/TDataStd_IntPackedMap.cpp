// File generated by CPPExt (CPP file)
//

#include "TDataStd_IntPackedMap.h"
#include "../Converter.h"
#include "../TColStd/TColStd_HPackedMapOfInteger.h"
#include "TDataStd_DeltaOnModificationOfIntPackedMap.h"
#include "../Standard/Standard_GUID.h"
#include "../TDF/TDF_Label.h"
#include "../TDF/TDF_Attribute.h"
#include "../TDF/TDF_RelocationTable.h"
#include "../TDF/TDF_DeltaOnModification.h"


using namespace OCNaroWrappers;

OCTDataStd_IntPackedMap::OCTDataStd_IntPackedMap(Handle(TDataStd_IntPackedMap)* nativeHandle) : OCTDF_Attribute((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDataStd_IntPackedMap(*nativeHandle);
}

OCStandard_GUID^ OCTDataStd_IntPackedMap::GetID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = TDataStd_IntPackedMap::GetID();
  return gcnew OCStandard_GUID(tmp);
}

OCTDataStd_IntPackedMap^ OCTDataStd_IntPackedMap::Set(OCNaroWrappers::OCTDF_Label^ label, System::Boolean isDelta)
{
  Handle(TDataStd_IntPackedMap) tmp = TDataStd_IntPackedMap::Set(*((TDF_Label*)label->Handle), OCConverter::BooleanToStandardBoolean(isDelta));
  return gcnew OCTDataStd_IntPackedMap(&tmp);
}

OCTDataStd_IntPackedMap::OCTDataStd_IntPackedMap() : OCTDF_Attribute((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDataStd_IntPackedMap(new TDataStd_IntPackedMap());
}

 System::Boolean OCTDataStd_IntPackedMap::ChangeMap(OCNaroWrappers::OCTColStd_HPackedMapOfInteger^ theMap)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_IntPackedMap*)nativeHandle))->ChangeMap(*((Handle_TColStd_HPackedMapOfInteger*)theMap->Handle)));
}

 TColStd_PackedMapOfInteger& OCTDataStd_IntPackedMap::GetMap()
{
  return (*((Handle_TDataStd_IntPackedMap*)nativeHandle))->GetMap();
}

OCTColStd_HPackedMapOfInteger^ OCTDataStd_IntPackedMap::GetHMap()
{
  Handle(TColStd_HPackedMapOfInteger) tmp = (*((Handle_TDataStd_IntPackedMap*)nativeHandle))->GetHMap();
  return gcnew OCTColStd_HPackedMapOfInteger(&tmp);
}

 System::Boolean OCTDataStd_IntPackedMap::Clear()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_IntPackedMap*)nativeHandle))->Clear());
}

 System::Boolean OCTDataStd_IntPackedMap::Add(Standard_Integer theKey)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_IntPackedMap*)nativeHandle))->Add(theKey));
}

 System::Boolean OCTDataStd_IntPackedMap::Remove(Standard_Integer theKey)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_IntPackedMap*)nativeHandle))->Remove(theKey));
}

 System::Boolean OCTDataStd_IntPackedMap::Contains(Standard_Integer theKey)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_IntPackedMap*)nativeHandle))->Contains(theKey));
}

 Standard_Integer OCTDataStd_IntPackedMap::Extent()
{
  return (*((Handle_TDataStd_IntPackedMap*)nativeHandle))->Extent();
}

 System::Boolean OCTDataStd_IntPackedMap::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_IntPackedMap*)nativeHandle))->IsEmpty());
}

 System::Boolean OCTDataStd_IntPackedMap::GetDelta()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_IntPackedMap*)nativeHandle))->GetDelta());
}

 void OCTDataStd_IntPackedMap::SetDelta(System::Boolean isDelta)
{
  (*((Handle_TDataStd_IntPackedMap*)nativeHandle))->SetDelta(OCConverter::BooleanToStandardBoolean(isDelta));
}

OCStandard_GUID^ OCTDataStd_IntPackedMap::ID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = (*((Handle_TDataStd_IntPackedMap*)nativeHandle))->ID();
  return gcnew OCStandard_GUID(tmp);
}

 void OCTDataStd_IntPackedMap::Restore(OCNaroWrappers::OCTDF_Attribute^ with)
{
  (*((Handle_TDataStd_IntPackedMap*)nativeHandle))->Restore(*((Handle_TDF_Attribute*)with->Handle));
}

OCTDF_Attribute^ OCTDataStd_IntPackedMap::NewEmpty()
{
  Handle(TDF_Attribute) tmp = (*((Handle_TDataStd_IntPackedMap*)nativeHandle))->NewEmpty();
  return gcnew OCTDF_Attribute(&tmp);
}

 void OCTDataStd_IntPackedMap::Paste(OCNaroWrappers::OCTDF_Attribute^ into, OCNaroWrappers::OCTDF_RelocationTable^ RT)
{
  (*((Handle_TDataStd_IntPackedMap*)nativeHandle))->Paste(*((Handle_TDF_Attribute*)into->Handle), *((Handle_TDF_RelocationTable*)RT->Handle));
}

 Standard_OStream& OCTDataStd_IntPackedMap::Dump(Standard_OStream& anOS)
{
  return (*((Handle_TDataStd_IntPackedMap*)nativeHandle))->Dump(anOS);
}

OCTDF_DeltaOnModification^ OCTDataStd_IntPackedMap::DeltaOnModification(OCNaroWrappers::OCTDF_Attribute^ anOldAttribute)
{
  Handle(TDF_DeltaOnModification) tmp = (*((Handle_TDataStd_IntPackedMap*)nativeHandle))->DeltaOnModification(*((Handle_TDF_Attribute*)anOldAttribute->Handle));
  return gcnew OCTDF_DeltaOnModification(&tmp);
}


