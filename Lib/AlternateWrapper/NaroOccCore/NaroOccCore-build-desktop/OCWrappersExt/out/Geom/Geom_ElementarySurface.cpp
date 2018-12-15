// File generated by CPPExt (CPP file)
//

#include "Geom_ElementarySurface.h"
#include "../Converter.h"
#include "../gp/gp_Ax1.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Ax3.h"


using namespace OCNaroWrappers;

OCGeom_ElementarySurface::OCGeom_ElementarySurface(Handle(Geom_ElementarySurface)* nativeHandle) : OCGeom_Surface((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Geom_ElementarySurface(*nativeHandle);
}

 void OCGeom_ElementarySurface::SetAxis(OCNaroWrappers::OCgp_Ax1^ A1)
{
  (*((Handle_Geom_ElementarySurface*)nativeHandle))->SetAxis(*((gp_Ax1*)A1->Handle));
}

 void OCGeom_ElementarySurface::SetLocation(OCNaroWrappers::OCgp_Pnt^ Loc)
{
  (*((Handle_Geom_ElementarySurface*)nativeHandle))->SetLocation(*((gp_Pnt*)Loc->Handle));
}

 void OCGeom_ElementarySurface::SetPosition(OCNaroWrappers::OCgp_Ax3^ A3)
{
  (*((Handle_Geom_ElementarySurface*)nativeHandle))->SetPosition(*((gp_Ax3*)A3->Handle));
}

OCgp_Ax1^ OCGeom_ElementarySurface::Axis()
{
  gp_Ax1* tmp = new gp_Ax1();
  *tmp = (*((Handle_Geom_ElementarySurface*)nativeHandle))->Axis();
  return gcnew OCgp_Ax1(tmp);
}

OCgp_Pnt^ OCGeom_ElementarySurface::Location()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = (*((Handle_Geom_ElementarySurface*)nativeHandle))->Location();
  return gcnew OCgp_Pnt(tmp);
}

OCgp_Ax3^ OCGeom_ElementarySurface::Position()
{
  gp_Ax3* tmp = new gp_Ax3();
  *tmp = (*((Handle_Geom_ElementarySurface*)nativeHandle))->Position();
  return gcnew OCgp_Ax3(tmp);
}

 void OCGeom_ElementarySurface::UReverse()
{
  (*((Handle_Geom_ElementarySurface*)nativeHandle))->UReverse();
}

 void OCGeom_ElementarySurface::VReverse()
{
  (*((Handle_Geom_ElementarySurface*)nativeHandle))->VReverse();
}

 OCGeomAbs_Shape OCGeom_ElementarySurface::Continuity()
{
  return (OCGeomAbs_Shape)((*((Handle_Geom_ElementarySurface*)nativeHandle))->Continuity());
}

 System::Boolean OCGeom_ElementarySurface::IsCNu(Standard_Integer N)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom_ElementarySurface*)nativeHandle))->IsCNu(N));
}

 System::Boolean OCGeom_ElementarySurface::IsCNv(Standard_Integer N)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Geom_ElementarySurface*)nativeHandle))->IsCNv(N));
}

