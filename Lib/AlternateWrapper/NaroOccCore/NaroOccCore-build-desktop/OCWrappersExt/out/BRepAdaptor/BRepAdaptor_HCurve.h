// File generated by CPPExt (Transient)
//
#ifndef _BRepAdaptor_HCurve_OCWrappers_HeaderFile
#define _BRepAdaptor_HCurve_OCWrappers_HeaderFile

// include the wrapped class
#include <BRepAdaptor_HCurve.hxx>
#include "../Converter.h"

#include "../Adaptor3d/Adaptor3d_HCurve.h"

#include "BRepAdaptor_Curve.h"


namespace OCNaroWrappers
{

ref class OCBRepAdaptor_Curve;
ref class OCAdaptor3d_Curve;



public ref class OCBRepAdaptor_HCurve : OCAdaptor3d_HCurve {

protected:
  // dummy constructor;
  OCBRepAdaptor_HCurve(OCDummy^) : OCAdaptor3d_HCurve((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepAdaptor_HCurve(Handle(BRepAdaptor_HCurve)* nativeHandle);

// Methods PUBLIC


OCBRepAdaptor_HCurve();


OCBRepAdaptor_HCurve(OCNaroWrappers::OCBRepAdaptor_Curve^ C);


 /*instead*/  void Set(OCNaroWrappers::OCBRepAdaptor_Curve^ C) ;


 /*instead*/  OCAdaptor3d_Curve^ Curve() ;


 /*instead*/  OCAdaptor3d_Curve^ GetCurve() ;


 /*instead*/  OCBRepAdaptor_Curve^ ChangeCurve() ;

~OCBRepAdaptor_HCurve()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
