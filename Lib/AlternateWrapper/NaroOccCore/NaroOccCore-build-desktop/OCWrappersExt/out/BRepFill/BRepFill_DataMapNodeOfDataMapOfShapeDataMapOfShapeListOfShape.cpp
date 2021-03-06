// File generated by CPPExt (CPP file)
//

#include "BRepFill_DataMapNodeOfDataMapOfShapeDataMapOfShapeListOfShape.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopTools/TopTools_DataMapOfShapeListOfShape.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "BRepFill_DataMapOfShapeDataMapOfShapeListOfShape.h"
#include "BRepFill_DataMapIteratorOfDataMapOfShapeDataMapOfShapeListOfShape.h"


using namespace OCNaroWrappers;

OCBRepFill_DataMapNodeOfDataMapOfShapeDataMapOfShapeListOfShape::OCBRepFill_DataMapNodeOfDataMapOfShapeDataMapOfShapeListOfShape(Handle(BRepFill_DataMapNodeOfDataMapOfShapeDataMapOfShapeListOfShape)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_BRepFill_DataMapNodeOfDataMapOfShapeDataMapOfShapeListOfShape(*nativeHandle);
}

OCBRepFill_DataMapNodeOfDataMapOfShapeDataMapOfShapeListOfShape::OCBRepFill_DataMapNodeOfDataMapOfShapeDataMapOfShapeListOfShape(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCTopTools_DataMapOfShapeListOfShape^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_BRepFill_DataMapNodeOfDataMapOfShapeDataMapOfShapeListOfShape(new BRepFill_DataMapNodeOfDataMapOfShapeDataMapOfShapeListOfShape(*((TopoDS_Shape*)K->Handle), *((TopTools_DataMapOfShapeListOfShape*)I->Handle), n));
}

OCTopoDS_Shape^ OCBRepFill_DataMapNodeOfDataMapOfShapeDataMapOfShapeListOfShape::Key()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_BRepFill_DataMapNodeOfDataMapOfShapeDataMapOfShapeListOfShape*)nativeHandle))->Key();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopTools_DataMapOfShapeListOfShape^ OCBRepFill_DataMapNodeOfDataMapOfShapeDataMapOfShapeListOfShape::Value()
{
  TopTools_DataMapOfShapeListOfShape* tmp = new TopTools_DataMapOfShapeListOfShape(0);
  *tmp = (*((Handle_BRepFill_DataMapNodeOfDataMapOfShapeDataMapOfShapeListOfShape*)nativeHandle))->Value();
  return gcnew OCTopTools_DataMapOfShapeListOfShape(tmp);
}


