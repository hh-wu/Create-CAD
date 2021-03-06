// File generated by CPPExt (Transient)
//
#ifndef _MAT2d_SequenceNodeOfSequenceOfSequenceOfGeometry_OCWrappers_HeaderFile
#define _MAT2d_SequenceNodeOfSequenceOfSequenceOfGeometry_OCWrappers_HeaderFile

// include the wrapped class
#include <MAT2d_SequenceNodeOfSequenceOfSequenceOfGeometry.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"

#include "../TColGeom2d/TColGeom2d_SequenceOfGeometry.h"


namespace OCNaroWrappers
{

ref class OCTColGeom2d_SequenceOfGeometry;
ref class OCMAT2d_SequenceOfSequenceOfGeometry;



public ref class OCMAT2d_SequenceNodeOfSequenceOfSequenceOfGeometry : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCMAT2d_SequenceNodeOfSequenceOfSequenceOfGeometry(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCMAT2d_SequenceNodeOfSequenceOfSequenceOfGeometry(Handle(MAT2d_SequenceNodeOfSequenceOfSequenceOfGeometry)* nativeHandle);

// Methods PUBLIC


OCMAT2d_SequenceNodeOfSequenceOfSequenceOfGeometry(OCNaroWrappers::OCTColGeom2d_SequenceOfGeometry^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCTColGeom2d_SequenceOfGeometry^ Value() ;

~OCMAT2d_SequenceNodeOfSequenceOfSequenceOfGeometry()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
