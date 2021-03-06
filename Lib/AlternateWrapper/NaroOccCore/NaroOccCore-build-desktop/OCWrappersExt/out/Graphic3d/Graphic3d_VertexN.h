// File generated by CPPExt (MPV)
//
#ifndef _Graphic3d_VertexN_OCWrappers_HeaderFile
#define _Graphic3d_VertexN_OCWrappers_HeaderFile

// include native header
#include <Graphic3d_VertexN.hxx>
#include "../Converter.h"

#include "Graphic3d_Vertex.h"

#include "Graphic3d_Vertex.h"


namespace OCNaroWrappers
{

ref class OCGraphic3d_Vertex;
ref class OCGraphic3d_Vector;


//! This class allows the creation and update of <br>
//!	    a vertex with a 3D normal. <br>
public ref class OCGraphic3d_VertexN  : public OCGraphic3d_Vertex {

protected:
  // dummy constructor;
  OCGraphic3d_VertexN(OCDummy^) : OCGraphic3d_Vertex((OCDummy^)nullptr) {};

public:

// constructor from native
OCGraphic3d_VertexN(Graphic3d_VertexN* nativeHandle);

// Methods PUBLIC

//! Creates a point with 0.0, 0.0, 0.0 coordinates <br>
//!	    for which the normal is 0.0, 0.0, 1.0. <br>
OCGraphic3d_VertexN();

//! Creates a point with coordinates <AX>, <AY>, <AZ> and <br>
//!	    for which the normal is <ANX>, <ANY>, <ANZ>. <br>
//!	    If <FlagNormalise> is True the normal is already normalised <br>
//!	    Else the normal is not normalised, the graphic do it. <br>
OCGraphic3d_VertexN(Standard_Real AX, Standard_Real AY, Standard_Real AZ, Standard_Real ANX, Standard_Real ANY, Standard_Real ANZ, System::Boolean FlagNormalise);

//! Creates a point in <APoint> for which the normal is <AVector>. <br>
//!	    If <FlagNormalise> is True the normal is already normalised <br>
//!	    Else the normal is not normalised, the graphic do it. <br>
OCGraphic3d_VertexN(OCNaroWrappers::OCGraphic3d_Vertex^ APoint, OCNaroWrappers::OCGraphic3d_Vector^ AVector, System::Boolean FlagNormalise);

//! Modifies the normal to the point <me>. <br>
//!	    If <FlagNormalise> is True the normal is already normalised <br>
//!	    Else the normal is not normalised, the graphic do it. <br>
 /*instead*/  void SetNormal(Standard_Real NXnew, Standard_Real NYnew, Standard_Real NZnew, System::Boolean FlagNormalise) ;

//! Returns the normal to the point <me>. <br>
 /*instead*/  void Normal(Standard_Real& ANX, Standard_Real& ANY, Standard_Real& ANZ) ;

~OCGraphic3d_VertexN()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
