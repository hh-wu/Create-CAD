// File generated by CPPExt (MPV)
//
#ifndef _BRepSweep_Translation_OCWrappers_HeaderFile
#define _BRepSweep_Translation_OCWrappers_HeaderFile

// include native header
#include <BRepSweep_Translation.hxx>
#include "../Converter.h"

#include "BRepSweep_Trsf.h"

#include "../gp/gp_Vec.h"
#include "BRepSweep_Trsf.h"
#include "../TopAbs/TopAbs_Orientation.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCSweep_NumShape;
ref class OCTopLoc_Location;
ref class OCgp_Vec;


//! Provides   an  algorithm   to   build  object   by <br>
//!          translation sweep. <br>
public ref class OCBRepSweep_Translation  : public OCBRepSweep_Trsf {

protected:
  // dummy constructor;
  OCBRepSweep_Translation(OCDummy^) : OCBRepSweep_Trsf((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepSweep_Translation(BRepSweep_Translation* nativeHandle);

// Methods PUBLIC

//! Creates  a  topology by  translating <S>  with the <br>
//!          vector  <V>. If  C  is   true S Sucomponents   are <br>
//!          copied. If Canonize is true then generated surfaces <br>
//!          are attempted to be canonized in simple types <br>
OCBRepSweep_Translation(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCSweep_NumShape^ N, OCNaroWrappers::OCTopLoc_Location^ L, OCNaroWrappers::OCgp_Vec^ V, System::Boolean C, System::Boolean Canonize);


virtual /*instead*/  void Delete() override;

//! Builds the vertex addressed by [aGenV,aDirV], with its <br>
//!          geometric part, but without subcomponents. <br>
 /*instead*/  OCTopoDS_Shape^ MakeEmptyVertex(OCNaroWrappers::OCTopoDS_Shape^ aGenV, OCNaroWrappers::OCSweep_NumShape^ aDirV) ;

//! Builds the edge addressed by [aGenV,aDirE], with its <br>
//!          geometric part, but without subcomponents. <br>
 /*instead*/  OCTopoDS_Shape^ MakeEmptyDirectingEdge(OCNaroWrappers::OCTopoDS_Shape^ aGenV, OCNaroWrappers::OCSweep_NumShape^ aDirE) ;

//! Builds the edge addressed by [aGenE,aDirV], with its <br>
//!          geometric part, but without subcomponents. <br>
 /*instead*/  OCTopoDS_Shape^ MakeEmptyGeneratingEdge(OCNaroWrappers::OCTopoDS_Shape^ aGenE, OCNaroWrappers::OCSweep_NumShape^ aDirV) ;

//! Sets the  parameters of the new  vertex  on the new <br>
//!          face. The new face and  new vertex where generated <br>
//!          from aGenF, aGenV and aDirV . <br>
 /*instead*/  void SetParameters(OCNaroWrappers::OCTopoDS_Shape^ aNewFace, OCNaroWrappers::OCTopoDS_Shape^ aNewVertex, OCNaroWrappers::OCTopoDS_Shape^ aGenF, OCNaroWrappers::OCTopoDS_Shape^ aGenV, OCNaroWrappers::OCSweep_NumShape^ aDirV) ;

//! Sets the  parameter of the new  vertex  on the new <br>
//!          edge. The new edge and  new vertex where generated <br>
//!          from aGenV aDirE, and aDirV. <br>
 /*instead*/  void SetDirectingParameter(OCNaroWrappers::OCTopoDS_Shape^ aNewEdge, OCNaroWrappers::OCTopoDS_Shape^ aNewVertex, OCNaroWrappers::OCTopoDS_Shape^ aGenV, OCNaroWrappers::OCSweep_NumShape^ aDirE, OCNaroWrappers::OCSweep_NumShape^ aDirV) ;

//! Sets the  parameter of the new  vertex  on the new <br>
//!          edge. The new edge and  new vertex where generated <br>
//!          from aGenE, aGenV and aDirV . <br>
 /*instead*/  void SetGeneratingParameter(OCNaroWrappers::OCTopoDS_Shape^ aNewEdge, OCNaroWrappers::OCTopoDS_Shape^ aNewVertex, OCNaroWrappers::OCTopoDS_Shape^ aGenE, OCNaroWrappers::OCTopoDS_Shape^ aGenV, OCNaroWrappers::OCSweep_NumShape^ aDirV) ;

//! Builds the  face addressed  by [aGenS,aDirS], with <br>
//!          its geometric part, but without subcomponents. The <br>
//!          couple aGenS, aDirS can  be a "generating face and <br>
//!          a  directing  vertex" or  "a generating edge and a <br>
//!          directing  edge". <br>
 /*instead*/  OCTopoDS_Shape^ MakeEmptyFace(OCNaroWrappers::OCTopoDS_Shape^ aGenS, OCNaroWrappers::OCSweep_NumShape^ aDirS) ;

//! Sets the PCurve for a new edge on a new face. The <br>
//!          new edge and  the  new face were generated  using <br>
//!          aGenF, aGenE and aDirV. <br>
 /*instead*/  void SetPCurve(OCNaroWrappers::OCTopoDS_Shape^ aNewFace, OCNaroWrappers::OCTopoDS_Shape^ aNewEdge, OCNaroWrappers::OCTopoDS_Shape^ aGenF, OCNaroWrappers::OCTopoDS_Shape^ aGenE, OCNaroWrappers::OCSweep_NumShape^ aDirV, OCTopAbs_Orientation orien) ;

//! Sets the PCurve for a new edge on a new face. The <br>
//!          new edge and  the  new face were generated  using <br>
//!          aGenE, aDirE and aDirV. <br>
 /*instead*/  void SetGeneratingPCurve(OCNaroWrappers::OCTopoDS_Shape^ aNewFace, OCNaroWrappers::OCTopoDS_Shape^ aNewEdge, OCNaroWrappers::OCTopoDS_Shape^ aGenE, OCNaroWrappers::OCSweep_NumShape^ aDirE, OCNaroWrappers::OCSweep_NumShape^ aDirV, OCTopAbs_Orientation orien) ;

//! Sets the PCurve for a new edge on a new face. The <br>
//!          new edge and  the  new face were generated  using <br>
//!          aGenE, aDirE and aGenV. <br>
 /*instead*/  void SetDirectingPCurve(OCNaroWrappers::OCTopoDS_Shape^ aNewFace, OCNaroWrappers::OCTopoDS_Shape^ aNewEdge, OCNaroWrappers::OCTopoDS_Shape^ aGenE, OCNaroWrappers::OCTopoDS_Shape^ aGenV, OCNaroWrappers::OCSweep_NumShape^ aDirE, OCTopAbs_Orientation orien) ;

//! Returns the Orientation of the  shell in the solid <br>
//!          generated by the face aGenS  with  the edge aDirS. <br>
//!          It is  REVERSED  if the surface is  swept  in  the <br>
//!          direction of the normal. <br>
 /*instead*/  OCTopAbs_Orientation DirectSolid(OCNaroWrappers::OCTopoDS_Shape^ aGenS, OCNaroWrappers::OCSweep_NumShape^ aDirS) ;

//! Returns   true   if  aNewSubShape    (addressed by <br>
//!          aSubGenS  and aDirS)  must  be added  in aNewShape <br>
//!          (addressed by aGenS and aDirS). <br>
 /*instead*/  System::Boolean GGDShapeIsToAdd(OCNaroWrappers::OCTopoDS_Shape^ aNewShape, OCNaroWrappers::OCTopoDS_Shape^ aNewSubShape, OCNaroWrappers::OCTopoDS_Shape^ aGenS, OCNaroWrappers::OCTopoDS_Shape^ aSubGenS, OCNaroWrappers::OCSweep_NumShape^ aDirS) ;

//! Returns   true   if  aNewSubShape    (addressed by <br>
//!          aGenS  and aSubDirS)  must  be added  in aNewShape <br>
//!          (addressed by aGenS and aDirS). <br>
 /*instead*/  System::Boolean GDDShapeIsToAdd(OCNaroWrappers::OCTopoDS_Shape^ aNewShape, OCNaroWrappers::OCTopoDS_Shape^ aNewSubShape, OCNaroWrappers::OCTopoDS_Shape^ aGenS, OCNaroWrappers::OCSweep_NumShape^ aDirS, OCNaroWrappers::OCSweep_NumShape^ aSubDirS) ;

//! In  some  particular  cases  the   topology  of  a <br>
//!          generated  face must be  composed  of  independant <br>
//!          closed wires,  in this case  this function returns <br>
//!          true. <br>
//!          Here it always returns false. <br>
 /*instead*/  System::Boolean SeparatedWires(OCNaroWrappers::OCTopoDS_Shape^ aNewShape, OCNaroWrappers::OCTopoDS_Shape^ aNewSubShape, OCNaroWrappers::OCTopoDS_Shape^ aGenS, OCNaroWrappers::OCTopoDS_Shape^ aSubGenS, OCNaroWrappers::OCSweep_NumShape^ aDirS) ;

//! Returns true   if aDirS   and aGenS  addresses   a <br>
//!          resulting Shape. In some  specific cases the shape <br>
//!          can  be    geometrically   inexsistant,  then this <br>
//!          function returns false. <br>
 /*instead*/  System::Boolean HasShape(OCNaroWrappers::OCTopoDS_Shape^ aGenS, OCNaroWrappers::OCSweep_NumShape^ aDirS) ;

//! Returns  always     false   because    here    the <br>
//!          transformation is a translation. <br>
 /*instead*/  System::Boolean IsInvariant(OCNaroWrappers::OCTopoDS_Shape^ aGenS) ;

//! Returns the Vector of the Prism,  if it is an infinite <br>
//!          prism the Vec is unitar. <br>
 /*instead*/  OCgp_Vec^ Vec() ;

~OCBRepSweep_Translation()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
