// File generated by CPPExt (CPP file)
//

#include "TColStd_SequenceOfExtendedString.h"
#include "../Converter.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "TColStd_SequenceNodeOfSequenceOfExtendedString.h"


using namespace OCNaroWrappers;

OCTColStd_SequenceOfExtendedString::OCTColStd_SequenceOfExtendedString(TColStd_SequenceOfExtendedString* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTColStd_SequenceOfExtendedString::OCTColStd_SequenceOfExtendedString() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new TColStd_SequenceOfExtendedString();
}

OCTColStd_SequenceOfExtendedString^ OCTColStd_SequenceOfExtendedString::Assign(OCNaroWrappers::OCTColStd_SequenceOfExtendedString^ Other)
{
  TColStd_SequenceOfExtendedString* tmp = new TColStd_SequenceOfExtendedString();
  *tmp = ((TColStd_SequenceOfExtendedString*)nativeHandle)->Assign(*((TColStd_SequenceOfExtendedString*)Other->Handle));
  return gcnew OCTColStd_SequenceOfExtendedString(tmp);
}

 void OCTColStd_SequenceOfExtendedString::Append(OCNaroWrappers::OCTCollection_ExtendedString^ T)
{
  ((TColStd_SequenceOfExtendedString*)nativeHandle)->Append(*((TCollection_ExtendedString*)T->Handle));
}

 void OCTColStd_SequenceOfExtendedString::Append(OCNaroWrappers::OCTColStd_SequenceOfExtendedString^ S)
{
  ((TColStd_SequenceOfExtendedString*)nativeHandle)->Append(*((TColStd_SequenceOfExtendedString*)S->Handle));
}

 void OCTColStd_SequenceOfExtendedString::Prepend(OCNaroWrappers::OCTCollection_ExtendedString^ T)
{
  ((TColStd_SequenceOfExtendedString*)nativeHandle)->Prepend(*((TCollection_ExtendedString*)T->Handle));
}

 void OCTColStd_SequenceOfExtendedString::Prepend(OCNaroWrappers::OCTColStd_SequenceOfExtendedString^ S)
{
  ((TColStd_SequenceOfExtendedString*)nativeHandle)->Prepend(*((TColStd_SequenceOfExtendedString*)S->Handle));
}

 void OCTColStd_SequenceOfExtendedString::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTCollection_ExtendedString^ T)
{
  ((TColStd_SequenceOfExtendedString*)nativeHandle)->InsertBefore(Index, *((TCollection_ExtendedString*)T->Handle));
}

 void OCTColStd_SequenceOfExtendedString::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfExtendedString^ S)
{
  ((TColStd_SequenceOfExtendedString*)nativeHandle)->InsertBefore(Index, *((TColStd_SequenceOfExtendedString*)S->Handle));
}

 void OCTColStd_SequenceOfExtendedString::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTCollection_ExtendedString^ T)
{
  ((TColStd_SequenceOfExtendedString*)nativeHandle)->InsertAfter(Index, *((TCollection_ExtendedString*)T->Handle));
}

 void OCTColStd_SequenceOfExtendedString::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfExtendedString^ S)
{
  ((TColStd_SequenceOfExtendedString*)nativeHandle)->InsertAfter(Index, *((TColStd_SequenceOfExtendedString*)S->Handle));
}

OCTCollection_ExtendedString^ OCTColStd_SequenceOfExtendedString::First()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = ((TColStd_SequenceOfExtendedString*)nativeHandle)->First();
  return gcnew OCTCollection_ExtendedString(tmp);
}

OCTCollection_ExtendedString^ OCTColStd_SequenceOfExtendedString::Last()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = ((TColStd_SequenceOfExtendedString*)nativeHandle)->Last();
  return gcnew OCTCollection_ExtendedString(tmp);
}

 void OCTColStd_SequenceOfExtendedString::Split(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfExtendedString^ Sub)
{
  ((TColStd_SequenceOfExtendedString*)nativeHandle)->Split(Index, *((TColStd_SequenceOfExtendedString*)Sub->Handle));
}

OCTCollection_ExtendedString^ OCTColStd_SequenceOfExtendedString::Value(Standard_Integer Index)
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = ((TColStd_SequenceOfExtendedString*)nativeHandle)->Value(Index);
  return gcnew OCTCollection_ExtendedString(tmp);
}

 void OCTColStd_SequenceOfExtendedString::SetValue(Standard_Integer Index, OCNaroWrappers::OCTCollection_ExtendedString^ I)
{
  ((TColStd_SequenceOfExtendedString*)nativeHandle)->SetValue(Index, *((TCollection_ExtendedString*)I->Handle));
}

OCTCollection_ExtendedString^ OCTColStd_SequenceOfExtendedString::ChangeValue(Standard_Integer Index)
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = ((TColStd_SequenceOfExtendedString*)nativeHandle)->ChangeValue(Index);
  return gcnew OCTCollection_ExtendedString(tmp);
}

 void OCTColStd_SequenceOfExtendedString::Remove(Standard_Integer Index)
{
  ((TColStd_SequenceOfExtendedString*)nativeHandle)->Remove(Index);
}

 void OCTColStd_SequenceOfExtendedString::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((TColStd_SequenceOfExtendedString*)nativeHandle)->Remove(FromIndex, ToIndex);
}


