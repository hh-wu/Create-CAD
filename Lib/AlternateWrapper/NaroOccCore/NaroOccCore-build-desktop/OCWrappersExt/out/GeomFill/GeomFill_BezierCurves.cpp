// File generated by CPPExt (CPP file)
//

#include "GeomFill_BezierCurves.h"
#include "../Converter.h"
#include "../Geom/Geom_BezierSurface.h"
#include "../Geom/Geom_BezierCurve.h"


using namespace OCNaroWrappers;

OCGeomFill_BezierCurves::OCGeomFill_BezierCurves(GeomFill_BezierCurves* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCGeomFill_BezierCurves::OCGeomFill_BezierCurves() 
{
  nativeHandle = new GeomFill_BezierCurves();
}

OCGeomFill_BezierCurves::OCGeomFill_BezierCurves(OCNaroWrappers::OCGeom_BezierCurve^ C1, OCNaroWrappers::OCGeom_BezierCurve^ C2, OCNaroWrappers::OCGeom_BezierCurve^ C3, OCNaroWrappers::OCGeom_BezierCurve^ C4, OCGeomFill_FillingStyle Type) 
{
  nativeHandle = new GeomFill_BezierCurves(*((Handle_Geom_BezierCurve*)C1->Handle), *((Handle_Geom_BezierCurve*)C2->Handle), *((Handle_Geom_BezierCurve*)C3->Handle), *((Handle_Geom_BezierCurve*)C4->Handle), (GeomFill_FillingStyle)Type);
}

OCGeomFill_BezierCurves::OCGeomFill_BezierCurves(OCNaroWrappers::OCGeom_BezierCurve^ C1, OCNaroWrappers::OCGeom_BezierCurve^ C2, OCNaroWrappers::OCGeom_BezierCurve^ C3, OCGeomFill_FillingStyle Type) 
{
  nativeHandle = new GeomFill_BezierCurves(*((Handle_Geom_BezierCurve*)C1->Handle), *((Handle_Geom_BezierCurve*)C2->Handle), *((Handle_Geom_BezierCurve*)C3->Handle), (GeomFill_FillingStyle)Type);
}

OCGeomFill_BezierCurves::OCGeomFill_BezierCurves(OCNaroWrappers::OCGeom_BezierCurve^ C1, OCNaroWrappers::OCGeom_BezierCurve^ C2, OCGeomFill_FillingStyle Type) 
{
  nativeHandle = new GeomFill_BezierCurves(*((Handle_Geom_BezierCurve*)C1->Handle), *((Handle_Geom_BezierCurve*)C2->Handle), (GeomFill_FillingStyle)Type);
}

 void OCGeomFill_BezierCurves::Init(OCNaroWrappers::OCGeom_BezierCurve^ C1, OCNaroWrappers::OCGeom_BezierCurve^ C2, OCNaroWrappers::OCGeom_BezierCurve^ C3, OCNaroWrappers::OCGeom_BezierCurve^ C4, OCGeomFill_FillingStyle Type)
{
  ((GeomFill_BezierCurves*)nativeHandle)->Init(*((Handle_Geom_BezierCurve*)C1->Handle), *((Handle_Geom_BezierCurve*)C2->Handle), *((Handle_Geom_BezierCurve*)C3->Handle), *((Handle_Geom_BezierCurve*)C4->Handle), (GeomFill_FillingStyle)Type);
}

 void OCGeomFill_BezierCurves::Init(OCNaroWrappers::OCGeom_BezierCurve^ C1, OCNaroWrappers::OCGeom_BezierCurve^ C2, OCNaroWrappers::OCGeom_BezierCurve^ C3, OCGeomFill_FillingStyle Type)
{
  ((GeomFill_BezierCurves*)nativeHandle)->Init(*((Handle_Geom_BezierCurve*)C1->Handle), *((Handle_Geom_BezierCurve*)C2->Handle), *((Handle_Geom_BezierCurve*)C3->Handle), (GeomFill_FillingStyle)Type);
}

 void OCGeomFill_BezierCurves::Init(OCNaroWrappers::OCGeom_BezierCurve^ C1, OCNaroWrappers::OCGeom_BezierCurve^ C2, OCGeomFill_FillingStyle Type)
{
  ((GeomFill_BezierCurves*)nativeHandle)->Init(*((Handle_Geom_BezierCurve*)C1->Handle), *((Handle_Geom_BezierCurve*)C2->Handle), (GeomFill_FillingStyle)Type);
}

OCGeom_BezierSurface^ OCGeomFill_BezierCurves::Surface()
{
  Handle(Geom_BezierSurface) tmp = ((GeomFill_BezierCurves*)nativeHandle)->Surface();
  return gcnew OCGeom_BezierSurface(&tmp);
}


