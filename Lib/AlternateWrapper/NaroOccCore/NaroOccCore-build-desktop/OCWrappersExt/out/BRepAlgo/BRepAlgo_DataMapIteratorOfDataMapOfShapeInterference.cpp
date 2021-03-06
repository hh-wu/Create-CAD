// File generated by CPPExt (CPP file)
//

#include "BRepAlgo_DataMapIteratorOfDataMapOfShapeInterference.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopOpeBRepDS/TopOpeBRepDS_Interference.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "BRepAlgo_DataMapOfShapeInterference.h"
#include "BRepAlgo_DataMapNodeOfDataMapOfShapeInterference.h"


using namespace OCNaroWrappers;

OCBRepAlgo_DataMapIteratorOfDataMapOfShapeInterference::OCBRepAlgo_DataMapIteratorOfDataMapOfShapeInterference(BRepAlgo_DataMapIteratorOfDataMapOfShapeInterference* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepAlgo_DataMapIteratorOfDataMapOfShapeInterference::OCBRepAlgo_DataMapIteratorOfDataMapOfShapeInterference() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new BRepAlgo_DataMapIteratorOfDataMapOfShapeInterference();
}

OCBRepAlgo_DataMapIteratorOfDataMapOfShapeInterference::OCBRepAlgo_DataMapIteratorOfDataMapOfShapeInterference(OCNaroWrappers::OCBRepAlgo_DataMapOfShapeInterference^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new BRepAlgo_DataMapIteratorOfDataMapOfShapeInterference(*((BRepAlgo_DataMapOfShapeInterference*)aMap->Handle));
}

 void OCBRepAlgo_DataMapIteratorOfDataMapOfShapeInterference::Initialize(OCNaroWrappers::OCBRepAlgo_DataMapOfShapeInterference^ aMap)
{
  ((BRepAlgo_DataMapIteratorOfDataMapOfShapeInterference*)nativeHandle)->Initialize(*((BRepAlgo_DataMapOfShapeInterference*)aMap->Handle));
}

OCTopoDS_Shape^ OCBRepAlgo_DataMapIteratorOfDataMapOfShapeInterference::Key()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BRepAlgo_DataMapIteratorOfDataMapOfShapeInterference*)nativeHandle)->Key();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopOpeBRepDS_Interference^ OCBRepAlgo_DataMapIteratorOfDataMapOfShapeInterference::Value()
{
  Handle(TopOpeBRepDS_Interference) tmp = ((BRepAlgo_DataMapIteratorOfDataMapOfShapeInterference*)nativeHandle)->Value();
  return gcnew OCTopOpeBRepDS_Interference(&tmp);
}


