// File generated by CPPExt (MPV)
//
#ifndef _BRepLib_MakeVertex_OCWrappers_HeaderFile
#define _BRepLib_MakeVertex_OCWrappers_HeaderFile

// include native header
#include <BRepLib_MakeVertex.hxx>
#include "../Converter.h"

#include "BRepLib_MakeShape.h"

#include "BRepLib_MakeShape.h"


namespace OCNaroWrappers
{

ref class OCgp_Pnt;
ref class OCTopoDS_Vertex;


//! Provides methods to build vertices. <br>
public ref class OCBRepLib_MakeVertex  : public OCBRepLib_MakeShape {

protected:
  // dummy constructor;
  OCBRepLib_MakeVertex(OCDummy^) : OCBRepLib_MakeShape((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepLib_MakeVertex(BRepLib_MakeVertex* nativeHandle);

// Methods PUBLIC


OCBRepLib_MakeVertex(OCNaroWrappers::OCgp_Pnt^ P);


 /*instead*/  OCTopoDS_Vertex^ Vertex() ;

~OCBRepLib_MakeVertex()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
