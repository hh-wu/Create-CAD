// File generated by CPPExt (MPV)
//
#ifndef _gp_Pnt_OCWrappers_HeaderFile
#define _gp_Pnt_OCWrappers_HeaderFile

// include native header
#include <gp_Pnt.hxx>
#include "../Converter.h"


#include "gp_XYZ.h"
#include "../Standard/Standard_Storable.h"


namespace OCNaroWrappers
{

ref class OCgp_XYZ;
ref class OCgp_Ax1;
ref class OCgp_Ax2;
ref class OCgp_Trsf;
ref class OCgp_Vec;


//!  Defines a 3D cartesian point. <br>
public ref class OCgp_Pnt  {

protected:
  gp_Pnt* nativeHandle;
  OCgp_Pnt(OCDummy^) {};

public:
  property gp_Pnt* Handle
  {
    gp_Pnt* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCgp_Pnt(gp_Pnt* nativeHandle);

// Methods PUBLIC

//! Creates a point with zero coordinates. <br>
OCgp_Pnt();

//! Creates a point from a XYZ object. <br>
OCgp_Pnt(OCNaroWrappers::OCgp_XYZ^ Coord);


//!  Creates a  point with its 3 cartesian's coordinates : Xp, Yp, Zp. <br>
OCgp_Pnt(Standard_Real Xp, Standard_Real Yp, Standard_Real Zp);


//!  Changes the coordinate of range Index : <br>
//!  Index = 1 => X is modified <br>
//!  Index = 2 => Y is modified <br>
//!  Index = 3 => Z is modified <br>//! Raised if Index != {1, 2, 3}. <br>
 /*instead*/  void SetCoord(Standard_Integer Index, Standard_Real Xi) ;

//! For this point, assigns  the values Xp, Yp and Zp to its three coordinates. <br>
 /*instead*/  void SetCoord(Standard_Real Xp, Standard_Real Yp, Standard_Real Zp) ;

//! Assigns the given value to the X coordinate of this point. <br>
 /*instead*/  void SetX(Standard_Real X) ;

//! Assigns the given value to the Y coordinate of this point. <br>
 /*instead*/  void SetY(Standard_Real Y) ;

//! Assigns the given value to the Z coordinate of this point. <br>
 /*instead*/  void SetZ(Standard_Real Z) ;

//! Assigns the three coordinates of Coord to this point. <br>
 /*instead*/  void SetXYZ(OCNaroWrappers::OCgp_XYZ^ Coord) ;


//!  Returns the coordinate of corresponding to the value of  Index : <br>
//!  Index = 1 => X is returned <br>
//!  Index = 2 => Y is returned <br>
//!  Index = 3 => Z is returned <br>
//! Raises OutOfRange if Index != {1, 2, 3}. <br>//! Raised if Index != {1, 2, 3}. <br>
 /*instead*/  Standard_Real Coord(Standard_Integer Index) ;

//! For this point gives its three coordinates Xp, Yp and Zp. <br>
 /*instead*/  void Coord(Standard_Real& Xp, Standard_Real& Yp, Standard_Real& Zp) ;

//! For this point, returns its X coordinate. <br>
 /*instead*/  Standard_Real X() ;

//! For this point, returns its Y coordinate. <br>
 /*instead*/  Standard_Real Y() ;

//! For this point, returns its Z coordinate. <br>
 /*instead*/  Standard_Real Z() ;

//! For this point, returns its three coordinates as a XYZ object. <br>
 /*instead*/  OCgp_XYZ^ XYZ() ;

//! For this point, returns its three coordinates as a XYZ object. <br>
 /*instead*/  OCgp_XYZ^ Coord() ;


//! Returns the coordinates of this point. <br>
//! Note: This syntax allows direct modification of the returned value. <br>
 /*instead*/  OCgp_XYZ^ ChangeCoord() ;

//! Assigns the result of the following expression to this point <br>
//! (Alpha*this + Beta*P) / (Alpha + Beta) <br>
 /*instead*/  void BaryCenter(Standard_Real Alpha, OCNaroWrappers::OCgp_Pnt^ P, Standard_Real Beta) ;

//! Comparison <br>
//!  Returns True if the distance between the two points is <br>
//!  lower or equal to LinearTolerance. <br>
 /*instead*/  System::Boolean IsEqual(OCNaroWrappers::OCgp_Pnt^ Other, Standard_Real LinearTolerance) ;

//! Computes the distance between two points. <br>
 /*instead*/  Standard_Real Distance(OCNaroWrappers::OCgp_Pnt^ Other) ;

//! Computes the square distance between two points. <br>
 /*instead*/  Standard_Real SquareDistance(OCNaroWrappers::OCgp_Pnt^ Other) ;


//!  Performs the symmetrical transformation of a point <br>
//!  with respect to the point P which is the center of <br>
//!  the  symmetry. <br>
 /*instead*/  void Mirror(OCNaroWrappers::OCgp_Pnt^ P) ;


//!  Performs the symmetrical transformation of a point <br>
//!  with respect to an axis placement which is the axis <br>
//!  of the symmetry. <br>
 /*instead*/  OCgp_Pnt^ Mirrored(OCNaroWrappers::OCgp_Pnt^ P) ;


 /*instead*/  void Mirror(OCNaroWrappers::OCgp_Ax1^ A1) ;


//!  Performs the symmetrical transformation of a point <br>
//!  with respect to a plane. The axis placement A2 locates <br>
//!  the plane of the symmetry : (Location, XDirection, YDirection). <br>
 /*instead*/  OCgp_Pnt^ Mirrored(OCNaroWrappers::OCgp_Ax1^ A1) ;


 /*instead*/  void Mirror(OCNaroWrappers::OCgp_Ax2^ A2) ;


//!  Rotates a point. A1 is the axis of the rotation. <br>
//!  Ang is the angular value of the rotation in radians. <br>
 /*instead*/  OCgp_Pnt^ Mirrored(OCNaroWrappers::OCgp_Ax2^ A2) ;


 /*instead*/  void Rotate(OCNaroWrappers::OCgp_Ax1^ A1, Standard_Real Ang) ;

//! Scales a point. S is the scaling value. <br>
 /*instead*/  OCgp_Pnt^ Rotated(OCNaroWrappers::OCgp_Ax1^ A1, Standard_Real Ang) ;


 /*instead*/  void Scale(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real S) ;

//! Transforms a point with the transformation T. <br>
 /*instead*/  OCgp_Pnt^ Scaled(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real S) ;


 /*instead*/  void Transform(OCNaroWrappers::OCgp_Trsf^ T) ;


//!  Translates a point in the direction of the vector V. <br>
//!  The magnitude of the translation is the vector's magnitude. <br>
 /*instead*/  OCgp_Pnt^ Transformed(OCNaroWrappers::OCgp_Trsf^ T) ;


 /*instead*/  void Translate(OCNaroWrappers::OCgp_Vec^ V) ;


//!  Translates a point from the point P1 to the point P2. <br>
 /*instead*/  OCgp_Pnt^ Translated(OCNaroWrappers::OCgp_Vec^ V) ;


 /*instead*/  void Translate(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2) ;


 /*instead*/  OCgp_Pnt^ Translated(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2) ;

~OCgp_Pnt()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif