// File generated by CPPExt (CPP file)
//

#include "BRepGProp.h"
#include "../Converter.h"


using namespace OCNaroWrappers;



 void OCBRepGProp::LinearProperties(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCGProp_GProps^ LProps)
{
  BRepGProp::LinearProperties(*((TopoDS_Shape*)S->Handle), *((GProp_GProps*)LProps->Handle));
}

 void OCBRepGProp::SurfaceProperties(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCGProp_GProps^ SProps)
{
  BRepGProp::SurfaceProperties(*((TopoDS_Shape*)S->Handle), *((GProp_GProps*)SProps->Handle));
}

 Standard_Real OCBRepGProp::SurfaceProperties(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCGProp_GProps^ SProps, Standard_Real Eps)
{
  return BRepGProp::SurfaceProperties(*((TopoDS_Shape*)S->Handle), *((GProp_GProps*)SProps->Handle), Eps);
}

 void OCBRepGProp::VolumeProperties(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCGProp_GProps^ VProps, System::Boolean OnlyClosed)
{
  BRepGProp::VolumeProperties(*((TopoDS_Shape*)S->Handle), *((GProp_GProps*)VProps->Handle), OCConverter::BooleanToStandardBoolean(OnlyClosed));
}

 Standard_Real OCBRepGProp::VolumeProperties(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCGProp_GProps^ VProps, Standard_Real Eps, System::Boolean OnlyClosed)
{
  return BRepGProp::VolumeProperties(*((TopoDS_Shape*)S->Handle), *((GProp_GProps*)VProps->Handle), Eps, OCConverter::BooleanToStandardBoolean(OnlyClosed));
}

 Standard_Real OCBRepGProp::VolumePropertiesGK(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCGProp_GProps^ VProps, Standard_Real Eps, System::Boolean OnlyClosed, System::Boolean IsUseSpan, System::Boolean CGFlag, System::Boolean IFlag)
{
  return BRepGProp::VolumePropertiesGK(*((TopoDS_Shape*)S->Handle), *((GProp_GProps*)VProps->Handle), Eps, OCConverter::BooleanToStandardBoolean(OnlyClosed), OCConverter::BooleanToStandardBoolean(IsUseSpan), OCConverter::BooleanToStandardBoolean(CGFlag), OCConverter::BooleanToStandardBoolean(IFlag));
}

 Standard_Real OCBRepGProp::VolumePropertiesGK(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCGProp_GProps^ VProps, OCNaroWrappers::OCgp_Pln^ thePln, Standard_Real Eps, System::Boolean OnlyClosed, System::Boolean IsUseSpan, System::Boolean CGFlag, System::Boolean IFlag)
{
  return BRepGProp::VolumePropertiesGK(*((TopoDS_Shape*)S->Handle), *((GProp_GProps*)VProps->Handle), *((gp_Pln*)thePln->Handle), Eps, OCConverter::BooleanToStandardBoolean(OnlyClosed), OCConverter::BooleanToStandardBoolean(IsUseSpan), OCConverter::BooleanToStandardBoolean(CGFlag), OCConverter::BooleanToStandardBoolean(IFlag));
}


