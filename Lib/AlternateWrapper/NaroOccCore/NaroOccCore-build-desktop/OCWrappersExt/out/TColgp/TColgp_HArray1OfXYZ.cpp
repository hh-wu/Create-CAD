// File generated by CPPExt (CPP file)
//

#include "TColgp_HArray1OfXYZ.h"
#include "../Converter.h"
#include "../gp/gp_XYZ.h"
#include "TColgp_Array1OfXYZ.h"


using namespace OCNaroWrappers;

OCTColgp_HArray1OfXYZ::OCTColgp_HArray1OfXYZ(Handle(TColgp_HArray1OfXYZ)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColgp_HArray1OfXYZ(*nativeHandle);
}

OCTColgp_HArray1OfXYZ::OCTColgp_HArray1OfXYZ(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColgp_HArray1OfXYZ(new TColgp_HArray1OfXYZ(Low, Up));
}

OCTColgp_HArray1OfXYZ::OCTColgp_HArray1OfXYZ(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCgp_XYZ^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColgp_HArray1OfXYZ(new TColgp_HArray1OfXYZ(Low, Up, *((gp_XYZ*)V->Handle)));
}

 void OCTColgp_HArray1OfXYZ::Init(OCNaroWrappers::OCgp_XYZ^ V)
{
  (*((Handle_TColgp_HArray1OfXYZ*)nativeHandle))->Init(*((gp_XYZ*)V->Handle));
}

 Standard_Integer OCTColgp_HArray1OfXYZ::Length()
{
  return (*((Handle_TColgp_HArray1OfXYZ*)nativeHandle))->Length();
}

 Standard_Integer OCTColgp_HArray1OfXYZ::Lower()
{
  return (*((Handle_TColgp_HArray1OfXYZ*)nativeHandle))->Lower();
}

 Standard_Integer OCTColgp_HArray1OfXYZ::Upper()
{
  return (*((Handle_TColgp_HArray1OfXYZ*)nativeHandle))->Upper();
}

 void OCTColgp_HArray1OfXYZ::SetValue(Standard_Integer Index, OCNaroWrappers::OCgp_XYZ^ Value)
{
  (*((Handle_TColgp_HArray1OfXYZ*)nativeHandle))->SetValue(Index, *((gp_XYZ*)Value->Handle));
}

OCgp_XYZ^ OCTColgp_HArray1OfXYZ::Value(Standard_Integer Index)
{
  gp_XYZ* tmp = new gp_XYZ();
  *tmp = (*((Handle_TColgp_HArray1OfXYZ*)nativeHandle))->Value(Index);
  return gcnew OCgp_XYZ(tmp);
}

OCgp_XYZ^ OCTColgp_HArray1OfXYZ::ChangeValue(Standard_Integer Index)
{
  gp_XYZ* tmp = new gp_XYZ();
  *tmp = (*((Handle_TColgp_HArray1OfXYZ*)nativeHandle))->ChangeValue(Index);
  return gcnew OCgp_XYZ(tmp);
}

OCTColgp_Array1OfXYZ^ OCTColgp_HArray1OfXYZ::Array1()
{
  TColgp_Array1OfXYZ* tmp = new TColgp_Array1OfXYZ(0, 0);
  *tmp = (*((Handle_TColgp_HArray1OfXYZ*)nativeHandle))->Array1();
  return gcnew OCTColgp_Array1OfXYZ(tmp);
}

OCTColgp_Array1OfXYZ^ OCTColgp_HArray1OfXYZ::ChangeArray1()
{
  TColgp_Array1OfXYZ* tmp = new TColgp_Array1OfXYZ(0, 0);
  *tmp = (*((Handle_TColgp_HArray1OfXYZ*)nativeHandle))->ChangeArray1();
  return gcnew OCTColgp_Array1OfXYZ(tmp);
}


