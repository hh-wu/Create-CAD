// File generated by CPPExt (CPP file)
//

#include "BRepBlend_SequenceOfPointOnRst.h"
#include "../Converter.h"
#include "BRepBlend_PointOnRst.h"
#include "BRepBlend_SequenceNodeOfSequenceOfPointOnRst.h"


using namespace OCNaroWrappers;

OCBRepBlend_SequenceOfPointOnRst::OCBRepBlend_SequenceOfPointOnRst(BRepBlend_SequenceOfPointOnRst* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepBlend_SequenceOfPointOnRst::OCBRepBlend_SequenceOfPointOnRst() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new BRepBlend_SequenceOfPointOnRst();
}

OCBRepBlend_SequenceOfPointOnRst^ OCBRepBlend_SequenceOfPointOnRst::Assign(OCNaroWrappers::OCBRepBlend_SequenceOfPointOnRst^ Other)
{
  BRepBlend_SequenceOfPointOnRst* tmp = new BRepBlend_SequenceOfPointOnRst();
  *tmp = ((BRepBlend_SequenceOfPointOnRst*)nativeHandle)->Assign(*((BRepBlend_SequenceOfPointOnRst*)Other->Handle));
  return gcnew OCBRepBlend_SequenceOfPointOnRst(tmp);
}

 void OCBRepBlend_SequenceOfPointOnRst::Append(OCNaroWrappers::OCBRepBlend_PointOnRst^ T)
{
  ((BRepBlend_SequenceOfPointOnRst*)nativeHandle)->Append(*((BRepBlend_PointOnRst*)T->Handle));
}

 void OCBRepBlend_SequenceOfPointOnRst::Append(OCNaroWrappers::OCBRepBlend_SequenceOfPointOnRst^ S)
{
  ((BRepBlend_SequenceOfPointOnRst*)nativeHandle)->Append(*((BRepBlend_SequenceOfPointOnRst*)S->Handle));
}

 void OCBRepBlend_SequenceOfPointOnRst::Prepend(OCNaroWrappers::OCBRepBlend_PointOnRst^ T)
{
  ((BRepBlend_SequenceOfPointOnRst*)nativeHandle)->Prepend(*((BRepBlend_PointOnRst*)T->Handle));
}

 void OCBRepBlend_SequenceOfPointOnRst::Prepend(OCNaroWrappers::OCBRepBlend_SequenceOfPointOnRst^ S)
{
  ((BRepBlend_SequenceOfPointOnRst*)nativeHandle)->Prepend(*((BRepBlend_SequenceOfPointOnRst*)S->Handle));
}

 void OCBRepBlend_SequenceOfPointOnRst::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCBRepBlend_PointOnRst^ T)
{
  ((BRepBlend_SequenceOfPointOnRst*)nativeHandle)->InsertBefore(Index, *((BRepBlend_PointOnRst*)T->Handle));
}

 void OCBRepBlend_SequenceOfPointOnRst::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCBRepBlend_SequenceOfPointOnRst^ S)
{
  ((BRepBlend_SequenceOfPointOnRst*)nativeHandle)->InsertBefore(Index, *((BRepBlend_SequenceOfPointOnRst*)S->Handle));
}

 void OCBRepBlend_SequenceOfPointOnRst::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCBRepBlend_PointOnRst^ T)
{
  ((BRepBlend_SequenceOfPointOnRst*)nativeHandle)->InsertAfter(Index, *((BRepBlend_PointOnRst*)T->Handle));
}

 void OCBRepBlend_SequenceOfPointOnRst::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCBRepBlend_SequenceOfPointOnRst^ S)
{
  ((BRepBlend_SequenceOfPointOnRst*)nativeHandle)->InsertAfter(Index, *((BRepBlend_SequenceOfPointOnRst*)S->Handle));
}

OCBRepBlend_PointOnRst^ OCBRepBlend_SequenceOfPointOnRst::First()
{
  BRepBlend_PointOnRst* tmp = new BRepBlend_PointOnRst();
  *tmp = ((BRepBlend_SequenceOfPointOnRst*)nativeHandle)->First();
  return gcnew OCBRepBlend_PointOnRst(tmp);
}

OCBRepBlend_PointOnRst^ OCBRepBlend_SequenceOfPointOnRst::Last()
{
  BRepBlend_PointOnRst* tmp = new BRepBlend_PointOnRst();
  *tmp = ((BRepBlend_SequenceOfPointOnRst*)nativeHandle)->Last();
  return gcnew OCBRepBlend_PointOnRst(tmp);
}

 void OCBRepBlend_SequenceOfPointOnRst::Split(Standard_Integer Index, OCNaroWrappers::OCBRepBlend_SequenceOfPointOnRst^ Sub)
{
  ((BRepBlend_SequenceOfPointOnRst*)nativeHandle)->Split(Index, *((BRepBlend_SequenceOfPointOnRst*)Sub->Handle));
}

OCBRepBlend_PointOnRst^ OCBRepBlend_SequenceOfPointOnRst::Value(Standard_Integer Index)
{
  BRepBlend_PointOnRst* tmp = new BRepBlend_PointOnRst();
  *tmp = ((BRepBlend_SequenceOfPointOnRst*)nativeHandle)->Value(Index);
  return gcnew OCBRepBlend_PointOnRst(tmp);
}

 void OCBRepBlend_SequenceOfPointOnRst::SetValue(Standard_Integer Index, OCNaroWrappers::OCBRepBlend_PointOnRst^ I)
{
  ((BRepBlend_SequenceOfPointOnRst*)nativeHandle)->SetValue(Index, *((BRepBlend_PointOnRst*)I->Handle));
}

OCBRepBlend_PointOnRst^ OCBRepBlend_SequenceOfPointOnRst::ChangeValue(Standard_Integer Index)
{
  BRepBlend_PointOnRst* tmp = new BRepBlend_PointOnRst();
  *tmp = ((BRepBlend_SequenceOfPointOnRst*)nativeHandle)->ChangeValue(Index);
  return gcnew OCBRepBlend_PointOnRst(tmp);
}

 void OCBRepBlend_SequenceOfPointOnRst::Remove(Standard_Integer Index)
{
  ((BRepBlend_SequenceOfPointOnRst*)nativeHandle)->Remove(Index);
}

 void OCBRepBlend_SequenceOfPointOnRst::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((BRepBlend_SequenceOfPointOnRst*)nativeHandle)->Remove(FromIndex, ToIndex);
}


