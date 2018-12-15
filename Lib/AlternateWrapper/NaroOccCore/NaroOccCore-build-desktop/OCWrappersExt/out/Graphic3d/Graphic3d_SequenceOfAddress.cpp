// File generated by CPPExt (CPP file)
//

#include "Graphic3d_SequenceOfAddress.h"
#include "../Converter.h"
#include "Graphic3d_SequenceNodeOfSequenceOfAddress.h"


using namespace OCNaroWrappers;

OCGraphic3d_SequenceOfAddress::OCGraphic3d_SequenceOfAddress(Graphic3d_SequenceOfAddress* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCGraphic3d_SequenceOfAddress::OCGraphic3d_SequenceOfAddress() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new Graphic3d_SequenceOfAddress();
}

OCGraphic3d_SequenceOfAddress^ OCGraphic3d_SequenceOfAddress::Assign(OCNaroWrappers::OCGraphic3d_SequenceOfAddress^ Other)
{
  Graphic3d_SequenceOfAddress* tmp = new Graphic3d_SequenceOfAddress();
  *tmp = ((Graphic3d_SequenceOfAddress*)nativeHandle)->Assign(*((Graphic3d_SequenceOfAddress*)Other->Handle));
  return gcnew OCGraphic3d_SequenceOfAddress(tmp);
}

 void OCGraphic3d_SequenceOfAddress::Append(Standard_Address T)
{
  ((Graphic3d_SequenceOfAddress*)nativeHandle)->Append(T);
}

 void OCGraphic3d_SequenceOfAddress::Append(OCNaroWrappers::OCGraphic3d_SequenceOfAddress^ S)
{
  ((Graphic3d_SequenceOfAddress*)nativeHandle)->Append(*((Graphic3d_SequenceOfAddress*)S->Handle));
}

 void OCGraphic3d_SequenceOfAddress::Prepend(Standard_Address T)
{
  ((Graphic3d_SequenceOfAddress*)nativeHandle)->Prepend(T);
}

 void OCGraphic3d_SequenceOfAddress::Prepend(OCNaroWrappers::OCGraphic3d_SequenceOfAddress^ S)
{
  ((Graphic3d_SequenceOfAddress*)nativeHandle)->Prepend(*((Graphic3d_SequenceOfAddress*)S->Handle));
}

 void OCGraphic3d_SequenceOfAddress::InsertBefore(Standard_Integer Index, Standard_Address T)
{
  ((Graphic3d_SequenceOfAddress*)nativeHandle)->InsertBefore(Index, T);
}

 void OCGraphic3d_SequenceOfAddress::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCGraphic3d_SequenceOfAddress^ S)
{
  ((Graphic3d_SequenceOfAddress*)nativeHandle)->InsertBefore(Index, *((Graphic3d_SequenceOfAddress*)S->Handle));
}

 void OCGraphic3d_SequenceOfAddress::InsertAfter(Standard_Integer Index, Standard_Address T)
{
  ((Graphic3d_SequenceOfAddress*)nativeHandle)->InsertAfter(Index, T);
}

 void OCGraphic3d_SequenceOfAddress::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCGraphic3d_SequenceOfAddress^ S)
{
  ((Graphic3d_SequenceOfAddress*)nativeHandle)->InsertAfter(Index, *((Graphic3d_SequenceOfAddress*)S->Handle));
}

 Standard_Address OCGraphic3d_SequenceOfAddress::First()
{
  return ((Graphic3d_SequenceOfAddress*)nativeHandle)->First();
}

 Standard_Address OCGraphic3d_SequenceOfAddress::Last()
{
  return ((Graphic3d_SequenceOfAddress*)nativeHandle)->Last();
}

 void OCGraphic3d_SequenceOfAddress::Split(Standard_Integer Index, OCNaroWrappers::OCGraphic3d_SequenceOfAddress^ Sub)
{
  ((Graphic3d_SequenceOfAddress*)nativeHandle)->Split(Index, *((Graphic3d_SequenceOfAddress*)Sub->Handle));
}

 Standard_Address OCGraphic3d_SequenceOfAddress::Value(Standard_Integer Index)
{
  return ((Graphic3d_SequenceOfAddress*)nativeHandle)->Value(Index);
}

 void OCGraphic3d_SequenceOfAddress::SetValue(Standard_Integer Index, Standard_Address I)
{
  ((Graphic3d_SequenceOfAddress*)nativeHandle)->SetValue(Index, I);
}

 Standard_Address OCGraphic3d_SequenceOfAddress::ChangeValue(Standard_Integer Index)
{
  return ((Graphic3d_SequenceOfAddress*)nativeHandle)->ChangeValue(Index);
}

 void OCGraphic3d_SequenceOfAddress::Remove(Standard_Integer Index)
{
  ((Graphic3d_SequenceOfAddress*)nativeHandle)->Remove(Index);
}

 void OCGraphic3d_SequenceOfAddress::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((Graphic3d_SequenceOfAddress*)nativeHandle)->Remove(FromIndex, ToIndex);
}

