// File generated by CPPExt (MPV)
//
#ifndef _BRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret_OCWrappers_HeaderFile
#define _BRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret_OCWrappers_HeaderFile

// include native header
#include <BRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCBRepMesh_EdgeDiscret;
ref class OCTopTools_ShapeMapHasher;
ref class OCBRepMesh_DataMapOfShapeEdgeDiscret;
ref class OCBRepMesh_DataMapNodeOfDataMapOfShapeEdgeDiscret;



public ref class OCBRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCBRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret(BRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret* nativeHandle);

// Methods PUBLIC


OCBRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret();


OCBRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret(OCNaroWrappers::OCBRepMesh_DataMapOfShapeEdgeDiscret^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCBRepMesh_DataMapOfShapeEdgeDiscret^ aMap) ;


 /*instead*/  OCTopoDS_Shape^ Key() ;


 /*instead*/  OCBRepMesh_EdgeDiscret^ Value() ;

~OCBRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif