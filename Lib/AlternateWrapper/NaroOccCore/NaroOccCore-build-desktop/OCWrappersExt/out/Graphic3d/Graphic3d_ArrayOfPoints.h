// File generated by CPPExt (Transient)
//
#ifndef _Graphic3d_ArrayOfPoints_OCWrappers_HeaderFile
#define _Graphic3d_ArrayOfPoints_OCWrappers_HeaderFile

// include the wrapped class
#include <Graphic3d_ArrayOfPoints.hxx>
#include "../Converter.h"

#include "Graphic3d_ArrayOfPrimitives.h"



namespace OCNaroWrappers
{




public ref class OCGraphic3d_ArrayOfPoints : OCGraphic3d_ArrayOfPrimitives {

protected:
  // dummy constructor;
  OCGraphic3d_ArrayOfPoints(OCDummy^) : OCGraphic3d_ArrayOfPrimitives((OCDummy^)nullptr) {};

public:

// constructor from native
OCGraphic3d_ArrayOfPoints(Handle(Graphic3d_ArrayOfPoints)* nativeHandle);

// Methods PUBLIC

//! Creates an array of points, <br>
//! a single pixel point is drawn at each vertex. <br>
//! The array must be filled using only <br>
//!     the AddVertex(Point) method. <br>
OCGraphic3d_ArrayOfPoints(Standard_Integer maxVertexs);

~OCGraphic3d_ArrayOfPoints()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
