// File generated by CPPExt (MPV)
//
#ifndef _IntCurveSurface_TheInterferenceOfHInter_OCWrappers_HeaderFile
#define _IntCurveSurface_TheInterferenceOfHInter_OCWrappers_HeaderFile

// include native header
#include <IntCurveSurface_TheInterferenceOfHInter.hxx>
#include "../Converter.h"

#include "../Intf/Intf_Interference.h"

#include "../Intf/Intf_Interference.h"


namespace OCNaroWrappers
{

ref class OCIntCurveSurface_ThePolygonOfHInter;
ref class OCIntCurveSurface_ThePolygonToolOfHInter;
ref class OCIntCurveSurface_ThePolyhedronOfHInter;
ref class OCIntCurveSurface_ThePolyhedronToolOfHInter;
ref class OCgp_Lin;
ref class OCIntf_Array1OfLin;
ref class OCBnd_BoundSortBox;
ref class OCgp_Pnt;
ref class OCgp_XYZ;



public ref class OCIntCurveSurface_TheInterferenceOfHInter  : public OCIntf_Interference {

protected:
  // dummy constructor;
  OCIntCurveSurface_TheInterferenceOfHInter(OCDummy^) : OCIntf_Interference((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntCurveSurface_TheInterferenceOfHInter(IntCurveSurface_TheInterferenceOfHInter* nativeHandle);

// Methods PUBLIC


OCIntCurveSurface_TheInterferenceOfHInter();


OCIntCurveSurface_TheInterferenceOfHInter(OCNaroWrappers::OCIntCurveSurface_ThePolygonOfHInter^ thePolyg, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh);


OCIntCurveSurface_TheInterferenceOfHInter(OCNaroWrappers::OCgp_Lin^ theLin, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh);


OCIntCurveSurface_TheInterferenceOfHInter(OCNaroWrappers::OCIntf_Array1OfLin^ theLins, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh);


 /*instead*/  void Perform(OCNaroWrappers::OCIntCurveSurface_ThePolygonOfHInter^ thePolyg, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh) ;


 /*instead*/  void Perform(OCNaroWrappers::OCgp_Lin^ theLin, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh) ;


 /*instead*/  void Perform(OCNaroWrappers::OCIntf_Array1OfLin^ theLins, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh) ;


OCIntCurveSurface_TheInterferenceOfHInter(OCNaroWrappers::OCIntCurveSurface_ThePolygonOfHInter^ thePolyg, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh, OCNaroWrappers::OCBnd_BoundSortBox^ theBoundSB);


OCIntCurveSurface_TheInterferenceOfHInter(OCNaroWrappers::OCgp_Lin^ theLin, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh, OCNaroWrappers::OCBnd_BoundSortBox^ theBoundSB);


OCIntCurveSurface_TheInterferenceOfHInter(OCNaroWrappers::OCIntf_Array1OfLin^ theLins, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh, OCNaroWrappers::OCBnd_BoundSortBox^ theBoundSB);


 /*instead*/  void Perform(OCNaroWrappers::OCIntCurveSurface_ThePolygonOfHInter^ thePolyg, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh, OCNaroWrappers::OCBnd_BoundSortBox^ theBoundSB) ;


 /*instead*/  void Perform(OCNaroWrappers::OCgp_Lin^ theLin, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh, OCNaroWrappers::OCBnd_BoundSortBox^ theBoundSB) ;


 /*instead*/  void Perform(OCNaroWrappers::OCIntf_Array1OfLin^ theLins, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh, OCNaroWrappers::OCBnd_BoundSortBox^ theBoundSB) ;


 /*instead*/  void Interference(OCNaroWrappers::OCIntCurveSurface_ThePolygonOfHInter^ thePolyg, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh, OCNaroWrappers::OCBnd_BoundSortBox^ theBoundSB) ;


 /*instead*/  void Interference(OCNaroWrappers::OCIntCurveSurface_ThePolygonOfHInter^ thePolyg, OCNaroWrappers::OCIntCurveSurface_ThePolyhedronOfHInter^ thePolyh) ;

~OCIntCurveSurface_TheInterferenceOfHInter()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif