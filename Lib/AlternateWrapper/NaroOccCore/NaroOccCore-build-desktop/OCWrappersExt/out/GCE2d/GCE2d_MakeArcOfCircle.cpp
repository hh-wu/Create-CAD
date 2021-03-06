// File generated by CPPExt (CPP file)
//

#include "GCE2d_MakeArcOfCircle.h"
#include "../Converter.h"
#include "../Geom2d/Geom2d_TrimmedCurve.h"
#include "../gp/gp_Circ2d.h"
#include "../gp/gp_Pnt2d.h"
#include "../gp/gp_Vec2d.h"


using namespace OCNaroWrappers;

OCGCE2d_MakeArcOfCircle::OCGCE2d_MakeArcOfCircle(GCE2d_MakeArcOfCircle* nativeHandle) : OCGCE2d_Root((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCGCE2d_MakeArcOfCircle::OCGCE2d_MakeArcOfCircle(OCNaroWrappers::OCgp_Circ2d^ Circ, Standard_Real Alpha1, Standard_Real Alpha2, System::Boolean Sense) : OCGCE2d_Root((OCDummy^)nullptr)

{
  nativeHandle = new GCE2d_MakeArcOfCircle(*((gp_Circ2d*)Circ->Handle), Alpha1, Alpha2, OCConverter::BooleanToStandardBoolean(Sense));
}

OCGCE2d_MakeArcOfCircle::OCGCE2d_MakeArcOfCircle(OCNaroWrappers::OCgp_Circ2d^ Circ, OCNaroWrappers::OCgp_Pnt2d^ P, Standard_Real Alpha, System::Boolean Sense) : OCGCE2d_Root((OCDummy^)nullptr)

{
  nativeHandle = new GCE2d_MakeArcOfCircle(*((gp_Circ2d*)Circ->Handle), *((gp_Pnt2d*)P->Handle), Alpha, OCConverter::BooleanToStandardBoolean(Sense));
}

OCGCE2d_MakeArcOfCircle::OCGCE2d_MakeArcOfCircle(OCNaroWrappers::OCgp_Circ2d^ Circ, OCNaroWrappers::OCgp_Pnt2d^ P1, OCNaroWrappers::OCgp_Pnt2d^ P2, System::Boolean Sense) : OCGCE2d_Root((OCDummy^)nullptr)

{
  nativeHandle = new GCE2d_MakeArcOfCircle(*((gp_Circ2d*)Circ->Handle), *((gp_Pnt2d*)P1->Handle), *((gp_Pnt2d*)P2->Handle), OCConverter::BooleanToStandardBoolean(Sense));
}

OCGCE2d_MakeArcOfCircle::OCGCE2d_MakeArcOfCircle(OCNaroWrappers::OCgp_Pnt2d^ P1, OCNaroWrappers::OCgp_Pnt2d^ P2, OCNaroWrappers::OCgp_Pnt2d^ P3) : OCGCE2d_Root((OCDummy^)nullptr)

{
  nativeHandle = new GCE2d_MakeArcOfCircle(*((gp_Pnt2d*)P1->Handle), *((gp_Pnt2d*)P2->Handle), *((gp_Pnt2d*)P3->Handle));
}

OCGCE2d_MakeArcOfCircle::OCGCE2d_MakeArcOfCircle(OCNaroWrappers::OCgp_Pnt2d^ P1, OCNaroWrappers::OCgp_Vec2d^ V, OCNaroWrappers::OCgp_Pnt2d^ P2) : OCGCE2d_Root((OCDummy^)nullptr)

{
  nativeHandle = new GCE2d_MakeArcOfCircle(*((gp_Pnt2d*)P1->Handle), *((gp_Vec2d*)V->Handle), *((gp_Pnt2d*)P2->Handle));
}

OCGeom2d_TrimmedCurve^ OCGCE2d_MakeArcOfCircle::Value()
{
  Handle(Geom2d_TrimmedCurve) tmp = ((GCE2d_MakeArcOfCircle*)nativeHandle)->Value();
  return gcnew OCGeom2d_TrimmedCurve(&tmp);
}

OCGeom2d_TrimmedCurve^ OCGCE2d_MakeArcOfCircle::Operator()
{
  Handle(Geom2d_TrimmedCurve) tmp = ((GCE2d_MakeArcOfCircle*)nativeHandle)->Operator();
  return gcnew OCGeom2d_TrimmedCurve(&tmp);
}


