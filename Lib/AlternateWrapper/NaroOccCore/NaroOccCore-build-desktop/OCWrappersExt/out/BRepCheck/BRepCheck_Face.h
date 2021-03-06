// File generated by CPPExt (Transient)
//
#ifndef _BRepCheck_Face_OCWrappers_HeaderFile
#define _BRepCheck_Face_OCWrappers_HeaderFile

// include the wrapped class
#include <BRepCheck_Face.hxx>
#include "../Converter.h"

#include "BRepCheck_Result.h"

#include "BRepCheck_Status.h"
#include "../TopTools/TopTools_DataMapOfShapeListOfShape.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Face;
ref class OCTopoDS_Shape;



public ref class OCBRepCheck_Face : OCBRepCheck_Result {

protected:
  // dummy constructor;
  OCBRepCheck_Face(OCDummy^) : OCBRepCheck_Result((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepCheck_Face(Handle(BRepCheck_Face)* nativeHandle);

// Methods PUBLIC


OCBRepCheck_Face(OCNaroWrappers::OCTopoDS_Face^ F);


 /*instead*/  void InContext(OCNaroWrappers::OCTopoDS_Shape^ ContextShape) ;


 /*instead*/  void Minimum() ;


 /*instead*/  void Blind() ;


 /*instead*/  OCBRepCheck_Status IntersectWires(System::Boolean Update) ;


 /*instead*/  OCBRepCheck_Status ClassifyWires(System::Boolean Update) ;


 /*instead*/  OCBRepCheck_Status OrientationOfWires(System::Boolean Update) ;


 /*instead*/  void SetUnorientable() ;


 /*instead*/  System::Boolean IsUnorientable() ;


 /*instead*/  System::Boolean GeometricControls() ;


 /*instead*/  void GeometricControls(System::Boolean B) ;

~OCBRepCheck_Face()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
