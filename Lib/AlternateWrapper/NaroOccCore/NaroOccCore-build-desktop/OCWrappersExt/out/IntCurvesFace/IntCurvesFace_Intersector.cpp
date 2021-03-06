// File generated by CPPExt (CPP file)
//

#include "IntCurvesFace_Intersector.h"
#include "../Converter.h"
#include "../BRepTopAdaptor/BRepTopAdaptor_TopolTool.h"
#include "../BRepAdaptor/BRepAdaptor_HSurface.h"
#include "../TopoDS/TopoDS_Face.h"
#include "../gp/gp_Lin.h"
#include "../Adaptor3d/Adaptor3d_HCurve.h"
#include "../gp/gp_Pnt.h"
#include "../IntCurveSurface/IntCurveSurface_HInter.h"
#include "../gp/gp_Pnt2d.h"
#include "../Bnd/Bnd_Box.h"


using namespace OCNaroWrappers;

OCIntCurvesFace_Intersector::OCIntCurvesFace_Intersector(IntCurvesFace_Intersector* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntCurvesFace_Intersector::OCIntCurvesFace_Intersector(OCNaroWrappers::OCTopoDS_Face^ F, Standard_Real aTol) 
{
  nativeHandle = new IntCurvesFace_Intersector(*((TopoDS_Face*)F->Handle), aTol);
}

 void OCIntCurvesFace_Intersector::Perform(OCNaroWrappers::OCgp_Lin^ L, Standard_Real PInf, Standard_Real PSup)
{
  ((IntCurvesFace_Intersector*)nativeHandle)->Perform(*((gp_Lin*)L->Handle), PInf, PSup);
}

 void OCIntCurvesFace_Intersector::Perform(OCNaroWrappers::OCAdaptor3d_HCurve^ HCu, Standard_Real PInf, Standard_Real PSup)
{
  ((IntCurvesFace_Intersector*)nativeHandle)->Perform(*((Handle_Adaptor3d_HCurve*)HCu->Handle), PInf, PSup);
}

 OCGeomAbs_SurfaceType OCIntCurvesFace_Intersector::SurfaceType()
{
  return (OCGeomAbs_SurfaceType)(((IntCurvesFace_Intersector*)nativeHandle)->SurfaceType());
}

 System::Boolean OCIntCurvesFace_Intersector::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((IntCurvesFace_Intersector*)nativeHandle)->IsDone());
}

 Standard_Integer OCIntCurvesFace_Intersector::NbPnt()
{
  return ((IntCurvesFace_Intersector*)nativeHandle)->NbPnt();
}

 Standard_Real OCIntCurvesFace_Intersector::UParameter(Standard_Integer I)
{
  return ((IntCurvesFace_Intersector*)nativeHandle)->UParameter(I);
}

 Standard_Real OCIntCurvesFace_Intersector::VParameter(Standard_Integer I)
{
  return ((IntCurvesFace_Intersector*)nativeHandle)->VParameter(I);
}

 Standard_Real OCIntCurvesFace_Intersector::WParameter(Standard_Integer I)
{
  return ((IntCurvesFace_Intersector*)nativeHandle)->WParameter(I);
}

OCgp_Pnt^ OCIntCurvesFace_Intersector::Pnt(Standard_Integer I)
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((IntCurvesFace_Intersector*)nativeHandle)->Pnt(I);
  return gcnew OCgp_Pnt(tmp);
}

 OCIntCurveSurface_TransitionOnCurve OCIntCurvesFace_Intersector::Transition(Standard_Integer I)
{
  return (OCIntCurveSurface_TransitionOnCurve)(((IntCurvesFace_Intersector*)nativeHandle)->Transition(I));
}

 OCTopAbs_State OCIntCurvesFace_Intersector::State(Standard_Integer I)
{
  return (OCTopAbs_State)(((IntCurvesFace_Intersector*)nativeHandle)->State(I));
}

OCTopoDS_Face^ OCIntCurvesFace_Intersector::Face()
{
  TopoDS_Face* tmp = new TopoDS_Face();
  *tmp = ((IntCurvesFace_Intersector*)nativeHandle)->Face();
  return gcnew OCTopoDS_Face(tmp);
}

 OCTopAbs_State OCIntCurvesFace_Intersector::ClassifyUVPoint(OCNaroWrappers::OCgp_Pnt2d^ Puv)
{
  return (OCTopAbs_State)(((IntCurvesFace_Intersector*)nativeHandle)->ClassifyUVPoint(*((gp_Pnt2d*)Puv->Handle)));
}

OCBnd_Box^ OCIntCurvesFace_Intersector::Bounding()
{
  Bnd_Box* tmp = new Bnd_Box();
  *tmp = ((IntCurvesFace_Intersector*)nativeHandle)->Bounding();
  return gcnew OCBnd_Box(tmp);
}


