// File generated by CPPExt (Transient)
//
#ifndef _PrsMgr_PresentationManager2d_OCWrappers_HeaderFile
#define _PrsMgr_PresentationManager2d_OCWrappers_HeaderFile

// include the wrapped class
#include <PrsMgr_PresentationManager2d.hxx>
#include "../Converter.h"

#include "PrsMgr_PresentationManager.h"

#include "../TColStd/TColStd_ListOfTransient.h"


namespace OCNaroWrappers
{

ref class OCGraphic2d_View;
ref class OCGraphic2d_DisplayList;
ref class OCGraphic2d_TransientManager;
ref class OCPrsMgr_PresentableObject;
ref class OCGraphic2d_GraphicObject;
ref class OCViewer_View;
ref class OCGraphic2d_Buffer;
ref class OCPrsMgr_Presentation2d;
ref class OCPrsMgr_Presentation;


//! A framework to manage 2D displays, graphic entities <br>
//! and their updates. Plotters, Highlights, Minima <br>
//! maxima, immediate display (of transient graphic data???]. <br>
public ref class OCPrsMgr_PresentationManager2d : OCPrsMgr_PresentationManager {

protected:
  // dummy constructor;
  OCPrsMgr_PresentationManager2d(OCDummy^) : OCPrsMgr_PresentationManager((OCDummy^)nullptr) {};

public:

// constructor from native
OCPrsMgr_PresentationManager2d(Handle(PrsMgr_PresentationManager2d)* nativeHandle);

// Methods PUBLIC

//! Creates a framework to manage displays and graphic <br>
//! entities with the 2D view aStructureManager. <br>
OCPrsMgr_PresentationManager2d(OCNaroWrappers::OCGraphic2d_View^ aStructureManager);


virtual /*instead*/  System::Boolean Is3D() ;

//! Highlights the graphic object aPresentableObject in <br>
//! color by the color index anIndex. aPresentableObject <br>
//! has the display mode aMode. <br>
 /*instead*/  void ColorHighlight(OCNaroWrappers::OCPrsMgr_PresentableObject^ aPresentableObject, Standard_Integer anIndex, Standard_Integer aMode) ;

//! Allows the drawing on a plotter of the graphic object <br>
//! aPresentableObject with the display mode aMode. <br>
 /*instead*/  void EnablePlot(OCNaroWrappers::OCPrsMgr_PresentableObject^ aPresentableObject, Standard_Integer aMode) ;

//! Forbids the drawing on a plotter of the graphic object <br>
//! aPresentableObject with the display mode aMode. <br>
 /*instead*/  void DisablePlot(OCNaroWrappers::OCPrsMgr_PresentableObject^ aPresentableObject, Standard_Integer aMode) ;

//! Returns Standard_True if the graphic object <me> <br>
//!	    is plottable, Standard_False if not. <br>
 /*instead*/  System::Boolean IsPlottable(OCNaroWrappers::OCPrsMgr_PresentableObject^ aPresentableObject, Standard_Integer aMode) ;

//! Specifies an Offset applied to the original color <br>
//!	    index of all primitives in the graphic object <me>. <br>
//!  Warning: To reset the real color of the primitives <br>
//!	    you have to call this method with <anOffset> = 0. <br>
 /*instead*/  void SetOffset(OCNaroWrappers::OCPrsMgr_PresentableObject^ aPresentableObject, Standard_Integer anOffset, Standard_Integer aMode) ;

//! Returns the Offset applied to the original color <br>
//!	    index of all primitives in the graphic object <me>. <br>
 /*instead*/  Standard_Integer Offset(OCNaroWrappers::OCPrsMgr_PresentableObject^ aPresentableObject, Standard_Integer aMode) ;

//! Initializes a list of 2D objects for which minima and <br>
//! maxima will be calculated. <br>
 /*instead*/  void InitMinMax() ;

//! Appends the graphic object aPresentableObject with <br>
//! the display mode aMode to the list of objects for <br>
//! which minima and maxima will be calculated. <br>
 /*instead*/  void AddMinMax(OCNaroWrappers::OCPrsMgr_PresentableObject^ aPresentableObject, Standard_Integer aMode) ;

//! Returns the minima and maxima for all the graphic <br>
//! objects listed by the AddMinMax function. <br>
 /*instead*/  void MinMax(Standard_Real& MinX, Standard_Real& MaxX, Standard_Real& MinY, Standard_Real& MaxY) ;

//! Sets the highlight color index anIndex. <br>
 /*instead*/  void SetHighlightColor(Standard_Integer anIndex) ;

//! Returns the structure manager. <br>
 /*instead*/  OCGraphic2d_View^ StructureManager() ;


virtual /*instead*/  void BeginDraw() override;


 /*instead*/  void AddToImmediateList(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGO) ;

//! Allows rapid drawing of the view aView by avoiding <br>
//! an update of the whole background. If DoubleBuffer is true, the background is drawn. <br>
virtual /*instead*/  void EndDraw(OCNaroWrappers::OCViewer_View^ aView, System::Boolean DoubleBuffer) ;

//! Dumps the Graphic Primitives of the PresentatbleObject in the buffer <br>
 /*instead*/  void Dump(OCNaroWrappers::OCGraphic2d_Buffer^ aBuffer, OCNaroWrappers::OCPrsMgr_PresentableObject^ aPresentableObject, Standard_Integer aMode) ;


 /*instead*/  OCPrsMgr_Presentation2d^ CastPresentation(OCNaroWrappers::OCPrsMgr_PresentableObject^ aPresentableObject, Standard_Integer aMode) ;

//! Creates a new presentation in the presentation manager. <br>
virtual /*instead*/  OCPrsMgr_Presentation^ newPresentation(OCNaroWrappers::OCPrsMgr_PresentableObject^ aPresentableObject) ;

~OCPrsMgr_PresentationManager2d()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif