// File generated by CPPExt (MPV)
//
#ifndef _BRepPrim_OneAxis_OCWrappers_HeaderFile
#define _BRepPrim_OneAxis_OCWrappers_HeaderFile

// include native header
#include <BRepPrim_OneAxis.hxx>
#include "../Converter.h"


#include "BRepPrim_Builder.h"
#include "../gp/gp_Ax2.h"
#include "../TopoDS/TopoDS_Shell.h"
#include "../TopoDS/TopoDS_Vertex.h"
#include "../TopoDS/TopoDS_Edge.h"
#include "../TopoDS/TopoDS_Wire.h"
#include "../TopoDS/TopoDS_Face.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shell;
ref class OCTopoDS_Face;
ref class OCTopoDS_Wire;
ref class OCTopoDS_Edge;
ref class OCTopoDS_Vertex;
ref class OCBRepPrim_Builder;
ref class OCgp_Ax2;
ref class OCgp_Pnt2d;



public ref class OCBRepPrim_OneAxis  {

protected:
  BRepPrim_OneAxis* nativeHandle;
  OCBRepPrim_OneAxis(OCDummy^) {};

public:
  property BRepPrim_OneAxis* Handle
  {
    BRepPrim_OneAxis* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepPrim_OneAxis(BRepPrim_OneAxis* nativeHandle);

// Methods PUBLIC


OCBRepPrim_OneAxis(OCNaroWrappers::OCBRepPrim_Builder^ B, OCNaroWrappers::OCgp_Ax2^ A, Standard_Real VMin, Standard_Real VMax);


 /*instead*/  void SetMeridianOffset(Standard_Real MeridianOffset) ;


 /*instead*/  OCgp_Ax2^ Axes() ;


 /*instead*/  void Axes(OCNaroWrappers::OCgp_Ax2^ A) ;


 /*instead*/  Standard_Real Angle() ;


 /*instead*/  void Angle(Standard_Real A) ;


 /*instead*/  Standard_Real VMin() ;


 /*instead*/  void VMin(Standard_Real V) ;


 /*instead*/  Standard_Real VMax() ;


 /*instead*/  void VMax(Standard_Real V) ;


virtual /*instead*/  System::Boolean MeridianOnAxis(Standard_Real V) ;


virtual /*instead*/  System::Boolean MeridianClosed() ;


virtual /*instead*/  System::Boolean VMaxInfinite() ;


virtual /*instead*/  System::Boolean VMinInfinite() ;


virtual /*instead*/  System::Boolean HasTop() ;


virtual /*instead*/  System::Boolean HasBottom() ;


virtual /*instead*/  System::Boolean HasSides() ;


 /*instead*/  OCTopoDS_Shell^ Shell() ;


 /*instead*/  OCTopoDS_Face^ LateralFace() ;


 /*instead*/  OCTopoDS_Face^ TopFace() ;


 /*instead*/  OCTopoDS_Face^ BottomFace() ;


 /*instead*/  OCTopoDS_Face^ StartFace() ;


 /*instead*/  OCTopoDS_Face^ EndFace() ;


 /*instead*/  OCTopoDS_Wire^ LateralWire() ;


 /*instead*/  OCTopoDS_Wire^ LateralStartWire() ;


 /*instead*/  OCTopoDS_Wire^ LateralEndWire() ;


 /*instead*/  OCTopoDS_Wire^ TopWire() ;


 /*instead*/  OCTopoDS_Wire^ BottomWire() ;


 /*instead*/  OCTopoDS_Wire^ StartWire() ;


 /*instead*/  OCTopoDS_Wire^ AxisStartWire() ;


 /*instead*/  OCTopoDS_Wire^ EndWire() ;


 /*instead*/  OCTopoDS_Wire^ AxisEndWire() ;


 /*instead*/  OCTopoDS_Edge^ AxisEdge() ;


 /*instead*/  OCTopoDS_Edge^ StartEdge() ;


 /*instead*/  OCTopoDS_Edge^ EndEdge() ;


 /*instead*/  OCTopoDS_Edge^ StartTopEdge() ;


 /*instead*/  OCTopoDS_Edge^ StartBottomEdge() ;


 /*instead*/  OCTopoDS_Edge^ EndTopEdge() ;


 /*instead*/  OCTopoDS_Edge^ EndBottomEdge() ;


 /*instead*/  OCTopoDS_Edge^ TopEdge() ;


 /*instead*/  OCTopoDS_Edge^ BottomEdge() ;


 /*instead*/  OCTopoDS_Vertex^ AxisTopVertex() ;


 /*instead*/  OCTopoDS_Vertex^ AxisBottomVertex() ;


 /*instead*/  OCTopoDS_Vertex^ TopStartVertex() ;


 /*instead*/  OCTopoDS_Vertex^ TopEndVertex() ;


 /*instead*/  OCTopoDS_Vertex^ BottomStartVertex() ;


 /*instead*/  OCTopoDS_Vertex^ BottomEndVertex() ;

~OCBRepPrim_OneAxis()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
