// File generated by CPPExt (CPP file)
//

#include "StepAP214_AppliedPresentedItem.h"
#include "../Converter.h"
#include "StepAP214_HArray1OfPresentedItemSelect.h"
#include "StepAP214_PresentedItemSelect.h"


using namespace OCNaroWrappers;

OCStepAP214_AppliedPresentedItem::OCStepAP214_AppliedPresentedItem(Handle(StepAP214_AppliedPresentedItem)* nativeHandle) : OCStepVisual_PresentedItem((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepAP214_AppliedPresentedItem(*nativeHandle);
}

OCStepAP214_AppliedPresentedItem::OCStepAP214_AppliedPresentedItem() : OCStepVisual_PresentedItem((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepAP214_AppliedPresentedItem(new StepAP214_AppliedPresentedItem());
}

 void OCStepAP214_AppliedPresentedItem::Init(OCNaroWrappers::OCStepAP214_HArray1OfPresentedItemSelect^ aItems)
{
  (*((Handle_StepAP214_AppliedPresentedItem*)nativeHandle))->Init(*((Handle_StepAP214_HArray1OfPresentedItemSelect*)aItems->Handle));
}

 void OCStepAP214_AppliedPresentedItem::SetItems(OCNaroWrappers::OCStepAP214_HArray1OfPresentedItemSelect^ aItems)
{
  (*((Handle_StepAP214_AppliedPresentedItem*)nativeHandle))->SetItems(*((Handle_StepAP214_HArray1OfPresentedItemSelect*)aItems->Handle));
}

OCStepAP214_HArray1OfPresentedItemSelect^ OCStepAP214_AppliedPresentedItem::Items()
{
  Handle(StepAP214_HArray1OfPresentedItemSelect) tmp = (*((Handle_StepAP214_AppliedPresentedItem*)nativeHandle))->Items();
  return gcnew OCStepAP214_HArray1OfPresentedItemSelect(&tmp);
}

OCStepAP214_PresentedItemSelect^ OCStepAP214_AppliedPresentedItem::ItemsValue(Standard_Integer num)
{
  StepAP214_PresentedItemSelect* tmp = new StepAP214_PresentedItemSelect();
  *tmp = (*((Handle_StepAP214_AppliedPresentedItem*)nativeHandle))->ItemsValue(num);
  return gcnew OCStepAP214_PresentedItemSelect(tmp);
}

 Standard_Integer OCStepAP214_AppliedPresentedItem::NbItems()
{
  return (*((Handle_StepAP214_AppliedPresentedItem*)nativeHandle))->NbItems();
}


