// File generated by CPPExt (CPP file)
//

#include "StepVisual_PresentedItemRepresentation.h"
#include "../Converter.h"
#include "StepVisual_PresentedItem.h"
#include "StepVisual_PresentationRepresentationSelect.h"


using namespace OCNaroWrappers;

OCStepVisual_PresentedItemRepresentation::OCStepVisual_PresentedItemRepresentation(Handle(StepVisual_PresentedItemRepresentation)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepVisual_PresentedItemRepresentation(*nativeHandle);
}

OCStepVisual_PresentedItemRepresentation::OCStepVisual_PresentedItemRepresentation() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepVisual_PresentedItemRepresentation(new StepVisual_PresentedItemRepresentation());
}

 void OCStepVisual_PresentedItemRepresentation::Init(OCNaroWrappers::OCStepVisual_PresentationRepresentationSelect^ aPresentation, OCNaroWrappers::OCStepVisual_PresentedItem^ aItem)
{
  (*((Handle_StepVisual_PresentedItemRepresentation*)nativeHandle))->Init(*((StepVisual_PresentationRepresentationSelect*)aPresentation->Handle), *((Handle_StepVisual_PresentedItem*)aItem->Handle));
}

 void OCStepVisual_PresentedItemRepresentation::SetPresentation(OCNaroWrappers::OCStepVisual_PresentationRepresentationSelect^ aPresentation)
{
  (*((Handle_StepVisual_PresentedItemRepresentation*)nativeHandle))->SetPresentation(*((StepVisual_PresentationRepresentationSelect*)aPresentation->Handle));
}

OCStepVisual_PresentationRepresentationSelect^ OCStepVisual_PresentedItemRepresentation::Presentation()
{
  StepVisual_PresentationRepresentationSelect* tmp = new StepVisual_PresentationRepresentationSelect();
  *tmp = (*((Handle_StepVisual_PresentedItemRepresentation*)nativeHandle))->Presentation();
  return gcnew OCStepVisual_PresentationRepresentationSelect(tmp);
}

 void OCStepVisual_PresentedItemRepresentation::SetItem(OCNaroWrappers::OCStepVisual_PresentedItem^ aItem)
{
  (*((Handle_StepVisual_PresentedItemRepresentation*)nativeHandle))->SetItem(*((Handle_StepVisual_PresentedItem*)aItem->Handle));
}

OCStepVisual_PresentedItem^ OCStepVisual_PresentedItemRepresentation::Item()
{
  Handle(StepVisual_PresentedItem) tmp = (*((Handle_StepVisual_PresentedItemRepresentation*)nativeHandle))->Item();
  return gcnew OCStepVisual_PresentedItem(&tmp);
}

