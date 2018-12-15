// File generated by CPPExt (CPP file)
//

#include "TDataStd_DataMapOfStringHArray1OfReal.h"
#include "../Converter.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "../TColStd/TColStd_HArray1OfReal.h"
#include "TDataStd_DataMapNodeOfDataMapOfStringHArray1OfReal.h"
#include "TDataStd_DataMapIteratorOfDataMapOfStringHArray1OfReal.h"


using namespace OCNaroWrappers;

OCTDataStd_DataMapOfStringHArray1OfReal::OCTDataStd_DataMapOfStringHArray1OfReal(TDataStd_DataMapOfStringHArray1OfReal* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTDataStd_DataMapOfStringHArray1OfReal::OCTDataStd_DataMapOfStringHArray1OfReal(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new TDataStd_DataMapOfStringHArray1OfReal(NbBuckets);
}

OCTDataStd_DataMapOfStringHArray1OfReal^ OCTDataStd_DataMapOfStringHArray1OfReal::Assign(OCNaroWrappers::OCTDataStd_DataMapOfStringHArray1OfReal^ Other)
{
  TDataStd_DataMapOfStringHArray1OfReal* tmp = new TDataStd_DataMapOfStringHArray1OfReal(0);
  *tmp = ((TDataStd_DataMapOfStringHArray1OfReal*)nativeHandle)->Assign(*((TDataStd_DataMapOfStringHArray1OfReal*)Other->Handle));
  return gcnew OCTDataStd_DataMapOfStringHArray1OfReal(tmp);
}

 void OCTDataStd_DataMapOfStringHArray1OfReal::ReSize(Standard_Integer NbBuckets)
{
  ((TDataStd_DataMapOfStringHArray1OfReal*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCTDataStd_DataMapOfStringHArray1OfReal::Bind(OCNaroWrappers::OCTCollection_ExtendedString^ K, OCNaroWrappers::OCTColStd_HArray1OfReal^ I)
{
  return OCConverter::StandardBooleanToBoolean(((TDataStd_DataMapOfStringHArray1OfReal*)nativeHandle)->Bind(*((TCollection_ExtendedString*)K->Handle), *((Handle_TColStd_HArray1OfReal*)I->Handle)));
}

 System::Boolean OCTDataStd_DataMapOfStringHArray1OfReal::IsBound(OCNaroWrappers::OCTCollection_ExtendedString^ K)
{
  return OCConverter::StandardBooleanToBoolean(((TDataStd_DataMapOfStringHArray1OfReal*)nativeHandle)->IsBound(*((TCollection_ExtendedString*)K->Handle)));
}

 System::Boolean OCTDataStd_DataMapOfStringHArray1OfReal::UnBind(OCNaroWrappers::OCTCollection_ExtendedString^ K)
{
  return OCConverter::StandardBooleanToBoolean(((TDataStd_DataMapOfStringHArray1OfReal*)nativeHandle)->UnBind(*((TCollection_ExtendedString*)K->Handle)));
}

OCTColStd_HArray1OfReal^ OCTDataStd_DataMapOfStringHArray1OfReal::Find(OCNaroWrappers::OCTCollection_ExtendedString^ K)
{
  Handle(TColStd_HArray1OfReal) tmp = ((TDataStd_DataMapOfStringHArray1OfReal*)nativeHandle)->Find(*((TCollection_ExtendedString*)K->Handle));
  return gcnew OCTColStd_HArray1OfReal(&tmp);
}

OCTColStd_HArray1OfReal^ OCTDataStd_DataMapOfStringHArray1OfReal::ChangeFind(OCNaroWrappers::OCTCollection_ExtendedString^ K)
{
  Handle(TColStd_HArray1OfReal) tmp = ((TDataStd_DataMapOfStringHArray1OfReal*)nativeHandle)->ChangeFind(*((TCollection_ExtendedString*)K->Handle));
  return gcnew OCTColStd_HArray1OfReal(&tmp);
}

 Standard_Address OCTDataStd_DataMapOfStringHArray1OfReal::Find1(OCNaroWrappers::OCTCollection_ExtendedString^ K)
{
  return ((TDataStd_DataMapOfStringHArray1OfReal*)nativeHandle)->Find1(*((TCollection_ExtendedString*)K->Handle));
}

 Standard_Address OCTDataStd_DataMapOfStringHArray1OfReal::ChangeFind1(OCNaroWrappers::OCTCollection_ExtendedString^ K)
{
  return ((TDataStd_DataMapOfStringHArray1OfReal*)nativeHandle)->ChangeFind1(*((TCollection_ExtendedString*)K->Handle));
}

