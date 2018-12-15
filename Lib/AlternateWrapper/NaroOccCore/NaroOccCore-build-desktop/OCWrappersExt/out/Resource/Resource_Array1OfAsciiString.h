// File generated by CPPExt (MPV)
//
#ifndef _Resource_Array1OfAsciiString_OCWrappers_HeaderFile
#define _Resource_Array1OfAsciiString_OCWrappers_HeaderFile

// include native header
#include <Resource_Array1OfAsciiString.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTCollection_AsciiString;



public ref class OCResource_Array1OfAsciiString  {

protected:
  Resource_Array1OfAsciiString* nativeHandle;
  OCResource_Array1OfAsciiString(OCDummy^) {};

public:
  property Resource_Array1OfAsciiString* Handle
  {
    Resource_Array1OfAsciiString* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCResource_Array1OfAsciiString(Resource_Array1OfAsciiString* nativeHandle);

// Methods PUBLIC


OCResource_Array1OfAsciiString(Standard_Integer Low, Standard_Integer Up);


OCResource_Array1OfAsciiString(OCNaroWrappers::OCTCollection_AsciiString^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCTCollection_AsciiString^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCResource_Array1OfAsciiString^ Assign(OCNaroWrappers::OCResource_Array1OfAsciiString^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCTCollection_AsciiString^ Value) ;


 /*instead*/  OCTCollection_AsciiString^ Value(Standard_Integer Index) ;


 /*instead*/  OCTCollection_AsciiString^ ChangeValue(Standard_Integer Index) ;

~OCResource_Array1OfAsciiString()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif