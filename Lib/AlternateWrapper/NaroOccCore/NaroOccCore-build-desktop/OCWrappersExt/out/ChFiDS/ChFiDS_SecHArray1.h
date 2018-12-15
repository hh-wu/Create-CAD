// File generated by CPPExt (Transient)
//
#ifndef _ChFiDS_SecHArray1_OCWrappers_HeaderFile
#define _ChFiDS_SecHArray1_OCWrappers_HeaderFile

// include the wrapped class
#include <ChFiDS_SecHArray1.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "ChFiDS_SecArray1.h"


namespace OCNaroWrappers
{

ref class OCChFiDS_CircSection;
ref class OCChFiDS_SecArray1;



public ref class OCChFiDS_SecHArray1 : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCChFiDS_SecHArray1(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCChFiDS_SecHArray1(Handle(ChFiDS_SecHArray1)* nativeHandle);

// Methods PUBLIC


OCChFiDS_SecHArray1(Standard_Integer Low, Standard_Integer Up);


OCChFiDS_SecHArray1(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCChFiDS_CircSection^ V);


 /*instead*/  void Init(OCNaroWrappers::OCChFiDS_CircSection^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCChFiDS_CircSection^ Value) ;


 /*instead*/  OCChFiDS_CircSection^ Value(Standard_Integer Index) ;


 /*instead*/  OCChFiDS_CircSection^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCChFiDS_SecArray1^ Array1() ;


 /*instead*/  OCChFiDS_SecArray1^ ChangeArray1() ;

~OCChFiDS_SecHArray1()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif