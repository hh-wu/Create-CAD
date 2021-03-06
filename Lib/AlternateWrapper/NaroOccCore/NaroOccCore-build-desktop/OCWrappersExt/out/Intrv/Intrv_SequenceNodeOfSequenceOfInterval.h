// File generated by CPPExt (Transient)
//
#ifndef _Intrv_SequenceNodeOfSequenceOfInterval_OCWrappers_HeaderFile
#define _Intrv_SequenceNodeOfSequenceOfInterval_OCWrappers_HeaderFile

// include the wrapped class
#include <Intrv_SequenceNodeOfSequenceOfInterval.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"

#include "Intrv_Interval.h"


namespace OCNaroWrappers
{

ref class OCIntrv_Interval;
ref class OCIntrv_SequenceOfInterval;



public ref class OCIntrv_SequenceNodeOfSequenceOfInterval : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCIntrv_SequenceNodeOfSequenceOfInterval(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntrv_SequenceNodeOfSequenceOfInterval(Handle(Intrv_SequenceNodeOfSequenceOfInterval)* nativeHandle);

// Methods PUBLIC


OCIntrv_SequenceNodeOfSequenceOfInterval(OCNaroWrappers::OCIntrv_Interval^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCIntrv_Interval^ Value() ;

~OCIntrv_SequenceNodeOfSequenceOfInterval()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
