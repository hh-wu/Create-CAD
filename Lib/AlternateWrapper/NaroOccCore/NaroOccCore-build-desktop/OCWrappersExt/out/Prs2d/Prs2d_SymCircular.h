// File generated by CPPExt (Transient)
//
#ifndef _Prs2d_SymCircular_OCWrappers_HeaderFile
#define _Prs2d_SymCircular_OCWrappers_HeaderFile

// include the wrapped class
#include <Prs2d_SymCircular.hxx>
#include "../Converter.h"

#include "Prs2d_Tolerance.h"



namespace OCNaroWrappers
{

ref class OCGraphic2d_GraphicObject;
ref class OCGraphic2d_Drawer;



public ref class OCPrs2d_SymCircular : OCPrs2d_Tolerance {

protected:
  // dummy constructor;
  OCPrs2d_SymCircular(OCDummy^) : OCPrs2d_Tolerance((OCDummy^)nullptr) {};

public:

// constructor from native
OCPrs2d_SymCircular(Handle(Prs2d_SymCircular)* nativeHandle);

// Methods PUBLIC

//! Creates a tolerance SymCircular with the center at <aX>, <aY>; <br>
//!          length of this is <aLength>; <br>
//!          reference point is <aXPosition>, <aYPosition> <br>
OCPrs2d_SymCircular(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGO, Standard_Real aX, Standard_Real aY, Standard_Real aLength, Standard_Real anAngle);


virtual /*instead*/  void Save(Aspect_FStream& aFStream) ;

~OCPrs2d_SymCircular()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif