// File generated by CPPExt (CPP file)
//

#include "IntTools_LineConstructor.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_TopolTool.h"
#include "../GeomAdaptor/GeomAdaptor_HSurface.h"
#include "../IntPatch/IntPatch_Line.h"


using namespace OCNaroWrappers;

OCIntTools_LineConstructor::OCIntTools_LineConstructor(IntTools_LineConstructor* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntTools_LineConstructor::OCIntTools_LineConstructor() 
{
  nativeHandle = new IntTools_LineConstructor();
}

 void OCIntTools_LineConstructor::Load(OCNaroWrappers::OCAdaptor3d_TopolTool^ D1, OCNaroWrappers::OCAdaptor3d_TopolTool^ D2, OCNaroWrappers::OCGeomAdaptor_HSurface^ S1, OCNaroWrappers::OCGeomAdaptor_HSurface^ S2)
{
  ((IntTools_LineConstructor*)nativeHandle)->Load(*((Handle_Adaptor3d_TopolTool*)D1->Handle), *((Handle_Adaptor3d_TopolTool*)D2->Handle), *((Handle_GeomAdaptor_HSurface*)S1->Handle), *((Handle_GeomAdaptor_HSurface*)S2->Handle));
}

 void OCIntTools_LineConstructor::Perform(OCNaroWrappers::OCIntPatch_Line^ L)
{
  ((IntTools_LineConstructor*)nativeHandle)->Perform(*((Handle_IntPatch_Line*)L->Handle));
}

 System::Boolean OCIntTools_LineConstructor::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((IntTools_LineConstructor*)nativeHandle)->IsDone());
}

 Standard_Integer OCIntTools_LineConstructor::NbParts()
{
  return ((IntTools_LineConstructor*)nativeHandle)->NbParts();
}

 void OCIntTools_LineConstructor::Part(Standard_Integer I, Standard_Real& WFirst, Standard_Real& WLast)
{
  ((IntTools_LineConstructor*)nativeHandle)->Part(I, WFirst, WLast);
}

