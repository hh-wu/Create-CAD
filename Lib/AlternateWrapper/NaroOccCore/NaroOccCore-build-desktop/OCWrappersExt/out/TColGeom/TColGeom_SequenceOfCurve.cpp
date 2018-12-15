// File generated by CPPExt (CPP file)
//

#include "TColGeom_SequenceOfCurve.h"
#include "../Converter.h"
#include "../Geom/Geom_Curve.h"
#include "TColGeom_SequenceNodeOfSequenceOfCurve.h"


using namespace OCNaroWrappers;

OCTColGeom_SequenceOfCurve::OCTColGeom_SequenceOfCurve(TColGeom_SequenceOfCurve* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTColGeom_SequenceOfCurve::OCTColGeom_SequenceOfCurve() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new TColGeom_SequenceOfCurve();
}

OCTColGeom_SequenceOfCurve^ OCTColGeom_SequenceOfCurve::Assign(OCNaroWrappers::OCTColGeom_SequenceOfCurve^ Other)
{
  TColGeom_SequenceOfCurve* tmp = new TColGeom_SequenceOfCurve();
  *tmp = ((TColGeom_SequenceOfCurve*)nativeHandle)->Assign(*((TColGeom_SequenceOfCurve*)Other->Handle));
  return gcnew OCTColGeom_SequenceOfCurve(tmp);
}

 void OCTColGeom_SequenceOfCurve::Append(OCNaroWrappers::OCGeom_Curve^ T)
{
  ((TColGeom_SequenceOfCurve*)nativeHandle)->Append(*((Handle_Geom_Curve*)T->Handle));
}

 void OCTColGeom_SequenceOfCurve::Append(OCNaroWrappers::OCTColGeom_SequenceOfCurve^ S)
{
  ((TColGeom_SequenceOfCurve*)nativeHandle)->Append(*((TColGeom_SequenceOfCurve*)S->Handle));
}

 void OCTColGeom_SequenceOfCurve::Prepend(OCNaroWrappers::OCGeom_Curve^ T)
{
  ((TColGeom_SequenceOfCurve*)nativeHandle)->Prepend(*((Handle_Geom_Curve*)T->Handle));
}

 void OCTColGeom_SequenceOfCurve::Prepend(OCNaroWrappers::OCTColGeom_SequenceOfCurve^ S)
{
  ((TColGeom_SequenceOfCurve*)nativeHandle)->Prepend(*((TColGeom_SequenceOfCurve*)S->Handle));
}

 void OCTColGeom_SequenceOfCurve::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCGeom_Curve^ T)
{
  ((TColGeom_SequenceOfCurve*)nativeHandle)->InsertBefore(Index, *((Handle_Geom_Curve*)T->Handle));
}

 void OCTColGeom_SequenceOfCurve::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTColGeom_SequenceOfCurve^ S)
{
  ((TColGeom_SequenceOfCurve*)nativeHandle)->InsertBefore(Index, *((TColGeom_SequenceOfCurve*)S->Handle));
}

 void OCTColGeom_SequenceOfCurve::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCGeom_Curve^ T)
{
  ((TColGeom_SequenceOfCurve*)nativeHandle)->InsertAfter(Index, *((Handle_Geom_Curve*)T->Handle));
}

 void OCTColGeom_SequenceOfCurve::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTColGeom_SequenceOfCurve^ S)
{
  ((TColGeom_SequenceOfCurve*)nativeHandle)->InsertAfter(Index, *((TColGeom_SequenceOfCurve*)S->Handle));
}

OCGeom_Curve^ OCTColGeom_SequenceOfCurve::First()
{
  Handle(Geom_Curve) tmp = ((TColGeom_SequenceOfCurve*)nativeHandle)->First();
  return gcnew OCGeom_Curve(&tmp);
}

OCGeom_Curve^ OCTColGeom_SequenceOfCurve::Last()
{
  Handle(Geom_Curve) tmp = ((TColGeom_SequenceOfCurve*)nativeHandle)->Last();
  return gcnew OCGeom_Curve(&tmp);
}

 void OCTColGeom_SequenceOfCurve::Split(Standard_Integer Index, OCNaroWrappers::OCTColGeom_SequenceOfCurve^ Sub)
{
  ((TColGeom_SequenceOfCurve*)nativeHandle)->Split(Index, *((TColGeom_SequenceOfCurve*)Sub->Handle));
}

OCGeom_Curve^ OCTColGeom_SequenceOfCurve::Value(Standard_Integer Index)
{
  Handle(Geom_Curve) tmp = ((TColGeom_SequenceOfCurve*)nativeHandle)->Value(Index);
  return gcnew OCGeom_Curve(&tmp);
}

 void OCTColGeom_SequenceOfCurve::SetValue(Standard_Integer Index, OCNaroWrappers::OCGeom_Curve^ I)
{
  ((TColGeom_SequenceOfCurve*)nativeHandle)->SetValue(Index, *((Handle_Geom_Curve*)I->Handle));
}

OCGeom_Curve^ OCTColGeom_SequenceOfCurve::ChangeValue(Standard_Integer Index)
{
  Handle(Geom_Curve) tmp = ((TColGeom_SequenceOfCurve*)nativeHandle)->ChangeValue(Index);
  return gcnew OCGeom_Curve(&tmp);
}

 void OCTColGeom_SequenceOfCurve::Remove(Standard_Integer Index)
{
  ((TColGeom_SequenceOfCurve*)nativeHandle)->Remove(Index);
}

 void OCTColGeom_SequenceOfCurve::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((TColGeom_SequenceOfCurve*)nativeHandle)->Remove(FromIndex, ToIndex);
}

