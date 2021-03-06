// File generated by CPPExt (Transient)
//
#ifndef _TNaming_DataMapNodeOfDataMapOfShapePtrRefShape_OCWrappers_HeaderFile
#define _TNaming_DataMapNodeOfDataMapOfShapePtrRefShape_OCWrappers_HeaderFile

// include the wrapped class
#include <TNaming_DataMapNodeOfDataMapOfShapePtrRefShape.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "../TopoDS/TopoDS_Shape.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_ShapeMapHasher;
ref class OCTNaming_DataMapOfShapePtrRefShape;
ref class OCTNaming_DataMapIteratorOfDataMapOfShapePtrRefShape;



public ref class OCTNaming_DataMapNodeOfDataMapOfShapePtrRefShape : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCTNaming_DataMapNodeOfDataMapOfShapePtrRefShape(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTNaming_DataMapNodeOfDataMapOfShapePtrRefShape(Handle(TNaming_DataMapNodeOfDataMapOfShapePtrRefShape)* nativeHandle);

// Methods PUBLIC


OCTNaming_DataMapNodeOfDataMapOfShapePtrRefShape(OCNaroWrappers::OCTopoDS_Shape^ K, TNaming_PtrRefShape I, TCollection_MapNodePtr n);


 /*instead*/  OCTopoDS_Shape^ Key() ;


 /*instead*/  TNaming_PtrRefShape& Value() ;

~OCTNaming_DataMapNodeOfDataMapOfShapePtrRefShape()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
