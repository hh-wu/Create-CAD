// File generated by CPPExt (CPP file)
//

#include "TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "TopTools_OrientedShapeMapHasher.h"
#include "TopTools_IndexedMapOfOrientedShape.h"


using namespace OCNaroWrappers;

OCTopTools_IndexedMapNodeOfIndexedMapOfOrientedShape::OCTopTools_IndexedMapNodeOfIndexedMapOfOrientedShape(Handle(TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape(*nativeHandle);
}

OCTopTools_IndexedMapNodeOfIndexedMapOfOrientedShape::OCTopTools_IndexedMapNodeOfIndexedMapOfOrientedShape(OCNaroWrappers::OCTopoDS_Shape^ K1, Standard_Integer K2, TCollection_MapNodePtr n1, TCollection_MapNodePtr n2) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape(new TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape(*((TopoDS_Shape*)K1->Handle), K2, n1, n2));
}

OCTopoDS_Shape^ OCTopTools_IndexedMapNodeOfIndexedMapOfOrientedShape::Key1()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape*)nativeHandle))->Key1();
  return gcnew OCTopoDS_Shape(tmp);
}

 Standard_Integer OCTopTools_IndexedMapNodeOfIndexedMapOfOrientedShape::Key2()
{
  return (*((Handle_TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape*)nativeHandle))->Key2();
}

 TCollection_MapNodePtr& OCTopTools_IndexedMapNodeOfIndexedMapOfOrientedShape::Next2()
{
  return (*((Handle_TopTools_IndexedMapNodeOfIndexedMapOfOrientedShape*)nativeHandle))->Next2();
}


