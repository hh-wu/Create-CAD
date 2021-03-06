// File generated by CPPExt (CPP file)
//

#include "TColGeom2d_Array1OfGeometry.h"
#include "../Converter.h"
#include "../Geom2d/Geom2d_Geometry.h"


using namespace OCNaroWrappers;

OCTColGeom2d_Array1OfGeometry::OCTColGeom2d_Array1OfGeometry(TColGeom2d_Array1OfGeometry* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTColGeom2d_Array1OfGeometry::OCTColGeom2d_Array1OfGeometry(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new TColGeom2d_Array1OfGeometry(Low, Up);
}

OCTColGeom2d_Array1OfGeometry::OCTColGeom2d_Array1OfGeometry(OCNaroWrappers::OCGeom2d_Geometry^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new TColGeom2d_Array1OfGeometry(*((Handle_Geom2d_Geometry*)Item->Handle), Low, Up);
}

 void OCTColGeom2d_Array1OfGeometry::Init(OCNaroWrappers::OCGeom2d_Geometry^ V)
{
  ((TColGeom2d_Array1OfGeometry*)nativeHandle)->Init(*((Handle_Geom2d_Geometry*)V->Handle));
}

 System::Boolean OCTColGeom2d_Array1OfGeometry::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((TColGeom2d_Array1OfGeometry*)nativeHandle)->IsAllocated());
}

OCTColGeom2d_Array1OfGeometry^ OCTColGeom2d_Array1OfGeometry::Assign(OCNaroWrappers::OCTColGeom2d_Array1OfGeometry^ Other)
{
  TColGeom2d_Array1OfGeometry* tmp = new TColGeom2d_Array1OfGeometry(0, 0);
  *tmp = ((TColGeom2d_Array1OfGeometry*)nativeHandle)->Assign(*((TColGeom2d_Array1OfGeometry*)Other->Handle));
  return gcnew OCTColGeom2d_Array1OfGeometry(tmp);
}

 Standard_Integer OCTColGeom2d_Array1OfGeometry::Length()
{
  return ((TColGeom2d_Array1OfGeometry*)nativeHandle)->Length();
}

 Standard_Integer OCTColGeom2d_Array1OfGeometry::Lower()
{
  return ((TColGeom2d_Array1OfGeometry*)nativeHandle)->Lower();
}

 Standard_Integer OCTColGeom2d_Array1OfGeometry::Upper()
{
  return ((TColGeom2d_Array1OfGeometry*)nativeHandle)->Upper();
}

 void OCTColGeom2d_Array1OfGeometry::SetValue(Standard_Integer Index, OCNaroWrappers::OCGeom2d_Geometry^ Value)
{
  ((TColGeom2d_Array1OfGeometry*)nativeHandle)->SetValue(Index, *((Handle_Geom2d_Geometry*)Value->Handle));
}

OCGeom2d_Geometry^ OCTColGeom2d_Array1OfGeometry::Value(Standard_Integer Index)
{
  Handle(Geom2d_Geometry) tmp = ((TColGeom2d_Array1OfGeometry*)nativeHandle)->Value(Index);
  return gcnew OCGeom2d_Geometry(&tmp);
}

OCGeom2d_Geometry^ OCTColGeom2d_Array1OfGeometry::ChangeValue(Standard_Integer Index)
{
  Handle(Geom2d_Geometry) tmp = ((TColGeom2d_Array1OfGeometry*)nativeHandle)->ChangeValue(Index);
  return gcnew OCGeom2d_Geometry(&tmp);
}


