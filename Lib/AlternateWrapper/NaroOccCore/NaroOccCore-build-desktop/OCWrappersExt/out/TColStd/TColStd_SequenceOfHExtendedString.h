// File generated by CPPExt (MPV)
//
#ifndef _TColStd_SequenceOfHExtendedString_OCWrappers_HeaderFile
#define _TColStd_SequenceOfHExtendedString_OCWrappers_HeaderFile

// include native header
#include <TColStd_SequenceOfHExtendedString.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCTCollection_HExtendedString;
ref class OCTColStd_SequenceNodeOfSequenceOfHExtendedString;



public ref class OCTColStd_SequenceOfHExtendedString  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCTColStd_SequenceOfHExtendedString(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_SequenceOfHExtendedString(TColStd_SequenceOfHExtendedString* nativeHandle);

// Methods PUBLIC


OCTColStd_SequenceOfHExtendedString();


 /*instead*/  OCTColStd_SequenceOfHExtendedString^ Assign(OCNaroWrappers::OCTColStd_SequenceOfHExtendedString^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCTCollection_HExtendedString^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCTColStd_SequenceOfHExtendedString^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTCollection_HExtendedString^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCTColStd_SequenceOfHExtendedString^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTCollection_HExtendedString^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfHExtendedString^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTCollection_HExtendedString^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfHExtendedString^ S) ;


 /*instead*/  OCTCollection_HExtendedString^ First() ;


 /*instead*/  OCTCollection_HExtendedString^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfHExtendedString^ Sub) ;


 /*instead*/  OCTCollection_HExtendedString^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCTCollection_HExtendedString^ I) ;


 /*instead*/  OCTCollection_HExtendedString^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCTColStd_SequenceOfHExtendedString()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
