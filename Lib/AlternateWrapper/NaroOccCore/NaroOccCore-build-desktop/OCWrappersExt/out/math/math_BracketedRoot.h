// File generated by CPPExt (MPV)
//
#ifndef _math_BracketedRoot_OCWrappers_HeaderFile
#define _math_BracketedRoot_OCWrappers_HeaderFile

// include native header
#include <math_BracketedRoot.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCmath_Function;


//! This class implements the Brent method to find the root of a function <br>
//! located within two bounds. No knowledge of the derivative is required. <br>
public ref class OCmath_BracketedRoot  {

protected:
  math_BracketedRoot* nativeHandle;
  OCmath_BracketedRoot(OCDummy^) {};

public:
  property math_BracketedRoot* Handle
  {
    math_BracketedRoot* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCmath_BracketedRoot(math_BracketedRoot* nativeHandle);

// Methods PUBLIC


//! The Brent method is used to find the root of the function F between <br>
//! the bounds Bound1 and Bound2 on the function F. <br>
//! If F(Bound1)*F(Bound2) >0 the Brent method fails. <br>
//! The tolerance required for the root is given by Tolerance. <br>
//! The solution is found when : <br>
//!    abs(Xi - Xi-1) <= Tolerance; <br>
//! The maximum number of iterations allowed is given by NbIterations. <br>
OCmath_BracketedRoot(OCNaroWrappers::OCmath_Function^ F, Standard_Real Bound1, Standard_Real Bound2, Standard_Real Tolerance, Standard_Integer NbIterations, Standard_Real ZEPS);

//! Returns true if the computations are successful, otherwise returns false. <br>
 /*instead*/  System::Boolean IsDone() ;

//! returns the value of the root. <br>
//! Exception NotDone is raised if the minimum was not found. <br>
 /*instead*/  Standard_Real Root() ;

//! returns the value of the function at the root. <br>
//! Exception NotDone is raised if the minimum was not found. <br>
 /*instead*/  Standard_Real Value() ;

//! returns the number of iterations really done during the <br>
//! computation of the Root. <br>
//! Exception NotDone is raised if the minimum was not found. <br>
 /*instead*/  Standard_Integer NbIterations() ;

//! Prints on the stream o information on the current state <br>
//!          of the object. <br>
 /*instead*/  void Dump(Standard_OStream& o) ;

~OCmath_BracketedRoot()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
