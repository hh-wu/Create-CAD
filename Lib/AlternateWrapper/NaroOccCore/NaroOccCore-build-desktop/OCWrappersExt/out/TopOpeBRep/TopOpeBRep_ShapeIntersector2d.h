// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRep_ShapeIntersector2d_OCWrappers_HeaderFile
#define _TopOpeBRep_ShapeIntersector2d_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRep_ShapeIntersector2d.hxx>
#include "../Converter.h"


#include "../TopoDS/TopoDS_Shape.h"
#include "../TopOpeBRepTool/TopOpeBRepTool_ShapeExplorer.h"
#include "TopOpeBRep_ShapeScanner.h"
#include "TopOpeBRep_EdgesIntersector.h"


namespace OCNaroWrappers
{

ref class OCTopOpeBRepTool_HBoxTool;
ref class OCTopoDS_Shape;
ref class OCTopOpeBRep_EdgesIntersector;


//! Intersect two shapes. <br>
//! <br>
//!          A GeomShape is a  shape with a geometric domain, i.e. <br>
//!          a Face or an Edge. <br>
//! <br>
//!          The purpose   of  the  ShapeIntersector2d is   to  find <br>
//!          couples  of  intersecting   GeomShape  in  two Shapes <br>
//!          (which can   be  any kind of  topologies  : Compound, <br>
//!          Solid, Shell, etc... ) <br>
//! <br>
//!          It  is in charge  of  exploration  of the shapes  and <br>
//!          rejection. For this it is provided with two tools : <br>
//! <br>
//!            - ShapeExplorer from TopOpeBRepTool. <br>
//!            - ShapeScanner from TopOpeBRep which implements bounding boxes. <br>
public ref class OCTopOpeBRep_ShapeIntersector2d  {

protected:
  TopOpeBRep_ShapeIntersector2d* nativeHandle;
  OCTopOpeBRep_ShapeIntersector2d(OCDummy^) {};

public:
  property TopOpeBRep_ShapeIntersector2d* Handle
  {
    TopOpeBRep_ShapeIntersector2d* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopOpeBRep_ShapeIntersector2d(TopOpeBRep_ShapeIntersector2d* nativeHandle);

// Methods PUBLIC


OCTopOpeBRep_ShapeIntersector2d();

//! Initialize the intersection of shapes S1,S2. <br>
 /*instead*/  void InitIntersection(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2) ;

//! return  the shape  <Index> ( = 1 or 2) given to <br>
//!          InitIntersection(). <br>
//!          Index = 1 will return S1, Index = 2 will return S2. <br>
 /*instead*/  OCTopoDS_Shape^ Shape(Standard_Integer Index) ;

//! returns True if there are more intersection <br>
//!          between two the shapes. <br>
 /*instead*/  System::Boolean MoreIntersection() ;

//! search for the next intersection between the two shapes. <br>
 /*instead*/  void NextIntersection() ;

//! return the current intersection of two Edges. <br>
 /*instead*/  OCTopOpeBRep_EdgesIntersector^ ChangeEdgesIntersector() ;

//! return  geometric  shape <Index> ( = 1 or 2 )  of <br>
//!          current intersection. <br>
 /*instead*/  OCTopoDS_Shape^ CurrentGeomShape(Standard_Integer Index) ;


 /*instead*/  void DumpCurrent(Standard_Integer K) ;


 /*instead*/  Standard_Integer Index(Standard_Integer K) ;

~OCTopOpeBRep_ShapeIntersector2d()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
