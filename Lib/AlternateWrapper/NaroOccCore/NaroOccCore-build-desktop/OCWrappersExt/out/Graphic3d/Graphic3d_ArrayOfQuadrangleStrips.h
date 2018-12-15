// File generated by CPPExt (Transient)
//
#ifndef _Graphic3d_ArrayOfQuadrangleStrips_OCWrappers_HeaderFile
#define _Graphic3d_ArrayOfQuadrangleStrips_OCWrappers_HeaderFile

// include the wrapped class
#include <Graphic3d_ArrayOfQuadrangleStrips.hxx>
#include "../Converter.h"

#include "Graphic3d_ArrayOfPrimitives.h"



namespace OCNaroWrappers
{




public ref class OCGraphic3d_ArrayOfQuadrangleStrips : OCGraphic3d_ArrayOfPrimitives {

protected:
  // dummy constructor;
  OCGraphic3d_ArrayOfQuadrangleStrips(OCDummy^) : OCGraphic3d_ArrayOfPrimitives((OCDummy^)nullptr) {};

public:

// constructor from native
OCGraphic3d_ArrayOfQuadrangleStrips(Handle(Graphic3d_ArrayOfQuadrangleStrips)* nativeHandle);

// Methods PUBLIC

//! Creates an array of quadrangle strips, <br>
//! a polygon can be filled as: <br>
//! 1) creating a single strip defined with his vertexs. <br>
//!    i.e: <br>
//!    myArray = Graphic3d_ArrayOfQuadrangleStrips(7) <br>
//!    myArray->AddVertex(x1,y1,z1) <br>
//!	.... <br>
//!    myArray->AddVertex(x7,y7,z7) <br>
//! 2) creating separate strips defined with a predefined <br>
//!    number of strips and the number of vertex per strip. <br>
//!    i.e: <br>
//!    myArray = Graphic3d_ArrayOfQuadrangleStrips(8,2) <br>
//!    myArray->AddBound(4) <br>
//!    myArray->AddVertex(x1,y1,z1) <br>
//!	.... <br>
//!    myArray->AddVertex(x4,y4,z4) <br>
//!    myArray->AddBound(4) <br>
//!    myArray->AddVertex(x5,y5,z5) <br>
//!	.... <br>
//!    myArray->AddVertex(x8,y8,z8) <br>
OCGraphic3d_ArrayOfQuadrangleStrips(Standard_Integer maxVertexs, Standard_Integer maxStrips, System::Boolean hasVNormals, System::Boolean hasVColors, System::Boolean hasSColors, System::Boolean hasTexels);

~OCGraphic3d_ArrayOfQuadrangleStrips()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif