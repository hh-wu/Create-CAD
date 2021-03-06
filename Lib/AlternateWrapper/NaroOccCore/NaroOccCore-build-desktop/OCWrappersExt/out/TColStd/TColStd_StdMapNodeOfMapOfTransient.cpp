// File generated by CPPExt (CPP file)
//

#include "TColStd_StdMapNodeOfMapOfTransient.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "TColStd_MapTransientHasher.h"
#include "TColStd_MapOfTransient.h"
#include "TColStd_MapIteratorOfMapOfTransient.h"


using namespace OCNaroWrappers;

OCTColStd_StdMapNodeOfMapOfTransient::OCTColStd_StdMapNodeOfMapOfTransient(Handle(TColStd_StdMapNodeOfMapOfTransient)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColStd_StdMapNodeOfMapOfTransient(*nativeHandle);
}

OCTColStd_StdMapNodeOfMapOfTransient::OCTColStd_StdMapNodeOfMapOfTransient(OCNaroWrappers::OCStandard_Transient^ K, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColStd_StdMapNodeOfMapOfTransient(new TColStd_StdMapNodeOfMapOfTransient(*((Handle_Standard_Transient*)K->Handle), n));
}

OCStandard_Transient^ OCTColStd_StdMapNodeOfMapOfTransient::Key()
{
  Handle(Standard_Transient) tmp = (*((Handle_TColStd_StdMapNodeOfMapOfTransient*)nativeHandle))->Key();
  return gcnew OCStandard_Transient(&tmp);
}


