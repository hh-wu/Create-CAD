// File generated by CPPExt (MPV)
//
#ifndef _BOPTools_PaveBlockMapHasher_OCWrappers_HeaderFile
#define _BOPTools_PaveBlockMapHasher_OCWrappers_HeaderFile

// include native header
#include <BOPTools_PaveBlockMapHasher.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCBOPTools_PaveBlock;



public ref class OCBOPTools_PaveBlockMapHasher  {

protected:
  BOPTools_PaveBlockMapHasher* nativeHandle;
  OCBOPTools_PaveBlockMapHasher(OCDummy^) {};

public:
  property BOPTools_PaveBlockMapHasher* Handle
  {
    BOPTools_PaveBlockMapHasher* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBOPTools_PaveBlockMapHasher(BOPTools_PaveBlockMapHasher* nativeHandle);

// Methods PUBLIC


static /*instead*/  Standard_Integer HashCode(OCNaroWrappers::OCBOPTools_PaveBlock^ aPB, Standard_Integer Upper) ;


static /*instead*/  System::Boolean IsEqual(OCNaroWrappers::OCBOPTools_PaveBlock^ aPB1, OCNaroWrappers::OCBOPTools_PaveBlock^ aPB2) ;

~OCBOPTools_PaveBlockMapHasher()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
