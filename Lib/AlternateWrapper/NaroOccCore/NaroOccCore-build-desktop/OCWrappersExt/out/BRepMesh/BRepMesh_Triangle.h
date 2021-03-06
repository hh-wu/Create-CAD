// File generated by CPPExt (MPV)
//
#ifndef _BRepMesh_Triangle_OCWrappers_HeaderFile
#define _BRepMesh_Triangle_OCWrappers_HeaderFile

// include native header
#include <BRepMesh_Triangle.hxx>
#include "../Converter.h"


#include "BRepMesh_DegreeOfFreedom.h"


namespace OCNaroWrappers
{




public ref class OCBRepMesh_Triangle  {

protected:
  BRepMesh_Triangle* nativeHandle;
  OCBRepMesh_Triangle(OCDummy^) {};

public:
  property BRepMesh_Triangle* Handle
  {
    BRepMesh_Triangle* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepMesh_Triangle(BRepMesh_Triangle* nativeHandle);

// Methods PUBLIC


OCBRepMesh_Triangle();


OCBRepMesh_Triangle(Standard_Integer e1, Standard_Integer e2, Standard_Integer e3, System::Boolean o1, System::Boolean o2, System::Boolean o3, OCBRepMesh_DegreeOfFreedom canMove);


 /*instead*/  void Initialize(Standard_Integer e1, Standard_Integer e2, Standard_Integer e3, System::Boolean o1, System::Boolean o2, System::Boolean o3, OCBRepMesh_DegreeOfFreedom canMove) ;


 /*instead*/  void Edges(Standard_Integer& e1, Standard_Integer& e2, Standard_Integer& e3, System::Boolean& o1, System::Boolean& o2, System::Boolean& o3) ;


 /*instead*/  OCBRepMesh_DegreeOfFreedom Movability() ;


 /*instead*/  void SetMovability(OCBRepMesh_DegreeOfFreedom Move) ;


 /*instead*/  Standard_Integer HashCode(Standard_Integer Upper) ;


 /*instead*/  System::Boolean IsEqual(OCNaroWrappers::OCBRepMesh_Triangle^ Other) ;

~OCBRepMesh_Triangle()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
