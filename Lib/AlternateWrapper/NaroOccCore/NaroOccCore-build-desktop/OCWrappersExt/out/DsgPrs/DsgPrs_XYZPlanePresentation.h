// File generated by CPPExt (MPV)
//
#ifndef _DsgPrs_XYZPlanePresentation_OCWrappers_HeaderFile
#define _DsgPrs_XYZPlanePresentation_OCWrappers_HeaderFile

// include native header
#include <DsgPrs_XYZPlanePresentation.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCPrs3d_Presentation;
ref class OCPrs3d_Drawer;
ref class OCgp_Pnt;


//! A framework for displaying the planes of an XYZ trihedron. <br>
public ref class OCDsgPrs_XYZPlanePresentation  {

protected:
  DsgPrs_XYZPlanePresentation* nativeHandle;
  OCDsgPrs_XYZPlanePresentation(OCDummy^) {};

public:
  property DsgPrs_XYZPlanePresentation* Handle
  {
    DsgPrs_XYZPlanePresentation* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCDsgPrs_XYZPlanePresentation(DsgPrs_XYZPlanePresentation* nativeHandle);

// Methods PUBLIC

//! Draws each plane of a trihedron displayed in the <br>
//! presentation aPresentation and with attributes <br>
//! defined by the attribute manager aDrawer. Each <br>
//! triangular plane is defined by the points aPt1 aPt2 and aPt3. <br>
static /*instead*/  void Add(OCNaroWrappers::OCPrs3d_Presentation^ aPresentation, OCNaroWrappers::OCPrs3d_Drawer^ aDrawer, OCNaroWrappers::OCgp_Pnt^ aPt1, OCNaroWrappers::OCgp_Pnt^ aPt2, OCNaroWrappers::OCgp_Pnt^ aPt3) ;

~OCDsgPrs_XYZPlanePresentation()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
