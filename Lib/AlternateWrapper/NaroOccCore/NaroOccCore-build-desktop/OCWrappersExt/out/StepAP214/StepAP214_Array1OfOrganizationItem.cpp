// File generated by CPPExt (CPP file)
//

#include "StepAP214_Array1OfOrganizationItem.h"
#include "../Converter.h"
#include "StepAP214_OrganizationItem.h"


using namespace OCNaroWrappers;

OCStepAP214_Array1OfOrganizationItem::OCStepAP214_Array1OfOrganizationItem(StepAP214_Array1OfOrganizationItem* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCStepAP214_Array1OfOrganizationItem::OCStepAP214_Array1OfOrganizationItem(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepAP214_Array1OfOrganizationItem(Low, Up);
}

OCStepAP214_Array1OfOrganizationItem::OCStepAP214_Array1OfOrganizationItem(OCNaroWrappers::OCStepAP214_OrganizationItem^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepAP214_Array1OfOrganizationItem(*((StepAP214_OrganizationItem*)Item->Handle), Low, Up);
}

 void OCStepAP214_Array1OfOrganizationItem::Init(OCNaroWrappers::OCStepAP214_OrganizationItem^ V)
{
  ((StepAP214_Array1OfOrganizationItem*)nativeHandle)->Init(*((StepAP214_OrganizationItem*)V->Handle));
}

 System::Boolean OCStepAP214_Array1OfOrganizationItem::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((StepAP214_Array1OfOrganizationItem*)nativeHandle)->IsAllocated());
}

OCStepAP214_Array1OfOrganizationItem^ OCStepAP214_Array1OfOrganizationItem::Assign(OCNaroWrappers::OCStepAP214_Array1OfOrganizationItem^ Other)
{
  StepAP214_Array1OfOrganizationItem* tmp = new StepAP214_Array1OfOrganizationItem(0, 0);
  *tmp = ((StepAP214_Array1OfOrganizationItem*)nativeHandle)->Assign(*((StepAP214_Array1OfOrganizationItem*)Other->Handle));
  return gcnew OCStepAP214_Array1OfOrganizationItem(tmp);
}

 Standard_Integer OCStepAP214_Array1OfOrganizationItem::Length()
{
  return ((StepAP214_Array1OfOrganizationItem*)nativeHandle)->Length();
}

 Standard_Integer OCStepAP214_Array1OfOrganizationItem::Lower()
{
  return ((StepAP214_Array1OfOrganizationItem*)nativeHandle)->Lower();
}

 Standard_Integer OCStepAP214_Array1OfOrganizationItem::Upper()
{
  return ((StepAP214_Array1OfOrganizationItem*)nativeHandle)->Upper();
}

 void OCStepAP214_Array1OfOrganizationItem::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepAP214_OrganizationItem^ Value)
{
  ((StepAP214_Array1OfOrganizationItem*)nativeHandle)->SetValue(Index, *((StepAP214_OrganizationItem*)Value->Handle));
}

OCStepAP214_OrganizationItem^ OCStepAP214_Array1OfOrganizationItem::Value(Standard_Integer Index)
{
  StepAP214_OrganizationItem* tmp = new StepAP214_OrganizationItem();
  *tmp = ((StepAP214_Array1OfOrganizationItem*)nativeHandle)->Value(Index);
  return gcnew OCStepAP214_OrganizationItem(tmp);
}

OCStepAP214_OrganizationItem^ OCStepAP214_Array1OfOrganizationItem::ChangeValue(Standard_Integer Index)
{
  StepAP214_OrganizationItem* tmp = new StepAP214_OrganizationItem();
  *tmp = ((StepAP214_Array1OfOrganizationItem*)nativeHandle)->ChangeValue(Index);
  return gcnew OCStepAP214_OrganizationItem(tmp);
}


