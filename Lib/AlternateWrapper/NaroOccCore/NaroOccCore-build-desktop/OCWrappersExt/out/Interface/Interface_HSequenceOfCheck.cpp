// File generated by CPPExt (CPP file)
//

#include "Interface_HSequenceOfCheck.h"
#include "../Converter.h"
#include "Interface_Check.h"
#include "Interface_SequenceOfCheck.h"


using namespace OCNaroWrappers;

OCInterface_HSequenceOfCheck::OCInterface_HSequenceOfCheck(Handle(Interface_HSequenceOfCheck)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Interface_HSequenceOfCheck(*nativeHandle);
}

OCInterface_HSequenceOfCheck::OCInterface_HSequenceOfCheck() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Interface_HSequenceOfCheck(new Interface_HSequenceOfCheck());
}

 System::Boolean OCInterface_HSequenceOfCheck::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Interface_HSequenceOfCheck*)nativeHandle))->IsEmpty());
}

 Standard_Integer OCInterface_HSequenceOfCheck::Length()
{
  return (*((Handle_Interface_HSequenceOfCheck*)nativeHandle))->Length();
}

 void OCInterface_HSequenceOfCheck::Clear()
{
  (*((Handle_Interface_HSequenceOfCheck*)nativeHandle))->Clear();
}

 void OCInterface_HSequenceOfCheck::Append(OCNaroWrappers::OCInterface_Check^ anItem)
{
  (*((Handle_Interface_HSequenceOfCheck*)nativeHandle))->Append(*((Handle_Interface_Check*)anItem->Handle));
}

 void OCInterface_HSequenceOfCheck::Append(OCNaroWrappers::OCInterface_HSequenceOfCheck^ aSequence)
{
  (*((Handle_Interface_HSequenceOfCheck*)nativeHandle))->Append(*((Handle_Interface_HSequenceOfCheck*)aSequence->Handle));
}

 void OCInterface_HSequenceOfCheck::Prepend(OCNaroWrappers::OCInterface_Check^ anItem)
{
  (*((Handle_Interface_HSequenceOfCheck*)nativeHandle))->Prepend(*((Handle_Interface_Check*)anItem->Handle));
}

 void OCInterface_HSequenceOfCheck::Prepend(OCNaroWrappers::OCInterface_HSequenceOfCheck^ aSequence)
{
  (*((Handle_Interface_HSequenceOfCheck*)nativeHandle))->Prepend(*((Handle_Interface_HSequenceOfCheck*)aSequence->Handle));
}

 void OCInterface_HSequenceOfCheck::Reverse()
{
  (*((Handle_Interface_HSequenceOfCheck*)nativeHandle))->Reverse();
}

 void OCInterface_HSequenceOfCheck::InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCInterface_Check^ anItem)
{
  (*((Handle_Interface_HSequenceOfCheck*)nativeHandle))->InsertBefore(anIndex, *((Handle_Interface_Check*)anItem->Handle));
}

 void OCInterface_HSequenceOfCheck::InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCInterface_HSequenceOfCheck^ aSequence)
{
  (*((Handle_Interface_HSequenceOfCheck*)nativeHandle))->InsertBefore(anIndex, *((Handle_Interface_HSequenceOfCheck*)aSequence->Handle));
}

 void OCInterface_HSequenceOfCheck::InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCInterface_Check^ anItem)
{
  (*((Handle_Interface_HSequenceOfCheck*)nativeHandle))->InsertAfter(anIndex, *((Handle_Interface_Check*)anItem->Handle));
}

 void OCInterface_HSequenceOfCheck::InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCInterface_HSequenceOfCheck^ aSequence)
{
  (*((Handle_Interface_HSequenceOfCheck*)nativeHandle))->InsertAfter(anIndex, *((Handle_Interface_HSequenceOfCheck*)aSequence->Handle));
}

 void OCInterface_HSequenceOfCheck::Exchange(Standard_Integer anIndex, Standard_Integer anOtherIndex)
{
  (*((Handle_Interface_HSequenceOfCheck*)nativeHandle))->Exchange(anIndex, anOtherIndex);
}

OCInterface_HSequenceOfCheck^ OCInterface_HSequenceOfCheck::Split(Standard_Integer anIndex)
{
  Handle(Interface_HSequenceOfCheck) tmp = (*((Handle_Interface_HSequenceOfCheck*)nativeHandle))->Split(anIndex);
  return gcnew OCInterface_HSequenceOfCheck(&tmp);
}

 void OCInterface_HSequenceOfCheck::SetValue(Standard_Integer anIndex, OCNaroWrappers::OCInterface_Check^ anItem)
{
  (*((Handle_Interface_HSequenceOfCheck*)nativeHandle))->SetValue(anIndex, *((Handle_Interface_Check*)anItem->Handle));
}

OCInterface_Check^ OCInterface_HSequenceOfCheck::Value(Standard_Integer anIndex)
{
  Handle(Interface_Check) tmp = (*((Handle_Interface_HSequenceOfCheck*)nativeHandle))->Value(anIndex);
  return gcnew OCInterface_Check(&tmp);
}

OCInterface_Check^ OCInterface_HSequenceOfCheck::ChangeValue(Standard_Integer anIndex)
{
  Handle(Interface_Check) tmp = (*((Handle_Interface_HSequenceOfCheck*)nativeHandle))->ChangeValue(anIndex);
  return gcnew OCInterface_Check(&tmp);
}

 void OCInterface_HSequenceOfCheck::Remove(Standard_Integer anIndex)
{
  (*((Handle_Interface_HSequenceOfCheck*)nativeHandle))->Remove(anIndex);
}

 void OCInterface_HSequenceOfCheck::Remove(Standard_Integer fromIndex, Standard_Integer toIndex)
{
  (*((Handle_Interface_HSequenceOfCheck*)nativeHandle))->Remove(fromIndex, toIndex);
}

OCInterface_SequenceOfCheck^ OCInterface_HSequenceOfCheck::Sequence()
{
  Interface_SequenceOfCheck* tmp = new Interface_SequenceOfCheck();
  *tmp = (*((Handle_Interface_HSequenceOfCheck*)nativeHandle))->Sequence();
  return gcnew OCInterface_SequenceOfCheck(tmp);
}

OCInterface_SequenceOfCheck^ OCInterface_HSequenceOfCheck::ChangeSequence()
{
  Interface_SequenceOfCheck* tmp = new Interface_SequenceOfCheck();
  *tmp = (*((Handle_Interface_HSequenceOfCheck*)nativeHandle))->ChangeSequence();
  return gcnew OCInterface_SequenceOfCheck(tmp);
}

OCInterface_HSequenceOfCheck^ OCInterface_HSequenceOfCheck::ShallowCopy()
{
  Handle(Interface_HSequenceOfCheck) tmp = (*((Handle_Interface_HSequenceOfCheck*)nativeHandle))->ShallowCopy();
  return gcnew OCInterface_HSequenceOfCheck(&tmp);
}


