// File generated by CPPExt (MPV)
//
#ifndef _ShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg_OCWrappers_HeaderFile
#define _ShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg_OCWrappers_HeaderFile

// include native header
#include <ShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCMessage_ListOfMsg;
ref class OCTColStd_MapTransientHasher;
ref class OCShapeExtend_DataMapOfTransientListOfMsg;
ref class OCShapeExtend_DataMapNodeOfDataMapOfTransientListOfMsg;



public ref class OCShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg(ShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg* nativeHandle);

// Methods PUBLIC


OCShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg();


OCShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg(OCNaroWrappers::OCShapeExtend_DataMapOfTransientListOfMsg^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCShapeExtend_DataMapOfTransientListOfMsg^ aMap) ;


 /*instead*/  OCStandard_Transient^ Key() ;


 /*instead*/  OCMessage_ListOfMsg^ Value() ;

~OCShapeExtend_DataMapIteratorOfDataMapOfTransientListOfMsg()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif