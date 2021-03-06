// File generated by CPPExt (MPV)
//
#ifndef _IntTools_CArray1OfReal_OCWrappers_HeaderFile
#define _IntTools_CArray1OfReal_OCWrappers_HeaderFile

// include native header
#include <IntTools_CArray1OfReal.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{




public ref class OCIntTools_CArray1OfReal  {

protected:
  IntTools_CArray1OfReal* nativeHandle;
  OCIntTools_CArray1OfReal(OCDummy^) {};

public:
  property IntTools_CArray1OfReal* Handle
  {
    IntTools_CArray1OfReal* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntTools_CArray1OfReal(IntTools_CArray1OfReal* nativeHandle);

// Methods PUBLIC


OCIntTools_CArray1OfReal(Standard_Integer Length);


OCIntTools_CArray1OfReal(Standard_Real Item, Standard_Integer Length);


 /*instead*/  void Init(Standard_Real V) ;


 /*instead*/  void Resize(Standard_Integer theNewLength) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  void Append(Standard_Real Value) ;


 /*instead*/  void SetValue(Standard_Integer Index, Standard_Real Value) ;


 /*instead*/  Standard_Real Value(Standard_Integer Index) ;


 /*instead*/  Standard_Real ChangeValue(Standard_Integer Index) ;


 /*instead*/  System::Boolean IsEqual(OCNaroWrappers::OCIntTools_CArray1OfReal^ Other) ;

~OCIntTools_CArray1OfReal()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
