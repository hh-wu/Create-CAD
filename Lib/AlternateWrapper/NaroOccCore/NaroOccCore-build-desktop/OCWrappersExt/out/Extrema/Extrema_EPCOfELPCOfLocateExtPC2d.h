// File generated by CPPExt (MPV)
//
#ifndef _Extrema_EPCOfELPCOfLocateExtPC2d_OCWrappers_HeaderFile
#define _Extrema_EPCOfELPCOfLocateExtPC2d_OCWrappers_HeaderFile

// include native header
#include <Extrema_EPCOfELPCOfLocateExtPC2d.hxx>
#include "../Converter.h"


#include "Extrema_PCFOfEPCOfELPCOfLocateExtPC2d.h"


namespace OCNaroWrappers
{

ref class OCAdaptor2d_Curve2d;
ref class OCExtrema_Curve2dTool;
ref class OCExtrema_POnCurv2d;
ref class OCgp_Pnt2d;
ref class OCgp_Vec2d;
ref class OCExtrema_PCFOfEPCOfELPCOfLocateExtPC2d;
ref class OCExtrema_SeqPCOfPCFOfEPCOfELPCOfLocateExtPC2d;



public ref class OCExtrema_EPCOfELPCOfLocateExtPC2d  {

protected:
  Extrema_EPCOfELPCOfLocateExtPC2d* nativeHandle;
  OCExtrema_EPCOfELPCOfLocateExtPC2d(OCDummy^) {};

public:
  property Extrema_EPCOfELPCOfLocateExtPC2d* Handle
  {
    Extrema_EPCOfELPCOfLocateExtPC2d* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCExtrema_EPCOfELPCOfLocateExtPC2d(Extrema_EPCOfELPCOfLocateExtPC2d* nativeHandle);

// Methods PUBLIC


OCExtrema_EPCOfELPCOfLocateExtPC2d();


OCExtrema_EPCOfELPCOfLocateExtPC2d(OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Integer NbU, Standard_Real TolU, Standard_Real TolF);


OCExtrema_EPCOfELPCOfLocateExtPC2d(OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Integer NbU, Standard_Real Umin, Standard_Real Usup, Standard_Real TolU, Standard_Real TolF);


 /*instead*/  void Initialize(OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Integer NbU, Standard_Real TolU, Standard_Real TolF) ;


 /*instead*/  void Initialize(OCNaroWrappers::OCAdaptor2d_Curve2d^ C, Standard_Integer NbU, Standard_Real Umin, Standard_Real Usup, Standard_Real TolU, Standard_Real TolF) ;


 /*instead*/  void Initialize(OCNaroWrappers::OCAdaptor2d_Curve2d^ C) ;


 /*instead*/  void Initialize(Standard_Integer NbU, Standard_Real Umin, Standard_Real Usup, Standard_Real TolU, Standard_Real TolF) ;


 /*instead*/  void Perform(OCNaroWrappers::OCgp_Pnt2d^ P) ;


 /*instead*/  System::Boolean IsDone() ;


 /*instead*/  Standard_Integer NbExt() ;


 /*instead*/  Standard_Real SquareDistance(Standard_Integer N) ;


 /*instead*/  System::Boolean IsMin(Standard_Integer N) ;


 /*instead*/  OCExtrema_POnCurv2d^ Point(Standard_Integer N) ;

~OCExtrema_EPCOfELPCOfLocateExtPC2d()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
