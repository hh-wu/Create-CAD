// File generated by CPPExt (Transient)
//
#ifndef _IntPatch_SequenceNodeOfSequenceOfPathPointOfTheSOnBoundsOfIntersection_OCWrappers_HeaderFile
#define _IntPatch_SequenceNodeOfSequenceOfPathPointOfTheSOnBoundsOfIntersection_OCWrappers_HeaderFile

// include the wrapped class
#include <IntPatch_SequenceNodeOfSequenceOfPathPointOfTheSOnBoundsOfIntersection.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"

#include "IntPatch_ThePathPointOfTheSOnBoundsOfIntersection.h"


namespace OCNaroWrappers
{

ref class OCIntPatch_ThePathPointOfTheSOnBoundsOfIntersection;
ref class OCIntPatch_SequenceOfPathPointOfTheSOnBoundsOfIntersection;



public ref class OCIntPatch_SequenceNodeOfSequenceOfPathPointOfTheSOnBoundsOfIntersection : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCIntPatch_SequenceNodeOfSequenceOfPathPointOfTheSOnBoundsOfIntersection(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntPatch_SequenceNodeOfSequenceOfPathPointOfTheSOnBoundsOfIntersection(Handle(IntPatch_SequenceNodeOfSequenceOfPathPointOfTheSOnBoundsOfIntersection)* nativeHandle);

// Methods PUBLIC


OCIntPatch_SequenceNodeOfSequenceOfPathPointOfTheSOnBoundsOfIntersection(OCNaroWrappers::OCIntPatch_ThePathPointOfTheSOnBoundsOfIntersection^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCIntPatch_ThePathPointOfTheSOnBoundsOfIntersection^ Value() ;

~OCIntPatch_SequenceNodeOfSequenceOfPathPointOfTheSOnBoundsOfIntersection()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
