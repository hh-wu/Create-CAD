// File generated by CPPExt (MPV)
//
#ifndef _BRepMesh_DataMapOfShapeSurfaceGrid_OCWrappers_HeaderFile
#define _BRepMesh_DataMapOfShapeSurfaceGrid_OCWrappers_HeaderFile

// include native header
#include <BRepMesh_DataMapOfShapeSurfaceGrid.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCBRepMesh_SurfaceGrid;
ref class OCTopTools_ShapeMapHasher;
ref class OCBRepMesh_DataMapNodeOfDataMapOfShapeSurfaceGrid;
ref class OCBRepMesh_DataMapIteratorOfDataMapOfShapeSurfaceGrid;



public ref class OCBRepMesh_DataMapOfShapeSurfaceGrid  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCBRepMesh_DataMapOfShapeSurfaceGrid(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepMesh_DataMapOfShapeSurfaceGrid(BRepMesh_DataMapOfShapeSurfaceGrid* nativeHandle);

// Methods PUBLIC


OCBRepMesh_DataMapOfShapeSurfaceGrid(Standard_Integer NbBuckets);


 /*instead*/  OCBRepMesh_DataMapOfShapeSurfaceGrid^ Assign(OCNaroWrappers::OCBRepMesh_DataMapOfShapeSurfaceGrid^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCBRepMesh_SurfaceGrid^ I) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  System::Boolean UnBind(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCBRepMesh_SurfaceGrid^ Find(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCBRepMesh_SurfaceGrid^ ChangeFind(OCNaroWrappers::OCTopoDS_Shape^ K) ;

~OCBRepMesh_DataMapOfShapeSurfaceGrid()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif