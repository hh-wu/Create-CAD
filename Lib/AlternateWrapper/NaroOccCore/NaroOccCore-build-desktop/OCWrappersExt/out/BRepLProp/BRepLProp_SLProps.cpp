// File generated by CPPExt (CPP file)
//

#include "BRepLProp_SLProps.h"
#include "../Converter.h"
#include "../BRepAdaptor/BRepAdaptor_Surface.h"
#include "BRepLProp_SurfaceTool.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"
#include "../gp/gp_Dir.h"


using namespace OCNaroWrappers;

OCBRepLProp_SLProps::OCBRepLProp_SLProps(BRepLProp_SLProps* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBRepLProp_SLProps::OCBRepLProp_SLProps(OCNaroWrappers::OCBRepAdaptor_Surface^ S, Standard_Real U, Standard_Real V, Standard_Integer N, Standard_Real Resolution) 
{
  nativeHandle = new BRepLProp_SLProps(*((BRepAdaptor_Surface*)S->Handle), U, V, N, Resolution);
}

OCBRepLProp_SLProps::OCBRepLProp_SLProps(OCNaroWrappers::OCBRepAdaptor_Surface^ S, Standard_Integer N, Standard_Real Resolution) 
{
  nativeHandle = new BRepLProp_SLProps(*((BRepAdaptor_Surface*)S->Handle), N, Resolution);
}

OCBRepLProp_SLProps::OCBRepLProp_SLProps(Standard_Integer N, Standard_Real Resolution) 
{
  nativeHandle = new BRepLProp_SLProps(N, Resolution);
}

 void OCBRepLProp_SLProps::SetSurface(OCNaroWrappers::OCBRepAdaptor_Surface^ S)
{
  ((BRepLProp_SLProps*)nativeHandle)->SetSurface(*((BRepAdaptor_Surface*)S->Handle));
}

 void OCBRepLProp_SLProps::SetParameters(Standard_Real U, Standard_Real V)
{
  ((BRepLProp_SLProps*)nativeHandle)->SetParameters(U, V);
}

OCgp_Pnt^ OCBRepLProp_SLProps::Value()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((BRepLProp_SLProps*)nativeHandle)->Value();
  return gcnew OCgp_Pnt(tmp);
}

OCgp_Vec^ OCBRepLProp_SLProps::D1U()
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((BRepLProp_SLProps*)nativeHandle)->D1U();
  return gcnew OCgp_Vec(tmp);
}

OCgp_Vec^ OCBRepLProp_SLProps::D1V()
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((BRepLProp_SLProps*)nativeHandle)->D1V();
  return gcnew OCgp_Vec(tmp);
}

OCgp_Vec^ OCBRepLProp_SLProps::D2U()
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((BRepLProp_SLProps*)nativeHandle)->D2U();
  return gcnew OCgp_Vec(tmp);
}

OCgp_Vec^ OCBRepLProp_SLProps::D2V()
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((BRepLProp_SLProps*)nativeHandle)->D2V();
  return gcnew OCgp_Vec(tmp);
}

OCgp_Vec^ OCBRepLProp_SLProps::DUV()
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = ((BRepLProp_SLProps*)nativeHandle)->DUV();
  return gcnew OCgp_Vec(tmp);
}

 System::Boolean OCBRepLProp_SLProps::IsTangentUDefined()
{
  return OCConverter::StandardBooleanToBoolean(((BRepLProp_SLProps*)nativeHandle)->IsTangentUDefined());
}

 void OCBRepLProp_SLProps::TangentU(OCNaroWrappers::OCgp_Dir^ D)
{
  ((BRepLProp_SLProps*)nativeHandle)->TangentU(*((gp_Dir*)D->Handle));
}

 System::Boolean OCBRepLProp_SLProps::IsTangentVDefined()
{
  return OCConverter::StandardBooleanToBoolean(((BRepLProp_SLProps*)nativeHandle)->IsTangentVDefined());
}

 void OCBRepLProp_SLProps::TangentV(OCNaroWrappers::OCgp_Dir^ D)
{
  ((BRepLProp_SLProps*)nativeHandle)->TangentV(*((gp_Dir*)D->Handle));
}

 System::Boolean OCBRepLProp_SLProps::IsNormalDefined()
{
  return OCConverter::StandardBooleanToBoolean(((BRepLProp_SLProps*)nativeHandle)->IsNormalDefined());
}

OCgp_Dir^ OCBRepLProp_SLProps::Normal()
{
  gp_Dir* tmp = new gp_Dir();
  *tmp = ((BRepLProp_SLProps*)nativeHandle)->Normal();
  return gcnew OCgp_Dir(tmp);
}

 System::Boolean OCBRepLProp_SLProps::IsCurvatureDefined()
{
  return OCConverter::StandardBooleanToBoolean(((BRepLProp_SLProps*)nativeHandle)->IsCurvatureDefined());
}

 System::Boolean OCBRepLProp_SLProps::IsUmbilic()
{
  return OCConverter::StandardBooleanToBoolean(((BRepLProp_SLProps*)nativeHandle)->IsUmbilic());
}

 Standard_Real OCBRepLProp_SLProps::MaxCurvature()
{
  return ((BRepLProp_SLProps*)nativeHandle)->MaxCurvature();
}

 Standard_Real OCBRepLProp_SLProps::MinCurvature()
{
  return ((BRepLProp_SLProps*)nativeHandle)->MinCurvature();
}

 void OCBRepLProp_SLProps::CurvatureDirections(OCNaroWrappers::OCgp_Dir^ MaxD, OCNaroWrappers::OCgp_Dir^ MinD)
{
  ((BRepLProp_SLProps*)nativeHandle)->CurvatureDirections(*((gp_Dir*)MaxD->Handle), *((gp_Dir*)MinD->Handle));
}

 Standard_Real OCBRepLProp_SLProps::MeanCurvature()
{
  return ((BRepLProp_SLProps*)nativeHandle)->MeanCurvature();
}

 Standard_Real OCBRepLProp_SLProps::GaussianCurvature()
{
  return ((BRepLProp_SLProps*)nativeHandle)->GaussianCurvature();
}


