// File generated by CPPExt (Transient)
//
#ifndef _IntPatch_ALine_OCWrappers_HeaderFile
#define _IntPatch_ALine_OCWrappers_HeaderFile

// include the wrapped class
#include <IntPatch_ALine.hxx>
#include "../Converter.h"

#include "IntPatch_Line.h"

#include "../IntAna/IntAna_Curve.h"
#include "IntPatch_SequenceOfPoint.h"
#include "../IntSurf/IntSurf_TypeTrans.h"
#include "../IntSurf/IntSurf_Situation.h"
#include "../gp/gp_Pnt.h"


namespace OCNaroWrappers
{

ref class OCIntAna_Curve;
ref class OCIntPatch_Point;
ref class OCgp_Pnt;
ref class OCgp_Vec;


//! Implementation of an intersection line described by a <br>
//!          parametrised curve. <br>
public ref class OCIntPatch_ALine : OCIntPatch_Line {

protected:
  // dummy constructor;
  OCIntPatch_ALine(OCDummy^) : OCIntPatch_Line((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntPatch_ALine(Handle(IntPatch_ALine)* nativeHandle);

// Methods PUBLIC

//! Creates an analytic intersection line <br>
//!          when the transitions are In or Out. <br>
OCIntPatch_ALine(OCNaroWrappers::OCIntAna_Curve^ C, System::Boolean Tang, OCIntSurf_TypeTrans Trans1, OCIntSurf_TypeTrans Trans2);

//! Creates an analytic intersection line <br>
//!          when the transitions are Touch. <br>
OCIntPatch_ALine(OCNaroWrappers::OCIntAna_Curve^ C, System::Boolean Tang, OCIntSurf_Situation Situ1, OCIntSurf_Situation Situ2);

//! Creates an analytic intersection line <br>
//!          when the transitions are Undecided. <br>
OCIntPatch_ALine(OCNaroWrappers::OCIntAna_Curve^ C, System::Boolean Tang);

//! To add a vertex in the list. <br>
 /*instead*/  void AddVertex(OCNaroWrappers::OCIntPatch_Point^ Pnt) ;

//! Replaces the element of range Index in the list <br>
//!          of points. <br>
 /*instead*/  void Replace(Standard_Integer Index, OCNaroWrappers::OCIntPatch_Point^ Pnt) ;


 /*instead*/  void SetFirstPoint(Standard_Integer IndFirst) ;


 /*instead*/  void SetLastPoint(Standard_Integer IndLast) ;

//! Returns the first parameter on the intersection line. <br>
//!          If IsIncluded returns True, Value and D1 methods can <br>
//!          be call with a parameter equal to FirstParamater. <br>
//!          Otherwise, the parameter must be greater than <br>
//!          FirstParameter. <br>
 /*instead*/  Standard_Real FirstParameter(System::Boolean& IsIncluded) ;

//! Returns the last parameter on the intersection line. <br>
//!          If IsIncluded returns True, Value and D1 methods can <br>
//!          be call with a parameter equal to LastParamater. <br>
//!          Otherwise, the parameter must be less than LastParameter. <br>
 /*instead*/  Standard_Real LastParameter(System::Boolean& IsIncluded) ;

//! Returns the point of parameter U on the analytic <br>
//!          intersection line. <br>
 /*instead*/  OCgp_Pnt^ Value(Standard_Real U) ;

//! Returns Standard_True when the derivative at parameter U <br>
//!          is defined on the analytic intersection line. <br>
//!          In that case, Du is the derivative. <br>
//!          Returns Standard_False when it is not possible to <br>
//!          evaluate the derivative. <br>
//!          In both cases, P is the point at parameter U on the <br>
//!          intersection. <br>
 /*instead*/  System::Boolean D1(Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ Du) ;

//! Tries to find the parameter of the point P on the curve. <br>
//!          If the method returns False, the "projection" is <br>
//!          impossible, and the value of Para is not significant. <br>
//!          If the method returns True, Para is the parameter of the <br>
//!          nearest intersection between the curve and the iso-theta <br>
//!          containing P. <br>
 /*instead*/  System::Boolean FindParameter(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real& Para) ;

//! Returns True if the line has a known First point. <br>
//!          This point is given by the method FirstPoint(). <br>
 /*instead*/  System::Boolean HasFirstPoint() ;

//! Returns True if the line has a known Last point. <br>
//!          This point is given by the method LastPoint(). <br>
 /*instead*/  System::Boolean HasLastPoint() ;

//! Returns the IntPoint corresponding to the FirstPoint. <br>
//!          An exception is raised when HasFirstPoint returns False. <br>
 /*instead*/  OCIntPatch_Point^ FirstPoint() ;

//! Returns the IntPoint corresponding to the LastPoint. <br>
//!          An exception is raised when HasLastPoint returns False. <br>
 /*instead*/  OCIntPatch_Point^ LastPoint() ;


 /*instead*/  Standard_Integer NbVertex() ;

//! Returns the vertex of range Index on the line. <br>
 /*instead*/  OCIntPatch_Point^ Vertex(Standard_Integer Index) ;

//! Set the parameters of all the vertex on the line. <br>
//!          if a vertex is already in the line, <br>
//!             its parameter is modified <br>
//!          else a new point in the line is inserted. <br>
 /*instead*/  void ComputeVertexParameters(Standard_Real Tol) ;


 /*instead*/  OCIntAna_Curve^ Curve() ;

~OCIntPatch_ALine()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif