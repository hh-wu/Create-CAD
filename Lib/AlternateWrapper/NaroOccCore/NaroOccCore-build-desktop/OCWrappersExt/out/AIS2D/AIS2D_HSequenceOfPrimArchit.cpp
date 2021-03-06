// File generated by CPPExt (CPP file)
//

#include "AIS2D_HSequenceOfPrimArchit.h"
#include "../Converter.h"
#include "AIS2D_PrimitiveArchit.h"
#include "AIS2D_SequenceOfPrimArchit.h"


using namespace OCNaroWrappers;

OCAIS2D_HSequenceOfPrimArchit::OCAIS2D_HSequenceOfPrimArchit(Handle(AIS2D_HSequenceOfPrimArchit)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_AIS2D_HSequenceOfPrimArchit(*nativeHandle);
}

OCAIS2D_HSequenceOfPrimArchit::OCAIS2D_HSequenceOfPrimArchit() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AIS2D_HSequenceOfPrimArchit(new AIS2D_HSequenceOfPrimArchit());
}

 System::Boolean OCAIS2D_HSequenceOfPrimArchit::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS2D_HSequenceOfPrimArchit*)nativeHandle))->IsEmpty());
}

 Standard_Integer OCAIS2D_HSequenceOfPrimArchit::Length()
{
  return (*((Handle_AIS2D_HSequenceOfPrimArchit*)nativeHandle))->Length();
}

 void OCAIS2D_HSequenceOfPrimArchit::Clear()
{
  (*((Handle_AIS2D_HSequenceOfPrimArchit*)nativeHandle))->Clear();
}

 void OCAIS2D_HSequenceOfPrimArchit::Append(OCNaroWrappers::OCAIS2D_PrimitiveArchit^ anItem)
{
  (*((Handle_AIS2D_HSequenceOfPrimArchit*)nativeHandle))->Append(*((Handle_AIS2D_PrimitiveArchit*)anItem->Handle));
}

 void OCAIS2D_HSequenceOfPrimArchit::Append(OCNaroWrappers::OCAIS2D_HSequenceOfPrimArchit^ aSequence)
{
  (*((Handle_AIS2D_HSequenceOfPrimArchit*)nativeHandle))->Append(*((Handle_AIS2D_HSequenceOfPrimArchit*)aSequence->Handle));
}

 void OCAIS2D_HSequenceOfPrimArchit::Prepend(OCNaroWrappers::OCAIS2D_PrimitiveArchit^ anItem)
{
  (*((Handle_AIS2D_HSequenceOfPrimArchit*)nativeHandle))->Prepend(*((Handle_AIS2D_PrimitiveArchit*)anItem->Handle));
}

 void OCAIS2D_HSequenceOfPrimArchit::Prepend(OCNaroWrappers::OCAIS2D_HSequenceOfPrimArchit^ aSequence)
{
  (*((Handle_AIS2D_HSequenceOfPrimArchit*)nativeHandle))->Prepend(*((Handle_AIS2D_HSequenceOfPrimArchit*)aSequence->Handle));
}

 void OCAIS2D_HSequenceOfPrimArchit::Reverse()
{
  (*((Handle_AIS2D_HSequenceOfPrimArchit*)nativeHandle))->Reverse();
}

 void OCAIS2D_HSequenceOfPrimArchit::InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCAIS2D_PrimitiveArchit^ anItem)
{
  (*((Handle_AIS2D_HSequenceOfPrimArchit*)nativeHandle))->InsertBefore(anIndex, *((Handle_AIS2D_PrimitiveArchit*)anItem->Handle));
}

 void OCAIS2D_HSequenceOfPrimArchit::InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCAIS2D_HSequenceOfPrimArchit^ aSequence)
{
  (*((Handle_AIS2D_HSequenceOfPrimArchit*)nativeHandle))->InsertBefore(anIndex, *((Handle_AIS2D_HSequenceOfPrimArchit*)aSequence->Handle));
}

 void OCAIS2D_HSequenceOfPrimArchit::InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCAIS2D_PrimitiveArchit^ anItem)
{
  (*((Handle_AIS2D_HSequenceOfPrimArchit*)nativeHandle))->InsertAfter(anIndex, *((Handle_AIS2D_PrimitiveArchit*)anItem->Handle));
}

 void OCAIS2D_HSequenceOfPrimArchit::InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCAIS2D_HSequenceOfPrimArchit^ aSequence)
{
  (*((Handle_AIS2D_HSequenceOfPrimArchit*)nativeHandle))->InsertAfter(anIndex, *((Handle_AIS2D_HSequenceOfPrimArchit*)aSequence->Handle));
}

 void OCAIS2D_HSequenceOfPrimArchit::Exchange(Standard_Integer anIndex, Standard_Integer anOtherIndex)
{
  (*((Handle_AIS2D_HSequenceOfPrimArchit*)nativeHandle))->Exchange(anIndex, anOtherIndex);
}

