// File generated by CPPExt (MPV)
//
#ifndef _BRepGProp_Sinert_OCWrappers_HeaderFile
#define _BRepGProp_Sinert_OCWrappers_HeaderFile

// include native header
#include <BRepGProp_Sinert.hxx>
#include "../Converter.h"

#include "../GProp/GProp_GProps.h"

#include "../GProp/GProp_GProps.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Edge;
ref class OCBRepGProp_Face;
ref class OCBRepGProp_Domain;
ref class OCgp_Pnt;



public ref class OCBRepGProp_Sinert  : public OCGProp_GProps {

protected:
  // dummy constructor;
  OCBRepGProp_Sinert(OCDummy^) : OCGProp_GProps((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepGProp_Sinert(BRepGProp_Sinert* nativeHandle);

// Methods PUBLIC


OCBRepGProp_Sinert();


OCBRepGProp_Sinert(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCgp_Pnt^ SLocation);


OCBRepGProp_Sinert(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCBRepGProp_Domain^ D, OCNaroWrappers::OCgp_Pnt^ SLocation);


OCBRepGProp_Sinert(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCgp_Pnt^ SLocation, Standard_Real Eps);


OCBRepGProp_Sinert(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCBRepGProp_Domain^ D, OCNaroWrappers::OCgp_Pnt^ SLocation, Standard_Real Eps);


 /*instead*/  void SetLocation(OCNaroWrappers::OCgp_Pnt^ SLocation) ;


 /*instead*/  void Perform(OCNaroWrappers::OCBRepGProp_Face^ S) ;


 /*instead*/  void Perform(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCBRepGProp_Domain^ D) ;


 /*instead*/  Standard_Real Perform(OCNaroWrappers::OCBRepGProp_Face^ S, Standard_Real Eps) ;


 /*instead*/  Standard_Real Perform(OCNaroWrappers::OCBRepGProp_Face^ S, OCNaroWrappers::OCBRepGProp_Domain^ D, Standard_Real Eps) ;


 /*instead*/  Standard_Real GetEpsilon() ;

~OCBRepGProp_Sinert()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif