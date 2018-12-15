// File generated by CPPExt (Transient)
//
#ifndef _CDF_StoreList_OCWrappers_HeaderFile
#define _CDF_StoreList_OCWrappers_HeaderFile

// include the wrapped class
#include <CDF_StoreList.hxx>
#include "../Converter.h"

#include "../Standard/Standard_Transient.h"

#include "../CDM/CDM_MapOfDocument.h"
#include "../CDM/CDM_StackOfDocument.h"
#include "../CDM/CDM_MapIteratorOfMapOfDocument.h"
#include "../PCDM/PCDM_StoreStatus.h"


namespace OCNaroWrappers
{

ref class OCCDM_Document;
ref class OCCDM_MetaData;
ref class OCTCollection_ExtendedString;



public ref class OCCDF_StoreList : OCStandard_Transient {

protected:
  // dummy constructor;
  OCCDF_StoreList(OCDummy^) : OCStandard_Transient((OCDummy^)nullptr) {};

public:

// constructor from native
OCCDF_StoreList(Handle(CDF_StoreList)* nativeHandle);

// Methods PUBLIC


OCCDF_StoreList(OCNaroWrappers::OCCDM_Document^ aDocument);


 /*instead*/  System::Boolean IsConsistent() ;

//! stores each object of the storelist in the reverse <br>
//!          order of which they had been added. <br>
 /*instead*/  OCPCDM_StoreStatus Store(OCNaroWrappers::OCCDM_MetaData^ aMetaData, OCNaroWrappers::OCTCollection_ExtendedString^ aStatusAssociatedText) ;


 /*instead*/  void Init() ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  OCCDM_Document^ Value() ;

~OCCDF_StoreList()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif