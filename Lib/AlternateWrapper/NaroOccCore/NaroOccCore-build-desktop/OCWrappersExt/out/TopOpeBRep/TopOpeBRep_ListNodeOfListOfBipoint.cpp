// File generated by CPPExt (CPP file)
//

#include "TopOpeBRep_ListNodeOfListOfBipoint.h"
#include "../Converter.h"
#include "TopOpeBRep_Bipoint.h"
#include "TopOpeBRep_ListOfBipoint.h"
#include "TopOpeBRep_ListIteratorOfListOfBipoint.h"


using namespace OCNaroWrappers;

OCTopOpeBRep_ListNodeOfListOfBipoint::OCTopOpeBRep_ListNodeOfListOfBipoint(Handle(TopOpeBRep_ListNodeOfListOfBipoint)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopOpeBRep_ListNodeOfListOfBipoint(*nativeHandle);
}

OCTopOpeBRep_ListNodeOfListOfBipoint::OCTopOpeBRep_ListNodeOfListOfBipoint(OCNaroWrappers::OCTopOpeBRep_Bipoint^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopOpeBRep_ListNodeOfListOfBipoint(new TopOpeBRep_ListNodeOfListOfBipoint(*((TopOpeBRep_Bipoint*)I->Handle), n));
}

OCTopOpeBRep_Bipoint^ OCTopOpeBRep_ListNodeOfListOfBipoint::Value()
{
  TopOpeBRep_Bipoint* tmp = new TopOpeBRep_Bipoint();
  *tmp = (*((Handle_TopOpeBRep_ListNodeOfListOfBipoint*)nativeHandle))->Value();
  return gcnew OCTopOpeBRep_Bipoint(tmp);
}

