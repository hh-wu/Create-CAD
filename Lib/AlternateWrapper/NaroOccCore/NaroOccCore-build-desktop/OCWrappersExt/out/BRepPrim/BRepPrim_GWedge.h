// File generated by CPPExt (MPV)
//
#ifndef _BRepPrim_GWedge_OCWrappers_HeaderFile
#define _BRepPrim_GWedge_OCWrappers_HeaderFile

// include native header
#include <BRepPrim_GWedge.hxx>
#include "../Converter.h"


#include "BRepPrim_Builder.h"
#include "../gp/gp_Ax2.h"
#include "../TopoDS/TopoDS_Shell.h"
#include "../TopoDS/TopoDS_Vertex.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../TopoDS/TopoDS_Wire.h"
#include "../TopoDS/TopoDS_Face.h"
#include "../Primitives/Primitives_Direction.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shell;
ref class OCTopoDS_Face;
ref class OCTopoDS_Wire;
ref class OCTopoDS_Edge;
ref class OCTopoDS_Vertex;
ref class OCBRepPrim_Builder;
ref class OCgp_Ax2;
ref class OCgp_Pln;
ref class OCgp_Lin;
ref class OCgp_Pnt;



public ref class OCBRepPrim_GWedge  {

protected:
  BRepPrim_GWedge* nativeHandle;
  OCBRepPrim_GWedge(OCDummy^) {};

public:
  property BRepPrim_GWedge* Handle
  {
    BRepPrim_GWedge* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepPrim_GWedge(BRepPrim_GWedge* nativeHandle);

// Methods PUBLIC


OCBRepPrim_GWedge(OCNaroWrappers::OCBRepPrim_Builder^ B, OCNaroWrappers::OCgp_Ax2^ Axes, Standard_Real dx, Standard_Real dy, Standard_Real dz);


OCBRepPrim_GWedge(OCNaroWrappers::OCBRepPrim_Builder^ B, OCNaroWrappers::OCgp_Ax2^ Axes, Standard_Real dx, Standard_Real dy, Standard_Real dz, Standard_Real ltx);


OCBRepPrim_GWedge(OCNaroWrappers::OCBRepPrim_Builder^ B, OCNaroWrappers::OCgp_Ax2^ Axes, Standard_Real xmin, Standard_Real ymin, Standard_Real zmin, Standard_Real z2min, Standard_Real x2min, Standard_Real xmax, Standard_Real ymax, Standard_Real zmax, Standard_Real z2max, Standard_Real x2max);


 /*instead*/  OCgp_Ax2^ Axes() ;


 /*instead*/  Standard_Real GetXMin() ;


 /*instead*/  Standard_Real GetYMin() ;


 /*instead*/  Standard_Real GetZMin() ;


 /*instead*/  Standard_Real GetZ2Min() ;


 /*instead*/  Standard_Real GetX2Min() ;


 /*instead*/  Standard_Real GetXMax() ;


 /*instead*/  Standard_Real GetYMax() ;


 /*instead*/  Standard_Real GetZMax() ;


 /*instead*/  Standard_Real GetZ2Max() ;


 /*instead*/  Standard_Real GetX2Max() ;


 /*instead*/  void Open(OCPrimitives_Direction d1) ;


 /*instead*/  void Close(OCPrimitives_Direction d1) ;


 /*instead*/  System::Boolean IsInfinite(OCPrimitives_Direction d1) ;


 /*instead*/  OCTopoDS_Shell^ Shell() ;


 /*instead*/  System::Boolean HasFace(OCPrimitives_Direction d1) ;


 /*instead*/  OCTopoDS_Face^ Face(OCPrimitives_Direction d1) ;


 /*instead*/  OCgp_Pln^ Plane(OCPrimitives_Direction d1) ;


 /*instead*/  System::Boolean HasWire(OCPrimitives_Direction d1) ;


 /*instead*/  OCTopoDS_Wire^ Wire(OCPrimitives_Direction d1) ;


 /*instead*/  System::Boolean HasEdge(OCPrimitives_Direction d1, OCPrimitives_Direction d2) ;


 /*instead*/  OCTopoDS_Edge^ Edge(OCPrimitives_Direction d1, OCPrimitives_Direction d2) ;


 /*instead*/  OCgp_Lin^ Line(OCPrimitives_Direction d1, OCPrimitives_Direction d2) ;


 /*instead*/  System::Boolean HasVertex(OCPrimitives_Direction d1, OCPrimitives_Direction d2, OCPrimitives_Direction d3) ;


 /*instead*/  OCTopoDS_Vertex^ Vertex(OCPrimitives_Direction d1, OCPrimitives_Direction d2, OCPrimitives_Direction d3) ;


 /*instead*/  OCgp_Pnt^ Point(OCPrimitives_Direction d1, OCPrimitives_Direction d2, OCPrimitives_Direction d3) ;

~OCBRepPrim_GWedge()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
