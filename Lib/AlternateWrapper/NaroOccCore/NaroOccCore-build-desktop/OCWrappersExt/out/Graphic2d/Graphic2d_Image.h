// File generated by CPPExt (Transient)
//
#ifndef _Graphic2d_Image_OCWrappers_HeaderFile
#define _Graphic2d_Image_OCWrappers_HeaderFile

// include the wrapped class
#include <Graphic2d_Image.hxx>
#include "../Converter.h"

#include "Graphic2d_Primitive.h"

#include "../Aspect/Aspect_CardinalPoints.h"


namespace OCNaroWrappers
{

ref class OCImage_Image;
ref class OCGraphic2d_GraphicObject;
ref class OCGraphic2d_Drawer;


//! This class defines the primitive Image <br>
public ref class OCGraphic2d_Image : OCGraphic2d_Primitive {

protected:
  // dummy constructor;
  OCGraphic2d_Image(OCDummy^) : OCGraphic2d_Primitive((OCDummy^)nullptr) {};

public:

// constructor from native
OCGraphic2d_Image(Handle(Graphic2d_Image)* nativeHandle);

// Methods PUBLIC

//! Defines an image with its center location; <br>
//!	    <X>, <Y> defines the position in the space model. <br>
//!	    <adx>, <ady> defines an offset in the device space. <br>
//!	    The image will be placed at this offset <br>
//!	    according to the type of placement. <br>
OCGraphic2d_Image(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGraphicObject, OCNaroWrappers::OCImage_Image^ anImage, Quantity_Length X, Quantity_Length Y, Quantity_Length adx, Quantity_Length ady, OCAspect_CardinalPoints aTypeOfPlacement);

//! Modifies the center location of the image <me>. <br>
 /*instead*/  void SetCenter(Quantity_Length X, Quantity_Length Y) ;

//! Modifies the offset of the image <me>. <br>
 /*instead*/  void SetOffset(Quantity_Length dx, Quantity_Length dy) ;

//! Modifies the type of placement of the image <me>. <br>
 /*instead*/  void SetPlacement(OCAspect_CardinalPoints aPlacement) ;

//! Modifies the center location of the image <me> <br>
//!          by translating it. <br>
 /*instead*/  void Translate(Quantity_Length DX, Quantity_Length DY) ;

//! Clear the reference to this image if something <br>
//! 	   inside have changed,Forced the reload of this at Draw() <br>
//!	   time. <br>
 /*instead*/  void Clear() ;

//! Defines the limit between a large image and a <br>
//!	    small image. <br>
//!  Warning: A small image have Height*Width <= SmallSize (). <br>
//!	    Default 4096 = 64*64 <br>
static /*instead*/  void SetSmallSize(Standard_Integer aSize) ;

//! Returns the limit between a large image and a <br>
//!	    small image. <br>
//!  Warning: A small image have Height*Width <= SmallSize (). <br>
static /*instead*/  Standard_Integer SmallSize() ;

//! returns the position in the space model <br>
 /*instead*/  void Position(Quantity_Length& X, Quantity_Length& Y) ;

//! returns the offset in the device space <br>
 /*instead*/  void Offset(Quantity_Length& aX, Quantity_Length& aY) ;

//! returns the type of placement <br>
 /*instead*/  OCAspect_CardinalPoints Placement() ;

//! returns the image <br>
 /*instead*/  OCImage_Image^ Image() ;


virtual /*instead*/  void Save(Aspect_FStream& aFStream) ;

~OCGraphic2d_Image()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
