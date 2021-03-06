// File generated by CPPExt (Transient)
//
#ifndef _TShort_HArray2OfShortReal_OCWrappers_HeaderFile
#define _TShort_HArray2OfShortReal_OCWrappers_HeaderFile

// include the wrapped class
#include <TShort_HArray2OfShortReal.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "TShort_Array2OfShortReal.h"


namespace OCNaroWrappers
{

ref class OCTShort_Array2OfShortReal;



public ref class OCTShort_HArray2OfShortReal : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCTShort_HArray2OfShortReal(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCTShort_HArray2OfShortReal(Handle(TShort_HArray2OfShortReal)* nativeHandle);

// Methods PUBLIC


OCTShort_HArray2OfShortReal(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


OCTShort_HArray2OfShortReal(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2, Standard_ShortReal V);


 /*instead*/  void Init(Standard_ShortReal V) ;


 /*instead*/  Standard_Integer ColLength() ;


 /*instead*/  Standard_Integer RowLength() ;


 /*instead*/  Standard_Integer LowerCol() ;


 /*instead*/  Standard_Integer LowerRow() ;


 /*instead*/  Standard_Integer UpperCol() ;


 /*instead*/  Standard_Integer UpperRow() ;


 /*instead*/  void SetValue(Standard_Integer Row, Standard_Integer Col, Standard_ShortReal Value) ;


 /*instead*/  Standard_ShortReal Value(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  Standard_ShortReal ChangeValue(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  OCTShort_Array2OfShortReal^ Array2() ;


 /*instead*/  OCTShort_Array2OfShortReal^ ChangeArray2() ;

~OCTShort_HArray2OfShortReal()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
