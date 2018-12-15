// File generated by CPPExt (CPP file)
//

#include "TopOpeBRep_DataMapOfTopolTool.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../BRepTopAdaptor/BRepTopAdaptor_TopolTool.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "TopOpeBRep_DataMapNodeOfDataMapOfTopolTool.h"
#include "TopOpeBRep_DataMapIteratorOfDataMapOfTopolTool.h"


using namespace OCNaroWrappers;

OCTopOpeBRep_DataMapOfTopolTool::OCTopOpeBRep_DataMapOfTopolTool(TopOpeBRep_DataMapOfTopolTool* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRep_DataMapOfTopolTool::OCTopOpeBRep_DataMapOfTopolTool(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new TopOpeBRep_DataMapOfTopolTool(NbBuckets);
}

OCTopOpeBRep_DataMapOfTopolTool^ OCTopOpeBRep_DataMapOfTopolTool::Assign(OCNaroWrappers::OCTopOpeBRep_DataMapOfTopolTool^ Other)
{
  TopOpeBRep_DataMapOfTopolTool* tmp = new TopOpeBRep_DataMapOfTopolTool(0);
  *tmp = ((TopOpeBRep_DataMapOfTopolTool*)nativeHandle)->Assign(*((TopOpeBRep_DataMapOfTopolTool*)Other->Handle));
  return gcnew OCTopOpeBRep_DataMapOfTopolTool(tmp);
}

 void OCTopOpeBRep_DataMapOfTopolTool::ReSize(Standard_Integer NbBuckets)
{
  ((TopOpeBRep_DataMapOfTopolTool*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCTopOpeBRep_DataMapOfTopolTool::Bind(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCBRepTopAdaptor_TopolTool^ I)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRep_DataMapOfTopolTool*)nativeHandle)->Bind(*((TopoDS_Shape*)K->Handle), *((Handle_BRepTopAdaptor_TopolTool*)I->Handle)));
}

 System::Boolean OCTopOpeBRep_DataMapOfTopolTool::IsBound(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRep_DataMapOfTopolTool*)nativeHandle)->IsBound(*((TopoDS_Shape*)K->Handle)));
}

 System::Boolean OCTopOpeBRep_DataMapOfTopolTool::UnBind(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRep_DataMapOfTopolTool*)nativeHandle)->UnBind(*((TopoDS_Shape*)K->Handle)));
}

OCBRepTopAdaptor_TopolTool^ OCTopOpeBRep_DataMapOfTopolTool::Find(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  Handle(BRepTopAdaptor_TopolTool) tmp = ((TopOpeBRep_DataMapOfTopolTool*)nativeHandle)->Find(*((TopoDS_Shape*)K->Handle));
  return gcnew OCBRepTopAdaptor_TopolTool(&tmp);
}

OCBRepTopAdaptor_TopolTool^ OCTopOpeBRep_DataMapOfTopolTool::ChangeFind(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  Handle(BRepTopAdaptor_TopolTool) tmp = ((TopOpeBRep_DataMapOfTopolTool*)nativeHandle)->ChangeFind(*((TopoDS_Shape*)K->Handle));
  return gcnew OCBRepTopAdaptor_TopolTool(&tmp);
}

 Standard_Address OCTopOpeBRep_DataMapOfTopolTool::Find1(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((TopOpeBRep_DataMapOfTopolTool*)nativeHandle)->Find1(*((TopoDS_Shape*)K->Handle));
}

 Standard_Address OCTopOpeBRep_DataMapOfTopolTool::ChangeFind1(OCNaroWrappers::OCTopoDS_Shape^ K)
{
  return ((TopOpeBRep_DataMapOfTopolTool*)nativeHandle)->ChangeFind1(*((TopoDS_Shape*)K->Handle));
}

