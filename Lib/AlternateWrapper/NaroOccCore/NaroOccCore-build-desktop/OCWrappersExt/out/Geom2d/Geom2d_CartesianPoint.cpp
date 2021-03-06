// File generated by CPPExt (CPP file)
//

#include "Geom2d_CartesianPoint.h"
#include "../Converter.h"
#include "../gp/gp_Pnt2d.h"
#include "../gp/gp_Trsf2d.h"
#include "Geom2d_Geometry.h"


using namespace OCNaroWrappers;

OCGeom2d_CartesianPoint::OCGeom2d_CartesianPoint(Handle(Geom2d_CartesianPoint)* nativeHandle) : OCGeom2d_Point((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Geom2d_CartesianPoint(*nativeHandle);
}

OCGeom2d_CartesianPoint::OCGeom2d_CartesianPoint(OCNaroWrappers::OCgp_Pnt2d^ P) : OCGeom2d_Point((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom2d_CartesianPoint(new Geom2d_CartesianPoint(*((gp_Pnt2d*)P->Handle)));
}

OCGeom2d_CartesianPoint::OCGeom2d_CartesianPoint(Standard_Real X, Standard_Real Y) : OCGeom2d_Point((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Geom2d_CartesianPoint(new Geom2d_CartesianPoint(X, Y));
}

 void OCGeom2d_CartesianPoint::SetCoord(Standard_Real X, Standard_Real Y)
{
  (*((Handle_Geom2d_CartesianPoint*)nativeHandle))->SetCoord(X, Y);
}

 void OCGeom2d_CartesianPoint::SetPnt2d(OCNaroWrappers::OCgp_Pnt2d^ P)
{
  (*((Handle_Geom2d_CartesianPoint*)nativeHandle))->SetPnt2d(*((gp_Pnt2d*)P->Handle));
}

 void OCGeom2d_CartesianPoint::SetX(Standard_Real X)
{
  (*((Handle_Geom2d_CartesianPoint*)nativeHandle))->SetX(X);
}

 void OCGeom2d_CartesianPoint::SetY(Standard_Real Y)
{
  (*((Handle_Geom2d_CartesianPoint*)nativeHandle))->SetY(Y);
}

 void OCGeom2d_CartesianPoint::Coord(Standard_Real& X, Standard_Real& Y)
{
  (*((Handle_Geom2d_CartesianPoint*)nativeHandle))->Coord(X, Y);
}

OCgp_Pnt2d^ OCGeom2d_CartesianPoint::Pnt2d()
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = (*((Handle_Geom2d_CartesianPoint*)nativeHandle))->Pnt2d();
  return gcnew OCgp_Pnt2d(tmp);
}

 Standard_Real OCGeom2d_CartesianPoint::X()
{
  return (*((Handle_Geom2d_CartesianPoint*)nativeHandle))->X();
}

 Standard_Real OCGeom2d_CartesianPoint::Y()
{
  return (*((Handle_Geom2d_CartesianPoint*)nativeHandle))->Y();
}

 void OCGeom2d_CartesianPoint::Transform(OCNaroWrappers::OCgp_Trsf2d^ T)
{
  (*((Handle_Geom2d_CartesianPoint*)nativeHandle))->Transform(*((gp_Trsf2d*)T->Handle));
}

OCGeom2d_Geometry^ OCGeom2d_CartesianPoint::Copy()
{
  Handle(Geom2d_Geometry) tmp = (*((Handle_Geom2d_CartesianPoint*)nativeHandle))->Copy();
  return gcnew OCGeom2d_Geometry(&tmp);
}


