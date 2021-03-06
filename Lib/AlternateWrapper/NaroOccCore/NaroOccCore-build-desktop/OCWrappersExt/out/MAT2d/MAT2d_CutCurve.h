// File generated by CPPExt (MPV)
//
#ifndef _MAT2d_CutCurve_OCWrappers_HeaderFile
#define _MAT2d_CutCurve_OCWrappers_HeaderFile

// include native header
#include <MAT2d_CutCurve.hxx>
#include "../Converter.h"


#include "../TColGeom2d/TColGeom2d_SequenceOfCurve.h"
#include "../MAT/MAT_Side.h"


namespace OCNaroWrappers
{

ref class OCGeom2d_Curve;
ref class OCGeom2d_TrimmedCurve;


//! Cuts a curve at the extremas of curvature <br>
//!          and at the inflections. Constructs a trimmed <br>
//!          Curve for each interval. <br>
public ref class OCMAT2d_CutCurve  {

protected:
  MAT2d_CutCurve* nativeHandle;
  OCMAT2d_CutCurve(OCDummy^) {};

public:
  property MAT2d_CutCurve* Handle
  {
    MAT2d_CutCurve* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCMAT2d_CutCurve(MAT2d_CutCurve* nativeHandle);

// Methods PUBLIC


OCMAT2d_CutCurve();


OCMAT2d_CutCurve(OCNaroWrappers::OCGeom2d_Curve^ C);

//! Cuts a curve at the extremas of curvature <br>
//!          and at the inflections. <br>
 /*instead*/  void Perform(OCNaroWrappers::OCGeom2d_Curve^ C) ;

//! Cuts a curve at the inflections, and at the extremas <br>
//!          of curvature where the concavity is on <aSide>. <br>
 /*instead*/  void Perform(OCNaroWrappers::OCGeom2d_Curve^ C, OCMAT_Side aSide) ;

//! Cuts a curve at the inflections. <br>
 /*instead*/  void PerformInf(OCNaroWrappers::OCGeom2d_Curve^ C) ;

//! Returns True if the curve is not cut. <br>
 /*instead*/  System::Boolean UnModified() ;

//! Returns the number of curves. <br>
//!          it's allways greatest than 2. <br>
//! <br>//! raises if the Curve is UnModified; <br>
 /*instead*/  Standard_Integer NbCurves() ;

//! Returns the Indexth curve. <br>//! raises if Index not in the range [1,NbCurves()] <br>
 /*instead*/  OCGeom2d_TrimmedCurve^ Value(Standard_Integer Index) ;

~OCMAT2d_CutCurve()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
