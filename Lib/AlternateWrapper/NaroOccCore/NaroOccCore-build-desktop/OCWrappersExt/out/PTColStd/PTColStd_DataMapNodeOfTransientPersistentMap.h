// File generated by CPPExt (Transient)
//
#ifndef _PTColStd_DataMapNodeOfTransientPersistentMap_OCWrappers_HeaderFile
#define _PTColStd_DataMapNodeOfTransientPersistentMap_OCWrappers_HeaderFile

// include the wrapped class
#include <PTColStd_DataMapNodeOfTransientPersistentMap.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"



namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCStandard_Persistent;
ref class OCTColStd_MapTransientHasher;
ref class OCPTColStd_TransientPersistentMap;
ref class OCPTColStd_DataMapIteratorOfTransientPersistentMap;



public ref class OCPTColStd_DataMapNodeOfTransientPersistentMap : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCPTColStd_DataMapNodeOfTransientPersistentMap(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCPTColStd_DataMapNodeOfTransientPersistentMap(Handle(PTColStd_DataMapNodeOfTransientPersistentMap)* nativeHandle);

// Methods PUBLIC


OCPTColStd_DataMapNodeOfTransientPersistentMap(OCNaroWrappers::OCStandard_Transient^ K, OCNaroWrappers::OCStandard_Persistent^ I, TCollection_MapNodePtr n);


 /*instead*/  OCStandard_Transient^ Key() ;


 /*instead*/  OCStandard_Persistent^ Value() ;

~OCPTColStd_DataMapNodeOfTransientPersistentMap()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
