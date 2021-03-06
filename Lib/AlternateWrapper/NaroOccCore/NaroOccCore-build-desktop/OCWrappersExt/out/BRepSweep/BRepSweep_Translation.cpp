// File generated by CPPExt (CPP file)
//

#include "BRepSweep_Translation.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../Sweep/Sweep_NumShape.h"
#include "../TopLoc/TopLoc_Location.h"
#include "../gp/gp_Vec.h"


using namespace OCNaroWrappers;

OCBRepSweep_Translation::OCBRepSweep_Translation(BRepSweep_Translation* nativeHandle) : OCBRepSweep_Trsf((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepSweep_Translation::OCBRepSweep_Translation(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCSweep_NumShape^ N, OCNaroWrappers::OCTopLoc_Location^ L, OCNaroWrappers::OCgp_Vec^ V, System::Boolean C, System::Boolean Canonize) : OCBRepSweep_Trsf((OCDummy^)nullptr)

{
  nativeHandle = new BRepSweep_Translation(*((TopoDS_Shape*)S->Handle), *((Sweep_NumShape*)N->Handle), *((TopLoc_Location*)L->Handle), *((gp_Vec*)V->Handle), OCConverter::BooleanToStandardBoolean(C), OCConverter::BooleanToStandardBoolean(Canonize));
}

 void OCBRepSweep_Translation::Delete()
{
  ((BRepSweep_Translation*)nativeHandle)->Delete();
}

OCTopoDS_Shape^ OCBRepSweep_Translation::MakeEmptyVertex(OCNaroWrappers::OCTopoDS_Shape^ aGenV, OCNaroWrappers::OCSweep_NumShape^ aDirV)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepSweep_Translation*)nativeHandle)->MakeEmptyVertex(*((TopoDS_Shape*)aGenV->Handle), *((Sweep_NumShape*)aDirV->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepSweep_Translation::MakeEmptyDirectingEdge(OCNaroWrappers::OCTopoDS_Shape^ aGenV, OCNaroWrappers::OCSweep_NumShape^ aDirE)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepSweep_Translation*)nativeHandle)->MakeEmptyDirectingEdge(*((TopoDS_Shape*)aGenV->Handle), *((Sweep_NumShape*)aDirE->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopoDS_Shape^ OCBRepSweep_Translation::MakeEmptyGeneratingEdge(OCNaroWrappers::OCTopoDS_Shape^ aGenE, OCNaroWrappers::OCSweep_NumShape^ aDirV)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepSweep_Translation*)nativeHandle)->MakeEmptyGeneratingEdge(*((TopoDS_Shape*)aGenE->Handle), *((Sweep_NumShape*)aDirV->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

 void OCBRepSweep_Translation::SetParameters(OCNaroWrappers::OCTopoDS_Shape^ aNewFace, OCNaroWrappers::OCTopoDS_Shape^ aNewVertex, OCNaroWrappers::OCTopoDS_Shape^ aGenF, OCNaroWrappers::OCTopoDS_Shape^ aGenV, OCNaroWrappers::OCSweep_NumShape^ aDirV)
{
  ((BRepSweep_Translation*)nativeHandle)->SetParameters(*((TopoDS_Shape*)aNewFace->Handle), *((TopoDS_Shape*)aNewVertex->Handle), *((TopoDS_Shape*)aGenF->Handle), *((TopoDS_Shape*)aGenV->Handle), *((Sweep_NumShape*)aDirV->Handle));
}

 void OCBRepSweep_Translation::SetDirectingParameter(OCNaroWrappers::OCTopoDS_Shape^ aNewEdge, OCNaroWrappers::OCTopoDS_Shape^ aNewVertex, OCNaroWrappers::OCTopoDS_Shape^ aGenV, OCNaroWrappers::OCSweep_NumShape^ aDirE, OCNaroWrappers::OCSweep_NumShape^ aDirV)
{
  ((BRepSweep_Translation*)nativeHandle)->SetDirectingParameter(*((TopoDS_Shape*)aNewEdge->Handle), *((TopoDS_Shape*)aNewVertex->Handle), *((TopoDS_Shape*)aGenV->Handle), *((Sweep_NumShape*)aDirE->Handle), *((Sweep_NumShape*)aDirV->Handle));
}

 void OCBRepSweep_Translation::SetGeneratingParameter(OCNaroWrappers::OCTopoDS_Shape^ aNewEdge, OCNaroWrappers::OCTopoDS_Shape^ aNewVertex, OCNaroWrappers::OCTopoDS_Shape^ aGenE, OCNaroWrappers::OCTopoDS_Shape^ aGenV, OCNaroWrappers::OCSweep_NumShape^ aDirV)
{
  ((BRepSweep_Translation*)nativeHandle)->SetGeneratingParameter(*((TopoDS_Shape*)aNewEdge->Handle), *((TopoDS_Shape*)aNewVertex->Handle), *((TopoDS_Shape*)aGenE->Handle), *((TopoDS_Shape*)aGenV->Handle), *((Sweep_NumShape*)aDirV->Handle));
}

OCTopoDS_Shape^ OCBRepSweep_Translation::MakeEmptyFace(OCNaroWrappers::OCTopoDS_Shape^ aGenS, OCNaroWrappers::OCSweep_NumShape^ aDirS)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepSweep_Translation*)nativeHandle)->MakeEmptyFace(*((TopoDS_Shape*)aGenS->Handle), *((Sweep_NumShape*)aDirS->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

 void OCBRepSweep_Translation::SetPCurve(OCNaroWrappers::OCTopoDS_Shape^ aNewFace, OCNaroWrappers::OCTopoDS_Shape^ aNewEdge, OCNaroWrappers::OCTopoDS_Shape^ aGenF, OCNaroWrappers::OCTopoDS_Shape^ aGenE, OCNaroWrappers::OCSweep_NumShape^ aDirV, OCTopAbs_Orientation orien)
{
  ((BRepSweep_Translation*)nativeHandle)->SetPCurve(*((TopoDS_Shape*)aNewFace->Handle), *((TopoDS_Shape*)aNewEdge->Handle), *((TopoDS_Shape*)aGenF->Handle), *((TopoDS_Shape*)aGenE->Handle), *((Sweep_NumShape*)aDirV->Handle), (TopAbs_Orientation)orien);
}

 void OCBRepSweep_Translation::SetGeneratingPCurve(OCNaroWrappers::OCTopoDS_Shape^ aNewFace, OCNaroWrappers::OCTopoDS_Shape^ aNewEdge, OCNaroWrappers::OCTopoDS_Shape^ aGenE, OCNaroWrappers::OCSweep_NumShape^ aDirE, OCNaroWrappers::OCSweep_NumShape^ aDirV, OCTopAbs_Orientation orien)
{
  ((BRepSweep_Translation*)nativeHandle)->SetGeneratingPCurve(*((TopoDS_Shape*)aNewFace->Handle), *((TopoDS_Shape*)aNewEdge->Handle), *((TopoDS_Shape*)aGenE->Handle), *((Sweep_NumShape*)aDirE->Handle), *((Sweep_NumShape*)aDirV->Handle), (TopAbs_Orientation)orien);
}

 void OCBRepSweep_Translation::SetDirectingPCurve(OCNaroWrappers::OCTopoDS_Shape^ aNewFace, OCNaroWrappers::OCTopoDS_Shape^ aNewEdge, OCNaroWrappers::OCTopoDS_Shape^ aGenE, OCNaroWrappers::OCTopoDS_Shape^ aGenV, OCNaroWrappers::OCSweep_NumShape^ aDirE, OCTopAbs_Orientation orien)
{
  ((BRepSweep_Translation*)nativeHandle)->SetDirectingPCurve(*((TopoDS_Shape*)aNewFace->Handle), *((TopoDS_Shape*)aNewEdge->Handle), *((TopoDS_Shape*)aGenE->Handle), *((TopoDS_Shape*)aGenV->Handle), *((Sweep_NumShape*)aDirE->Handle), (TopAbs_Orientation)orien);
}

 OCTopAbs_Orientation OCBRepSweep_Translation::DirectSolid(OCNaroWrappers::OCTopoDS_Shape^ aGenS, OCNaroWrappers::OCSweep_NumShape^ aDirS)
{
  return (OCTopAbs_Orientation)(((BRepSweep_Translation*)nativeHandle)->DirectSolid(*((TopoDS_Shape*)aGenS->Handle), *((Sweep_NumShape*)aDirS->Handle)));
}

 System::Boolean OCBRepSweep_Translation::GGDShapeIsToAdd(OCNaroWrappers::OCTopoDS_Shape^ aNewShape, OCNaroWrappers::OCTopoDS_Shape^ aNewSubShape, OCNaroWrappers::OCTopoDS_Shape^ aGenS, OCNaroWrappers::OCTopoDS_Shape^ aSubGenS, OCNaroWrappers::OCSweep_NumShape^ aDirS)
{
  return OCConverter::StandardBooleanToBoolean(((BRepSweep_Translation*)nativeHandle)->GGDShapeIsToAdd(*((TopoDS_Shape*)aNewShape->Handle), *((TopoDS_Shape*)aNewSubShape->Handle), *((TopoDS_Shape*)aGenS->Handle), *((TopoDS_Shape*)aSubGenS->Handle), *((Sweep_NumShape*)aDirS->Handle)));
}

 System::Boolean OCBRepSweep_Translation::GDDShapeIsToAdd(OCNaroWrappers::OCTopoDS_Shape^ aNewShape, OCNaroWrappers::OCTopoDS_Shape^ aNewSubShape, OCNaroWrappers::OCTopoDS_Shape^ aGenS, OCNaroWrappers::OCSweep_NumShape^ aDirS, OCNaroWrappers::OCSweep_NumShape^ aSubDirS)
{
  return OCConverter::StandardBooleanToBoolean(((BRepSweep_Translation*)nativeHandle)->GDDShapeIsToAdd(*((TopoDS_Shape*)aNewShape->Handle), *((TopoDS_Shape*)aNewSubShape->Handle), *((TopoDS_Shape*)aGenS->Handle), *((Sweep_NumShape*)aDirS->Handle), *((Sweep_NumShape*)aSubDirS->Handle)));
}

 System::Boolean OCBRepSweep_Translation::SeparatedWires(OCNaroWrappers::OCTopoDS_Shape^ aNewShape, OCNaroWrappers::OCTopoDS_Shape^ aNewSubShape, OCNaroWrappers::OCTopoDS_Shape^ aGenS, OCNaroWrappers::OCTopoDS_Shape^ aSubGenS, OCNaroWrappers::OCSweep_NumShape^ aDirS)
{
  return OCConverter::StandardBooleanToBoolean(((BRepSweep_Translation*)nativeHandle)->SeparatedWires(*((TopoDS_Shape*)aNewShape->Handle), *((TopoDS_Shape*)aNewSubShape->Handle), *((TopoDS_Shape*)aGenS->Handle), *((TopoDS_Shape*)aSubGenS->Handle), *((Sweep_NumShape*)aDirS->Handle)));
}

 System::Boolean OCBRepSweep_Translation::HasShape(OCNaroWrappers::OCTopoDS_Shape^ aGenS, OCNaroWrappers::OCSweep_NumShape^ aDirS)
{
  return OCConverter::StandardBooleanToBoolean(((BRepSweep_Translation*)nativeHandle)->HasShape(*((TopoDS_Shape*)aGenS->Handle), *((Sweep_NumShape*)aDirS->Handle)));
}

 System::Boolean OCBRepSweep_Translation::IsInvariant(OCNaroWrappers::OCTopoDS_Shape^ aGenS)
{
  return OCConverter::StandardBooleanToBoolean(((BRepSweep_Translation*)nativeHandle)->IsInvariant(*((TopoDS_Shape*)aGenS->Handle)));
}

OCgp_Vec^ OCBRepSweep_Translation::Vec()
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((BRepSweep_Translation*)nativeHandle)->Vec();
  return gcnew OCgp_Vec(tmp);
}


