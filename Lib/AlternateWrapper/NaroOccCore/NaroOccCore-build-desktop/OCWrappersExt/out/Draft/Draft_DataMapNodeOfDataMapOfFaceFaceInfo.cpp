// File generated by CPPExt (CPP file)
//

#include "Draft_DataMapNodeOfDataMapOfFaceFaceInfo.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Face.h"
#include "Draft_FaceInfo.h"
#include "../TopTools/TopTools_ShapeMapHasher.h"
#include "Draft_DataMapOfFaceFaceInfo.h"
#include "Draft_DataMapIteratorOfDataMapOfFaceFaceInfo.h"


using namespace OCNaroWrappers;

OCDraft_DataMapNodeOfDataMapOfFaceFaceInfo::OCDraft_DataMapNodeOfDataMapOfFaceFaceInfo(Handle(Draft_DataMapNodeOfDataMapOfFaceFaceInfo)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Draft_DataMapNodeOfDataMapOfFaceFaceInfo(*nativeHandle);
}

OCDraft_DataMapNodeOfDataMapOfFaceFaceInfo::OCDraft_DataMapNodeOfDataMapOfFaceFaceInfo(OCNaroWrappers::OCTopoDS_Face^ K, OCNaroWrappers::OCDraft_FaceInfo^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Draft_DataMapNodeOfDataMapOfFaceFaceInfo(new Draft_DataMapNodeOfDataMapOfFaceFaceInfo(*((TopoDS_Face*)K->Handle), *((Draft_FaceInfo*)I->Handle), n));
}

OCTopoDS_Face^ OCDraft_DataMapNodeOfDataMapOfFaceFaceInfo::Key()
{
  TopoDS_Face* tmp = new TopoDS_Face();
  *tmp = (*((Handle_Draft_DataMapNodeOfDataMapOfFaceFaceInfo*)nativeHandle))->Key();
  return gcnew OCTopoDS_Face(tmp);
}

OCDraft_FaceInfo^ OCDraft_DataMapNodeOfDataMapOfFaceFaceInfo::Value()
{
  Draft_FaceInfo* tmp = new Draft_FaceInfo();
  *tmp = (*((Handle_Draft_DataMapNodeOfDataMapOfFaceFaceInfo*)nativeHandle))->Value();
  return gcnew OCDraft_FaceInfo(tmp);
}


