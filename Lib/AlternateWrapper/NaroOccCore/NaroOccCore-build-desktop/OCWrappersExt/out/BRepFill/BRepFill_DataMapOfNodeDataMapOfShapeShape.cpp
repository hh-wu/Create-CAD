// File generated by CPPExt (CPP file)
//

#include "BRepFill_DataMapOfNodeDataMapOfShapeShape.h"
#include "../Converter.h"
#include "../MAT/MAT_Node.h"
#include "../TopTools/TopTools_DataMapOfShapeShape.h"
#include "../TColStd/TColStd_MapTransientHasher.h"
#include "BRepFill_DataMapNodeOfDataMapOfNodeDataMapOfShapeShape.h"
#include "BRepFill_DataMapIteratorOfDataMapOfNodeDataMapOfShapeShape.h"


using namespace OCNaroWrappers;

OCBRepFill_DataMapOfNodeDataMapOfShapeShape::OCBRepFill_DataMapOfNodeDataMapOfShapeShape(BRepFill_DataMapOfNodeDataMapOfShapeShape* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBRepFill_DataMapOfNodeDataMapOfShapeShape::OCBRepFill_DataMapOfNodeDataMapOfShapeShape(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new BRepFill_DataMapOfNodeDataMapOfShapeShape(NbBuckets);
}

OCBRepFill_DataMapOfNodeDataMapOfShapeShape^ OCBRepFill_DataMapOfNodeDataMapOfShapeShape::Assign(OCNaroWrappers::OCBRepFill_DataMapOfNodeDataMapOfShapeShape^ Other)
{
  BRepFill_DataMapOfNodeDataMapOfShapeShape* tmp = new BRepFill_DataMapOfNodeDataMapOfShapeShape(0);
  *tmp = ((BRepFill_DataMapOfNodeDataMapOfShapeShape*)nativeHandle)->Assign(*((BRepFill_DataMapOfNodeDataMapOfShapeShape*)Other->Handle));
  return gcnew OCBRepFill_DataMapOfNodeDataMapOfShapeShape(tmp);
}

 void OCBRepFill_DataMapOfNodeDataMapOfShapeShape::ReSize(Standard_Integer NbBuckets)
{
  ((BRepFill_DataMapOfNodeDataMapOfShapeShape*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCBRepFill_DataMapOfNodeDataMapOfShapeShape::Bind(OCNaroWrappers::OCMAT_Node^ K, OCNaroWrappers::OCTopTools_DataMapOfShapeShape^ I)
{
  return OCConverter::StandardBooleanToBoolean(((BRepFill_DataMapOfNodeDataMapOfShapeShape*)nativeHandle)->Bind(*((Handle_MAT_Node*)K->Handle), *((TopTools_DataMapOfShapeShape*)I->Handle)));
}

 System::Boolean OCBRepFill_DataMapOfNodeDataMapOfShapeShape::IsBound(OCNaroWrappers::OCMAT_Node^ K)
{
  return OCConverter::StandardBooleanToBoolean(((BRepFill_DataMapOfNodeDataMapOfShapeShape*)nativeHandle)->IsBound(*((Handle_MAT_Node*)K->Handle)));
}

 System::Boolean OCBRepFill_DataMapOfNodeDataMapOfShapeShape::UnBind(OCNaroWrappers::OCMAT_Node^ K)
{
  return OCConverter::StandardBooleanToBoolean(((BRepFill_DataMapOfNodeDataMapOfShapeShape*)nativeHandle)->UnBind(*((Handle_MAT_Node*)K->Handle)));
}

OCTopTools_DataMapOfShapeShape^ OCBRepFill_DataMapOfNodeDataMapOfShapeShape::Find(OCNaroWrappers::OCMAT_Node^ K)
{
  TopTools_DataMapOfShapeShape* tmp = new TopTools_DataMapOfShapeShape(0);
  *tmp = ((BRepFill_DataMapOfNodeDataMapOfShapeShape*)nativeHandle)->Find(*((Handle_MAT_Node*)K->Handle));
  return gcnew OCTopTools_DataMapOfShapeShape(tmp);
}

OCTopTools_DataMapOfShapeShape^ OCBRepFill_DataMapOfNodeDataMapOfShapeShape::ChangeFind(OCNaroWrappers::OCMAT_Node^ K)
{
  TopTools_DataMapOfShapeShape* tmp = new TopTools_DataMapOfShapeShape(0);
  *tmp = ((BRepFill_DataMapOfNodeDataMapOfShapeShape*)nativeHandle)->ChangeFind(*((Handle_MAT_Node*)K->Handle));
  return gcnew OCTopTools_DataMapOfShapeShape(tmp);
}

 Standard_Address OCBRepFill_DataMapOfNodeDataMapOfShapeShape::Find1(OCNaroWrappers::OCMAT_Node^ K)
{
  return ((BRepFill_DataMapOfNodeDataMapOfShapeShape*)nativeHandle)->Find1(*((Handle_MAT_Node*)K->Handle));
}

 Standard_Address OCBRepFill_DataMapOfNodeDataMapOfShapeShape::ChangeFind1(OCNaroWrappers::OCMAT_Node^ K)
{
  return ((BRepFill_DataMapOfNodeDataMapOfShapeShape*)nativeHandle)->ChangeFind1(*((Handle_MAT_Node*)K->Handle));
}


