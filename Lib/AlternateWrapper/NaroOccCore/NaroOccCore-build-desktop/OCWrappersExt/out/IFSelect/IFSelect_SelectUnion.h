// File generated by CPPExt (Transient)
//
#ifndef _IFSelect_SelectUnion_OCWrappers_HeaderFile
#define _IFSelect_SelectUnion_OCWrappers_HeaderFile

// include the wrapped class
#include <IFSelect_SelectUnion.hxx>
#include "../Converter.h"

#include "IFSelect_SelectCombine.h"



namespace OCNaroWrappers
{

ref class OCInterface_EntityIterator;
ref class OCInterface_Graph;
ref class OCTCollection_AsciiString;


//! A SelectUnion cumulates the Entities issued from several other <br>
//!           Selections (union of results : "OR" operator) <br>
public ref class OCIFSelect_SelectUnion : OCIFSelect_SelectCombine {

protected:
  // dummy constructor;
  OCIFSelect_SelectUnion(OCDummy^) : OCIFSelect_SelectCombine((OCDummy^)nullptr) {};

public:

// constructor from native
OCIFSelect_SelectUnion(Handle(IFSelect_SelectUnion)* nativeHandle);

// Methods PUBLIC

//! Creates an empty SelectUnion <br>
OCIFSelect_SelectUnion();

//! Returns the list of selected Entities, which is the addition <br>
//!           result from all input selections. Uniqueness is guaranteed. <br>
 /*instead*/  OCInterface_EntityIterator^ RootResult(OCNaroWrappers::OCInterface_Graph^ G) ;

//! Returns a text defining the criterium : "Union (OR)" <br>
 /*instead*/  OCTCollection_AsciiString^ Label() ;

~OCIFSelect_SelectUnion()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
