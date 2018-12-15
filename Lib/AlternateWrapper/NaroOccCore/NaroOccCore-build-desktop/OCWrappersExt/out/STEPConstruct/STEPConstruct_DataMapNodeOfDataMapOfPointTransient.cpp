// File generated by CPPExt (CPP file)
//

#include "STEPConstruct_DataMapNodeOfDataMapOfPointTransient.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "../gp/gp_Pnt.h"
#include "STEPConstruct_PointHasher.h"
#include "STEPConstruct_DataMapOfPointTransient.h"
#include "STEPConstruct_DataMapIteratorOfDataMapOfPointTransient.h"


using namespace OCNaroWrappers;

OCSTEPConstruct_DataMapNodeOfDataMapOfPointTransient::OCSTEPConstruct_DataMapNodeOfDataMapOfPointTransient(Handle(STEPConstruct_DataMapNodeOfDataMapOfPointTransient)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_STEPConstruct_DataMapNodeOfDataMapOfPointTransient(*nativeHandle);
}

OCSTEPConstruct_DataMapNodeOfDataMapOfPointTransient::OCSTEPConstruct_DataMapNodeOfDataMapOfPointTransient(OCNaroWrappers::OCgp_Pnt^ K, OCNaroWrappers::OCStandard_Transient^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_STEPConstruct_DataMapNodeOfDataMapOfPointTransient(new STEPConstruct_DataMapNodeOfDataMapOfPointTransient(*((gp_Pnt*)K->Handle), *((Handle_Standard_Transient*)I->Handle), n));
}

OCgp_Pnt^ OCSTEPConstruct_DataMapNodeOfDataMapOfPointTransient::Key()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = (*((Handle_STEPConstruct_DataMapNodeOfDataMapOfPointTransient*)nativeHandle))->Key();
  return gcnew OCgp_Pnt(tmp);
}

OCStandard_Transient^ OCSTEPConstruct_DataMapNodeOfDataMapOfPointTransient::Value()
{
  Handle(Standard_Transient) tmp = (*((Handle_STEPConstruct_DataMapNodeOfDataMapOfPointTransient*)nativeHandle))->Value();
  return gcnew OCStandard_Transient(&tmp);
}

