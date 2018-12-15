// File generated by CPPExt (Transient)
//
#ifndef _TColStd_QueueNodeOfQueueOfInteger_OCWrappers_HeaderFile
#define _TColStd_QueueNodeOfQueueOfInteger_OCWrappers_HeaderFile

// include the wrapped class
#include <TColStd_QueueNodeOfQueueOfInteger.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"



namespace OCNaroWrappers
{

ref class OCTColStd_QueueOfInteger;



public ref class OCTColStd_QueueNodeOfQueueOfInteger : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCTColStd_QueueNodeOfQueueOfInteger(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_QueueNodeOfQueueOfInteger(Handle(TColStd_QueueNodeOfQueueOfInteger)* nativeHandle);

// Methods PUBLIC


OCTColStd_QueueNodeOfQueueOfInteger(Standard_Integer I, TCollection_MapNodePtr n);


 /*instead*/  Standard_Integer Value() ;

~OCTColStd_QueueNodeOfQueueOfInteger()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif