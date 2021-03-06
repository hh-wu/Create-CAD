// File generated by CPPExt (Package)
//

#ifndef _BRepClass3d_OCWrappers_HeaderFile
#define _BRepClass3d_OCWrappers_HeaderFile

// Include the wrapped header
#include <BRepClass3d.hxx>

#include "BRepClass3d_Intersector3d.h"
#include "BRepClass3d_MapOfInter.h"
#include "BRepClass3d_SolidExplorer.h"
#include "BRepClass3d_SolidPassiveClassifier.h"
#include "BRepClass3d_SClassifier.h"
#include "BRepClass3d_SolidClassifier.h"
#include "BRepClass3d_DataMapNodeOfMapOfInter.h"
#include "BRepClass3d_DataMapIteratorOfMapOfInter.h"


namespace OCNaroWrappers
{

public ref class OCBRepClass3d abstract sealed
{

public:
// Methods

//! Returns the outer most shell of <S>. Returns a Null <br>
//!          shell if <S> has no outer shell. <br>
static /*instead*/  OCTopoDS_Shell^ OuterShell(OCNaroWrappers::OCTopoDS_Solid^ S) ;


};

}; // OCNaroWrappers

#endif
