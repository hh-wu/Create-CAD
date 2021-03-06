// File generated by CPPExt (MPV)
//
#ifndef _TColStd_SetIteratorOfSetOfInteger_OCWrappers_HeaderFile
#define _TColStd_SetIteratorOfSetOfInteger_OCWrappers_HeaderFile

// include native header
#include <TColStd_SetIteratorOfSetOfInteger.hxx>
#include "../Converter.h"


#include "TColStd_ListIteratorOfSetListOfSetOfInteger.h"


namespace OCNaroWrappers
{

ref class OCTColStd_SetOfInteger;
ref class OCTColStd_SetListOfSetOfInteger;
ref class OCTColStd_ListNodeOfSetListOfSetOfInteger;
ref class OCTColStd_ListIteratorOfSetListOfSetOfInteger;



public ref class OCTColStd_SetIteratorOfSetOfInteger  {

protected:
  TColStd_SetIteratorOfSetOfInteger* nativeHandle;
  OCTColStd_SetIteratorOfSetOfInteger(OCDummy^) {};

public:
  property TColStd_SetIteratorOfSetOfInteger* Handle
  {
    TColStd_SetIteratorOfSetOfInteger* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTColStd_SetIteratorOfSetOfInteger(TColStd_SetIteratorOfSetOfInteger* nativeHandle);

// Methods PUBLIC


OCTColStd_SetIteratorOfSetOfInteger();


OCTColStd_SetIteratorOfSetOfInteger(OCNaroWrappers::OCTColStd_SetOfInteger^ S);


 /*instead*/  void Initialize(OCNaroWrappers::OCTColStd_SetOfInteger^ S) ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  Standard_Integer Value() ;

~OCTColStd_SetIteratorOfSetOfInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
