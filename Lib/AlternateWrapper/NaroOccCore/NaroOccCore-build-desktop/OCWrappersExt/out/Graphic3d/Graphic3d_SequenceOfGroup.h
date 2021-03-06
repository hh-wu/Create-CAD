// File generated by CPPExt (MPV)
//
#ifndef _Graphic3d_SequenceOfGroup_OCWrappers_HeaderFile
#define _Graphic3d_SequenceOfGroup_OCWrappers_HeaderFile

// include native header
#include <Graphic3d_SequenceOfGroup.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCGraphic3d_Group;
ref class OCGraphic3d_SequenceNodeOfSequenceOfGroup;



public ref class OCGraphic3d_SequenceOfGroup  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCGraphic3d_SequenceOfGroup(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCGraphic3d_SequenceOfGroup(Graphic3d_SequenceOfGroup* nativeHandle);

// Methods PUBLIC


OCGraphic3d_SequenceOfGroup();


 /*instead*/  OCGraphic3d_SequenceOfGroup^ Assign(OCNaroWrappers::OCGraphic3d_SequenceOfGroup^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCGraphic3d_Group^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCGraphic3d_SequenceOfGroup^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCGraphic3d_Group^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCGraphic3d_SequenceOfGroup^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCGraphic3d_Group^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCGraphic3d_SequenceOfGroup^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCGraphic3d_Group^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCGraphic3d_SequenceOfGroup^ S) ;


 /*instead*/  OCGraphic3d_Group^ First() ;


 /*instead*/  OCGraphic3d_Group^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCGraphic3d_SequenceOfGroup^ Sub) ;


 /*instead*/  OCGraphic3d_Group^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCGraphic3d_Group^ I) ;


 /*instead*/  OCGraphic3d_Group^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCGraphic3d_SequenceOfGroup()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
