// File generated by CPPExt (MPV)
//
#ifndef _BRepAdaptor_Surface_OCWrappers_HeaderFile
#define _BRepAdaptor_Surface_OCWrappers_HeaderFile

// include native header
#include <BRepAdaptor_Surface.hxx>
#include "../Converter.h"

#include "../Adaptor3d/Adaptor3d_Surface.h"

#include "../GeomAdaptor/GeomAdaptor_Surface.h"
#include "../gp/gp_Trsf.h"
#include "../TopoDS/TopoDS_Face.h"
#include "../Adaptor3d/Adaptor3d_Surface.h"
#include "../GeomAbs/GeomAbs_Shape.h"
#include "../GeomAbs/GeomAbs_SurfaceType.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Face;
ref class OCGeomAdaptor_Surface;
ref class OCgp_Trsf;
ref class OCTColStd_Array1OfReal;
ref class OCAdaptor3d_HSurface;
ref class OCgp_Pnt;
ref class OCgp_Vec;
ref class OCgp_Pln;
ref class OCgp_Cylinder;
ref class OCgp_Cone;
ref class OCgp_Sphere;
ref class OCgp_Torus;
ref class OCGeom_BezierSurface;
ref class OCGeom_BSplineSurface;
ref class OCgp_Ax1;
ref class OCgp_Dir;
ref class OCAdaptor3d_HCurve;


