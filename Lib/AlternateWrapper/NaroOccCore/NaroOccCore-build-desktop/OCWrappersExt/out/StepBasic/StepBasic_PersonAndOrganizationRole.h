// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_PersonAndOrganizationRole_OCWrappers_HeaderFile
#define _StepBasic_PersonAndOrganizationRole_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_PersonAndOrganizationRole.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;



public ref class OCStepBasic_PersonAndOrganizationRole : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepBasic_PersonAndOrganizationRole(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_PersonAndOrganizationRole(Handle(StepBasic_PersonAndOrganizationRole)* nativeHandle);

// Methods PUBLIC

//! Returns a PersonAndOrganizationRole <br>
OCStepBasic_PersonAndOrganizationRole();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


 /*instead*/  void SetName(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


 /*instead*/  OCTCollection_HAsciiString^ Name() ;

~OCStepBasic_PersonAndOrganizationRole()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
