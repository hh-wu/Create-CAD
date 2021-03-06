// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepDS_ListOfShapeOn1State_OCWrappers_HeaderFile
#define _TopOpeBRepDS_ListOfShapeOn1State_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepDS_ListOfShapeOn1State.hxx>
#include "../Converter.h"


#include "../TopTools/TopTools_ListOfShape.h"


namespace OCNaroWrappers
{

ref class OCTopTools_ListOfShape;


//! represent a list of shape <br>
public ref class OCTopOpeBRepDS_ListOfShapeOn1State  {

protected:
  TopOpeBRepDS_ListOfShapeOn1State* nativeHandle;
  OCTopOpeBRepDS_ListOfShapeOn1State(OCDummy^) {};

public:
  property TopOpeBRepDS_ListOfShapeOn1State* Handle
  {
    TopOpeBRepDS_ListOfShapeOn1State* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopOpeBRepDS_ListOfShapeOn1State(TopOpeBRepDS_ListOfShapeOn1State* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepDS_ListOfShapeOn1State();


 /*instead*/  OCTopTools_ListOfShape^ ListOnState() ;


 /*instead*/  OCTopTools_ListOfShape^ ChangeListOnState() ;


 /*instead*/  System::Boolean IsSplit() ;


 /*instead*/  void Split(System::Boolean B) ;


 /*instead*/  void Clear() ;

~OCTopOpeBRepDS_ListOfShapeOn1State()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
