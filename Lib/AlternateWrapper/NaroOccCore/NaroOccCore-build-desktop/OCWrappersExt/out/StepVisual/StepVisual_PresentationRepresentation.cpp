// File generated by CPPExt (CPP file)
//

#include "StepVisual_PresentationRepresentation.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCStepVisual_PresentationRepresentation::OCStepVisual_PresentationRepresentation(Handle(StepVisual_PresentationRepresentation)* nativeHandle) : OCStepRepr_Representation((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepVisual_PresentationRepresentation(*nativeHandle);
}

OCStepVisual_PresentationRepresentation::OCStepVisual_PresentationRepresentation() : OCStepRepr_Representation((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepVisual_PresentationRepresentation(new StepVisual_PresentationRepresentation());
}


