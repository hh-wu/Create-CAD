// File generated by CPPExt (MPV)
//
#ifndef _IntPatch_LPolygoOfTheRstIntOfIntersection_OCWrappers_HeaderFile
#define _IntPatch_LPolygoOfTheRstIntOfIntersection_OCWrappers_HeaderFile

// include native header
#include <IntPatch_LPolygoOfTheRstIntOfIntersection.hxx>
#include "../Converter.h"

#include "IntPatch_Polygo.h"

#include "../Bnd/Bnd_Box2d.h"
#include "../gp/gp_Pnt2d.h"
#include "IntPatch_IType.h"
#include "IntPatch_Polygo.h"


namespace OCNaroWrappers
{

ref class OCIntPatch_TheWLineOfIntersection;
ref class OCIntPatch_TheRLineOfIntersection;
ref class OCBnd_Box2d;
ref class OCgp_Pnt2d;



public ref class OCIntPatch_LPolygoOfTheRstIntOfIntersection  : public OCIntPatch_Polygo {

protected:
  // dummy constructor;
  OCIntPatch_LPolygoOfTheRstIntOfIntersection(OCDummy^) : OCIntPatch_Polygo((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntPatch_LPolygoOfTheRstIntOfIntersection(IntPatch_LPolygoOfTheRstIntOfIntersection* nativeHandle);

// Methods PUBLIC


OCIntPatch_LPolygoOfTheRstIntOfIntersection();


OCIntPatch_LPolygoOfTheRstIntOfIntersection(Standard_Real InitDefle);


 /*instead*/  void SetWLine(System::Boolean OnFirst, OCNaroWrappers::OCIntPatch_TheWLineOfIntersection^ Line) ;


 /*instead*/  void SetRLine(System::Boolean OnFirst, OCNaroWrappers::OCIntPatch_TheRLineOfIntersection^ Line) ;


 /*instead*/  void ResetError() ;


 /*instead*/  OCBnd_Box2d^ Bounding() ;


 /*instead*/  Standard_Real Error() ;


 /*instead*/  System::Boolean Closed() ;


 /*instead*/  Standard_Integer NbPoints() ;


 /*instead*/  OCgp_Pnt2d^ Point(Standard_Integer Index) ;

~OCIntPatch_LPolygoOfTheRstIntOfIntersection()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif