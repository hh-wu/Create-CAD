// File generated by CPPExt (MPV)
//
#ifndef _StepGeom_CompositeCurve_OCWrappers_HeaderFile
#define _StepGeom_CompositeCurve_OCWrappers_HeaderFile

// include native header
#include <StepGeom_CompositeCurve.hxx>
#include "../Converter.h"

#include "StepGeom_BoundedCurve.h"

#include "../StepData/StepData_Logical.h"
#include "StepGeom_BoundedCurve.h"


namespace OCNaroWrappers
{

ref class OCStepGeom_HArray1OfCompositeCurveSegment;
ref class OCTCollection_HAsciiString;
ref class OCStepGeom_CompositeCurveSegment;



public ref class OCStepGeom_CompositeCurve  : public OCStepGeom_BoundedCurve {

protected:
  // dummy constructor;
  OCStepGeom_CompositeCurve(OCDummy^) : OCStepGeom_BoundedCurve((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepGeom_CompositeCurve(StepGeom_CompositeCurve* nativeHandle);

// Methods PUBLIC

//! Returns a CompositeCurve <br>
OCStepGeom_CompositeCurve();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_HArray1OfCompositeCurveSegment^ aSegments, OCStepData_Logical aSelfIntersect) ;


 /*instead*/  void SetSegments(OCNaroWrappers::OCStepGeom_HArray1OfCompositeCurveSegment^ aSegments) ;


 /*instead*/  OCStepGeom_HArray1OfCompositeCurveSegment^ Segments() ;


 /*instead*/  OCStepGeom_CompositeCurveSegment^ SegmentsValue(Standard_Integer num) ;


 /*instead*/  Standard_Integer NbSegments() ;


 /*instead*/  void SetSelfIntersect(OCStepData_Logical aSelfIntersect) ;


 /*instead*/  OCStepData_Logical SelfIntersect() ;

~OCStepGeom_CompositeCurve()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif