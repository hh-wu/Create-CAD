// File generated by CPPExt (CPP file)
//

#include "TDataStd_DataMapOfStringInteger.h"
#include "../Converter.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "TDataStd_DataMapNodeOfDataMapOfStringInteger.h"
#include "TDataStd_DataMapIteratorOfDataMapOfStringInteger.h"


using namespace OCNaroWrappers;

OCTDataStd_DataMapOfStringInteger::OCTDataStd_DataMapOfStringInteger(TDataStd_DataMapOfStringInteger* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTDataStd_DataMapOfStringInteger::OCTDataStd_DataMapOfStringInteger(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new TDataStd_DataMapOfStringInteger(NbBuckets);
}

OCTDataStd_DataMapOfStringInteger^ OCTDataStd_DataMapOfStringInteger::Assign(OCNaroWrappers::OCTDataStd_DataMapOfStringInteger^ Other)
{
  TDataStd_DataMapOfStringInteger* tmp = new TDataStd_DataMapOfStringInteger(0);
  *tmp = ((TDataStd_DataMapOfStringInteger*)nativeHandle)->Assign(*((TDataStd_DataMapOfStringInteger*)Other->Handle));
  return gcnew OCTDataStd_DataMapOfStringInteger(tmp);
}

 void OCTDataStd_DataMapOfStringInteger::ReSize(Standard_Integer NbBuckets)
{
  ((TDataStd_DataMapOfStringInteger*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCTDataStd_DataMapOfStringInteger::Bind(OCNaroWrappers::OCTCollection_ExtendedString^ K, Standard_Integer I)
{
  return OCConverter::StandardBooleanToBoolean(((TDataStd_DataMapOfStringInteger*)nativeHandle)->Bind(*((TCollection_ExtendedString*)K->Handle), I));
}

 System::Boolean OCTDataStd_DataMapOfStringInteger::IsBound(OCNaroWrappers::OCTCollection_ExtendedString^ K)
{
  return OCConverter::StandardBooleanToBoolean(((TDataStd_DataMapOfStringInteger*)nativeHandle)->IsBound(*((TCollection_ExtendedString*)K->Handle)));
}

 System::Boolean OCTDataStd_DataMapOfStringInteger::UnBind(OCNaroWrappers::OCTCollection_ExtendedString^ K)
{
  return OCConverter::StandardBooleanToBoolean(((TDataStd_DataMapOfStringInteger*)nativeHandle)->UnBind(*((TCollection_ExtendedString*)K->Handle)));
}

 Standard_Integer OCTDataStd_DataMapOfStringInteger::Find(OCNaroWrappers::OCTCollection_ExtendedString^ K)
{
  return ((TDataStd_DataMapOfStringInteger*)nativeHandle)->Find(*((TCollection_ExtendedString*)K->Handle));
}

 Standard_Integer OCTDataStd_DataMapOfStringInteger::ChangeFind(OCNaroWrappers::OCTCollection_ExtendedString^ K)
{
  return ((TDataStd_DataMapOfStringInteger*)nativeHandle)->ChangeFind(*((TCollection_ExtendedString*)K->Handle));
}


