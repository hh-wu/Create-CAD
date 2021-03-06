// File generated by CPPExt (CPP file)
//

#include "TCollection_Array2Descriptor.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCTCollection_Array2Descriptor::OCTCollection_Array2Descriptor(TCollection_Array2Descriptor* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTCollection_Array2Descriptor::OCTCollection_Array2Descriptor(Standard_Integer aLowerRow, Standard_Integer aUpperRow, Standard_Integer aLowerCol, Standard_Integer aUpperCol, Standard_Address anAddress) 
{}

 Standard_Integer OCTCollection_Array2Descriptor::UpperRow()
{
  return ((TCollection_Array2Descriptor*)nativeHandle)->UpperRow();
}

 Standard_Integer OCTCollection_Array2Descriptor::LowerRow()
{
  return ((TCollection_Array2Descriptor*)nativeHandle)->LowerRow();
}

 Standard_Integer OCTCollection_Array2Descriptor::UpperCol()
{
  return ((TCollection_Array2Descriptor*)nativeHandle)->UpperCol();
}

 Standard_Integer OCTCollection_Array2Descriptor::LowerCol()
{
  return ((TCollection_Array2Descriptor*)nativeHandle)->LowerCol();
}

 Standard_Address OCTCollection_Array2Descriptor::Address()
{
  return ((TCollection_Array2Descriptor*)nativeHandle)->Address();
}


