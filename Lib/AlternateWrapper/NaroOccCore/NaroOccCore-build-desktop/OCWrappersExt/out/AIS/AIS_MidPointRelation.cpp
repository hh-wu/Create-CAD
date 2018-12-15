// File generated by CPPExt (CPP file)
//

#include "AIS_MidPointRelation.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../Geom/Geom_Plane.h"
#include "../PrsMgr/PrsMgr_PresentationManager3d.h"
#include "../Prs3d/Prs3d_Presentation.h"
#include "../Prs3d/Prs3d_Projector.h"
#include "../PrsMgr/PrsMgr_PresentationManager2d.h"
#include "../Graphic2d/Graphic2d_GraphicObject.h"
#include "../Geom/Geom_Transformation.h"
#include "../SelectMgr/SelectMgr_Selection.h"
#include "../gp/gp_Lin.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Circ.h"
#include "../gp/gp_Elips.h"


using namespace OCNaroWrappers;

OCAIS_MidPointRelation::OCAIS_MidPointRelation(Handle(AIS_MidPointRelation)* nativeHandle) : OCAIS_Relation((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_AIS_MidPointRelation(*nativeHandle);
}

OCAIS_MidPointRelation::OCAIS_MidPointRelation(OCNaroWrappers::OCTopoDS_Shape^ aSymmTool, OCNaroWrappers::OCTopoDS_Shape^ FirstShape, OCNaroWrappers::OCTopoDS_Shape^ SecondShape, OCNaroWrappers::OCGeom_Plane^ aPlane) : OCAIS_Relation((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AIS_MidPointRelation(new AIS_MidPointRelation(*((TopoDS_Shape*)aSymmTool->Handle), *((TopoDS_Shape*)FirstShape->Handle), *((TopoDS_Shape*)SecondShape->Handle), *((Handle_Geom_Plane*)aPlane->Handle)));
}

 System::Boolean OCAIS_MidPointRelation::IsMovable()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS_MidPointRelation*)nativeHandle))->IsMovable());
}

 void OCAIS_MidPointRelation::SetTool(OCNaroWrappers::OCTopoDS_Shape^ aMidPointTool)
{
  (*((Handle_AIS_MidPointRelation*)nativeHandle))->SetTool(*((TopoDS_Shape*)aMidPointTool->Handle));
}

OCTopoDS_Shape^ OCAIS_MidPointRelation::GetTool()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_AIS_MidPointRelation*)nativeHandle))->GetTool();
  return gcnew OCTopoDS_Shape(tmp);
}

 void OCAIS_MidPointRelation::Compute(OCNaroWrappers::OCPrs3d_Projector^ aProjector, OCNaroWrappers::OCGeom_Transformation^ aTrsf, OCNaroWrappers::OCPrs3d_Presentation^ aPresentation)
{
  (*((Handle_AIS_MidPointRelation*)nativeHandle))->Compute(*((Handle_Prs3d_Projector*)aProjector->Handle), *((Handle_Geom_Transformation*)aTrsf->Handle), *((Handle_Prs3d_Presentation*)aPresentation->Handle));
}

