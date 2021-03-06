// File generated by CPPExt (CPP file)
//

#include "TopTools_StdMapNodeOfMapOfShape.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "TopTools_ShapeMapHasher.h"
#include "TopTools_MapOfShape.h"
#include "TopTools_MapIteratorOfMapOfShape.h"


using namespace OCNaroWrappers;

OCTopTools_StdMapNodeOfMapOfShape::OCTopTools_StdMapNodeOfMapOfShape(Handle(TopTools_StdMapNodeOfMapOfShape)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopTools_StdMapNodeOfMapOfShape(*nativeHandle);
}

OCTopTools_StdMapNodeOfMapOfShape::OCTopTools_StdMapNodeOfMapOfShape(OCNaroWrappers::OCTopoDS_Shape^ K, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopTools_StdMapNodeOfMapOfShape(new TopTools_StdMapNodeOfMapOfShape(*((TopoDS_Shape*)K->Handle), n));
}

OCTopoDS_Shape^ OCTopTools_StdMapNodeOfMapOfShape::Key()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_TopTools_StdMapNodeOfMapOfShape*)nativeHandle))->Key();
  return gcnew OCTopoDS_Shape(tmp);
}


