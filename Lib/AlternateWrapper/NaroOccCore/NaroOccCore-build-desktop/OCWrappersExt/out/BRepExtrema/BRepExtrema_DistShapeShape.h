// File generated by CPPExt (MPV)
//
#ifndef _BRepExtrema_DistShapeShape_OCWrappers_HeaderFile
#define _BRepExtrema_DistShapeShape_OCWrappers_HeaderFile

// include native header
#include <BRepExtrema_DistShapeShape.hxx>
#include "../Converter.h"


#include "BRepExtrema_SeqOfSolution.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopTools/TopTools_IndexedMapOfShape.h"
#include "BRepExtrema_SupportType.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_IndexedMapOfShape;
ref class OCBnd_SeqOfBox;
ref class OCgp_Pnt;


//! This class  provides tools to compute minimum distance <br>
//!          between two Shapes (Compound,CompSolid, Solid, Shell, Face, Wire, Edge, Vertex). <br>
public ref class OCBRepExtrema_DistShapeShape  {

protected:
  BRepExtrema_DistShapeShape* nativeHandle;
  OCBRepExtrema_DistShapeShape(OCDummy^) {};

public:
  property BRepExtrema_DistShapeShape* Handle
  {
    BRepExtrema_DistShapeShape* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepExtrema_DistShapeShape(BRepExtrema_DistShapeShape* nativeHandle);

// Methods PUBLIC

//! create empty brepextrema <br>
OCBRepExtrema_DistShapeShape();

//! computation of  the minimum  distance  (value  and <br>
//!          couple  of points) using default deflection <br>
OCBRepExtrema_DistShapeShape(OCNaroWrappers::OCTopoDS_Shape^ Shape1, OCNaroWrappers::OCTopoDS_Shape^ Shape2);

//! Creates brepextrema and load both shapes into it <br>
//!          Default value is Precision::Confusion(). <br>
OCBRepExtrema_DistShapeShape(OCNaroWrappers::OCTopoDS_Shape^ Shape1, OCNaroWrappers::OCTopoDS_Shape^ Shape2, Standard_Real theDeflection);


 /*instead*/  void SetDeflection(Standard_Real theDeflection) ;

//! load first shape into extrema <br>
 /*instead*/  void LoadS1(OCNaroWrappers::OCTopoDS_Shape^ Shape1) ;

//! load second shape into extrema <br>
 /*instead*/  void LoadS2(OCNaroWrappers::OCTopoDS_Shape^ Shape1) ;

//! computation of  the minimum  distance  (value  and <br>
//!          couple  of points). Parameter theDeflection is used <br>
//!          to specify a maximum deviation of extreme distances <br>
//!          from the minimum one. <br>
//!          Returns IsDone status. <br>
 /*instead*/  System::Boolean Perform() ;

//! True if the minimum  distance  is found. <br>
 /*instead*/  System::Boolean IsDone() ;

//! Returns the number of solutions satisfying the minimum <br>
//!          distance. <br>
 /*instead*/  Standard_Integer NbSolution() ;

//! Returns the value of the minimum distance. <br>
 /*instead*/  Standard_Real Value() ;

//! True if one of  the  shapes is  a solid and the <br>
//!          other shape is completely or partially inside the solid. <br>
 /*instead*/  System::Boolean InnerSolution() ;

//! Returns the Point corresponding to  the <N>th <br>
//!          solution on the first Shape <br>
 /*instead*/  OCgp_Pnt^ PointOnShape1(Standard_Integer N) ;

//! Returns the Point  corresponding to the <N>th <br>
//!          solution on the second Shape <br>
 /*instead*/  OCgp_Pnt^ PointOnShape2(Standard_Integer N) ;

//! gives the type   of  the support  where the   Nth <br>
//!          solution on the first shape is situated: <br>
//!          IsVertex : <br>
//!          => the Nth solution on the first shape is a Vertex <br>
//!          IsOnEdge <br>
//!          => the Nth soluion on the first shape is on a Edge <br>
//!          IsInFace <br>
//!          => the Nth solution on the first shape is inside a <br>
//!          face <br>
//! <br>
//!           the  corresponding  support   is  obtained by  the <br>
//!          method SupportOnShape1 <br>
 /*instead*/  OCBRepExtrema_SupportType SupportTypeShape1(Standard_Integer N) ;

//! gives the type    of  the support  where the   Nth <br>
//!          solution on the second shape is situated: <br>
//!          IsVertex : <br>
//!          => the Nth solution on the second shape is a Vertex <br>
//!          IsOnEdge <br>
//!          => the Nth soluion on the secondt shape is on a Edge <br>
//!          IsInFace <br>
//!          => the Nth solution on the second shape is inside a <br>
//!          face <br>
//! <br>
//!          the support is obtained by the method SupportOnShape2 <br>
 /*instead*/  OCBRepExtrema_SupportType SupportTypeShape2(Standard_Integer N) ;

//!gives the support  where the   Nth <br>
//!          solution on the first  shape is situated. <br>
//!          This support can be a Vertex, an Edge or a Face. <br>
 /*instead*/  OCTopoDS_Shape^ SupportOnShape1(Standard_Integer N) ;

//! gives the support  where the   Nth <br>
//!          solution on the second   shape is situated. <br>
//!          This support can be a Vertex, an Edge or a Face. <br>
 /*instead*/  OCTopoDS_Shape^ SupportOnShape2(Standard_Integer N) ;

//! gives the  corresponding  parameter  t if the  Nth <br>
//!          Solution is situated on an Egde of the first shape <br>
 /*instead*/  void ParOnEdgeS1(Standard_Integer N, Standard_Real& t) ;

//! gives the  corresponding  parameter  t if the  Nth <br>
//!          Solution is situated on an Egde of the first shape <br>
 /*instead*/  void ParOnEdgeS2(Standard_Integer N, Standard_Real& t) ;

//! gives the  corresponding  parameters  (U,V)  if the  Nth <br>
//!          Solution is situated on an face  of the first shape <br>
 /*instead*/  void ParOnFaceS1(Standard_Integer N, Standard_Real& u, Standard_Real& v) ;

//! gives the  corresponding  parameters (U,V)   if the  Nth <br>
//!          Solution is situated on an Face  of the second  shape <br>
 /*instead*/  void ParOnFaceS2(Standard_Integer N, Standard_Real& u, Standard_Real& v) ;

//! Prints on the stream o information on the current state <br>
//!          of the object. <br>
//! <br>
 /*instead*/  void Dump(Standard_OStream& o) ;

~OCBRepExtrema_DistShapeShape()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
