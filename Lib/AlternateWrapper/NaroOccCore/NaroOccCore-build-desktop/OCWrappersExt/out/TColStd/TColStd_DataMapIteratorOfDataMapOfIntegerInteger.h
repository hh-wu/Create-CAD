// File generated by CPPExt (MPV)
//
#ifndef _TColStd_DataMapIteratorOfDataMapOfIntegerInteger_OCWrappers_HeaderFile
#define _TColStd_DataMapIteratorOfDataMapOfIntegerInteger_OCWrappers_HeaderFile

// include native header
#include <TColStd_DataMapIteratorOfDataMapOfIntegerInteger.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCTColStd_MapIntegerHasher;
ref class OCTColStd_DataMapOfIntegerInteger;
ref class OCTColStd_DataMapNodeOfDataMapOfIntegerInteger;



public ref class OCTColStd_DataMapIteratorOfDataMapOfIntegerInteger  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCTColStd_DataMapIteratorOfDataMapOfIntegerInteger(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_DataMapIteratorOfDataMapOfIntegerInteger(TColStd_DataMapIteratorOfDataMapOfIntegerInteger* nativeHandle);

// Methods PUBLIC


OCTColStd_DataMapIteratorOfDataMapOfIntegerInteger();


OCTColStd_DataMapIteratorOfDataMapOfIntegerInteger(OCNaroWrappers::OCTColStd_DataMapOfIntegerInteger^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCTColStd_DataMapOfIntegerInteger^ aMap) ;


 /*instead*/  Standard_Integer Key() ;


 /*instead*/  Standard_Integer Value() ;

~OCTColStd_DataMapIteratorOfDataMapOfIntegerInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
