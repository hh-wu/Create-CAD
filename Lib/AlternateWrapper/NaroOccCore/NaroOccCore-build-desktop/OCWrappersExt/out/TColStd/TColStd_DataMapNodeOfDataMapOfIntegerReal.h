// File generated by CPPExt (Transient)
//
#ifndef _TColStd_DataMapNodeOfDataMapOfIntegerReal_OCWrappers_HeaderFile
#define _TColStd_DataMapNodeOfDataMapOfIntegerReal_OCWrappers_HeaderFile

// include the wrapped class
#include <TColStd_DataMapNodeOfDataMapOfIntegerReal.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"



namespace OCNaroWrappers
{

ref class OCTColStd_MapIntegerHasher;
ref class OCTColStd_DataMapOfIntegerReal;
ref class OCTColStd_DataMapIteratorOfDataMapOfIntegerReal;



public ref class OCTColStd_DataMapNodeOfDataMapOfIntegerReal : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCTColStd_DataMapNodeOfDataMapOfIntegerReal(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_DataMapNodeOfDataMapOfIntegerReal(Handle(TColStd_DataMapNodeOfDataMapOfIntegerReal)* nativeHandle);

// Methods PUBLIC


OCTColStd_DataMapNodeOfDataMapOfIntegerReal(Standard_Integer K, Standard_Real I, TCollection_MapNodePtr n);


 /*instead*/  Standard_Integer Key() ;


 /*instead*/  Standard_Real Value() ;

~OCTColStd_DataMapNodeOfDataMapOfIntegerReal()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif