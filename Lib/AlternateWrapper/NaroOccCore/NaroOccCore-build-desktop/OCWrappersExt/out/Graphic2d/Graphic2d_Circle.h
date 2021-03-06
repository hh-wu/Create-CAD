// File generated by CPPExt (Transient)
//
#ifndef _Graphic2d_Circle_OCWrappers_HeaderFile
#define _Graphic2d_Circle_OCWrappers_HeaderFile

// include the wrapped class
#include <Graphic2d_Circle.hxx>
#include "../Converter.h"

#include "Graphic2d_Line.h"



namespace OCNaroWrappers
{

ref class OCGraphic2d_GraphicObject;
ref class OCGraphic2d_Drawer;


//! Constructs a primitive Circle <br>
public ref class OCGraphic2d_Circle : OCGraphic2d_Line {

protected:
  // dummy constructor;
  OCGraphic2d_Circle(OCDummy^) : OCGraphic2d_Line((OCDummy^)nullptr) {};

public:

// constructor from native
OCGraphic2d_Circle(Handle(Graphic2d_Circle)* nativeHandle);

// Methods PUBLIC

//! Creates a complete circle. <br>
//!	    The center is <X>, <Y>. <br>
//!	    The radius is <Radius>. <br>
//!  Warning: Raises CircleDefinitionError if the <br>
//!          radius is null. <br>
OCGraphic2d_Circle(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGraphicObject, Quantity_Length X, Quantity_Length Y, Quantity_Length Radius);

//! Creates an arc. <br>
//!	    The center is <X>, <Y>. <br>
//!	    The radius is <Radius>. <br>
//!	    Angles are measured counterclockwise with 0 radian <br>
//!	    at 3 o'clock. <br>
//!  Warning: Raises CircleDefinitionError if the <br>
//!          radius is null. <br>
OCGraphic2d_Circle(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGraphicObject, Quantity_Length X, Quantity_Length Y, Quantity_Length Radius, Quantity_PlaneAngle Alpha, Quantity_PlaneAngle Beta);

//! returns the coordinates of center of the circle <br>
 /*instead*/  void Center(Quantity_Length& X, Quantity_Length& Y) ;

//! returns the radius of this circle <br>
 /*instead*/  Quantity_Length Radius() ;

//! returns the first angle of the arc <br>
 /*instead*/  Quantity_PlaneAngle FirstAngle() ;

//! returns the second angle of the arc <br>
 /*instead*/  Quantity_PlaneAngle SecondAngle() ;

//! defines the coordinates of center of the circle <br>
 /*instead*/  void SetCenter(Quantity_Length X, Quantity_Length Y) ;

//! defines the radius of this circle <br>
 /*instead*/  void SetRadius(Quantity_Length theR) ;

//! defines the angles of the arc <br>
 /*instead*/  void SetAngles(Quantity_PlaneAngle Alpha, Quantity_PlaneAngle Beta) ;


virtual /*instead*/  void Save(Aspect_FStream& aFStream) ;


static /*instead*/  void Retrieve(Aspect_IFStream& anIFStream, OCNaroWrappers::OCGraphic2d_GraphicObject^ aGraphicObject) ;

~OCGraphic2d_Circle()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
