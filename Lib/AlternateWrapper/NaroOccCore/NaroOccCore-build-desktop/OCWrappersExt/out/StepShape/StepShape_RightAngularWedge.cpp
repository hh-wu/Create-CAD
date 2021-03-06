// File generated by CPPExt (CPP file)
//

#include "StepShape_RightAngularWedge.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "../StepGeom/StepGeom_Axis2Placement3d.h"


using namespace OCNaroWrappers;

OCStepShape_RightAngularWedge::OCStepShape_RightAngularWedge(StepShape_RightAngularWedge* nativeHandle) : OCStepGeom_GeometricRepresentationItem((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepShape_RightAngularWedge::OCStepShape_RightAngularWedge() : OCStepGeom_GeometricRepresentationItem((OCDummy^)nullptr)

{
  nativeHandle = new StepShape_RightAngularWedge();
}

 void OCStepShape_RightAngularWedge::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName)
{
  ((StepShape_RightAngularWedge*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle));
}

 void OCStepShape_RightAngularWedge::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_Axis2Placement3d^ aPosition, Standard_Real aX, Standard_Real aY, Standard_Real aZ, Standard_Real aLtx)
{
  ((StepShape_RightAngularWedge*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((StepGeom_Axis2Placement3d*)aPosition->Handle), aX, aY, aZ, aLtx);
}

 void OCStepShape_RightAngularWedge::SetPosition(OCNaroWrappers::OCStepGeom_Axis2Placement3d^ aPosition)
{
  ((StepShape_RightAngularWedge*)nativeHandle)->SetPosition(*((StepGeom_Axis2Placement3d*)aPosition->Handle));
}

OCStepGeom_Axis2Placement3d^ OCStepShape_RightAngularWedge::Position()
{
  StepGeom_Axis2Placement3d* tmp = new StepGeom_Axis2Placement3d();
  *tmp = ((StepShape_RightAngularWedge*)nativeHandle)->Position();
  return gcnew OCStepGeom_Axis2Placement3d(tmp);
}

 void OCStepShape_RightAngularWedge::SetX(Standard_Real aX)
{
  ((StepShape_RightAngularWedge*)nativeHandle)->SetX(aX);
}

 Standard_Real OCStepShape_RightAngularWedge::X()
{
  return ((StepShape_RightAngularWedge*)nativeHandle)->X();
}

 void OCStepShape_RightAngularWedge::SetY(Standard_Real aY)
{
  ((StepShape_RightAngularWedge*)nativeHandle)->SetY(aY);
}

 Standard_Real OCStepShape_RightAngularWedge::Y()
{
  return ((StepShape_RightAngularWedge*)nativeHandle)->Y();
}

 void OCStepShape_RightAngularWedge::SetZ(Standard_Real aZ)
{
  ((StepShape_RightAngularWedge*)nativeHandle)->SetZ(aZ);
}

 Standard_Real OCStepShape_RightAngularWedge::Z()
{
  return ((StepShape_RightAngularWedge*)nativeHandle)->Z();
}

 void OCStepShape_RightAngularWedge::SetLtx(Standard_Real aLtx)
{
  ((StepShape_RightAngularWedge*)nativeHandle)->SetLtx(aLtx);
}

 Standard_Real OCStepShape_RightAngularWedge::Ltx()
{
  return ((StepShape_RightAngularWedge*)nativeHandle)->Ltx();
}


