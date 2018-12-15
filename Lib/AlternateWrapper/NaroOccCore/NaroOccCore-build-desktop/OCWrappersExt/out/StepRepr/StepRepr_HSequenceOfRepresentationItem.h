// File generated by CPPExt (Transient)
//
#ifndef _StepRepr_HSequenceOfRepresentationItem_OCWrappers_HeaderFile
#define _StepRepr_HSequenceOfRepresentationItem_OCWrappers_HeaderFile

// include the wrapped class
#include <StepRepr_HSequenceOfRepresentationItem.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "StepRepr_SequenceOfRepresentationItem.h"


namespace OCNaroWrappers
{

ref class OCStepRepr_RepresentationItem;
ref class OCStepRepr_SequenceOfRepresentationItem;



public ref class OCStepRepr_HSequenceOfRepresentationItem : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepRepr_HSequenceOfRepresentationItem(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepRepr_HSequenceOfRepresentationItem(Handle(StepRepr_HSequenceOfRepresentationItem)* nativeHandle);

// Methods PUBLIC


OCStepRepr_HSequenceOfRepresentationItem();


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  void Clear() ;


 /*instead*/  void Append(OCNaroWrappers::OCStepRepr_RepresentationItem^ anItem) ;


 /*instead*/  void Append(OCNaroWrappers::OCStepRepr_HSequenceOfRepresentationItem^ aSequence) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCStepRepr_RepresentationItem^ anItem) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCStepRepr_HSequenceOfRepresentationItem^ aSequence) ;


 /*instead*/  void Reverse() ;


 /*instead*/  void InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCStepRepr_RepresentationItem^ anItem) ;


 /*instead*/  void InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCStepRepr_HSequenceOfRepresentationItem^ aSequence) ;


 /*instead*/  void InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCStepRepr_RepresentationItem^ anItem) ;


 /*instead*/  void InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCStepRepr_HSequenceOfRepresentationItem^ aSequence) ;


 /*instead*/  void Exchange(Standard_Integer anIndex, Standard_Integer anOtherIndex) ;


 /*instead*/  OCStepRepr_HSequenceOfRepresentationItem^ Split(Standard_Integer anIndex) ;


 /*instead*/  void SetValue(Standard_Integer anIndex, OCNaroWrappers::OCStepRepr_RepresentationItem^ anItem) ;


 /*instead*/  OCStepRepr_RepresentationItem^ Value(Standard_Integer anIndex) ;


 /*instead*/  OCStepRepr_RepresentationItem^ ChangeValue(Standard_Integer anIndex) ;


 /*instead*/  void Remove(Standard_Integer anIndex) ;


 /*instead*/  void Remove(Standard_Integer fromIndex, Standard_Integer toIndex) ;


 /*instead*/  OCStepRepr_SequenceOfRepresentationItem^ Sequence() ;


 /*instead*/  OCStepRepr_SequenceOfRepresentationItem^ ChangeSequence() ;


 /*instead*/  OCStepRepr_HSequenceOfRepresentationItem^ ShallowCopy() ;

~OCStepRepr_HSequenceOfRepresentationItem()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif