// File generated by CPPExt (CPP file)
//

#include "Graphic3d_HSetOfGroup.h"
#include "../Converter.h"
#include "Graphic3d_Group.h"
#include "Graphic3d_SetOfGroup.h"


using namespace OCNaroWrappers;

OCGraphic3d_HSetOfGroup::OCGraphic3d_HSetOfGroup(Handle(Graphic3d_HSetOfGroup)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Graphic3d_HSetOfGroup(*nativeHandle);
}

OCGraphic3d_HSetOfGroup::OCGraphic3d_HSetOfGroup() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Graphic3d_HSetOfGroup(new Graphic3d_HSetOfGroup());
}

 Standard_Integer OCGraphic3d_HSetOfGroup::Extent()
{
  return (*((Handle_Graphic3d_HSetOfGroup*)nativeHandle))->Extent();
}

 System::Boolean OCGraphic3d_HSetOfGroup::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Graphic3d_HSetOfGroup*)nativeHandle))->IsEmpty());
}

 void OCGraphic3d_HSetOfGroup::Clear()
{
  (*((Handle_Graphic3d_HSetOfGroup*)nativeHandle))->Clear();
}

 System::Boolean OCGraphic3d_HSetOfGroup::Add(OCNaroWrappers::OCGraphic3d_Group^ T)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Graphic3d_HSetOfGroup*)nativeHandle))->Add(*((Handle_Graphic3d_Group*)T->Handle)));
}

 System::Boolean OCGraphic3d_HSetOfGroup::Remove(OCNaroWrappers::OCGraphic3d_Group^ T)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Graphic3d_HSetOfGroup*)nativeHandle))->Remove(*((Handle_Graphic3d_Group*)T->Handle)));
}

OCGraphic3d_HSetOfGroup^ OCGraphic3d_HSetOfGroup::Union(OCNaroWrappers::OCGraphic3d_HSetOfGroup^ B)
{
  Handle(Graphic3d_HSetOfGroup) tmp = (*((Handle_Graphic3d_HSetOfGroup*)nativeHandle))->Union(*((Handle_Graphic3d_HSetOfGroup*)B->Handle));
  return gcnew OCGraphic3d_HSetOfGroup(&tmp);
}

OCGraphic3d_HSetOfGroup^ OCGraphic3d_HSetOfGroup::Intersection(OCNaroWrappers::OCGraphic3d_HSetOfGroup^ B)
{
  Handle(Graphic3d_HSetOfGroup) tmp = (*((Handle_Graphic3d_HSetOfGroup*)nativeHandle))->Intersection(*((Handle_Graphic3d_HSetOfGroup*)B->Handle));
  return gcnew OCGraphic3d_HSetOfGroup(&tmp);
}

OCGraphic3d_HSetOfGroup^ OCGraphic3d_HSetOfGroup::Difference(OCNaroWrappers::OCGraphic3d_HSetOfGroup^ B)
{
  Handle(Graphic3d_HSetOfGroup) tmp = (*((Handle_Graphic3d_HSetOfGroup*)nativeHandle))->Difference(*((Handle_Graphic3d_HSetOfGroup*)B->Handle));
  return gcnew OCGraphic3d_HSetOfGroup(&tmp);
}

 System::Boolean OCGraphic3d_HSetOfGroup::Contains(OCNaroWrappers::OCGraphic3d_Group^ T)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Graphic3d_HSetOfGroup*)nativeHandle))->Contains(*((Handle_Graphic3d_Group*)T->Handle)));
}

 System::Boolean OCGraphic3d_HSetOfGroup::IsASubset(OCNaroWrappers::OCGraphic3d_HSetOfGroup^ S)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Graphic3d_HSetOfGroup*)nativeHandle))->IsASubset(*((Handle_Graphic3d_HSetOfGroup*)S->Handle)));
}

 System::Boolean OCGraphic3d_HSetOfGroup::IsAProperSubset(OCNaroWrappers::OCGraphic3d_HSetOfGroup^ S)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Graphic3d_HSetOfGroup*)nativeHandle))->IsAProperSubset(*((Handle_Graphic3d_HSetOfGroup*)S->Handle)));
}

OCGraphic3d_HSetOfGroup^ OCGraphic3d_HSetOfGroup::ShallowCopy()
{
  Handle(Graphic3d_HSetOfGroup) tmp = (*((Handle_Graphic3d_HSetOfGroup*)nativeHandle))->ShallowCopy();
  return gcnew OCGraphic3d_HSetOfGroup(&tmp);
}

OCGraphic3d_SetOfGroup^ OCGraphic3d_HSetOfGroup::Set()
{
  Graphic3d_SetOfGroup* tmp = new Graphic3d_SetOfGroup();
  *tmp = (*((Handle_Graphic3d_HSetOfGroup*)nativeHandle))->Set();
  return gcnew OCGraphic3d_SetOfGroup(tmp);
}

OCGraphic3d_SetOfGroup^ OCGraphic3d_HSetOfGroup::ChangeSet()
{
  Graphic3d_SetOfGroup* tmp = new Graphic3d_SetOfGroup();
  *tmp = (*((Handle_Graphic3d_HSetOfGroup*)nativeHandle))->ChangeSet();
  return gcnew OCGraphic3d_SetOfGroup(tmp);
}


