// File generated by CPPExt (MPV)
//
#ifndef _BRepFill_ListIteratorOfListOfOffsetWire_OCWrappers_HeaderFile
#define _BRepFill_ListIteratorOfListOfOffsetWire_OCWrappers_HeaderFile

// include native header
#include <BRepFill_ListIteratorOfListOfOffsetWire.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCBRepFill_ListOfOffsetWire;
ref class OCBRepFill_OffsetWire;
ref class OCBRepFill_ListNodeOfListOfOffsetWire;



public ref class OCBRepFill_ListIteratorOfListOfOffsetWire  {

protected:
  BRepFill_ListIteratorOfListOfOffsetWire* nativeHandle;
  OCBRepFill_ListIteratorOfListOfOffsetWire(OCDummy^) {};

public:
  property BRepFill_ListIteratorOfListOfOffsetWire* Handle
  {
    BRepFill_ListIteratorOfListOfOffsetWire* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepFill_ListIteratorOfListOfOffsetWire(BRepFill_ListIteratorOfListOfOffsetWire* nativeHandle);

// Methods PUBLIC


OCBRepFill_ListIteratorOfListOfOffsetWire();


OCBRepFill_ListIteratorOfListOfOffsetWire(OCNaroWrappers::OCBRepFill_ListOfOffsetWire^ L);


 /*instead*/  void Initialize(OCNaroWrappers::OCBRepFill_ListOfOffsetWire^ L) ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  OCBRepFill_OffsetWire^ Value() ;

~OCBRepFill_ListIteratorOfListOfOffsetWire()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
