// File generated by CPPExt (MPV)
//
#ifndef _MoniTool_SequenceOfElement_OCWrappers_HeaderFile
#define _MoniTool_SequenceOfElement_OCWrappers_HeaderFile

// include native header
#include <MoniTool_SequenceOfElement.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCMoniTool_Element;
ref class OCMoniTool_SequenceNodeOfSequenceOfElement;



public ref class OCMoniTool_SequenceOfElement  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCMoniTool_SequenceOfElement(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCMoniTool_SequenceOfElement(MoniTool_SequenceOfElement* nativeHandle);

// Methods PUBLIC


OCMoniTool_SequenceOfElement();


 /*instead*/  OCMoniTool_SequenceOfElement^ Assign(OCNaroWrappers::OCMoniTool_SequenceOfElement^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCMoniTool_Element^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCMoniTool_SequenceOfElement^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCMoniTool_Element^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCMoniTool_SequenceOfElement^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCMoniTool_Element^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCMoniTool_SequenceOfElement^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCMoniTool_Element^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCMoniTool_SequenceOfElement^ S) ;


 /*instead*/  OCMoniTool_Element^ First() ;


 /*instead*/  OCMoniTool_Element^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCMoniTool_SequenceOfElement^ Sub) ;


 /*instead*/  OCMoniTool_Element^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCMoniTool_Element^ I) ;


 /*instead*/  OCMoniTool_Element^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCMoniTool_SequenceOfElement()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
