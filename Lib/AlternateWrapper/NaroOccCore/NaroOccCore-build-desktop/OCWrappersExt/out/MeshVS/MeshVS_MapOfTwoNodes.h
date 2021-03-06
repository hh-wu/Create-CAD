// File generated by CPPExt (MPV)
//
#ifndef _MeshVS_MapOfTwoNodes_OCWrappers_HeaderFile
#define _MeshVS_MapOfTwoNodes_OCWrappers_HeaderFile

// include native header
#include <MeshVS_MapOfTwoNodes.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCMeshVS_TwoNodesHasher;
ref class OCMeshVS_StdMapNodeOfMapOfTwoNodes;
ref class OCMeshVS_MapIteratorOfMapOfTwoNodes;



public ref class OCMeshVS_MapOfTwoNodes  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCMeshVS_MapOfTwoNodes(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCMeshVS_MapOfTwoNodes(MeshVS_MapOfTwoNodes* nativeHandle);

// Methods PUBLIC


OCMeshVS_MapOfTwoNodes(Standard_Integer NbBuckets);


 /*instead*/  OCMeshVS_MapOfTwoNodes^ Assign(OCNaroWrappers::OCMeshVS_MapOfTwoNodes^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Add(MeshVS_TwoNodes aKey) ;


 /*instead*/  System::Boolean Contains(MeshVS_TwoNodes aKey) ;


 /*instead*/  System::Boolean Remove(MeshVS_TwoNodes aKey) ;

~OCMeshVS_MapOfTwoNodes()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
