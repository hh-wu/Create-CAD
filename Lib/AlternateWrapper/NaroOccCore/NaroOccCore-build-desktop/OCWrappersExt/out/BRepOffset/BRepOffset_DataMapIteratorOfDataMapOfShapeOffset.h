// File generated by CPPExt (MPV)
//
#ifndef _BRepOffset_DataMapIteratorOfDataMapOfShapeOffset_OCWrappers_HeaderFile
#define _BRepOffset_DataMapIteratorOfDataMapOfShapeOffset_OCWrappers_HeaderFile

// include native header
#include <BRepOffset_DataMapIteratorOfDataMapOfShapeOffset.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCBRepOffset_Offset;
ref class OCTopTools_ShapeMapHasher;
ref class OCBRepOffset_DataMapOfShapeOffset;
ref class OCBRepOffset_DataMapNodeOfDataMapOfShapeOffset;



public ref class OCBRepOffset_DataMapIteratorOfDataMapOfShapeOffset  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCBRepOffset_DataMapIteratorOfDataMapOfShapeOffset(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepOffset_DataMapIteratorOfDataMapOfShapeOffset(BRepOffset_DataMapIteratorOfDataMapOfShapeOffset* nativeHandle);

// Methods PUBLIC


OCBRepOffset_DataMapIteratorOfDataMapOfShapeOffset();


OCBRepOffset_DataMapIteratorOfDataMapOfShapeOffset(OCNaroWrappers::OCBRepOffset_DataMapOfShapeOffset^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCBRepOffset_DataMapOfShapeOffset^ aMap) ;


 /*instead*/  OCTopoDS_Shape^ Key() ;


 /*instead*/  OCBRepOffset_Offset^ Value() ;

~OCBRepOffset_DataMapIteratorOfDataMapOfShapeOffset()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif