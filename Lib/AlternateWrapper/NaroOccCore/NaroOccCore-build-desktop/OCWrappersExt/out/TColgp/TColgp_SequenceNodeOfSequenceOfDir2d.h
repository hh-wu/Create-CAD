// File generated by CPPExt (Transient)
//
#ifndef _TColgp_SequenceNodeOfSequenceOfDir2d_OCWrappers_HeaderFile
#define _TColgp_SequenceNodeOfSequenceOfDir2d_OCWrappers_HeaderFile

// include the wrapped class
#include <TColgp_SequenceNodeOfSequenceOfDir2d.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"

#include "../gp/gp_Dir2d.h"


namespace OCNaroWrappers
{

ref class OCgp_Dir2d;
ref class OCTColgp_SequenceOfDir2d;



public ref class OCTColgp_SequenceNodeOfSequenceOfDir2d : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCTColgp_SequenceNodeOfSequenceOfDir2d(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColgp_SequenceNodeOfSequenceOfDir2d(Handle(TColgp_SequenceNodeOfSequenceOfDir2d)* nativeHandle);

// Methods PUBLIC


OCTColgp_SequenceNodeOfSequenceOfDir2d(OCNaroWrappers::OCgp_Dir2d^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCgp_Dir2d^ Value() ;

~OCTColgp_SequenceNodeOfSequenceOfDir2d()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif