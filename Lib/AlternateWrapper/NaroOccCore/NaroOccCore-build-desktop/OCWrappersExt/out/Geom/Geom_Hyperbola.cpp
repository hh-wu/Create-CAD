// File generated by CPPExt (CPP file)
//

#include "Geom_Hyperbola.h"
#include "../Converter.h"
#include "../gp/gp_Hypr.h"
#include "../gp/gp_Ax2.h"
#include "../gp/gp_Ax1.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"
#include "../gp/gp_Trsf.h"
#include "Geom_Geometry.h"


using namespace OCNaroWrappers;

OCGeom_Hyperbola::OCGeom_Hyperbola(Handle(Geom_Hyperbola)* nativeHandle) : OCGeom_Conic((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Geom_Hyperbola(*nativeHandle);
}

OCGeom_Hyperbola::OCGeom_Hyperbola(OCNaroWrappers::OCgp_Hypr^ H) : OCGeom_Conic((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom_Hyperbola(new Geom_Hyperbola(*((gp_Hypr*)H->Handle)));
}

OCGeom_Hyperbola::OCGeom_Hyperbola(OCNaroWrappers::OCgp_Ax2^ A2, Standard_Real MajorRadius, Standard_Real MinorRadius) : OCGeom_Conic((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom_Hyperbola(new Geom_Hyperbola(*((gp_Ax2*)A2->Handle), MajorRadius, MinorRadius));
}

 void OCGeom_Hyperbola::SetHypr(OCNaroWrappers::OCgp_Hypr^ H)
{
  (*((Handle_Geom_Hyperbola*)nativeHandle))->SetHypr(*((gp_Hypr*)H->Handle));
}

 void OCGeom_Hyperbola::SetMajorRadius(Standard_Real MajorRadius)
{
  (*((Handle_Geom_Hyperbola*)nativeHandle))->SetMajorRadius(MajorRadius);
}

 void OCGeom_Hyperbola::SetMinorRadius(Standard_Real MinorRadius)
{
  (*((Handle_Geom_Hyperbola*)nativeHandle))->SetMinorRadius(MinorRadius);
}

OCgp_Hypr^ OCGeom_Hyperbola::Hypr()
{
  gp_Hypr* tmp = new gp_Hypr();
  *tmp = (*((Handle_Geom_Hyperbola*)nativeHandle))->Hypr();
  return gcnew OCgp_Hypr(tmp);
}

 Standard_Real OCGeom_Hyperbola::ReversedParameter(Standard_Real U)
{
  return (*((Handle_Geom_Hyperbola*)nativeHandle))->ReversedParameter(U);
}

 Standard_Real OCGeom_Hyperbola::FirstParameter()
{
  return (*((Handle_Geom_Hyperbola*)nativeHandle))->FirstParameter();
}

 Standard_Real OCGeom_Hyperbola::LastParameter()
{
  return (*((Handle_Geom_Hyperbola*)nativeHandle))->LastParameter();
}

 System::Boolean OCGeom_Hyperbola::IsClosed()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom_Hyperbola*)nativeHandle))->IsClosed());
}

 System::Boolean OCGeom_Hyperbola::IsPeriodic()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom_Hyperbola*)nativeHandle))->IsPeriodic());
}

OCgp_Ax1^ OCGeom_Hyperbola::Asymptote1()
{
  gp_Ax1* tmp = new gp_Ax1();
  *tmp = (*((Handle_Geom_Hyperbola*)nativeHandle))->Asymptote1();
  return gcnew OCgp_Ax1(tmp);
}

OCgp_Ax1^ OCGeom_Hyperbola::Asymptote2()
{
  gp_Ax1* tmp = new gp_Ax1();
  *tmp = (*((Handle_Geom_Hyperbola*)nativeHandle))->Asymptote2();
  return gcnew OCgp_Ax1(tmp);
}

OCgp_Hypr^ OCGeom_Hyperbola::ConjugateBranch1()
{
  gp_Hypr* tmp = new gp_Hypr();
  *tmp = (*((Handle_Geom_Hyperbola*)nativeHandle))->ConjugateBranch1();
  return gcnew OCgp_Hypr(tmp);
}

