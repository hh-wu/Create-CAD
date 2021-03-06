// File generated by CPPExt (CPP file)
//

#include "GProp_VelGProps.h"
#include "../Converter.h"
#include "../gp/gp_Cylinder.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Cone.h"
#include "../gp/gp_Sphere.h"
#include "../gp/gp_Torus.h"


using namespace OCNaroWrappers;

OCGProp_VelGProps::OCGProp_VelGProps(GProp_VelGProps* nativeHandle) : OCGProp_GProps((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCGProp_VelGProps::OCGProp_VelGProps() : OCGProp_GProps((OCDummy^)nullptr)

{
  nativeHandle = new GProp_VelGProps();
}

OCGProp_VelGProps::OCGProp_VelGProps(OCNaroWrappers::OCgp_Cylinder^ S, Standard_Real Alpha1, Standard_Real Alpha2, Standard_Real Z1, Standard_Real Z2, OCNaroWrappers::OCgp_Pnt^ VLocation) : OCGProp_GProps((OCDummy^)nullptr)

{
  nativeHandle = new GProp_VelGProps(*((gp_Cylinder*)S->Handle), Alpha1, Alpha2, Z1, Z2, *((gp_Pnt*)VLocation->Handle));
}

OCGProp_VelGProps::OCGProp_VelGProps(OCNaroWrappers::OCgp_Cone^ S, Standard_Real Alpha1, Standard_Real Alpha2, Standard_Real Z1, Standard_Real Z2, OCNaroWrappers::OCgp_Pnt^ VLocation) : OCGProp_GProps((OCDummy^)nullptr)

{
  nativeHandle = new GProp_VelGProps(*((gp_Cone*)S->Handle), Alpha1, Alpha2, Z1, Z2, *((gp_Pnt*)VLocation->Handle));
}

OCGProp_VelGProps::OCGProp_VelGProps(OCNaroWrappers::OCgp_Sphere^ S, Standard_Real Teta1, Standard_Real Teta2, Standard_Real Alpha1, Standard_Real Alpha2, OCNaroWrappers::OCgp_Pnt^ VLocation) : OCGProp_GProps((OCDummy^)nullptr)

{
  nativeHandle = new GProp_VelGProps(*((gp_Sphere*)S->Handle), Teta1, Teta2, Alpha1, Alpha2, *((gp_Pnt*)VLocation->Handle));
}

OCGProp_VelGProps::OCGProp_VelGProps(OCNaroWrappers::OCgp_Torus^ S, Standard_Real Teta1, Standard_Real Teta2, Standard_Real Alpha1, Standard_Real Alpha2, OCNaroWrappers::OCgp_Pnt^ VLocation) : OCGProp_GProps((OCDummy^)nullptr)

{
  nativeHandle = new GProp_VelGProps(*((gp_Torus*)S->Handle), Teta1, Teta2, Alpha1, Alpha2, *((gp_Pnt*)VLocation->Handle));
}

 void OCGProp_VelGProps::SetLocation(OCNaroWrappers::OCgp_Pnt^ VLocation)
{
  ((GProp_VelGProps*)nativeHandle)->SetLocation(*((gp_Pnt*)VLocation->Handle));
}

 void OCGProp_VelGProps::Perform(OCNaroWrappers::OCgp_Cylinder^ S, Standard_Real Alpha1, Standard_Real Alpha2, Standard_Real Z1, Standard_Real Z2)
{
  ((GProp_VelGProps*)nativeHandle)->Perform(*((gp_Cylinder*)S->Handle), Alpha1, Alpha2, Z1, Z2);
}

 void OCGProp_VelGProps::Perform(OCNaroWrappers::OCgp_Cone^ S, Standard_Real Alpha1, Standard_Real Alpha2, Standard_Real Z1, Standard_Real Z2)
{
  ((GProp_VelGProps*)nativeHandle)->Perform(*((gp_Cone*)S->Handle), Alpha1, Alpha2, Z1, Z2);
}

 void OCGProp_VelGProps::Perform(OCNaroWrappers::OCgp_Sphere^ S, Standard_Real Teta1, Standard_Real Teta2, Standard_Real Alpha1, Standard_Real Alpha2)
{
  ((GProp_VelGProps*)nativeHandle)->Perform(*((gp_Sphere*)S->Handle), Teta1, Teta2, Alpha1, Alpha2);
}

 void OCGProp_VelGProps::Perform(OCNaroWrappers::OCgp_Torus^ S, Standard_Real Teta1, Standard_Real Teta2, Standard_Real Alpha1, Standard_Real Alpha2)
{
  ((GProp_VelGProps*)nativeHandle)->Perform(*((gp_Torus*)S->Handle), Teta1, Teta2, Alpha1, Alpha2);
}


