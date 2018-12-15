// File generated by CPPExt (MPV)
//
#ifndef _BRepAlgo_Cut_OCWrappers_HeaderFile
#define _BRepAlgo_Cut_OCWrappers_HeaderFile

// include native header
#include <BRepAlgo_Cut.hxx>
#include "../Converter.h"

#include "BRepAlgo_BooleanOperation.h"

#include "BRepAlgo_BooleanOperation.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;


//! Describes functions for performing a topological cut <br>
//! operation (Boolean subtraction). <br>
//! A Cut object provides the framework for: <br>
//! - defining the construction of a cut shape, <br>
//! - implementing the construction algorithm, and <br>
//! - consulting the result. <br>
public ref class OCBRepAlgo_Cut  : public OCBRepAlgo_BooleanOperation {

protected:
  // dummy constructor;
  OCBRepAlgo_Cut(OCDummy^) : OCBRepAlgo_BooleanOperation((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepAlgo_Cut(BRepAlgo_Cut* nativeHandle);

// Methods PUBLIC

//! Cuts the shape S2 from the shape S1. <br>
OCBRepAlgo_Cut(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2);

~OCBRepAlgo_Cut()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif