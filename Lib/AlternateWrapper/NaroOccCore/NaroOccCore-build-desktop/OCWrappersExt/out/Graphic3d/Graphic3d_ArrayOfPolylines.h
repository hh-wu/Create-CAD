// File generated by CPPExt (Transient)
//
#ifndef _Graphic3d_ArrayOfPolylines_OCWrappers_HeaderFile
#define _Graphic3d_ArrayOfPolylines_OCWrappers_HeaderFile

// include the wrapped class
#include <Graphic3d_ArrayOfPolylines.hxx>
#include "../Converter.h"

#include "Graphic3d_ArrayOfPrimitives.h"



namespace OCNaroWrappers
{




public ref class OCGraphic3d_ArrayOfPolylines : OCGraphic3d_ArrayOfPrimitives {

protected:
  // dummy constructor;
  OCGraphic3d_ArrayOfPolylines(OCDummy^) : OCGraphic3d_ArrayOfPrimitives((OCDummy^)nullptr) {};

public:

// constructor from native
OCGraphic3d_ArrayOfPolylines(Handle(Graphic3d_ArrayOfPolylines)* nativeHandle);

// Methods PUBLIC

//! Creates an array of polylines, <br>
//! a polyline can be filled as: <br>
//! 1) creating a single polyline defined with his vertexs. <br>
//!    i.e: <br>
//!    myArray = Graphic3d_ArrayOfPolylines(7) <br>
//!    myArray->AddVertex(x1,y1,z1) <br>
//!      .... <br>
//!    myArray->AddVertex(x7,y7,z7) <br>
//! 2) creating separate polylines defined with a predefined <br>
//!    number of bounds and the number of vertex per bound. <br>
//!    i.e: <br>
//!    myArray = Graphic3d_ArrayOfPolylines(7,2) <br>
//!    myArray->AddBound(4) <br>
//!    myArray->AddVertex(x1,y1,z1) <br>
//!      .... <br>
//!    myArray->AddVertex(x4,y4,z4) <br>
//!    myArray->AddBound(3) <br>
//!    myArray->AddVertex(x5,y5,z5) <br>
//!      .... <br>
//!    myArray->AddVertex(x7,y7,z7) <br>
//! 3) creating a single indexed polyline defined with his vertex <br>
//!    ans edges. <br>
//!    i.e: <br>
//!    myArray = Graphic3d_ArrayOfPolylines(4,0,6) <br>
//!    myArray->AddVertex(x1,y1,z1) <br>
//!      .... <br>
//!    myArray->AddVertex(x4,y4,z4) <br>
//!    myArray->AddEdge(1) <br>
//!    myArray->AddEdge(2) <br>
//!    myArray->AddEdge(3) <br>
//!    myArray->AddEdge(1) <br>
//!    myArray->AddEdge(2) <br>
//!    myArray->AddEdge(4) <br>
//! 4) creating separate polylines defined with a predefined <br>
//!    number of bounds and the number of edges per bound. <br>
//!    i.e: <br>
//!    myArray = Graphic3d_ArrayOfPolylines(6,4,14) <br>
//!    myArray->AddBound(3) <br>
//!    myArray->AddVertex(x1,y1,z1) <br>
//!    myArray->AddVertex(x2,y2,z2) <br>
//!    myArray->AddVertex(x3,y3,z3) <br>
//!    myArray->AddEdge(1) <br>
//!    myArray->AddEdge(2) <br>
//!    myArray->AddEdge(3) <br>
//!    myArray->AddBound(3) <br>
//!    myArray->AddVertex(x4,y4,z4) <br>
//!    myArray->AddVertex(x5,y5,z5) <br>
//!    myArray->AddVertex(x6,y6,z6) <br>
//!    myArray->AddEdge(4) <br>
//!    myArray->AddEdge(5) <br>
//!    myArray->AddEdge(6) <br>
//!    myArray->AddBound(4) <br>
//!    myArray->AddEdge(2) <br>
//!    myArray->AddEdge(3) <br>
//!    myArray->AddEdge(5) <br>
//!    myArray->AddEdge(6) <br>
//!    myArray->AddBound(4) <br>
//!    myArray->AddEdge(1) <br>
//!    myArray->AddEdge(3) <br>
//!    myArray->AddEdge(5) <br>
//!    myArray->AddEdge(4) <br>
OCGraphic3d_ArrayOfPolylines(Standard_Integer maxVertexs, Standard_Integer maxBounds, Standard_Integer maxEdges, System::Boolean hasVColors, System::Boolean hasBColors, System::Boolean hasEdgeInfos);

~OCGraphic3d_ArrayOfPolylines()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
