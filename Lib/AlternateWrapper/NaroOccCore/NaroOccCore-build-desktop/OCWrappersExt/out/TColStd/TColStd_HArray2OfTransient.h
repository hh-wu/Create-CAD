// File generated by CPPExt (Transient)
//
#ifndef _TColStd_HArray2OfTransient_OCWrappers_HeaderFile
#define _TColStd_HArray2OfTransient_OCWrappers_HeaderFile

// include the wrapped class
#include <TColStd_HArray2OfTransient.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "TColStd_Array2OfTransient.h"


namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCTColStd_Array2OfTransient;



public ref class OCTColStd_HArray2OfTransient : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCTColStd_HArray2OfTransient(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_HArray2OfTransient(Handle(TColStd_HArray2OfTransient)* nativeHandle);

// Methods PUBLIC


OCTColStd_HArray2OfTransient(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


OCTColStd_HArray2OfTransient(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2, OCNaroWrappers::OCStandard_Transient^ V);


 /*instead*/  void Init(OCNaroWrappers::OCStandard_Transient^ V) ;


 /*instead*/  Standard_Integer ColLength() ;


 /*instead*/  Standard_Integer RowLength() ;


 /*instead*/  Standard_Integer LowerCol() ;


 /*instead*/  Standard_Integer LowerRow() ;


 /*instead*/  Standard_Integer UpperCol() ;


 /*instead*/  Standard_Integer UpperRow() ;


 /*instead*/  void SetValue(Standard_Integer Row, Standard_Integer Col, OCNaroWrappers::OCStandard_Transient^ Value) ;


 /*instead*/  OCStandard_Transient^ Value(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  OCStandard_Transient^ ChangeValue(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  OCTColStd_Array2OfTransient^ Array2() ;


 /*instead*/  OCTColStd_Array2OfTransient^ ChangeArray2() ;

~OCTColStd_HArray2OfTransient()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
