// File generated by CPPExt (CPP file)
//

#include "SelectMgr_SelectableObject.h"
#include "../Converter.h"
#include "../Prs3d/Prs3d_Presentation.h"
#include "SelectMgr_SelectionManager.h"
#include "SelectMgr_Selection.h"
#include "../PrsMgr/PrsMgr_PresentationManager3d.h"
#include "SelectMgr_SequenceOfOwner.h"
#include "SelectMgr_EntityOwner.h"
#include "../PrsMgr/PrsMgr_PresentationManager.h"


using namespace OCNaroWrappers;

OCSelectMgr_SelectableObject::OCSelectMgr_SelectableObject(Handle(SelectMgr_SelectableObject)* nativeHandle) : OCPrsMgr_PresentableObject((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_SelectMgr_SelectableObject(*nativeHandle);
}

OCSelectMgr_SelectableObject::OCSelectMgr_SelectableObject(OCPrsMgr_TypeOfPresentation3d aTypeOfPresentation3d) : OCPrsMgr_PresentableObject((OCDummy^)nullptr)

{}

 Standard_Integer OCSelectMgr_SelectableObject::NbPossibleSelection()
{
  return (*((Handle_SelectMgr_SelectableObject*)nativeHandle))->NbPossibleSelection();
}

 void OCSelectMgr_SelectableObject::UpdateSelection()
{
  (*((Handle_SelectMgr_SelectableObject*)nativeHandle))->UpdateSelection();
}

 void OCSelectMgr_SelectableObject::UpdateSelection(Standard_Integer aMode)
{
  (*((Handle_SelectMgr_SelectableObject*)nativeHandle))->UpdateSelection(aMode);
}

 void OCSelectMgr_SelectableObject::AddSelection(OCNaroWrappers::OCSelectMgr_Selection^ aSelection, Standard_Integer aMode)
{
  (*((Handle_SelectMgr_SelectableObject*)nativeHandle))->AddSelection(*((Handle_SelectMgr_Selection*)aSelection->Handle), aMode);
}

 void OCSelectMgr_SelectableObject::ClearSelections(System::Boolean update)
{
  (*((Handle_SelectMgr_SelectableObject*)nativeHandle))->ClearSelections(OCConverter::BooleanToStandardBoolean(update));
}

OCSelectMgr_Selection^ OCSelectMgr_SelectableObject::Selection(Standard_Integer aMode)
{
  Handle(SelectMgr_Selection) tmp = (*((Handle_SelectMgr_SelectableObject*)nativeHandle))->Selection(aMode);
  return gcnew OCSelectMgr_Selection(&tmp);
}

 System::Boolean OCSelectMgr_SelectableObject::HasSelection(Standard_Integer aMode)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_SelectMgr_SelectableObject*)nativeHandle))->HasSelection(aMode));
}

 void OCSelectMgr_SelectableObject::Init()
{
  (*((Handle_SelectMgr_SelectableObject*)nativeHandle))->Init();
}

 System::Boolean OCSelectMgr_SelectableObject::More()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_SelectMgr_SelectableObject*)nativeHandle))->More());
}

 void OCSelectMgr_SelectableObject::Next()
{
  (*((Handle_SelectMgr_SelectableObject*)nativeHandle))->Next();
}

OCSelectMgr_Selection^ OCSelectMgr_SelectableObject::CurrentSelection()
{
  Handle(SelectMgr_Selection) tmp = (*((Handle_SelectMgr_SelectableObject*)nativeHandle))->CurrentSelection();
  return gcnew OCSelectMgr_Selection(&tmp);
}

 void OCSelectMgr_SelectableObject::ResetLocation()
{
  (*((Handle_SelectMgr_SelectableObject*)nativeHandle))->ResetLocation();
}

 void OCSelectMgr_SelectableObject::UpdateLocation()
{
  (*((Handle_SelectMgr_SelectableObject*)nativeHandle))->UpdateLocation();
}

 void OCSelectMgr_SelectableObject::HilightSelected(OCNaroWrappers::OCPrsMgr_PresentationManager3d^ PM, OCNaroWrappers::OCSelectMgr_SequenceOfOwner^ Seq)
{
  (*((Handle_SelectMgr_SelectableObject*)nativeHandle))->HilightSelected(*((Handle_PrsMgr_PresentationManager3d*)PM->Handle), *((SelectMgr_SequenceOfOwner*)Seq->Handle));
}

 void OCSelectMgr_SelectableObject::ClearSelected()
{
  (*((Handle_SelectMgr_SelectableObject*)nativeHandle))->ClearSelected();
}

 void OCSelectMgr_SelectableObject::HilightOwnerWithColor(OCNaroWrappers::OCPrsMgr_PresentationManager3d^ thePM, OCQuantity_NameOfColor theColor, OCNaroWrappers::OCSelectMgr_EntityOwner^ theOwner)
{
  (*((Handle_SelectMgr_SelectableObject*)nativeHandle))->HilightOwnerWithColor(*((Handle_PrsMgr_PresentationManager3d*)thePM->Handle), (Quantity_NameOfColor)theColor, *((Handle_SelectMgr_EntityOwner*)theOwner->Handle));
}

 System::Boolean OCSelectMgr_SelectableObject::IsAutoHilight()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_SelectMgr_SelectableObject*)nativeHandle))->IsAutoHilight());
}

 void OCSelectMgr_SelectableObject::SetAutoHilight(System::Boolean newAutoHilight)
{
  (*((Handle_SelectMgr_SelectableObject*)nativeHandle))->SetAutoHilight(OCConverter::BooleanToStandardBoolean(newAutoHilight));
}

OCPrs3d_Presentation^ OCSelectMgr_SelectableObject::GetHilightPresentation(OCNaroWrappers::OCPrsMgr_PresentationManager3d^ TheMgr)
{
  Handle(Prs3d_Presentation) tmp = (*((Handle_SelectMgr_SelectableObject*)nativeHandle))->GetHilightPresentation(*((Handle_PrsMgr_PresentationManager3d*)TheMgr->Handle));
  return gcnew OCPrs3d_Presentation(&tmp);
}

OCPrs3d_Presentation^ OCSelectMgr_SelectableObject::GetSelectPresentation(OCNaroWrappers::OCPrsMgr_PresentationManager3d^ TheMgr)
{
  Handle(Prs3d_Presentation) tmp = (*((Handle_SelectMgr_SelectableObject*)nativeHandle))->GetSelectPresentation(*((Handle_PrsMgr_PresentationManager3d*)TheMgr->Handle));
  return gcnew OCPrs3d_Presentation(&tmp);
}

 void OCSelectMgr_SelectableObject::SetZLayer(OCNaroWrappers::OCPrsMgr_PresentationManager^ thePrsMgr, Standard_Integer theLayerId)
{
  (*((Handle_SelectMgr_SelectableObject*)nativeHandle))->SetZLayer(*((Handle_PrsMgr_PresentationManager*)thePrsMgr->Handle), theLayerId);
}


