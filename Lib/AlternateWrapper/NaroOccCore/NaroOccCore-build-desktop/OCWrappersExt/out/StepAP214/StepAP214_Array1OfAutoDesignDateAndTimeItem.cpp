// File generated by CPPExt (CPP file)
//

#include "StepAP214_Array1OfAutoDesignDateAndTimeItem.h"
#include "../Converter.h"
#include "StepAP214_AutoDesignDateAndTimeItem.h"


using namespace OCNaroWrappers;

OCStepAP214_Array1OfAutoDesignDateAndTimeItem::OCStepAP214_Array1OfAutoDesignDateAndTimeItem(StepAP214_Array1OfAutoDesignDateAndTimeItem* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCStepAP214_Array1OfAutoDesignDateAndTimeItem::OCStepAP214_Array1OfAutoDesignDateAndTimeItem(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepAP214_Array1OfAutoDesignDateAndTimeItem(Low, Up);
}

OCStepAP214_Array1OfAutoDesignDateAndTimeItem::OCStepAP214_Array1OfAutoDesignDateAndTimeItem(OCNaroWrappers::OCStepAP214_AutoDesignDateAndTimeItem^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepAP214_Array1OfAutoDesignDateAndTimeItem(*((StepAP214_AutoDesignDateAndTimeItem*)Item->Handle), Low, Up);
}

 void OCStepAP214_Array1OfAutoDesignDateAndTimeItem::Init(OCNaroWrappers::OCStepAP214_AutoDesignDateAndTimeItem^ V)
{
  ((StepAP214_Array1OfAutoDesignDateAndTimeItem*)nativeHandle)->Init(*((StepAP214_AutoDesignDateAndTimeItem*)V->Handle));
}

 System::Boolean OCStepAP214_Array1OfAutoDesignDateAndTimeItem::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((StepAP214_Array1OfAutoDesignDateAndTimeItem*)nativeHandle)->IsAllocated());
}

OCStepAP214_Array1OfAutoDesignDateAndTimeItem^ OCStepAP214_Array1OfAutoDesignDateAndTimeItem::Assign(OCNaroWrappers::OCStepAP214_Array1OfAutoDesignDateAndTimeItem^ Other)
{
  StepAP214_Array1OfAutoDesignDateAndTimeItem* tmp = new StepAP214_Array1OfAutoDesignDateAndTimeItem(0, 0);
  *tmp = ((StepAP214_Array1OfAutoDesignDateAndTimeItem*)nativeHandle)->Assign(*((StepAP214_Array1OfAutoDesignDateAndTimeItem*)Other->Handle));
  return gcnew OCStepAP214_Array1OfAutoDesignDateAndTimeItem(tmp);
}

 Standard_Integer OCStepAP214_Array1OfAutoDesignDateAndTimeItem::Length()
{
  return ((StepAP214_Array1OfAutoDesignDateAndTimeItem*)nativeHandle)->Length();
}

 Standard_Integer OCStepAP214_Array1OfAutoDesignDateAndTimeItem::Lower()
{
  return ((StepAP214_Array1OfAutoDesignDateAndTimeItem*)nativeHandle)->Lower();
}

 Standard_Integer OCStepAP214_Array1OfAutoDesignDateAndTimeItem::Upper()
{
  return ((StepAP214_Array1OfAutoDesignDateAndTimeItem*)nativeHandle)->Upper();
}

 void OCStepAP214_Array1OfAutoDesignDateAndTimeItem::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepAP214_AutoDesignDateAndTimeItem^ Value)
{
  ((StepAP214_Array1OfAutoDesignDateAndTimeItem*)nativeHandle)->SetValue(Index, *((StepAP214_AutoDesignDateAndTimeItem*)Value->Handle));
}

OCStepAP214_AutoDesignDateAndTimeItem^ OCStepAP214_Array1OfAutoDesignDateAndTimeItem::Value(Standard_Integer Index)
{
  StepAP214_AutoDesignDateAndTimeItem* tmp = new StepAP214_AutoDesignDateAndTimeItem();
  *tmp = ((StepAP214_Array1OfAutoDesignDateAndTimeItem*)nativeHandle)->Value(Index);
  return gcnew OCStepAP214_AutoDesignDateAndTimeItem(tmp);
}

OCStepAP214_AutoDesignDateAndTimeItem^ OCStepAP214_Array1OfAutoDesignDateAndTimeItem::ChangeValue(Standard_Integer Index)
{
  StepAP214_AutoDesignDateAndTimeItem* tmp = new StepAP214_AutoDesignDateAndTimeItem();
  *tmp = ((StepAP214_Array1OfAutoDesignDateAndTimeItem*)nativeHandle)->ChangeValue(Index);
  return gcnew OCStepAP214_AutoDesignDateAndTimeItem(tmp);
}


