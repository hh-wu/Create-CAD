// File generated by CPPExt (CPP file)
//

#include "Aspect_SequenceOfColorMapEntry.h"
#include "../Converter.h"
#include "Aspect_ColorMapEntry.h"
#include "Aspect_SequenceNodeOfSequenceOfColorMapEntry.h"


using namespace OCNaroWrappers;

OCAspect_SequenceOfColorMapEntry::OCAspect_SequenceOfColorMapEntry(Aspect_SequenceOfColorMapEntry* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCAspect_SequenceOfColorMapEntry::OCAspect_SequenceOfColorMapEntry() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new Aspect_SequenceOfColorMapEntry();
}

OCAspect_SequenceOfColorMapEntry^ OCAspect_SequenceOfColorMapEntry::Assign(OCNaroWrappers::OCAspect_SequenceOfColorMapEntry^ Other)
{
  Aspect_SequenceOfColorMapEntry* tmp = new Aspect_SequenceOfColorMapEntry();
  *tmp = ((Aspect_SequenceOfColorMapEntry*)nativeHandle)->Assign(*((Aspect_SequenceOfColorMapEntry*)Other->Handle));
  return gcnew OCAspect_SequenceOfColorMapEntry(tmp);
}

 void OCAspect_SequenceOfColorMapEntry::Append(OCNaroWrappers::OCAspect_ColorMapEntry^ T)
{
  ((Aspect_SequenceOfColorMapEntry*)nativeHandle)->Append(*((Aspect_ColorMapEntry*)T->Handle));
}

 void OCAspect_SequenceOfColorMapEntry::Append(OCNaroWrappers::OCAspect_SequenceOfColorMapEntry^ S)
{
  ((Aspect_SequenceOfColorMapEntry*)nativeHandle)->Append(*((Aspect_SequenceOfColorMapEntry*)S->Handle));
}

 void OCAspect_SequenceOfColorMapEntry::Prepend(OCNaroWrappers::OCAspect_ColorMapEntry^ T)
{
  ((Aspect_SequenceOfColorMapEntry*)nativeHandle)->Prepend(*((Aspect_ColorMapEntry*)T->Handle));
}

 void OCAspect_SequenceOfColorMapEntry::Prepend(OCNaroWrappers::OCAspect_SequenceOfColorMapEntry^ S)
{
  ((Aspect_SequenceOfColorMapEntry*)nativeHandle)->Prepend(*((Aspect_SequenceOfColorMapEntry*)S->Handle));
}

 void OCAspect_SequenceOfColorMapEntry::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCAspect_ColorMapEntry^ T)
{
  ((Aspect_SequenceOfColorMapEntry*)nativeHandle)->InsertBefore(Index, *((Aspect_ColorMapEntry*)T->Handle));
}

 void OCAspect_SequenceOfColorMapEntry::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCAspect_SequenceOfColorMapEntry^ S)
{
  ((Aspect_SequenceOfColorMapEntry*)nativeHandle)->InsertBefore(Index, *((Aspect_SequenceOfColorMapEntry*)S->Handle));
}

 void OCAspect_SequenceOfColorMapEntry::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCAspect_ColorMapEntry^ T)
{
  ((Aspect_SequenceOfColorMapEntry*)nativeHandle)->InsertAfter(Index, *((Aspect_ColorMapEntry*)T->Handle));
}

 void OCAspect_SequenceOfColorMapEntry::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCAspect_SequenceOfColorMapEntry^ S)
{
  ((Aspect_SequenceOfColorMapEntry*)nativeHandle)->InsertAfter(Index, *((Aspect_SequenceOfColorMapEntry*)S->Handle));
}

OCAspect_ColorMapEntry^ OCAspect_SequenceOfColorMapEntry::First()
{
  Aspect_ColorMapEntry* tmp = new Aspect_ColorMapEntry();
  *tmp = ((Aspect_SequenceOfColorMapEntry*)nativeHandle)->First();
  return gcnew OCAspect_ColorMapEntry(tmp);
}

OCAspect_ColorMapEntry^ OCAspect_SequenceOfColorMapEntry::Last()
{
  Aspect_ColorMapEntry* tmp = new Aspect_ColorMapEntry();
  *tmp = ((Aspect_SequenceOfColorMapEntry*)nativeHandle)->Last();
  return gcnew OCAspect_ColorMapEntry(tmp);
}

 void OCAspect_SequenceOfColorMapEntry::Split(Standard_Integer Index, OCNaroWrappers::OCAspect_SequenceOfColorMapEntry^ Sub)
{
  ((Aspect_SequenceOfColorMapEntry*)nativeHandle)->Split(Index, *((Aspect_SequenceOfColorMapEntry*)Sub->Handle));
}

OCAspect_ColorMapEntry^ OCAspect_SequenceOfColorMapEntry::Value(Standard_Integer Index)
{
  Aspect_ColorMapEntry* tmp = new Aspect_ColorMapEntry();
  *tmp = ((Aspect_SequenceOfColorMapEntry*)nativeHandle)->Value(Index);
  return gcnew OCAspect_ColorMapEntry(tmp);
}

 void OCAspect_SequenceOfColorMapEntry::SetValue(Standard_Integer Index, OCNaroWrappers::OCAspect_ColorMapEntry^ I)
{
  ((Aspect_SequenceOfColorMapEntry*)nativeHandle)->SetValue(Index, *((Aspect_ColorMapEntry*)I->Handle));
}

OCAspect_ColorMapEntry^ OCAspect_SequenceOfColorMapEntry::ChangeValue(Standard_Integer Index)
{
  Aspect_ColorMapEntry* tmp = new Aspect_ColorMapEntry();
  *tmp = ((Aspect_SequenceOfColorMapEntry*)nativeHandle)->ChangeValue(Index);
  return gcnew OCAspect_ColorMapEntry(tmp);
}

 void OCAspect_SequenceOfColorMapEntry::Remove(Standard_Integer Index)
{
  ((Aspect_SequenceOfColorMapEntry*)nativeHandle)->Remove(Index);
}

 void OCAspect_SequenceOfColorMapEntry::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((Aspect_SequenceOfColorMapEntry*)nativeHandle)->Remove(FromIndex, ToIndex);
}


