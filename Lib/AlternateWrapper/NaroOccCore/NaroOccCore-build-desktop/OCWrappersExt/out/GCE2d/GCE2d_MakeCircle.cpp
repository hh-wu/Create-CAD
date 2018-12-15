// File generated by CPPExt (CPP file)
//

#include "GCE2d_MakeCircle.h"
#include "../Converter.h"
#include "../Geom2d/Geom2d_Circle.h"
#include "../gp/gp_Circ2d.h"
#include "../gp/gp_Ax2d.h"
#include "../gp/gp_Ax22d.h"
#include "../gp/gp_Pnt2d.h"


using namespace OCNaroWrappers;

OCGCE2d_MakeCircle::OCGCE2d_MakeCircle(GCE2d_MakeCircle* nativeHandle) : OCGCE2d_Root((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCGCE2d_MakeCircle::OCGCE2d_MakeCircle(OCNaroWrappers::OCgp_Circ2d^ C) : OCGCE2d_Root((OCDummy^)nullptr)

{
  nativeHandle = new GCE2d_MakeCircle(*((gp_Circ2d*)C->Handle));
}

OCGCE2d_MakeCircle::OCGCE2d_MakeCircle(OCNaroWrappers::OCgp_Ax2d^ A, Standard_Real Radius, System::Boolean Sense) : OCGCE2d_Root((OCDummy^)nullptr)

{
  nativeHandle = new GCE2d_MakeCircle(*((gp_Ax2d*)A->Handle), Radius, OCConverter::BooleanToStandardBoolean(Sense));
}

OCGCE2d_MakeCircle::OCGCE2d_MakeCircle(OCNaroWrappers::OCgp_Ax22d^ A, Standard_Real Radius) : OCGCE2d_Root((OCDummy^)nullptr)

{
  nativeHandle = new GCE2d_MakeCircle(*((gp_Ax22d*)A->Handle), Radius);
}

OCGCE2d_MakeCircle::OCGCE2d_MakeCircle(OCNaroWrappers::OCgp_Circ2d^ Circ, Standard_Real Dist) : OCGCE2d_Root((OCDummy^)nullptr)

{
  nativeHandle = new GCE2d_MakeCircle(*((gp_Circ2d*)Circ->Handle), Dist);
}

OCGCE2d_MakeCircle::OCGCE2d_MakeCircle(OCNaroWrappers::OCgp_Circ2d^ Circ, OCNaroWrappers::OCgp_Pnt2d^ Point) : OCGCE2d_Root((OCDummy^)nullptr)

{
  nativeHandle = new GCE2d_MakeCircle(*((gp_Circ2d*)Circ->Handle), *((gp_Pnt2d*)Point->Handle));
}

OCGCE2d_MakeCircle::OCGCE2d_MakeCircle(OCNaroWrappers::OCgp_Pnt2d^ P1, OCNaroWrappers::OCgp_Pnt2d^ P2, OCNaroWrappers::OCgp_Pnt2d^ P3) : OCGCE2d_Root((OCDummy^)nullptr)

{
  nativeHandle = new GCE2d_MakeCircle(*((gp_Pnt2d*)P1->Handle), *((gp_Pnt2d*)P2->Handle), *((gp_Pnt2d*)P3->Handle));
}

OCGCE2d_MakeCircle::OCGCE2d_MakeCircle(OCNaroWrappers::OCgp_Pnt2d^ P, Standard_Real Radius, System::Boolean Sense) : OCGCE2d_Root((OCDummy^)nullptr)

{
  nativeHandle = new GCE2d_MakeCircle(*((gp_Pnt2d*)P->Handle), Radius, OCConverter::BooleanToStandardBoolean(Sense));
}

OCGCE2d_MakeCircle::OCGCE2d_MakeCircle(OCNaroWrappers::OCgp_Pnt2d^ Center, OCNaroWrappers::OCgp_Pnt2d^ Point, System::Boolean Sense) : OCGCE2d_Root((OCDummy^)nullptr)

{
  nativeHandle = new GCE2d_MakeCircle(*((gp_Pnt2d*)Center->Handle), *((gp_Pnt2d*)Point->Handle), OCConverter::BooleanToStandardBoolean(Sense));
}

OCGeom2d_Circle^ OCGCE2d_MakeCircle::Value()
{
  Handle(Geom2d_Circle) tmp = ((GCE2d_MakeCircle*)nativeHandle)->Value();
  return gcnew OCGeom2d_Circle(&tmp);
}

OCGeom2d_Circle^ OCGCE2d_MakeCircle::Operator()
{
  Handle(Geom2d_Circle) tmp = ((GCE2d_MakeCircle*)nativeHandle)->Operator();
  return gcnew OCGeom2d_Circle(&tmp);
}