//! The Surface from BRepAdaptor allows to  use a Face <br>
//!          of the BRep topology look like a 3D surface. <br>
//! <br>
//!          It  has  the methods  of  the class   Surface from <br>
//!          Adaptor3d. <br>
//! <br>
//!          It is created or initialized with a Face. It takes <br>
//!          into account the local coordinates system. <br>
//! <br>
//!          The  u,v parameter range is   the minmax value for <br>
//!          the  restriction,  unless  the flag restriction is <br>
//!          set to false. <br>
public ref class OCBRepAdaptor_Surface  : public OCAdaptor3d_Surface {

protected:
  // dummy constructor;
  OCBRepAdaptor_Surface(OCDummy^) : OCAdaptor3d_Surface((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepAdaptor_Surface(BRepAdaptor_Surface* nativeHandle);

// Methods PUBLIC

//! Creates an undefined surface with no face loaded. <br>
OCBRepAdaptor_Surface();

//! Creates a surface to  access the geometry  of <F>. <br>
//!          If  <Restriction> is  true  the parameter range is <br>
//!          the  parameter  range  in   the  UV space  of  the <br>
//!          restriction. <br>
OCBRepAdaptor_Surface(OCNaroWrappers::OCTopoDS_Face^ F, System::Boolean R);

//! Sets the surface to the geometry of <F>. <br>
 /*instead*/  void Initialize(OCNaroWrappers::OCTopoDS_Face^ F, System::Boolean Restriction) ;

//! Returns the surface. <br>
//! <br>
 /*instead*/  OCGeomAdaptor_Surface^ Surface() ;

//! Returns the surface. <br>
//! <br>
 /*instead*/  OCGeomAdaptor_Surface^ ChangeSurface() ;

//! Returns the surface coordinate system. <br>
//! <br>
 /*instead*/  OCgp_Trsf^ Trsf() ;

//! Returns the face. <br>
//! <br>
 /*instead*/  OCTopoDS_Face^ Face() ;

//! Returns the face tolerance. <br>
//! <br>
 /*instead*/  Standard_Real Tolerance() ;


virtual /*instead*/  Standard_Real FirstUParameter() override;


virtual /*instead*/  Standard_Real LastUParameter() override;


virtual /*instead*/  Standard_Real FirstVParameter() override;


virtual /*instead*/  Standard_Real LastVParameter() override;


virtual /*instead*/  OCGeomAbs_Shape UContinuity() override;


virtual /*instead*/  OCGeomAbs_Shape VContinuity() override;

//! If necessary, breaks the surface in U intervals of <br>
//!          continuity    <S>.  And   returns  the  number  of <br>
//!          intervals. <br>
virtual /*instead*/  Standard_Integer NbUIntervals(OCGeomAbs_Shape S) override;

//! If necessary, breaks the surface in V intervals of <br>
//!          continuity    <S>.  And   returns  the  number  of <br>
//!          intervals. <br>
virtual /*instead*/  Standard_Integer NbVIntervals(OCGeomAbs_Shape S) override;

//! Returns the  intervals with the requested continuity <br>
//!          in the U direction. <br>
virtual /*instead*/  void UIntervals(OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S) override;

//! Returns the  intervals with the requested continuity <br>
//!          in the V direction. <br>
virtual /*instead*/  void VIntervals(OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S) override;

//! Returns    a  surface trimmed in the U direction <br>
//!           equivalent   of  <me>  between <br>
//!          parameters <First>  and <Last>. <Tol>  is used  to <br>
//!          test for 3d points confusion. <br>//! If <First> >= <Last> <br>
virtual /*instead*/  OCAdaptor3d_HSurface^ UTrim(Standard_Real First, Standard_Real Last, Standard_Real Tol) override;

//! Returns    a  surface trimmed in the V direction  between <br>
//!          parameters <First>  and <Last>. <Tol>  is used  to <br>
//!          test for 3d points confusion. <br>//! If <First> >= <Last> <br>
virtual /*instead*/  OCAdaptor3d_HSurface^ VTrim(Standard_Real First, Standard_Real Last, Standard_Real Tol) override;


virtual /*instead*/  System::Boolean IsUClosed() override;


virtual /*instead*/  System::Boolean IsVClosed() override;


virtual /*instead*/  System::Boolean IsUPeriodic() override;


virtual /*instead*/  Standard_Real UPeriod() override;


virtual /*instead*/  System::Boolean IsVPeriodic() override;


virtual /*instead*/  Standard_Real VPeriod() override;

//! Computes the point of parameters U,V on the surface. <br>
virtual /*instead*/  OCgp_Pnt^ Value(Standard_Real U, Standard_Real V) override;

//! Computes the point of parameters U,V on the surface. <br>
virtual /*instead*/  void D0(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P) override;

//! Computes the point  and the first derivatives on <br>
//!  the surface. <br>//! Raised   if  the continuity  of   the  current <br>
//!  intervals is not C1. <br>
virtual /*instead*/  void D1(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V) override;

//!  Computes   the point,  the  first  and  second <br>
//!  derivatives on the surface. <br>//! Raised  if   the   continuity   of the current <br>
//!  intervals is not C2. <br>
virtual /*instead*/  void D2(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V, OCNaroWrappers::OCgp_Vec^ D2U, OCNaroWrappers::OCgp_Vec^ D2V, OCNaroWrappers::OCgp_Vec^ D2UV) override;

//! Computes the point,  the first, second and third <br>
//!  derivatives on the surface. <br>//! Raised  if   the   continuity   of the current <br>
//!  intervals is not C3. <br>
virtual /*instead*/  void D3(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V, OCNaroWrappers::OCgp_Vec^ D2U, OCNaroWrappers::OCgp_Vec^ D2V, OCNaroWrappers::OCgp_Vec^ D2UV, OCNaroWrappers::OCgp_Vec^ D3U, OCNaroWrappers::OCgp_Vec^ D3V, OCNaroWrappers::OCgp_Vec^ D3UUV, OCNaroWrappers::OCgp_Vec^ D3UVV) override;

//!  Computes the derivative of order Nu in the direction <br>
//!  U and Nv in the direction V at the point P(U, V). <br>//! Raised if the current U  interval is not not CNu <br>
//!  and the current V interval is not CNv. <br>//! Raised if Nu + Nv < 1 or Nu < 0 or Nv < 0. <br>
virtual /*instead*/  OCgp_Vec^ DN(Standard_Real U, Standard_Real V, Standard_Integer Nu, Standard_Integer Nv) override;

//!  Returns the parametric U  resolution corresponding <br>
//!         to the real space resolution <R3d>. <br>
//! <br>
virtual /*instead*/  Standard_Real UResolution(Standard_Real R3d) override;

//!  Returns the parametric V  resolution corresponding <br>
//!         to the real space resolution <R3d>. <br>
//! <br>
virtual /*instead*/  Standard_Real VResolution(Standard_Real R3d) override;

//! Returns the type of the surface : Plane, Cylinder, <br>
//!          Cone,      Sphere,        Torus,    BezierSurface, <br>
//!          BSplineSurface,               SurfaceOfRevolution, <br>
//!          SurfaceOfExtrusion, OtherSurface <br>
virtual /*instead*/  OCGeomAbs_SurfaceType GetType() override;


virtual /*instead*/  OCgp_Pln^ Plane() override;


virtual /*instead*/  OCgp_Cylinder^ Cylinder() override;


virtual /*instead*/  OCgp_Cone^ Cone() override;


virtual /*instead*/  OCgp_Sphere^ Sphere() override;


virtual /*instead*/  OCgp_Torus^ Torus() override;


virtual /*instead*/  Standard_Integer UDegree() override;


virtual /*instead*/  Standard_Integer NbUPoles() override;


virtual /*instead*/  Standard_Integer VDegree() override;


virtual /*instead*/  Standard_Integer NbVPoles() override;


virtual /*instead*/  Standard_Integer NbUKnots() override;


virtual /*instead*/  Standard_Integer NbVKnots() override;


virtual /*instead*/  System::Boolean IsURational() override;


virtual /*instead*/  System::Boolean IsVRational() override;


virtual /*instead*/  OCGeom_BezierSurface^ Bezier() override;


//!  Warning : this will make a copy of the <br>
//!           BSpline Surface since it applies <br>
//!           to it the myTsrf transformation <br>
//!           Be Carefull when using this method <br>
virtual /*instead*/  OCGeom_BSplineSurface^ BSpline() override;


virtual /*instead*/  OCgp_Ax1^ AxeOfRevolution() override;


virtual /*instead*/  OCgp_Dir^ Direction() override;

//! only for SurfaceOfExtrusion and SurfaceOfRevolution <br>
//!  Warning: this will make a copy of the underlying curve <br>
//!          since it applies to it the transformation <br>
//!          myTrsf. Be carefull when using this method. <br>
virtual /*instead*/  OCAdaptor3d_HCurve^ BasisCurve() override;


virtual /*instead*/  OCAdaptor3d_HSurface^ BasisSurface() override;


virtual /*instead*/  Standard_Real OffsetValue() override;

~OCBRepAdaptor_Surface()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
