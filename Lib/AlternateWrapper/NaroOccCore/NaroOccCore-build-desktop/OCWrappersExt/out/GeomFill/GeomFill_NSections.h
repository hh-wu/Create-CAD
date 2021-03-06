// File generated by CPPExt (Transient)
//
#ifndef _GeomFill_NSections_OCWrappers_HeaderFile
#define _GeomFill_NSections_OCWrappers_HeaderFile

// include the wrapped class
#include <GeomFill_NSections.hxx>
#include "../Converter.h"

#include "GeomFill_SectionLaw.h"

#include "../TColGeom/TColGeom_SequenceOfCurve.h"
#include "GeomFill_SequenceOfTrsf.h"
#include "../TColStd/TColStd_SequenceOfReal.h"
#include "../GeomAbs/GeomAbs_Shape.h"


namespace OCNaroWrappers
{

ref class OCGeom_BSplineSurface;
ref class OCTColGeom_SequenceOfCurve;
ref class OCTColStd_SequenceOfReal;
ref class OCGeomFill_SequenceOfTrsf;
ref class OCTColgp_Array1OfPnt;
ref class OCTColStd_Array1OfReal;
ref class OCTColgp_Array1OfVec;
ref class OCTColStd_Array1OfInteger;
ref class OCgp_Pnt;
ref class OCGeom_Curve;


//! Define a Section Law by N Sections <br>
public ref class OCGeomFill_NSections : OCGeomFill_SectionLaw {

protected:
  // dummy constructor;
  OCGeomFill_NSections(OCDummy^) : OCGeomFill_SectionLaw((OCDummy^)nullptr) {};

public:

// constructor from native
OCGeomFill_NSections(Handle(GeomFill_NSections)* nativeHandle);

// Methods PUBLIC

//! Make a SectionLaw with N Curves. <br>
OCGeomFill_NSections(OCNaroWrappers::OCTColGeom_SequenceOfCurve^ NC);

//! Make a SectionLaw with N Curves and N associated parameters. <br>
OCGeomFill_NSections(OCNaroWrappers::OCTColGeom_SequenceOfCurve^ NC, OCNaroWrappers::OCTColStd_SequenceOfReal^ NP);

//! Make a SectionLaw with N Curves and N associated parameters. <br>
//!          UF and UL are the parametric bounds of the NSections <br>
OCGeomFill_NSections(OCNaroWrappers::OCTColGeom_SequenceOfCurve^ NC, OCNaroWrappers::OCTColStd_SequenceOfReal^ NP, Standard_Real UF, Standard_Real UL);

//! Make a SectionLaw with N Curves and N associated parameters. <br>
//!          UF and UL are the parametric bounds of the NSections <br>
//!          VF and VL are the parametric bounds of the path <br>
OCGeomFill_NSections(OCNaroWrappers::OCTColGeom_SequenceOfCurve^ NC, OCNaroWrappers::OCTColStd_SequenceOfReal^ NP, Standard_Real UF, Standard_Real UL, Standard_Real VF, Standard_Real VL);

//! Make a SectionLaw with N Curves and N associated parameters. <br>
//!          UF and UL are the parametric bounds of the NSections <br>
//!          VF and VL are the parametric bounds of the path <br>
//!          UF and UL are the parametric bounds of the NSections <br>
//!          Surf is a reference surface used by BRepFill_NSections <br>
OCGeomFill_NSections(OCNaroWrappers::OCTColGeom_SequenceOfCurve^ NC, OCNaroWrappers::OCGeomFill_SequenceOfTrsf^ Trsfs, OCNaroWrappers::OCTColStd_SequenceOfReal^ NP, Standard_Real UF, Standard_Real UL, Standard_Real VF, Standard_Real VL, OCNaroWrappers::OCGeom_BSplineSurface^ Surf);

//! compute the section for v = param <br>
virtual /*instead*/  System::Boolean D0(Standard_Real Param, OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles, OCNaroWrappers::OCTColStd_Array1OfReal^ Weigths) ;

//! compute the first  derivative in v direction  of the <br>
//!           section for v =  param <br>
//!  Warning : It used only for C1 or C2 aproximation <br>
virtual /*instead*/  System::Boolean D1(Standard_Real Param, OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles, OCNaroWrappers::OCTColgp_Array1OfVec^ DPoles, OCNaroWrappers::OCTColStd_Array1OfReal^ Weigths, OCNaroWrappers::OCTColStd_Array1OfReal^ DWeigths) override;

//! compute the second derivative  in v direction of the <br>
//!          section  for v = param <br>
//!  Warning : It used only for C2 aproximation <br>
virtual /*instead*/  System::Boolean D2(Standard_Real Param, OCNaroWrappers::OCTColgp_Array1OfPnt^ Poles, OCNaroWrappers::OCTColgp_Array1OfVec^ DPoles, OCNaroWrappers::OCTColgp_Array1OfVec^ D2Poles, OCNaroWrappers::OCTColStd_Array1OfReal^ Weigths, OCNaroWrappers::OCTColStd_Array1OfReal^ DWeigths, OCNaroWrappers::OCTColStd_Array1OfReal^ D2Weigths) override;

//! Sets the reference surface <br>
//! <br>
 /*instead*/  void SetSurface(OCNaroWrappers::OCGeom_BSplineSurface^ RefSurf) ;

//! Computes the surface <br>
//! <br>
 /*instead*/  void ComputeSurface() ;

//! give if possible an bspline Surface, like iso-v are the <br>
//!          section.  If it is  not possible  this methode have  to <br>
//!          get an Null Surface.  Is it the default implementation. <br>
virtual /*instead*/  OCGeom_BSplineSurface^ BSplineSurface() override;

//! get the format of an  section <br>
virtual /*instead*/  void SectionShape(Standard_Integer& NbPoles, Standard_Integer& NbKnots, Standard_Integer& Degree) ;

//! get the Knots of the section <br>
virtual /*instead*/  void Knots(OCNaroWrappers::OCTColStd_Array1OfReal^ TKnots) ;

//! get the Multplicities of the section <br>
virtual /*instead*/  void Mults(OCNaroWrappers::OCTColStd_Array1OfInteger^ TMults) ;

//! Returns if the sections are rationnal or not <br>
virtual /*instead*/  System::Boolean IsRational() ;

//! Returns if the sections are periodic or not <br>
virtual /*instead*/  System::Boolean IsUPeriodic() ;

//! Returns if the law  isperiodic or not <br>
virtual /*instead*/  System::Boolean IsVPeriodic() ;

//! Returns  the number  of  intervals for  continuity <br>
//!          <S>. <br>
//!          May be one if Continuity(me) >= <S> <br>
virtual /*instead*/  Standard_Integer NbIntervals(OCGeomAbs_Shape S) ;

//! Stores in <T> the  parameters bounding the intervals <br>
//!          of continuity <S>. <br>
//! <br>
//!          The array must provide  enough room to  accomodate <br>
//!          for the parameters. i.e. T.Length() > NbIntervals() <br>
virtual /*instead*/  void Intervals(OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S) ;

//! Sets the bounds of the parametric interval on <br>
//!          the function <br>
//!          This determines the derivatives in these values if the <br>
//!          function is not Cn. <br>
virtual /*instead*/  void SetInterval(Standard_Real First, Standard_Real Last) ;

//! Gets the bounds of the parametric interval on <br>
//!          the function <br>
virtual /*instead*/  void GetInterval(Standard_Real& First, Standard_Real& Last) ;

//! Gets the bounds of the function parametric domain. <br>
//!  Warning: This domain it is  not modified by the <br>
//!          SetValue method <br>
virtual /*instead*/  void GetDomain(Standard_Real& First, Standard_Real& Last) ;

//! Returns the tolerances associated at each poles to <br>
//!          reach  in approximation, to satisfy: BoundTol error <br>
//!          at the   Boundary  AngleTol tangent error  at  the <br>
//!          Boundary  (in radian)  SurfTol   error inside the <br>
//!          surface. <br>
virtual /*instead*/  void GetTolerance(Standard_Real BoundTol, Standard_Real SurfTol, Standard_Real AngleTol, OCNaroWrappers::OCTColStd_Array1OfReal^ Tol3d) ;

//!  Get the barycentre of Surface. <br>
//!          An   very  poor estimation is sufficent. <br>
//!          This information is usefull to perform well <br>
//!          conditioned rational approximation. <br>
//!  Warning: Used only if <me> IsRational <br>
virtual /*instead*/  OCgp_Pnt^ BarycentreOfSurf() override;

//! Returns the   length of the greater section. This <br>
//!          information is usefull to G1's control. <br>
//!  Warning: With an little value, approximation can be slower. <br>
virtual /*instead*/  Standard_Real MaximalSection() ;

//! Compute the minimal value of weight for each poles <br>
//!          in all  sections. <br>
//!          This information is  usefull to control error <br>
//!          in rational approximation. <br>
//!  Warning: Used only if <me> IsRational <br>
virtual /*instead*/  void GetMinimalWeight(OCNaroWrappers::OCTColStd_Array1OfReal^ Weigths) override;

//! return True If the Law isConstant <br>
virtual /*instead*/  System::Boolean IsConstant(Standard_Real& Error) override;

//! Return the constant Section if <me>  IsConstant. <br>
//! <br>
virtual /*instead*/  OCGeom_Curve^ ConstantSection() override;

//!  Returns True if all section  are circle, with same <br>
//!          plane,same center and  linear  radius  evolution <br>
//!          Return False by Default. <br>
virtual /*instead*/  System::Boolean IsConicalLaw(Standard_Real& Error) override;

//!  Return the circle section  at parameter <Param>, if <br>
//!          <me> a  IsConicalLaw <br>
virtual /*instead*/  OCGeom_Curve^ CirclSection(Standard_Real Param) override;

~OCGeomFill_NSections()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
