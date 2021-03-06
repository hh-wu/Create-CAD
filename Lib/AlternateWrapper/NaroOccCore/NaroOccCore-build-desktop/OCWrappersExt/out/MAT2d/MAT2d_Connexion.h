// File generated by CPPExt (Transient)
//
#ifndef _MAT2d_Connexion_OCWrappers_HeaderFile
#define _MAT2d_Connexion_OCWrappers_HeaderFile

// include the wrapped class
#include <MAT2d_Connexion.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../gp/gp_Pnt2d.h"


namespace OCNaroWrappers
{

ref class OCgp_Pnt2d;


//! A Connexion links two lines of items  in a set <br>
//!          of  lines. It s contains two  points and their paramatric <br>
//!          definitions on the lines. <br>
//!          The items can be points or curves. <br>
public ref class OCMAT2d_Connexion : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCMAT2d_Connexion(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCMAT2d_Connexion(Handle(MAT2d_Connexion)* nativeHandle);

// Methods PUBLIC


OCMAT2d_Connexion();


OCMAT2d_Connexion(Standard_Integer LineA, Standard_Integer LineB, Standard_Integer ItemA, Standard_Integer ItemB, Standard_Real Distance, Standard_Real ParameterOnA, Standard_Real ParameterOnB, OCNaroWrappers::OCgp_Pnt2d^ PointA, OCNaroWrappers::OCgp_Pnt2d^ PointB);

//!  Returns the Index on the first line. <br>
 /*instead*/  Standard_Integer IndexFirstLine() ;

//!  Returns the Index on the Second line. <br>
 /*instead*/  Standard_Integer IndexSecondLine() ;

//! Returns the Index of the item on the first line. <br>
 /*instead*/  Standard_Integer IndexItemOnFirst() ;

//! Returns the Index of the item on the second line. <br>
 /*instead*/  Standard_Integer IndexItemOnSecond() ;

//! Returns the parameter of the point on the firstline. <br>
 /*instead*/  Standard_Real ParameterOnFirst() ;

//! Returns the parameter of the point on the secondline. <br>
 /*instead*/  Standard_Real ParameterOnSecond() ;

//! Returns the point on the firstline. <br>
 /*instead*/  OCgp_Pnt2d^ PointOnFirst() ;

//! Returns the point on the secondline. <br>
 /*instead*/  OCgp_Pnt2d^ PointOnSecond() ;

//! Returns the distance between the two points. <br>
 /*instead*/  Standard_Real Distance() ;


 /*instead*/  void IndexFirstLine(Standard_Integer anIndex) ;


 /*instead*/  void IndexSecondLine(Standard_Integer anIndex) ;


 /*instead*/  void IndexItemOnFirst(Standard_Integer anIndex) ;


 /*instead*/  void IndexItemOnSecond(Standard_Integer anIndex) ;


 /*instead*/  void ParameterOnFirst(Standard_Real aParameter) ;


 /*instead*/  void ParameterOnSecond(Standard_Real aParameter) ;


 /*instead*/  void PointOnFirst(OCNaroWrappers::OCgp_Pnt2d^ aPoint) ;


 /*instead*/  void PointOnSecond(OCNaroWrappers::OCgp_Pnt2d^ aPoint) ;


 /*instead*/  void Distance(Standard_Real aDistance) ;

//! Returns the reverse connexion of <me>. <br>
//!          the firstpoint  is the secondpoint. <br>
//!          the secondpoint is the firstpoint. <br>
 /*instead*/  OCMAT2d_Connexion^ Reverse() ;

//! Returns <True> if my firstPoint is on the same line <br>
//!          than the firstpoint of <aConnexion> and my firstpoint <br>
//!          is after the firstpoint of <aConnexion> on the line. <br>
//!          <aSense> = 1 if <aConnexion> is on the Left of its <br>
//!          firstline, else <aSense> = -1. <br>
 /*instead*/  System::Boolean IsAfter(OCNaroWrappers::OCMAT2d_Connexion^ aConnexion, Standard_Real aSense) ;

//! Print <me>. <br>
 /*instead*/  void Dump(Standard_Integer Deep, Standard_Integer Offset) ;

~OCMAT2d_Connexion()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
