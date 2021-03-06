// File generated by CPPExt (Transient)
//
#ifndef _V3d_Plane_OCWrappers_HeaderFile
#define _V3d_Plane_OCWrappers_HeaderFile

// include the wrapped class
#include <V3d_Plane.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "V3d_View.h"
#include "../Quantity/Quantity_Color.h"


namespace OCNaroWrappers
{

ref class OCVisual3d_ClipPlane;
ref class OCGraphic3d_Structure;
ref class OCV3d_View;


//! Defines the services of Plane type objects. Only <br>
//!	    the creation and editing of the functions is dealt <br>
//!	    with here. <br>
//! Warning: The representation of the clipping plane must be <br>
//!	    calculated by the application by means of Graphic3d. <br>
//!	    Editing of this representation must be coherent with <br>
//!	    respect to the position of the plane. <br>
public ref class OCV3d_Plane : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCV3d_Plane(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCV3d_Plane(Handle(V3d_Plane)* nativeHandle);

// Methods PUBLIC

//! Creates a clipping plane using the equation : <br>
//!          <A>*X + <B>*Y + <C>*Z + <D> = 0.0 <br>//!  Warning! raises BadValue from Viewer <br>
//!          if the norm of the plane is NULL. <br>
OCV3d_Plane(Quantity_Parameter A, Quantity_Parameter B, Quantity_Parameter C, Quantity_Parameter D);

//! Modifies the plane equation. <br>//!  Warning! raises BadValue from Viewer <br>
//!          if the norm of the plane is NULL. <br>
//!	If the norm of the plane is NULL. <br>
 /*instead*/  void SetPlane(Quantity_Parameter A, Quantity_Parameter B, Quantity_Parameter C, Quantity_Parameter D) ;

//! Display the plane representation <br>
//!          in the choosen view. <br>
virtual /*instead*/  void Display(OCNaroWrappers::OCV3d_View^ aView, OCNaroWrappers::OCQuantity_Color^ aColor) ;

//! Erase the plane representation. <br>
 /*instead*/  void Erase() ;

//! Returns the parameters of the plane . <br>
 /*instead*/  void Plane(Quantity_Parameter& A, Quantity_Parameter& B, Quantity_Parameter& C, Quantity_Parameter& D) ;

//! Returns TRUE when the plane representation is displayed <br>
 /*instead*/  System::Boolean IsDisplayed() ;

~OCV3d_Plane()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
