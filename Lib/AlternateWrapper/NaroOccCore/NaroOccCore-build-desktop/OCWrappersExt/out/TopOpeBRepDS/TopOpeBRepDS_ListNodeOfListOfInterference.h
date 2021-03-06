// File generated by CPPExt (Transient)
//
#ifndef _TopOpeBRepDS_ListNodeOfListOfInterference_OCWrappers_HeaderFile
#define _TopOpeBRepDS_ListNodeOfListOfInterference_OCWrappers_HeaderFile

// include the wrapped class
#include <TopOpeBRepDS_ListNodeOfListOfInterference.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"



namespace OCNaroWrappers
{

ref class OCTopOpeBRepDS_Interference;
ref class OCTopOpeBRepDS_ListOfInterference;
ref class OCTopOpeBRepDS_ListIteratorOfListOfInterference;



public ref class OCTopOpeBRepDS_ListNodeOfListOfInterference : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCTopOpeBRepDS_ListNodeOfListOfInterference(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopOpeBRepDS_ListNodeOfListOfInterference(Handle(TopOpeBRepDS_ListNodeOfListOfInterference)* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepDS_ListNodeOfListOfInterference(OCNaroWrappers::OCTopOpeBRepDS_Interference^ I, TCollection_MapNodePtr n);


 /*instead*/  OCTopOpeBRepDS_Interference^ Value() ;

~OCTopOpeBRepDS_ListNodeOfListOfInterference()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
