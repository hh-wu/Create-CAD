// File generated by CPPExt (Transient)
//
#ifndef _WNT_SequenceNodeOfSequenceOfImage_OCWrappers_HeaderFile
#define _WNT_SequenceNodeOfSequenceOfImage_OCWrappers_HeaderFile

// include the wrapped class
#include <WNT_SequenceNodeOfSequenceOfImage.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"



namespace OCNaroWrappers
{

ref class OCWNT_Image;
ref class OCWNT_SequenceOfImage;



public ref class OCWNT_SequenceNodeOfSequenceOfImage : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCWNT_SequenceNodeOfSequenceOfImage(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCWNT_SequenceNodeOfSequenceOfImage(Handle(WNT_SequenceNodeOfSequenceOfImage)* nativeHandle);

// Methods PUBLIC


OCWNT_SequenceNodeOfSequenceOfImage(OCNaroWrappers::OCWNT_Image^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCWNT_Image^ Value() ;

~OCWNT_SequenceNodeOfSequenceOfImage()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
