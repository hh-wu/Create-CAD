// File generated by CPPExt (CPP file)
//

#include "TColStd_StdMapNodeOfMapOfReal.h"
#include "../Converter.h"
#include "TColStd_MapRealHasher.h"
#include "TColStd_MapOfReal.h"
#include "TColStd_MapIteratorOfMapOfReal.h"


using namespace OCNaroWrappers;

OCTColStd_StdMapNodeOfMapOfReal::OCTColStd_StdMapNodeOfMapOfReal(Handle(TColStd_StdMapNodeOfMapOfReal)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColStd_StdMapNodeOfMapOfReal(*nativeHandle);
}

OCTColStd_StdMapNodeOfMapOfReal::OCTColStd_StdMapNodeOfMapOfReal(Standard_Real K, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColStd_StdMapNodeOfMapOfReal(new TColStd_StdMapNodeOfMapOfReal(K, n));
}

 Standard_Real OCTColStd_StdMapNodeOfMapOfReal::Key()
{
  return (*((Handle_TColStd_StdMapNodeOfMapOfReal*)nativeHandle))->Key();
}


