// File generated by CPPExt (Transient)
//
#ifndef _GeomAdaptor_GHCurve_OCWrappers_HeaderFile
#define _GeomAdaptor_GHCurve_OCWrappers_HeaderFile

// include the wrapped class
#include <GeomAdaptor_GHCurve.hxx>
#include "../Converter.h"

#include "../Adaptor3d/Adaptor3d_HCurve.h"

#include "GeomAdaptor_Curve.h"


namespace OCNaroWrappers
{

ref class OCGeomAdaptor_Curve;
ref class OCAdaptor3d_Curve;



public ref class OCGeomAdaptor_GHCurve : OCAdaptor3d_HCurve {

protected:
  // dummy constructor;
  OCGeomAdaptor_GHCurve(OCDummy^) : OCAdaptor3d_HCurve((OCDummy^)nullptr) {};

public:

// constructor from native
OCGeomAdaptor_GHCurve(Handle(GeomAdaptor_GHCurve)* nativeHandle);

// Methods PUBLIC


OCGeomAdaptor_GHCurve();


OCGeomAdaptor_GHCurve(OCNaroWrappers::OCGeomAdaptor_Curve^ C);


 /*instead*/  void Set(OCNaroWrappers::OCGeomAdaptor_Curve^ C) ;


 /*instead*/  OCAdaptor3d_Curve^ Curve() ;


 /*instead*/  OCAdaptor3d_Curve^ GetCurve() ;


 /*instead*/  OCGeomAdaptor_Curve^ ChangeCurve() ;

~OCGeomAdaptor_GHCurve()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
