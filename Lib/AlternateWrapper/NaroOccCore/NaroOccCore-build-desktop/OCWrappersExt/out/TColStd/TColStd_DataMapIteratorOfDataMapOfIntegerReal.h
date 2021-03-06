// File generated by CPPExt (MPV)
//
#ifndef _TColStd_DataMapIteratorOfDataMapOfIntegerReal_OCWrappers_HeaderFile
#define _TColStd_DataMapIteratorOfDataMapOfIntegerReal_OCWrappers_HeaderFile

// include native header
#include <TColStd_DataMapIteratorOfDataMapOfIntegerReal.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCTColStd_MapIntegerHasher;
ref class OCTColStd_DataMapOfIntegerReal;
ref class OCTColStd_DataMapNodeOfDataMapOfIntegerReal;



public ref class OCTColStd_DataMapIteratorOfDataMapOfIntegerReal  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCTColStd_DataMapIteratorOfDataMapOfIntegerReal(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_DataMapIteratorOfDataMapOfIntegerReal(TColStd_DataMapIteratorOfDataMapOfIntegerReal* nativeHandle);

// Methods PUBLIC


OCTColStd_DataMapIteratorOfDataMapOfIntegerReal();


OCTColStd_DataMapIteratorOfDataMapOfIntegerReal(OCNaroWrappers::OCTColStd_DataMapOfIntegerReal^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCTColStd_DataMapOfIntegerReal^ aMap) ;


 /*instead*/  Standard_Integer Key() ;


 /*instead*/  Standard_Real Value() ;

~OCTColStd_DataMapIteratorOfDataMapOfIntegerReal()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
