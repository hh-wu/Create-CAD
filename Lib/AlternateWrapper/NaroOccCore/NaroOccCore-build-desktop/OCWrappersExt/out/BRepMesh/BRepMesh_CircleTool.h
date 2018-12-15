// File generated by CPPExt (MPV)
//
#ifndef _BRepMesh_CircleTool_OCWrappers_HeaderFile
#define _BRepMesh_CircleTool_OCWrappers_HeaderFile

// include native header
#include <BRepMesh_CircleTool.hxx>
#include "../Converter.h"


#include "../gp/gp_XY.h"


namespace OCNaroWrappers
{

ref class OCgp_XY;
ref class OCgp_Circ2d;


//! Create sort   and  destroy the  circles    used in <br>
//!          triangulation. <br>
public ref class OCBRepMesh_CircleTool  {

protected:
  BRepMesh_CircleTool* nativeHandle;
  OCBRepMesh_CircleTool(OCDummy^) {};

public:
  property BRepMesh_CircleTool* Handle
  {
    BRepMesh_CircleTool* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepMesh_CircleTool(BRepMesh_CircleTool* nativeHandle);

// Methods PUBLIC


OCBRepMesh_CircleTool(BRepMesh_BaseAllocator theAlloc);

//! Constructs a CircleTool with the maximal dimension <br>
//!          of  the occuped  space and  an  evaluation of  the <br>
//!          number of circles. <br>
OCBRepMesh_CircleTool(Standard_Integer numberOfComponents, BRepMesh_BaseAllocator theAlloc);

//! Constructs a CircleTool with the maximal dimension <br>
//!          of  the occuped  space and  an  evaluation of  the <br>
//!          number of circles. <br>
 /*instead*/  void Initialize(Standard_Integer numberOfComponents) ;

//! Sets new size for cellfilter <br>
 /*instead*/  void SetCellSize(Standard_Real theSize) ;

//! Sets new size for cellfilter <br>
 /*instead*/  void SetCellSize(Standard_Real theXSize, Standard_Real theYSize) ;

//! Sets min and max size for circle <br>
 /*instead*/  void SetMinMaxSize(OCNaroWrappers::OCgp_XY^ theMin, OCNaroWrappers::OCgp_XY^ theMax) ;

//! Adds and binds circle to the tool. <br>
 /*instead*/  void Add(OCNaroWrappers::OCgp_Circ2d^ theCirc, Standard_Integer theIndex) ;

//! Computes adds and binds circle to the tool. <br>
 /*instead*/  System::Boolean Add(OCNaroWrappers::OCgp_XY^ p1, OCNaroWrappers::OCgp_XY^ p2, OCNaroWrappers::OCgp_XY^ p3, Standard_Integer theIndex) ;

//! Adds implicit zero circle <br>
 /*instead*/  void MocAdd(Standard_Integer theIndex) ;

//! Deletes a circle from the tool. <br>
 /*instead*/  void Delete(Standard_Integer theIndex) ;

//! Select the circles which contains thePnt. <br>
 /*instead*/  BRepMesh_ListOfInteger& Select(OCNaroWrappers::OCgp_XY^ thePnt) ;

~OCBRepMesh_CircleTool()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif