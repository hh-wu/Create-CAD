// File generated by CPPExt (MPV)
//
#ifndef _BOP_LoopSet_OCWrappers_HeaderFile
#define _BOP_LoopSet_OCWrappers_HeaderFile

// include native header
#include <BOP_LoopSet.hxx>
#include "../Converter.h"


#include "BOP_ListOfLoop.h"
#include "BOP_ListIteratorOfListOfLoop.h"


namespace OCNaroWrappers
{

ref class OCBOP_ListOfLoop;
ref class OCBOP_Loop;



//!  The auxiliary class to store  and iterate on Loop(s) <br>
public ref class OCBOP_LoopSet  {

protected:
  BOP_LoopSet* nativeHandle;
  OCBOP_LoopSet(OCDummy^) {};

public:
  property BOP_LoopSet* Handle
  {
    BOP_LoopSet* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBOP_LoopSet(BOP_LoopSet* nativeHandle);

// Methods PUBLIC


//! Empty constructor; <br>
OCBOP_LoopSet();


//! Destructor; <br>
virtual /*instead*/  void Delete() ;


//! Modifier; <br>
 /*instead*/  OCBOP_ListOfLoop^ ChangeListOfLoop() ;


virtual /*instead*/  void InitLoop() ;


virtual /*instead*/  System::Boolean MoreLoop() ;


virtual /*instead*/  void NextLoop() ;


virtual /*instead*/  OCBOP_Loop^ Loop() ;

~OCBOP_LoopSet()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
