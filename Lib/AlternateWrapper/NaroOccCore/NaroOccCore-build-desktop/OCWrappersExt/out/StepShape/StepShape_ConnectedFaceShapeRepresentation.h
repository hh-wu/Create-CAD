// File generated by CPPExt (MPV)
//
#ifndef _StepShape_ConnectedFaceShapeRepresentation_OCWrappers_HeaderFile
#define _StepShape_ConnectedFaceShapeRepresentation_OCWrappers_HeaderFile

// include native header
#include <StepShape_ConnectedFaceShapeRepresentation.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{



//! Representation of STEP entity ConnectedFaceShapeRepresentation <br>
public ref class OCStepShape_ConnectedFaceShapeRepresentation  {

protected:
  StepShape_ConnectedFaceShapeRepresentation* nativeHandle;
  OCStepShape_ConnectedFaceShapeRepresentation(OCDummy^) {};

public:
  property StepShape_ConnectedFaceShapeRepresentation* Handle
  {
    StepShape_ConnectedFaceShapeRepresentation* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStepShape_ConnectedFaceShapeRepresentation(StepShape_ConnectedFaceShapeRepresentation* nativeHandle);

// Methods PUBLIC

//! Empty constructor <br>
OCStepShape_ConnectedFaceShapeRepresentation();

~OCStepShape_ConnectedFaceShapeRepresentation()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
