// File generated by CPPExt (Transient)
//
#ifndef _CDM_COutMessageDriver_OCWrappers_HeaderFile
#define _CDM_COutMessageDriver_OCWrappers_HeaderFile

// include the wrapped class
#include <CDM_COutMessageDriver.hxx>
#include "../Converter.h"

#include "CDM_MessageDriver.h"



namespace OCNaroWrappers
{




public ref class OCCDM_COutMessageDriver : OCCDM_MessageDriver {

protected:
  // dummy constructor;
  OCCDM_COutMessageDriver(OCDummy^) : OCCDM_MessageDriver((OCDummy^)nullptr) {};

public:

// constructor from native
OCCDM_COutMessageDriver(Handle(CDM_COutMessageDriver)* nativeHandle);

// Methods PUBLIC


 /*instead*/  void Write(System::String^ aString) ;

~OCCDM_COutMessageDriver()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif