// File generated by CPPExt (CPP file)
//

#include "gp_XYZ.h"
#include "../Converter.h"
#include "gp_Mat.h"


using namespace OCNaroWrappers;

OCgp_XYZ::OCgp_XYZ(gp_XYZ* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCgp_XYZ::OCgp_XYZ() 
{
  nativeHandle = new gp_XYZ();
}

OCgp_XYZ::OCgp_XYZ(Standard_Real X, Standard_Real Y, Standard_Real Z) 
{
  nativeHandle = new gp_XYZ(X, Y, Z);
}

 void OCgp_XYZ::SetCoord(Standard_Real X, Standard_Real Y, Standard_Real Z)
{
  ((gp_XYZ*)nativeHandle)->SetCoord(X, Y, Z);
}

 void OCgp_XYZ::SetCoord(Standard_Integer Index, Standard_Real Xi)
{
  ((gp_XYZ*)nativeHandle)->SetCoord(Index, Xi);
}

 void OCgp_XYZ::SetX(Standard_Real X)
{
  ((gp_XYZ*)nativeHandle)->SetX(X);
}

 void OCgp_XYZ::SetY(Standard_Real Y)
{
  ((gp_XYZ*)nativeHandle)->SetY(Y);
}

 void OCgp_XYZ::SetZ(Standard_Real Z)
{
  ((gp_XYZ*)nativeHandle)->SetZ(Z);
}

 Standard_Real OCgp_XYZ::Coord(Standard_Integer Index)
{
  return ((gp_XYZ*)nativeHandle)->Coord(Index);
}

 void OCgp_XYZ::Coord(Standard_Real& X, Standard_Real& Y, Standard_Real& Z)
{
  ((gp_XYZ*)nativeHandle)->Coord(X, Y, Z);
}

 Standard_Real OCgp_XYZ::X()
{
  return ((gp_XYZ*)nativeHandle)->X();
}

 Standard_Real OCgp_XYZ::Y()
{
  return ((gp_XYZ*)nativeHandle)->Y();
}

 Standard_Real OCgp_XYZ::Z()
{
  return ((gp_XYZ*)nativeHandle)->Z();
}

 Standard_Real OCgp_XYZ::Modulus()
{
  return ((gp_XYZ*)nativeHandle)->Modulus();
}

 Standard_Real OCgp_XYZ::SquareModulus()
{
  return ((gp_XYZ*)nativeHandle)->SquareModulus();
}

 System::Boolean OCgp_XYZ::IsEqual(OCNaroWrappers::OCgp_XYZ^ Other, Standard_Real Tolerance)
{
  return OCConverter::StandardBooleanToBoolean(((gp_XYZ*)nativeHandle)->IsEqual(*((gp_XYZ*)Other->Handle), Tolerance));
}

 void OCgp_XYZ::Add(OCNaroWrappers::OCgp_XYZ^ Other)
{
  ((gp_XYZ*)nativeHandle)->Add(*((gp_XYZ*)Other->Handle));
}

OCgp_XYZ^ OCgp_XYZ::Added(OCNaroWrappers::OCgp_XYZ^ Other)
{
  gp_XYZ* tmp = new gp_XYZ();
  *tmp = ((gp_XYZ*)nativeHandle)->Added(*((gp_XYZ*)Other->Handle));
  return gcnew OCgp_XYZ(tmp);
}

 void OCgp_XYZ::Cross(OCNaroWrappers::OCgp_XYZ^ Right)
{
  ((gp_XYZ*)nativeHandle)->Cross(*((gp_XYZ*)Right->Handle));
}

OCgp_XYZ^ OCgp_XYZ::Crossed(OCNaroWrappers::OCgp_XYZ^ Right)
{
  gp_XYZ* tmp = new gp_XYZ();
  *tmp = ((gp_XYZ*)nativeHandle)->Crossed(*((gp_XYZ*)Right->Handle));
  return gcnew OCgp_XYZ(tmp);
}

 Standard_Real OCgp_XYZ::CrossMagnitude(OCNaroWrappers::OCgp_XYZ^ Right)
{
  return ((gp_XYZ*)nativeHandle)->CrossMagnitude(*((gp_XYZ*)Right->Handle));
}

 Standard_Real OCgp_XYZ::CrossSquareMagnitude(OCNaroWrappers::OCgp_XYZ^ Right)
{
  return ((gp_XYZ*)nativeHandle)->CrossSquareMagnitude(*((gp_XYZ*)Right->Handle));
}

 void OCgp_XYZ::CrossCross(OCNaroWrappers::OCgp_XYZ^ Coord1, OCNaroWrappers::OCgp_XYZ^ Coord2)
{
  ((gp_XYZ*)nativeHandle)->CrossCross(*((gp_XYZ*)Coord1->Handle), *((gp_XYZ*)Coord2->Handle));
}

OCgp_XYZ^ OCgp_XYZ::CrossCrossed(OCNaroWrappers::OCgp_XYZ^ Coord1, OCNaroWrappers::OCgp_XYZ^ Coord2)
{
  gp_XYZ* tmp = new gp_XYZ();
  *tmp = ((gp_XYZ*)nativeHandle)->CrossCrossed(*((gp_XYZ*)Coord1->Handle), *((gp_XYZ*)Coord2->Handle));
  return gcnew OCgp_XYZ(tmp);
}

 void OCgp_XYZ::Divide(Standard_Real Scalar)
{
  ((gp_XYZ*)nativeHandle)->Divide(Scalar);
}

OCgp_XYZ^ OCgp_XYZ::Divided(Standard_Real Scalar)
{
  gp_XYZ* tmp = new gp_XYZ();
  *tmp = ((gp_XYZ*)nativeHandle)->Divided(Scalar);
  return gcnew OCgp_XYZ(tmp);
}

 Standard_Real OCgp_XYZ::Dot(OCNaroWrappers::OCgp_XYZ^ Other)
{
  return ((gp_XYZ*)nativeHandle)->Dot(*((gp_XYZ*)Other->Handle));
}

 Standard_Real OCgp_XYZ::DotCross(OCNaroWrappers::OCgp_XYZ^ Coord1, OCNaroWrappers::OCgp_XYZ^ Coord2)
{
  return ((gp_XYZ*)nativeHandle)->DotCross(*((gp_XYZ*)Coord1->Handle), *((gp_XYZ*)Coord2->Handle));
}

 void OCgp_XYZ::Multiply(Standard_Real Scalar)
{
  ((gp_XYZ*)nativeHandle)->Multiply(Scalar);
}

 void OCgp_XYZ::Multiply(OCNaroWrappers::OCgp_XYZ^ Other)
{
  ((gp_XYZ*)nativeHandle)->Multiply(*((gp_XYZ*)Other->Handle));
}

 void OCgp_XYZ::Multiply(OCNaroWrappers::OCgp_Mat^ Matrix)
{
  ((gp_XYZ*)nativeHandle)->Multiply(*((gp_Mat*)Matrix->Handle));
}

OCgp_XYZ^ OCgp_XYZ::Multiplied(Standard_Real Scalar)
{
  gp_XYZ* tmp = new gp_XYZ();
  *tmp = ((gp_XYZ*)nativeHandle)->Multiplied(Scalar);
  return gcnew OCgp_XYZ(tmp);
}

OCgp_XYZ^ OCgp_XYZ::Multiplied(OCNaroWrappers::OCgp_XYZ^ Other)
{
  gp_XYZ* tmp = new gp_XYZ();
  *tmp = ((gp_XYZ*)nativeHandle)->Multiplied(*((gp_XYZ*)Other->Handle));
  return gcnew OCgp_XYZ(tmp);
}

OCgp_XYZ^ OCgp_XYZ::Multiplied(OCNaroWrappers::OCgp_Mat^ Matrix)
{
  gp_XYZ* tmp = new gp_XYZ();
  *tmp = ((gp_XYZ*)nativeHandle)->Multiplied(*((gp_Mat*)Matrix->Handle));
  return gcnew OCgp_XYZ(tmp);
}

 void OCgp_XYZ::Normalize()
{
  ((gp_XYZ*)nativeHandle)->Normalize();
}

OCgp_XYZ^ OCgp_XYZ::Normalized()
{
  gp_XYZ* tmp = new gp_XYZ();
  *tmp = ((gp_XYZ*)nativeHandle)->Normalized();
  return gcnew OCgp_XYZ(tmp);
}

 void OCgp_XYZ::Reverse()
{
  ((gp_XYZ*)nativeHandle)->Reverse();
}

OCgp_XYZ^ OCgp_XYZ::Reversed()
{
  gp_XYZ* tmp = new gp_XYZ();
  *tmp = ((gp_XYZ*)nativeHandle)->Reversed();
  return gcnew OCgp_XYZ(tmp);
}

 void OCgp_XYZ::Subtract(OCNaroWrappers::OCgp_XYZ^ Right)
{
  ((gp_XYZ*)nativeHandle)->Subtract(*((gp_XYZ*)Right->Handle));
}

OCgp_XYZ^ OCgp_XYZ::Subtracted(OCNaroWrappers::OCgp_XYZ^ Right)
{
  gp_XYZ* tmp = new gp_XYZ();
  *tmp = ((gp_XYZ*)nativeHandle)->Subtracted(*((gp_XYZ*)Right->Handle));
  return gcnew OCgp_XYZ(tmp);
}

 void OCgp_XYZ::SetLinearForm(Standard_Real A1, OCNaroWrappers::OCgp_XYZ^ XYZ1, Standard_Real A2, OCNaroWrappers::OCgp_XYZ^ XYZ2, Standard_Real A3, OCNaroWrappers::OCgp_XYZ^ XYZ3, OCNaroWrappers::OCgp_XYZ^ XYZ4)
{
  ((gp_XYZ*)nativeHandle)->SetLinearForm(A1, *((gp_XYZ*)XYZ1->Handle), A2, *((gp_XYZ*)XYZ2->Handle), A3, *((gp_XYZ*)XYZ3->Handle), *((gp_XYZ*)XYZ4->Handle));
}

 void OCgp_XYZ::SetLinearForm(Standard_Real A1, OCNaroWrappers::OCgp_XYZ^ XYZ1, Standard_Real A2, OCNaroWrappers::OCgp_XYZ^ XYZ2, Standard_Real A3, OCNaroWrappers::OCgp_XYZ^ XYZ3)
{
  ((gp_XYZ*)nativeHandle)->SetLinearForm(A1, *((gp_XYZ*)XYZ1->Handle), A2, *((gp_XYZ*)XYZ2->Handle), A3, *((gp_XYZ*)XYZ3->Handle));
}

 void OCgp_XYZ::SetLinearForm(Standard_Real A1, OCNaroWrappers::OCgp_XYZ^ XYZ1, Standard_Real A2, OCNaroWrappers::OCgp_XYZ^ XYZ2, OCNaroWrappers::OCgp_XYZ^ XYZ3)
{
  ((gp_XYZ*)nativeHandle)->SetLinearForm(A1, *((gp_XYZ*)XYZ1->Handle), A2, *((gp_XYZ*)XYZ2->Handle), *((gp_XYZ*)XYZ3->Handle));
}

 void OCgp_XYZ::SetLinearForm(Standard_Real A1, OCNaroWrappers::OCgp_XYZ^ XYZ1, Standard_Real A2, OCNaroWrappers::OCgp_XYZ^ XYZ2)
{
  ((gp_XYZ*)nativeHandle)->SetLinearForm(A1, *((gp_XYZ*)XYZ1->Handle), A2, *((gp_XYZ*)XYZ2->Handle));
}

 void OCgp_XYZ::SetLinearForm(Standard_Real A1, OCNaroWrappers::OCgp_XYZ^ XYZ1, OCNaroWrappers::OCgp_XYZ^ XYZ2)
{
  ((gp_XYZ*)nativeHandle)->SetLinearForm(A1, *((gp_XYZ*)XYZ1->Handle), *((gp_XYZ*)XYZ2->Handle));
}

 void OCgp_XYZ::SetLinearForm(OCNaroWrappers::OCgp_XYZ^ XYZ1, OCNaroWrappers::OCgp_XYZ^ XYZ2)
{
  ((gp_XYZ*)nativeHandle)->SetLinearForm(*((gp_XYZ*)XYZ1->Handle), *((gp_XYZ*)XYZ2->Handle));
}


