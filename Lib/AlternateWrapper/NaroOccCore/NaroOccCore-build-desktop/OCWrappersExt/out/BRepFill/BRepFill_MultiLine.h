// File generated by CPPExt (MPV)
//
#ifndef _BRepFill_MultiLine_OCWrappers_HeaderFile
#define _BRepFill_MultiLine_OCWrappers_HeaderFile

// include native header
#include <BRepFill_MultiLine.hxx>
#include "../Converter.h"


#include "../TopoDS/TopoDS_Face.h"
#include "../Geom2dAdaptor/Geom2dAdaptor_Curve.h"
#include "../GeomAbs/GeomAbs_Shape.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Face;
ref class OCTopoDS_Edge;
ref class OCGeom2d_Curve;
ref class OCGeom_Curve;
ref class OCgp_Pnt;
ref class OCgp_Pnt2d;


//! Private class used to compute the 3d curve and the <br>
//!          two 2d curves resulting from the intersection of a <br>
//!          surface of linear extrusion( Bissec, Dz) and the 2 <br>
//!          faces. <br>
//!          This 3 curves will  have  the same parametrization <br>
//!          as the Bissectrice. <br>
//!          This  class  is  to  be  send  to an approximation <br>
//!          routine. <br>
public ref class OCBRepFill_MultiLine  {

protected:
  BRepFill_MultiLine* nativeHandle;
  OCBRepFill_MultiLine(OCDummy^) {};

public:
  property BRepFill_MultiLine* Handle
  {
    BRepFill_MultiLine* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepFill_MultiLine(BRepFill_MultiLine* nativeHandle);

// Methods PUBLIC


OCBRepFill_MultiLine();


OCBRepFill_MultiLine(OCNaroWrappers::OCTopoDS_Face^ Face1, OCNaroWrappers::OCTopoDS_Face^ Face2, OCNaroWrappers::OCTopoDS_Edge^ Edge1, OCNaroWrappers::OCTopoDS_Edge^ Edge2, System::Boolean Inv1, System::Boolean Inv2, OCNaroWrappers::OCGeom2d_Curve^ Bissec);

//! Search if the Projection of the Bissectrice on the <br>
//!          faces needs an approximation or not. <br>
//!          Returns true if the approximation is not needed. <br>
 /*instead*/  System::Boolean IsParticularCase() ;

//! Returns   the continuity  betwwen  the two  faces <br>
//!          seShape         from GeomAbsparated by myBis. <br>
 /*instead*/  OCGeomAbs_Shape Continuity() ;

//! raises if IsParticularCase is <False>. <br>
 /*instead*/  void Curves(OCNaroWrappers::OCGeom_Curve^ Curve, OCNaroWrappers::OCGeom2d_Curve^ PCurve1, OCNaroWrappers::OCGeom2d_Curve^ PCurve2) ;

//! returns the first parameter of the Bissectrice. <br>
 /*instead*/  Standard_Real FirstParameter() ;

//! returns the last parameter of the Bissectrice. <br>
 /*instead*/  Standard_Real LastParameter() ;

//! Returns the current point on the 3d curve <br>
 /*instead*/  OCgp_Pnt^ Value(Standard_Real U) ;

//! returns the current point on the PCurve of the <br>
//!          first face <br>
 /*instead*/  OCgp_Pnt2d^ ValueOnF1(Standard_Real U) ;

//! returns the current point on the PCurve of the <br>
//!          first face <br>
 /*instead*/  OCgp_Pnt2d^ ValueOnF2(Standard_Real U) ;


 /*instead*/  void Value3dOnF1OnF2(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P3d, OCNaroWrappers::OCgp_Pnt2d^ PF1, OCNaroWrappers::OCgp_Pnt2d^ PF2) ;

~OCBRepFill_MultiLine()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
