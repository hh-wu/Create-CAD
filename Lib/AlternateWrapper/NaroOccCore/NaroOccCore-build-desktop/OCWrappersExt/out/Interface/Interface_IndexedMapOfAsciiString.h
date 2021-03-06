// File generated by CPPExt (MPV)
//
#ifndef _Interface_IndexedMapOfAsciiString_OCWrappers_HeaderFile
#define _Interface_IndexedMapOfAsciiString_OCWrappers_HeaderFile

// include native header
#include <Interface_IndexedMapOfAsciiString.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTCollection_AsciiString;
ref class OCInterface_MapAsciiStringHasher;
ref class OCInterface_IndexedMapNodeOfIndexedMapOfAsciiString;



public ref class OCInterface_IndexedMapOfAsciiString  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCInterface_IndexedMapOfAsciiString(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCInterface_IndexedMapOfAsciiString(Interface_IndexedMapOfAsciiString* nativeHandle);

// Methods PUBLIC


OCInterface_IndexedMapOfAsciiString(Standard_Integer NbBuckets);


 /*instead*/  OCInterface_IndexedMapOfAsciiString^ Assign(OCNaroWrappers::OCInterface_IndexedMapOfAsciiString^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  Standard_Integer Add(OCNaroWrappers::OCTCollection_AsciiString^ K) ;


 /*instead*/  void Substitute(Standard_Integer I, OCNaroWrappers::OCTCollection_AsciiString^ K) ;


 /*instead*/  void RemoveLast() ;


 /*instead*/  System::Boolean Contains(OCNaroWrappers::OCTCollection_AsciiString^ K) ;


 /*instead*/  OCTCollection_AsciiString^ FindKey(Standard_Integer I) ;


 /*instead*/  Standard_Integer FindIndex(OCNaroWrappers::OCTCollection_AsciiString^ K) ;

~OCInterface_IndexedMapOfAsciiString()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
