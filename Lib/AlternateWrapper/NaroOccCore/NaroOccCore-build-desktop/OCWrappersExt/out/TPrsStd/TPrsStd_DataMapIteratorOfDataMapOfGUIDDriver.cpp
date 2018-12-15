// File generated by CPPExt (CPP file)
//

#include "TPrsStd_DataMapIteratorOfDataMapOfGUIDDriver.h"
#include "../Converter.h"
#include "../Standard/Standard_GUID.h"
#include "TPrsStd_Driver.h"
#include "TPrsStd_DataMapOfGUIDDriver.h"
#include "TPrsStd_DataMapNodeOfDataMapOfGUIDDriver.h"


using namespace OCNaroWrappers;

OCTPrsStd_DataMapIteratorOfDataMapOfGUIDDriver::OCTPrsStd_DataMapIteratorOfDataMapOfGUIDDriver(TPrsStd_DataMapIteratorOfDataMapOfGUIDDriver* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTPrsStd_DataMapIteratorOfDataMapOfGUIDDriver::OCTPrsStd_DataMapIteratorOfDataMapOfGUIDDriver() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new TPrsStd_DataMapIteratorOfDataMapOfGUIDDriver();
}

OCTPrsStd_DataMapIteratorOfDataMapOfGUIDDriver::OCTPrsStd_DataMapIteratorOfDataMapOfGUIDDriver(OCNaroWrappers::OCTPrsStd_DataMapOfGUIDDriver^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new TPrsStd_DataMapIteratorOfDataMapOfGUIDDriver(*((TPrsStd_DataMapOfGUIDDriver*)aMap->Handle));
}

 void OCTPrsStd_DataMapIteratorOfDataMapOfGUIDDriver::Initialize(OCNaroWrappers::OCTPrsStd_DataMapOfGUIDDriver^ aMap)
{
  ((TPrsStd_DataMapIteratorOfDataMapOfGUIDDriver*)nativeHandle)->Initialize(*((TPrsStd_DataMapOfGUIDDriver*)aMap->Handle));
}

OCStandard_GUID^ OCTPrsStd_DataMapIteratorOfDataMapOfGUIDDriver::Key()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = ((TPrsStd_DataMapIteratorOfDataMapOfGUIDDriver*)nativeHandle)->Key();
  return gcnew OCStandard_GUID(tmp);
}

OCTPrsStd_Driver^ OCTPrsStd_DataMapIteratorOfDataMapOfGUIDDriver::Value()
{
  Handle(TPrsStd_Driver) tmp = ((TPrsStd_DataMapIteratorOfDataMapOfGUIDDriver*)nativeHandle)->Value();
  return gcnew OCTPrsStd_Driver(&tmp);
}

