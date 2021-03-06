// File generated by CPPExt (CPP file)
//

#include "MAT_DataMapIteratorOfDataMapOfIntegerBisector.h"
#include "../Converter.h"
#include "MAT_Bisector.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "MAT_DataMapOfIntegerBisector.h"
#include "MAT_DataMapNodeOfDataMapOfIntegerBisector.h"


using namespace OCNaroWrappers;

OCMAT_DataMapIteratorOfDataMapOfIntegerBisector::OCMAT_DataMapIteratorOfDataMapOfIntegerBisector(MAT_DataMapIteratorOfDataMapOfIntegerBisector* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCMAT_DataMapIteratorOfDataMapOfIntegerBisector::OCMAT_DataMapIteratorOfDataMapOfIntegerBisector() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new MAT_DataMapIteratorOfDataMapOfIntegerBisector();
}

OCMAT_DataMapIteratorOfDataMapOfIntegerBisector::OCMAT_DataMapIteratorOfDataMapOfIntegerBisector(OCNaroWrappers::OCMAT_DataMapOfIntegerBisector^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new MAT_DataMapIteratorOfDataMapOfIntegerBisector(*((MAT_DataMapOfIntegerBisector*)aMap->Handle));
}

 void OCMAT_DataMapIteratorOfDataMapOfIntegerBisector::Initialize(OCNaroWrappers::OCMAT_DataMapOfIntegerBisector^ aMap)
{
  ((MAT_DataMapIteratorOfDataMapOfIntegerBisector*)nativeHandle)->Initialize(*((MAT_DataMapOfIntegerBisector*)aMap->Handle));
}

 Standard_Integer OCMAT_DataMapIteratorOfDataMapOfIntegerBisector::Key()
{
  return ((MAT_DataMapIteratorOfDataMapOfIntegerBisector*)nativeHandle)->Key();
}

OCMAT_Bisector^ OCMAT_DataMapIteratorOfDataMapOfIntegerBisector::Value()
{
  Handle(MAT_Bisector) tmp = ((MAT_DataMapIteratorOfDataMapOfIntegerBisector*)nativeHandle)->Value();
  return gcnew OCMAT_Bisector(&tmp);
}


