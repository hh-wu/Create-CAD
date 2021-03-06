// File generated by CPPExt (MPV)
//
#ifndef _Extrema_LocateExtCC_OCWrappers_HeaderFile
#define _Extrema_LocateExtCC_OCWrappers_HeaderFile

// include native header
#include <Extrema_LocateExtCC.hxx>
#include "../Converter.h"


#include "Extrema_POnCurv.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_Curve;
ref class OCExtrema_CurveTool;
ref class OCExtrema_LCCacheOfLocateExtCC;
ref class OCExtrema_ELCCOfLocateExtCC;
ref class OCExtrema_CCFOfELCCOfLocateExtCC;
ref class OCExtrema_LocECCOfLocateExtCC;
ref class OCExtrema_CCLocFOfLocECCOfLocateExtCC;
ref class OCExtrema_POnCurv;



public ref class OCExtrema_LocateExtCC  {

protected:
  Extrema_LocateExtCC* nativeHandle;
  OCExtrema_LocateExtCC(OCDummy^) {};

public:
  property Extrema_LocateExtCC* Handle
  {
    Extrema_LocateExtCC* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCExtrema_LocateExtCC(Extrema_LocateExtCC* nativeHandle);

// Methods PUBLIC


OCExtrema_LocateExtCC(OCNaroWrappers::OCAdaptor3d_Curve^ C1, OCNaroWrappers::OCAdaptor3d_Curve^ C2, Standard_Real U0, Standard_Real V0);


 /*instead*/  System::Boolean IsDone() ;


 /*instead*/  Standard_Real SquareDistance() ;


 /*instead*/  void Point(OCNaroWrappers::OCExtrema_POnCurv^ P1, OCNaroWrappers::OCExtrema_POnCurv^ P2) ;

~OCExtrema_LocateExtCC()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
