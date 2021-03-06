// File generated by CPPExt (Transient)
//
#ifndef _Select2D_SensitiveCircle_OCWrappers_HeaderFile
#define _Select2D_SensitiveCircle_OCWrappers_HeaderFile

// include the wrapped class
#include <Select2D_SensitiveCircle.hxx>
#include "../Converter.h"

#include "Select2D_SensitiveEntity.h"

#include "../gp/gp_Circ2d.h"
#include "Select2D_TypeOfSelection.h"


namespace OCNaroWrappers
{

ref class OCSelectBasics_EntityOwner;
ref class OCgp_Circ2d;
ref class OCSelectBasics_ListOfBox2d;


//! A framework to define sensitive Areas for a Circle <br>
//!           Radius and center, or a geometric circle is given. <br>
public ref class OCSelect2D_SensitiveCircle : OCSelect2D_SensitiveEntity {

protected:
  // dummy constructor;
  OCSelect2D_SensitiveCircle(OCDummy^) : OCSelect2D_SensitiveEntity((OCDummy^)nullptr) {};

public:

// constructor from native
OCSelect2D_SensitiveCircle(Handle(Select2D_SensitiveCircle)* nativeHandle);

// Methods PUBLIC

//! Constructs a sensitive circle object defined by the <br>
//! owner OwnerId, the circle Circle, and the selection type Type. <br>
//! Type can be: <br>
//! -   interior <br>
//! -   boundary. <br>
OCSelect2D_SensitiveCircle(OCNaroWrappers::OCSelectBasics_EntityOwner^ OwnerId, OCNaroWrappers::OCgp_Circ2d^ TheCirc, OCSelect2D_TypeOfSelection TheType);

//! returns the sensitive areas for a circle... <br>
 /*instead*/  void Areas(OCNaroWrappers::OCSelectBasics_ListOfBox2d^ aresul) ;

//! Returns true if the minimum distance DMin <br>
//!          between the postion x,y and the circle is less than aTol.. <br>
 /*instead*/  System::Boolean Matches(Standard_Real X, Standard_Real Y, Standard_Real aTol, Standard_Real& DMin) ;


 /*instead*/  System::Boolean Matches(Standard_Real XMin, Standard_Real YMin, Standard_Real XMax, Standard_Real YMax, Standard_Real aTol) ;

//! Returns the circle used at the time of construction of this object. <br>
 /*instead*/  OCgp_Circ2d^ Circle() ;

//! Sets the selection type. <br>
 /*instead*/  void SetTypeOfSelection(OCSelect2D_TypeOfSelection aType) ;

//! Returns the selection type used at the time of construction of this object. <br>
 /*instead*/  OCSelect2D_TypeOfSelection Selection() ;

~OCSelect2D_SensitiveCircle()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
