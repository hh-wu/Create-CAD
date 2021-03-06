// File generated by CPPExt (MPV)
//
#ifndef _ChFiDS_CircSection_OCWrappers_HeaderFile
#define _ChFiDS_CircSection_OCWrappers_HeaderFile

// include native header
#include <ChFiDS_CircSection.hxx>
#include "../Converter.h"


#include "../gp/gp_Circ.h"
#include "../gp/gp_Lin.h"


namespace OCNaroWrappers
{

ref class OCgp_Circ;
ref class OCgp_Lin;


//! A Section of fillet. <br>
public ref class OCChFiDS_CircSection  {

protected:
  ChFiDS_CircSection* nativeHandle;
  OCChFiDS_CircSection(OCDummy^) {};

public:
  property ChFiDS_CircSection* Handle
  {
    ChFiDS_CircSection* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCChFiDS_CircSection(ChFiDS_CircSection* nativeHandle);

// Methods PUBLIC


OCChFiDS_CircSection();


 /*instead*/  void Set(OCNaroWrappers::OCgp_Circ^ C, Standard_Real F, Standard_Real L) ;


 /*instead*/  void Set(OCNaroWrappers::OCgp_Lin^ C, Standard_Real F, Standard_Real L) ;


 /*instead*/  void Get(OCNaroWrappers::OCgp_Circ^ C, Standard_Real& F, Standard_Real& L) ;


 /*instead*/  void Get(OCNaroWrappers::OCgp_Lin^ C, Standard_Real& F, Standard_Real& L) ;

~OCChFiDS_CircSection()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
