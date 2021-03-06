// File generated by CPPExt (CPP file)
//

#include "TDataStd_Placement.h"
#include "../Converter.h"
#include "../Standard/Standard_GUID.h"
#include "../TDF/TDF_Label.h"
#include "../TDF/TDF_Attribute.h"
#include "../TDF/TDF_RelocationTable.h"


using namespace OCNaroWrappers;

OCTDataStd_Placement::OCTDataStd_Placement(Handle(TDataStd_Placement)* nativeHandle) : OCTDF_Attribute((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDataStd_Placement(*nativeHandle);
}

OCStandard_GUID^ OCTDataStd_Placement::GetID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = TDataStd_Placement::GetID();
  return gcnew OCStandard_GUID(tmp);
}

OCTDataStd_Placement^ OCTDataStd_Placement::Set(OCNaroWrappers::OCTDF_Label^ label)
{
  Handle(TDataStd_Placement) tmp = TDataStd_Placement::Set(*((TDF_Label*)label->Handle));
  return gcnew OCTDataStd_Placement(&tmp);
}

OCTDataStd_Placement::OCTDataStd_Placement() : OCTDF_Attribute((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDataStd_Placement(new TDataStd_Placement());
}

OCStandard_GUID^ OCTDataStd_Placement::ID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = (*((Handle_TDataStd_Placement*)nativeHandle))->ID();
  return gcnew OCStandard_GUID(tmp);
}

 void OCTDataStd_Placement::Restore(OCNaroWrappers::OCTDF_Attribute^ With)
{
  (*((Handle_TDataStd_Placement*)nativeHandle))->Restore(*((Handle_TDF_Attribute*)With->Handle));
}

OCTDF_Attribute^ OCTDataStd_Placement::NewEmpty()
{
  Handle(TDF_Attribute) tmp = (*((Handle_TDataStd_Placement*)nativeHandle))->NewEmpty();
  return gcnew OCTDF_Attribute(&tmp);
}

 void OCTDataStd_Placement::Paste(OCNaroWrappers::OCTDF_Attribute^ Into, OCNaroWrappers::OCTDF_RelocationTable^ RT)
{
  (*((Handle_TDataStd_Placement*)nativeHandle))->Paste(*((Handle_TDF_Attribute*)Into->Handle), *((Handle_TDF_RelocationTable*)RT->Handle));
}

 Standard_OStream& OCTDataStd_Placement::Dump(Standard_OStream& anOS)
{
  return (*((Handle_TDataStd_Placement*)nativeHandle))->Dump(anOS);
}


