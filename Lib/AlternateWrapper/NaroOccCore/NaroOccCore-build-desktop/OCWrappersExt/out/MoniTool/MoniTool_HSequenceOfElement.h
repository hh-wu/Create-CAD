// File generated by CPPExt (Transient)
//
#ifndef _MoniTool_HSequenceOfElement_OCWrappers_HeaderFile
#define _MoniTool_HSequenceOfElement_OCWrappers_HeaderFile

// include the wrapped class
#include <MoniTool_HSequenceOfElement.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "MoniTool_SequenceOfElement.h"


namespace OCNaroWrappers
{

ref class OCMoniTool_Element;
ref class OCMoniTool_SequenceOfElement;



public ref class OCMoniTool_HSequenceOfElement : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCMoniTool_HSequenceOfElement(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCMoniTool_HSequenceOfElement(Handle(MoniTool_HSequenceOfElement)* nativeHandle);

// Methods PUBLIC


OCMoniTool_HSequenceOfElement();


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  void Clear() ;


 /*instead*/  void Append(OCNaroWrappers::OCMoniTool_Element^ anItem) ;


 /*instead*/  void Append(OCNaroWrappers::OCMoniTool_HSequenceOfElement^ aSequence) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCMoniTool_Element^ anItem) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCMoniTool_HSequenceOfElement^ aSequence) ;


 /*instead*/  void Reverse() ;


 /*instead*/  void InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCMoniTool_Element^ anItem) ;


 /*instead*/  void InsertBefore(Standard_Integer anIndex, OCNaroWrappers::OCMoniTool_HSequenceOfElement^ aSequence) ;


 /*instead*/  void InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCMoniTool_Element^ anItem) ;


 /*instead*/  void InsertAfter(Standard_Integer anIndex, OCNaroWrappers::OCMoniTool_HSequenceOfElement^ aSequence) ;


 /*instead*/  void Exchange(Standard_Integer anIndex, Standard_Integer anOtherIndex) ;


 /*instead*/  OCMoniTool_HSequenceOfElement^ Split(Standard_Integer anIndex) ;


 /*instead*/  void SetValue(Standard_Integer anIndex, OCNaroWrappers::OCMoniTool_Element^ anItem) ;


 /*instead*/  OCMoniTool_Element^ Value(Standard_Integer anIndex) ;


 /*instead*/  OCMoniTool_Element^ ChangeValue(Standard_Integer anIndex) ;


 /*instead*/  void Remove(Standard_Integer anIndex) ;


 /*instead*/  void Remove(Standard_Integer fromIndex, Standard_Integer toIndex) ;


 /*instead*/  OCMoniTool_SequenceOfElement^ Sequence() ;


 /*instead*/  OCMoniTool_SequenceOfElement^ ChangeSequence() ;


 /*instead*/  OCMoniTool_HSequenceOfElement^ ShallowCopy() ;

~OCMoniTool_HSequenceOfElement()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
