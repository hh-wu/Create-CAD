// File generated by CPPExt (CPP file)
//

#include "Graphic3d_SequenceOfGroup.h"
#include "../Converter.h"
#include "Graphic3d_Group.h"
#include "Graphic3d_SequenceNodeOfSequenceOfGroup.h"


using namespace OCNaroWrappers;

OCGraphic3d_SequenceOfGroup::OCGraphic3d_SequenceOfGroup(Graphic3d_SequenceOfGroup* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCGraphic3d_SequenceOfGroup::OCGraphic3d_SequenceOfGroup() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new Graphic3d_SequenceOfGroup();
}

OCGraphic3d_SequenceOfGroup^ OCGraphic3d_SequenceOfGroup::Assign(OCNaroWrappers::OCGraphic3d_SequenceOfGroup^ Other)
{
  Graphic3d_SequenceOfGroup* tmp = new Graphic3d_SequenceOfGroup();
  *tmp = ((Graphic3d_SequenceOfGroup*)nativeHandle)->Assign(*((Graphic3d_SequenceOfGroup*)Other->Handle));
  return gcnew OCGraphic3d_SequenceOfGroup(tmp);
}

 void OCGraphic3d_SequenceOfGroup::Append(OCNaroWrappers::OCGraphic3d_Group^ T)
{
  ((Graphic3d_SequenceOfGroup*)nativeHandle)->Append(*((Handle_Graphic3d_Group*)T->Handle));
}

 void OCGraphic3d_SequenceOfGroup::Append(OCNaroWrappers::OCGraphic3d_SequenceOfGroup^ S)
{
  ((Graphic3d_SequenceOfGroup*)nativeHandle)->Append(*((Graphic3d_SequenceOfGroup*)S->Handle));
}

 void OCGraphic3d_SequenceOfGroup::Prepend(OCNaroWrappers::OCGraphic3d_Group^ T)
{
  ((Graphic3d_SequenceOfGroup*)nativeHandle)->Prepend(*((Handle_Graphic3d_Group*)T->Handle));
}

 void OCGraphic3d_SequenceOfGroup::Prepend(OCNaroWrappers::OCGraphic3d_SequenceOfGroup^ S)
{
  ((Graphic3d_SequenceOfGroup*)nativeHandle)->Prepend(*((Graphic3d_SequenceOfGroup*)S->Handle));
}

 void OCGraphic3d_SequenceOfGroup::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCGraphic3d_Group^ T)
{
  ((Graphic3d_SequenceOfGroup*)nativeHandle)->InsertBefore(Index, *((Handle_Graphic3d_Group*)T->Handle));
}

 void OCGraphic3d_SequenceOfGroup::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCGraphic3d_SequenceOfGroup^ S)
{
  ((Graphic3d_SequenceOfGroup*)nativeHandle)->InsertBefore(Index, *((Graphic3d_SequenceOfGroup*)S->Handle));
}

 void OCGraphic3d_SequenceOfGroup::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCGraphic3d_Group^ T)
{
  ((Graphic3d_SequenceOfGroup*)nativeHandle)->InsertAfter(Index, *((Handle_Graphic3d_Group*)T->Handle));
}

 void OCGraphic3d_SequenceOfGroup::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCGraphic3d_SequenceOfGroup^ S)
{
  ((Graphic3d_SequenceOfGroup*)nativeHandle)->InsertAfter(Index, *((Graphic3d_SequenceOfGroup*)S->Handle));
}

OCGraphic3d_Group^ OCGraphic3d_SequenceOfGroup::First()
{
  Handle(Graphic3d_Group) tmp = ((Graphic3d_SequenceOfGroup*)nativeHandle)->First();
  return gcnew OCGraphic3d_Group(&tmp);
}

OCGraphic3d_Group^ OCGraphic3d_SequenceOfGroup::Last()
{
  Handle(Graphic3d_Group) tmp = ((Graphic3d_SequenceOfGroup*)nativeHandle)->Last();
  return gcnew OCGraphic3d_Group(&tmp);
}

 void OCGraphic3d_SequenceOfGroup::Split(Standard_Integer Index, OCNaroWrappers::OCGraphic3d_SequenceOfGroup^ Sub)
{
  ((Graphic3d_SequenceOfGroup*)nativeHandle)->Split(Index, *((Graphic3d_SequenceOfGroup*)Sub->Handle));
}

OCGraphic3d_Group^ OCGraphic3d_SequenceOfGroup::Value(Standard_Integer Index)
{
  Handle(Graphic3d_Group) tmp = ((Graphic3d_SequenceOfGroup*)nativeHandle)->Value(Index);
  return gcnew OCGraphic3d_Group(&tmp);
}

 void OCGraphic3d_SequenceOfGroup::SetValue(Standard_Integer Index, OCNaroWrappers::OCGraphic3d_Group^ I)
{
  ((Graphic3d_SequenceOfGroup*)nativeHandle)->SetValue(Index, *((Handle_Graphic3d_Group*)I->Handle));
}

OCGraphic3d_Group^ OCGraphic3d_SequenceOfGroup::ChangeValue(Standard_Integer Index)
{
  Handle(Graphic3d_Group) tmp = ((Graphic3d_SequenceOfGroup*)nativeHandle)->ChangeValue(Index);
  return gcnew OCGraphic3d_Group(&tmp);
}

 void OCGraphic3d_SequenceOfGroup::Remove(Standard_Integer Index)
{
  ((Graphic3d_SequenceOfGroup*)nativeHandle)->Remove(Index);
}

 void OCGraphic3d_SequenceOfGroup::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((Graphic3d_SequenceOfGroup*)nativeHandle)->Remove(FromIndex, ToIndex);
}


