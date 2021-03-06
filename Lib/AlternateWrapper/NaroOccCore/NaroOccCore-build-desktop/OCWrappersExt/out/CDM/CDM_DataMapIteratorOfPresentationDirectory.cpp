// File generated by CPPExt (CPP file)
//

#include "CDM_DataMapIteratorOfPresentationDirectory.h"
#include "../Converter.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "CDM_Document.h"
#include "CDM_PresentationDirectory.h"
#include "CDM_DataMapNodeOfPresentationDirectory.h"


using namespace OCNaroWrappers;

OCCDM_DataMapIteratorOfPresentationDirectory::OCCDM_DataMapIteratorOfPresentationDirectory(CDM_DataMapIteratorOfPresentationDirectory* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCCDM_DataMapIteratorOfPresentationDirectory::OCCDM_DataMapIteratorOfPresentationDirectory() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new CDM_DataMapIteratorOfPresentationDirectory();
}

OCCDM_DataMapIteratorOfPresentationDirectory::OCCDM_DataMapIteratorOfPresentationDirectory(OCNaroWrappers::OCCDM_PresentationDirectory^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new CDM_DataMapIteratorOfPresentationDirectory(*((CDM_PresentationDirectory*)aMap->Handle));
}

 void OCCDM_DataMapIteratorOfPresentationDirectory::Initialize(OCNaroWrappers::OCCDM_PresentationDirectory^ aMap)
{
  ((CDM_DataMapIteratorOfPresentationDirectory*)nativeHandle)->Initialize(*((CDM_PresentationDirectory*)aMap->Handle));
}

OCTCollection_ExtendedString^ OCCDM_DataMapIteratorOfPresentationDirectory::Key()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = ((CDM_DataMapIteratorOfPresentationDirectory*)nativeHandle)->Key();
  return gcnew OCTCollection_ExtendedString(tmp);
}

OCCDM_Document^ OCCDM_DataMapIteratorOfPresentationDirectory::Value()
{
  Handle(CDM_Document) tmp = ((CDM_DataMapIteratorOfPresentationDirectory*)nativeHandle)->Value();
  return gcnew OCCDM_Document(&tmp);
}


