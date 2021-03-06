// File generated by CPPExt (CPP file)
//

#include "TColStd_Array2OfReal.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCTColStd_Array2OfReal::OCTColStd_Array2OfReal(TColStd_Array2OfReal* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTColStd_Array2OfReal::OCTColStd_Array2OfReal(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2) 
{
  nativeHandle = new TColStd_Array2OfReal(R1, R2, C1, C2);
}

OCTColStd_Array2OfReal::OCTColStd_Array2OfReal(Standard_Real Item, Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2) 
{
  nativeHandle = new TColStd_Array2OfReal(Item, R1, R2, C1, C2);
}

 void OCTColStd_Array2OfReal::Init(Standard_Real V)
{
  ((TColStd_Array2OfReal*)nativeHandle)->Init(V);
}

OCTColStd_Array2OfReal^ OCTColStd_Array2OfReal::Assign(OCNaroWrappers::OCTColStd_Array2OfReal^ Other)
{
  TColStd_Array2OfReal* tmp = new TColStd_Array2OfReal(0, 0, 0, 0);
  *tmp = ((TColStd_Array2OfReal*)nativeHandle)->Assign(*((TColStd_Array2OfReal*)Other->Handle));
  return gcnew OCTColStd_Array2OfReal(tmp);
}

 Standard_Integer OCTColStd_Array2OfReal::ColLength()
{
  return ((TColStd_Array2OfReal*)nativeHandle)->ColLength();
}

 Standard_Integer OCTColStd_Array2OfReal::RowLength()
{
  return ((TColStd_Array2OfReal*)nativeHandle)->RowLength();
}

 Standard_Integer OCTColStd_Array2OfReal::LowerCol()
{
  return ((TColStd_Array2OfReal*)nativeHandle)->LowerCol();
}

 Standard_Integer OCTColStd_Array2OfReal::LowerRow()
{
  return ((TColStd_Array2OfReal*)nativeHandle)->LowerRow();
}

 Standard_Integer OCTColStd_Array2OfReal::UpperCol()
{
  return ((TColStd_Array2OfReal*)nativeHandle)->UpperCol();
}

 Standard_Integer OCTColStd_Array2OfReal::UpperRow()
{
  return ((TColStd_Array2OfReal*)nativeHandle)->UpperRow();
}

 void OCTColStd_Array2OfReal::SetValue(Standard_Integer Row, Standard_Integer Col, Standard_Real Value)
{
  ((TColStd_Array2OfReal*)nativeHandle)->SetValue(Row, Col, Value);
}

 Standard_Real OCTColStd_Array2OfReal::Value(Standard_Integer Row, Standard_Integer Col)
{
  return ((TColStd_Array2OfReal*)nativeHandle)->Value(Row, Col);
}

 Standard_Real OCTColStd_Array2OfReal::ChangeValue(Standard_Integer Row, Standard_Integer Col)
{
  return ((TColStd_Array2OfReal*)nativeHandle)->ChangeValue(Row, Col);
}


