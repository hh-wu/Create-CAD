// File generated by CPPExt (CPP file)
//

#include "StepShape_ManifoldSurfaceShapeRepresentation.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCStepShape_ManifoldSurfaceShapeRepresentation::OCStepShape_ManifoldSurfaceShapeRepresentation(StepShape_ManifoldSurfaceShapeRepresentation* nativeHandle) : OCStepShape_ShapeRepresentation((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepShape_ManifoldSurfaceShapeRepresentation::OCStepShape_ManifoldSurfaceShapeRepresentation() : OCStepShape_ShapeRepresentation((OCDummy^)nullptr)

{
  nativeHandle = new StepShape_ManifoldSurfaceShapeRepresentation();
}


