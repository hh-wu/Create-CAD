// File generated by CPPExt (CPP file)
//

#include "Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC.h"
#include "../Converter.h"
#include "Extrema_POnCurv.h"
#include "Extrema_SequenceNodeOfSeqPOnCOfCCLocFOfLocECCOfLocateExtCC.h"


using namespace OCNaroWrappers;

OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC::OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC(Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC::OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC();
}

OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC^ OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC::Assign(OCNaroWrappers::OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC^ Other)
{
  Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC* tmp = new Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC();
  *tmp = ((Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC*)nativeHandle)->Assign(*((Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC*)Other->Handle));
  return gcnew OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC(tmp);
}

 void OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC::Append(OCNaroWrappers::OCExtrema_POnCurv^ T)
{
  ((Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC*)nativeHandle)->Append(*((Extrema_POnCurv*)T->Handle));
}

 void OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC::Append(OCNaroWrappers::OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC^ S)
{
  ((Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC*)nativeHandle)->Append(*((Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC*)S->Handle));
}

 void OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC::Prepend(OCNaroWrappers::OCExtrema_POnCurv^ T)
{
  ((Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC*)nativeHandle)->Prepend(*((Extrema_POnCurv*)T->Handle));
}

 void OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC::Prepend(OCNaroWrappers::OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC^ S)
{
  ((Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC*)nativeHandle)->Prepend(*((Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC*)S->Handle));
}

 void OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCExtrema_POnCurv^ T)
{
  ((Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC*)nativeHandle)->InsertBefore(Index, *((Extrema_POnCurv*)T->Handle));
}

 void OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC^ S)
{
  ((Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC*)nativeHandle)->InsertBefore(Index, *((Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC*)S->Handle));
}

 void OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCExtrema_POnCurv^ T)
{
  ((Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC*)nativeHandle)->InsertAfter(Index, *((Extrema_POnCurv*)T->Handle));
}

 void OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC^ S)
{
  ((Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC*)nativeHandle)->InsertAfter(Index, *((Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC*)S->Handle));
}

OCExtrema_POnCurv^ OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC::First()
{
  Extrema_POnCurv* tmp = new Extrema_POnCurv();
  *tmp = ((Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC*)nativeHandle)->First();
  return gcnew OCExtrema_POnCurv(tmp);
}

OCExtrema_POnCurv^ OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC::Last()
{
  Extrema_POnCurv* tmp = new Extrema_POnCurv();
  *tmp = ((Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC*)nativeHandle)->Last();
  return gcnew OCExtrema_POnCurv(tmp);
}

 void OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC::Split(Standard_Integer Index, OCNaroWrappers::OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC^ Sub)
{
  ((Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC*)nativeHandle)->Split(Index, *((Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC*)Sub->Handle));
}

OCExtrema_POnCurv^ OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC::Value(Standard_Integer Index)
{
  Extrema_POnCurv* tmp = new Extrema_POnCurv();
  *tmp = ((Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC*)nativeHandle)->Value(Index);
  return gcnew OCExtrema_POnCurv(tmp);
}

 void OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC::SetValue(Standard_Integer Index, OCNaroWrappers::OCExtrema_POnCurv^ I)
{
  ((Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC*)nativeHandle)->SetValue(Index, *((Extrema_POnCurv*)I->Handle));
}

OCExtrema_POnCurv^ OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC::ChangeValue(Standard_Integer Index)
{
  Extrema_POnCurv* tmp = new Extrema_POnCurv();
  *tmp = ((Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC*)nativeHandle)->ChangeValue(Index);
  return gcnew OCExtrema_POnCurv(tmp);
}

 void OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC::Remove(Standard_Integer Index)
{
  ((Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC*)nativeHandle)->Remove(Index);
}

 void OCExtrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((Extrema_SeqPOnCOfCCLocFOfLocECCOfLocateExtCC*)nativeHandle)->Remove(FromIndex, ToIndex);
}

