// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_Action_OCWrappers_HeaderFile
#define _StepBasic_Action_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_Action.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepBasic_ActionMethod;


//! Representation of STEP entity Action <br>
public ref class OCStepBasic_Action : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepBasic_Action(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_Action(Handle(StepBasic_Action)* nativeHandle);

// Methods PUBLIC

//! Empty constructor <br>
OCStepBasic_Action();

//! Initialize all fields (own and inherited) <br>
 /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, System::Boolean hasDescription, OCNaroWrappers::OCTCollection_HAsciiString^ aDescription, OCNaroWrappers::OCStepBasic_ActionMethod^ aChosenMethod) ;

//! Returns field Name <br>
 /*instead*/  OCTCollection_HAsciiString^ Name() ;

//! Set field Name <br>
 /*instead*/  void SetName(OCNaroWrappers::OCTCollection_HAsciiString^ Name) ;

//! Returns field Description <br>
 /*instead*/  OCTCollection_HAsciiString^ Description() ;

//! Set field Description <br>
 /*instead*/  void SetDescription(OCNaroWrappers::OCTCollection_HAsciiString^ Description) ;

//! Returns True if optional field Description is defined <br>
 /*instead*/  System::Boolean HasDescription() ;

//! Returns field ChosenMethod <br>
 /*instead*/  OCStepBasic_ActionMethod^ ChosenMethod() ;

//! Set field ChosenMethod <br>
 /*instead*/  void SetChosenMethod(OCNaroWrappers::OCStepBasic_ActionMethod^ ChosenMethod) ;

~OCStepBasic_Action()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
