// File generated by CPPExt (MPV)
//
#ifndef _BRepPrimAPI_MakePrism_OCWrappers_HeaderFile
#define _BRepPrimAPI_MakePrism_OCWrappers_HeaderFile

// include native header
#include <BRepPrimAPI_MakePrism.hxx>
#include "../Converter.h"

#include "BRepPrimAPI_MakeSweep.h"

#include "../BRepSweep/BRepSweep_Prism.h"
#include "BRepPrimAPI_MakeSweep.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCgp_Vec;
ref class OCgp_Dir;
ref class OCBRepSweep_Prism;
ref class OCTopTools_ListOfShape;


//! Describes functions to build linear swept topologies, called prisms. <br>
//! A prism is defined by: <br>
//! -   a basis shape, which is swept, and <br>
//! -   a sweeping direction, which is: <br>
//!   -   a vector for finite prisms, or <br>
//!   -   a direction for infinite or semi-infinite prisms. <br>
//! The basis shape must not contain any solids. <br>
//! The profile generates objects according to the following rules: <br>
//! -   Vertices generate Edges <br>
//! -   Edges generate Faces. <br>
//! -   Wires generate Shells. <br>
//! -   Faces generate Solids. <br>
//! -   Shells generate Composite Solids <br>
//! A MakePrism object provides a framework for: <br>
//! -   defining the construction of a prism, <br>
//! -   implementing the construction algorithm, and <br>
//! -   consulting the result. <br>
public ref class OCBRepPrimAPI_MakePrism  : public OCBRepPrimAPI_MakeSweep {

protected:
  // dummy constructor;
  OCBRepPrimAPI_MakePrism(OCDummy^) : OCBRepPrimAPI_MakeSweep((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepPrimAPI_MakePrism(BRepPrimAPI_MakePrism* nativeHandle);

// Methods PUBLIC

//! Builds the prism of base S and vector V. If C is true, <br>
//!          S is copied. If Canonize is true then generated surfaces <br>
//!          are attempted to be canonized in simple types <br>
OCBRepPrimAPI_MakePrism(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCgp_Vec^ V, System::Boolean Copy, System::Boolean Canonize);

//! Builds a semi-infinite or an infinite prism of base S. <br>
//!          If Inf is true the prism  is infinite, if Inf is false <br>
//!          the prism is semi-infinite (in the direction D).  If C <br>
//!          is true S is copied (for semi-infinite prisms). <br>
//!          If Canonize is true then generated surfaces <br>
//!          are attempted to be canonized in simple types <br>
OCBRepPrimAPI_MakePrism(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCgp_Dir^ D, System::Boolean Inf, System::Boolean Copy, System::Boolean Canonize);

//! Returns the internal sweeping algorithm. <br>
//! <br>
 /*instead*/  OCBRepSweep_Prism^ Prism() ;

//! Builds the resulting shape (redefined from MakeShape). <br>
virtual /*instead*/  void Build() override;

//! Returns the  TopoDS  Shape of the bottom of the prism. <br>
 /*instead*/  OCTopoDS_Shape^ FirstShape() ;

//! Returns the TopoDS Shape of the top of the prism. <br>
//! In the case of a finite prism, FirstShape returns the <br>
//! basis of the prism, in other words, S if Copy is false; <br>
//! otherwise, the copy of S belonging to the prism. <br>
//! LastShape returns the copy of S translated by V at the <br>
//! time of construction. <br>
 /*instead*/  OCTopoDS_Shape^ LastShape() ;

//! Returns ListOfShape from TopTools. <br>
virtual /*instead*/  OCTopTools_ListOfShape^ Generated(OCNaroWrappers::OCTopoDS_Shape^ S) override;

//! Returns the TopoDS Shape of the bottom  of the  prism. <br>
//!          generated  with  theShape (subShape of the  generating shape). <br>
 /*instead*/  OCTopoDS_Shape^ FirstShape(OCNaroWrappers::OCTopoDS_Shape^ theShape) ;

//! Returns the  TopoDS  Shape of the top  of  the  prism. <br>
//!          generated  with  theShape (subShape of the  generating shape). <br>
 /*instead*/  OCTopoDS_Shape^ LastShape(OCNaroWrappers::OCTopoDS_Shape^ theShape) ;

~OCBRepPrimAPI_MakePrism()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
