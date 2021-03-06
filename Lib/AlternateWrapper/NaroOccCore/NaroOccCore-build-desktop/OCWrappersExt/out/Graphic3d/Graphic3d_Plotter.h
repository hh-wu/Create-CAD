// File generated by CPPExt (Transient)
//
#ifndef _Graphic3d_Plotter_OCWrappers_HeaderFile
#define _Graphic3d_Plotter_OCWrappers_HeaderFile

// include the wrapped class
#include <Graphic3d_Plotter.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCGraphic3d_DataStructureManager;


//! This class allows the definition of a plotter <br>
public ref class OCGraphic3d_Plotter : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCGraphic3d_Plotter(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCGraphic3d_Plotter(Handle(Graphic3d_Plotter)* nativeHandle);

// Methods PUBLIC

//! Initialise the constructor of the plotter. <br>
//!  Warning: Raises InitialisationError if the initialisation <br>
//!	    of the plotter failed. <br>
OCGraphic3d_Plotter();


//!  Warning: Returns Standard_True if plotting is enabled in the view. <br>
//!	    Raises PlotterDefinitionError from Graphic3d <br>
//!	    if plotting has already started. <br>
virtual /*instead*/  System::Boolean BeginPlot(OCNaroWrappers::OCGraphic3d_DataStructureManager^ aProjector) ;

//! Stops the plotting. <br>
//!  Warning: Raises PlotterDefinitionError from Graphic3d <br>
//!	    if plotting has not started yet. <br>
virtual /*instead*/  void EndPlot() ;

~OCGraphic3d_Plotter()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
