// File generated by CPPExt (MPV)
//
#ifndef _Geom2dInt_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfGInter_OCWrappers_HeaderFile
#define _Geom2dInt_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfGInter_OCWrappers_HeaderFile

// include native header
#include <Geom2dInt_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfGInter.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCExtrema_POnCurv2d;
ref class OCGeom2dInt_SequenceNodeOfSeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfGInter;



public ref class OCGeom2dInt_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfGInter  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCGeom2dInt_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfGInter(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCGeom2dInt_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfGInter(Geom2dInt_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfGInter* nativeHandle);

// Methods PUBLIC


OCGeom2dInt_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfGInter();


 /*instead*/  OCGeom2dInt_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfGInter^ Assign(OCNaroWrappers::OCGeom2dInt_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfGInter^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCExtrema_POnCurv2d^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCGeom2dInt_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfGInter^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCExtrema_POnCurv2d^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCGeom2dInt_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfGInter^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCExtrema_POnCurv2d^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCGeom2dInt_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfGInter^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCExtrema_POnCurv2d^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCGeom2dInt_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfGInter^ S) ;


 /*instead*/  OCExtrema_POnCurv2d^ First() ;


 /*instead*/  OCExtrema_POnCurv2d^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCGeom2dInt_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfGInter^ Sub) ;


 /*instead*/  OCExtrema_POnCurv2d^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCExtrema_POnCurv2d^ I) ;


 /*instead*/  OCExtrema_POnCurv2d^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCGeom2dInt_SeqPCOfPCLocFOfTheLocateExtPCOfTheProjPCurOfGInter()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
