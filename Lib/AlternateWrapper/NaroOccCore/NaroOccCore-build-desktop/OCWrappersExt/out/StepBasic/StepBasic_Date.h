// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_Date_OCWrappers_HeaderFile
#define _StepBasic_Date_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_Date.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{




public ref class OCStepBasic_Date : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepBasic_Date(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_Date(Handle(StepBasic_Date)* nativeHandle);

// Methods PUBLIC

//! Returns a Date <br>
OCStepBasic_Date();


virtual /*instead*/  void Init(Standard_Integer aYearComponent) ;


 /*instead*/  void SetYearComponent(Standard_Integer aYearComponent) ;


 /*instead*/  Standard_Integer YearComponent() ;

~OCStepBasic_Date()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