OCgp_Hypr^ OCGeom_Hyperbola::ConjugateBranch2()
{
  gp_Hypr* tmp = new gp_Hypr();
  *tmp = (*((Handle_Geom_Hyperbola*)nativeHandle))->ConjugateBranch2();
  return gcnew OCgp_Hypr(tmp);
}

OCgp_Ax1^ OCGeom_Hyperbola::Directrix1()
{
  gp_Ax1* tmp = new gp_Ax1();
  *tmp = (*((Handle_Geom_Hyperbola*)nativeHandle))->Directrix1();
  return gcnew OCgp_Ax1(tmp);
}

OCgp_Ax1^ OCGeom_Hyperbola::Directrix2()
{
  gp_Ax1* tmp = new gp_Ax1();
  *tmp = (*((Handle_Geom_Hyperbola*)nativeHandle))->Directrix2();
  return gcnew OCgp_Ax1(tmp);
}

 Standard_Real OCGeom_Hyperbola::Eccentricity()
{
  return (*((Handle_Geom_Hyperbola*)nativeHandle))->Eccentricity();
}

 Standard_Real OCGeom_Hyperbola::Focal()
{
  return (*((Handle_Geom_Hyperbola*)nativeHandle))->Focal();
}

OCgp_Pnt^ OCGeom_Hyperbola::Focus1()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = (*((Handle_Geom_Hyperbola*)nativeHandle))->Focus1();
  return gcnew OCgp_Pnt(tmp);
}

OCgp_Pnt^ OCGeom_Hyperbola::Focus2()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = (*((Handle_Geom_Hyperbola*)nativeHandle))->Focus2();
  return gcnew OCgp_Pnt(tmp);
}

 Standard_Real OCGeom_Hyperbola::MajorRadius()
{
  return (*((Handle_Geom_Hyperbola*)nativeHandle))->MajorRadius();
}

 Standard_Real OCGeom_Hyperbola::MinorRadius()
{
  return (*((Handle_Geom_Hyperbola*)nativeHandle))->MinorRadius();
}

OCgp_Hypr^ OCGeom_Hyperbola::OtherBranch()
{
  gp_Hypr* tmp = new gp_Hypr();
  *tmp = (*((Handle_Geom_Hyperbola*)nativeHandle))->OtherBranch();
  return gcnew OCgp_Hypr(tmp);
}

 Standard_Real OCGeom_Hyperbola::Parameter()
{
  return (*((Handle_Geom_Hyperbola*)nativeHandle))->Parameter();
}

 void OCGeom_Hyperbola::D0(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P)
{
  (*((Handle_Geom_Hyperbola*)nativeHandle))->D0(U, *((gp_Pnt*)P->Handle));
}

 void OCGeom_Hyperbola::D1(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1)
{
  (*((Handle_Geom_Hyperbola*)nativeHandle))->D1(U, *((gp_Pnt*)P->Handle), *((gp_Vec*)V1->Handle));
}

 void OCGeom_Hyperbola::D2(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V2)
{
  (*((Handle_Geom_Hyperbola*)nativeHandle))->D2(U, *((gp_Pnt*)P->Handle), *((gp_Vec*)V1->Handle), *((gp_Vec*)V2->Handle));
}

 void OCGeom_Hyperbola::D3(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1, OCNaroWrappers::OCgp_Vec^ V2, OCNaroWrappers::OCgp_Vec^ V3)
{
  (*((Handle_Geom_Hyperbola*)nativeHandle))->D3(U, *((gp_Pnt*)P->Handle), *((gp_Vec*)V1->Handle), *((gp_Vec*)V2->Handle), *((gp_Vec*)V3->Handle));
}

OCgp_Vec^ OCGeom_Hyperbola::DN(Standard_Real U, Standard_Integer N)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = (*((Handle_Geom_Hyperbola*)nativeHandle))->DN(U, N);
  return gcnew OCgp_Vec(tmp);
}

 void OCGeom_Hyperbola::Transform(OCNaroWrappers::OCgp_Trsf^ T)
{
  (*((Handle_Geom_Hyperbola*)nativeHandle))->Transform(*((gp_Trsf*)T->Handle));
}

OCGeom_Geometry^ OCGeom_Hyperbola::Copy()
{
  Handle(Geom_Geometry) tmp = (*((Handle_Geom_Hyperbola*)nativeHandle))->Copy();
  return gcnew OCGeom_Geometry(&tmp);
}

