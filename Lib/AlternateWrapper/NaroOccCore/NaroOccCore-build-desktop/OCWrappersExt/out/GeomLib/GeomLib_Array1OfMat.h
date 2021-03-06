// File generated by CPPExt (MPV)
//
#ifndef _GeomLib_Array1OfMat_OCWrappers_HeaderFile
#define _GeomLib_Array1OfMat_OCWrappers_HeaderFile

// include native header
#include <GeomLib_Array1OfMat.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCgp_Mat;



public ref class OCGeomLib_Array1OfMat  {

protected:
  GeomLib_Array1OfMat* nativeHandle;
  OCGeomLib_Array1OfMat(OCDummy^) {};

public:
  property GeomLib_Array1OfMat* Handle
  {
    GeomLib_Array1OfMat* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGeomLib_Array1OfMat(GeomLib_Array1OfMat* nativeHandle);

// Methods PUBLIC


OCGeomLib_Array1OfMat(Standard_Integer Low, Standard_Integer Up);


OCGeomLib_Array1OfMat(OCNaroWrappers::OCgp_Mat^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCgp_Mat^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCGeomLib_Array1OfMat^ Assign(OCNaroWrappers::OCGeomLib_Array1OfMat^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCgp_Mat^ Value) ;


 /*instead*/  OCgp_Mat^ Value(Standard_Integer Index) ;


 /*instead*/  OCgp_Mat^ ChangeValue(Standard_Integer Index) ;

~OCGeomLib_Array1OfMat()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