OCAIS2D_HSequenceOfPrimArchit^ OCAIS2D_HSequenceOfPrimArchit::Split(Standard_Integer anIndex)
{
  Handle(AIS2D_HSequenceOfPrimArchit) tmp = (*((Handle_AIS2D_HSequenceOfPrimArchit*)nativeHandle))->Split(anIndex);
  return gcnew OCAIS2D_HSequenceOfPrimArchit(&tmp);
}

 void OCAIS2D_HSequenceOfPrimArchit::SetValue(Standard_Integer anIndex, OCNaroWrappers::OCAIS2D_PrimitiveArchit^ anItem)
{
  (*((Handle_AIS2D_HSequenceOfPrimArchit*)nativeHandle))->SetValue(anIndex, *((Handle_AIS2D_PrimitiveArchit*)anItem->Handle));
}

OCAIS2D_PrimitiveArchit^ OCAIS2D_HSequenceOfPrimArchit::Value(Standard_Integer anIndex)
{
  Handle(AIS2D_PrimitiveArchit) tmp = (*((Handle_AIS2D_HSequenceOfPrimArchit*)nativeHandle))->Value(anIndex);
  return gcnew OCAIS2D_PrimitiveArchit(&tmp);
}

OCAIS2D_PrimitiveArchit^ OCAIS2D_HSequenceOfPrimArchit::ChangeValue(Standard_Integer anIndex)
{
  Handle(AIS2D_PrimitiveArchit) tmp = (*((Handle_AIS2D_HSequenceOfPrimArchit*)nativeHandle))->ChangeValue(anIndex);
  return gcnew OCAIS2D_PrimitiveArchit(&tmp);
}

 void OCAIS2D_HSequenceOfPrimArchit::Remove(Standard_Integer anIndex)
{
  (*((Handle_AIS2D_HSequenceOfPrimArchit*)nativeHandle))->Remove(anIndex);
}

 void OCAIS2D_HSequenceOfPrimArchit::Remove(Standard_Integer fromIndex, Standard_Integer toIndex)
{
  (*((Handle_AIS2D_HSequenceOfPrimArchit*)nativeHandle))->Remove(fromIndex, toIndex);
}

OCAIS2D_SequenceOfPrimArchit^ OCAIS2D_HSequenceOfPrimArchit::Sequence()
{
  AIS2D_SequenceOfPrimArchit* tmp = new AIS2D_SequenceOfPrimArchit();
  *tmp = (*((Handle_AIS2D_HSequenceOfPrimArchit*)nativeHandle))->Sequence();
  return gcnew OCAIS2D_SequenceOfPrimArchit(tmp);
}

OCAIS2D_SequenceOfPrimArchit^ OCAIS2D_HSequenceOfPrimArchit::ChangeSequence()
{
  AIS2D_SequenceOfPrimArchit* tmp = new AIS2D_SequenceOfPrimArchit();
  *tmp = (*((Handle_AIS2D_HSequenceOfPrimArchit*)nativeHandle))->ChangeSequence();
  return gcnew OCAIS2D_SequenceOfPrimArchit(tmp);
}

OCAIS2D_HSequenceOfPrimArchit^ OCAIS2D_HSequenceOfPrimArchit::ShallowCopy()
{
  Handle(AIS2D_HSequenceOfPrimArchit) tmp = (*((Handle_AIS2D_HSequenceOfPrimArchit*)nativeHandle))->ShallowCopy();
  return gcnew OCAIS2D_HSequenceOfPrimArchit(&tmp);
}


