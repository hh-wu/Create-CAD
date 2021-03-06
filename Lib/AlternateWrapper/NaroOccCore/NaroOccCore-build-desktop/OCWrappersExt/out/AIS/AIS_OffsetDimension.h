// File generated by CPPExt (Transient)
//
#ifndef _AIS_OffsetDimension_OCWrappers_HeaderFile
#define _AIS_OffsetDimension_OCWrappers_HeaderFile

// include the wrapped class
#include <AIS_OffsetDimension.hxx>
#include "../Converter.h"

#include "AIS_Relation.h"

#include "../gp/gp_Pnt.h"
#include "../gp/gp_Dir.h"
#include "../gp/gp_Trsf.h"
#include "AIS_KindOfDimension.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTCollection_ExtendedString;
ref class OCPrsMgr_PresentationManager3d;
ref class OCPrs3d_Presentation;
ref class OCPrs3d_Projector;
ref class OCPrsMgr_PresentationManager2d;
ref class OCGraphic2d_GraphicObject;
ref class OCGeom_Transformation;
ref class OCSelectMgr_Selection;
ref class OCgp_Trsf;


//! A framework to display dimensions of offsets. <br>
//! The relation between the offset and the basis shape <br>
//! is indicated. This relation is displayed with arrows and <br>
//! text. The text gives the dsitance between the offset <br>
//! and the basis shape. <br>
public ref class OCAIS_OffsetDimension : OCAIS_Relation {

protected:
  // dummy constructor;
  OCAIS_OffsetDimension(OCDummy^) : OCAIS_Relation((OCDummy^)nullptr) {};

public:

// constructor from native
OCAIS_OffsetDimension(Handle(AIS_OffsetDimension)* nativeHandle);

// Methods PUBLIC

//! Constructs the offset display object defined by the <br>
//! first shape aFShape, the second shape aSShape, the <br>
//! dimension aVal, and the text aText. <br>
OCAIS_OffsetDimension(OCNaroWrappers::OCTopoDS_Shape^ FistShape, OCNaroWrappers::OCTopoDS_Shape^ SecondShape, Standard_Real aVal, OCNaroWrappers::OCTCollection_ExtendedString^ aText);

//! computes the presentation according to a point of view <br>
//!          given by <aProjector>. <br>
//!          To be Used when the associated degenerated Presentations <br>
//!          have been transformed by <aTrsf> which is not a Pure <br>
//!          Translation. The HLR Prs can't be deducted automatically <br>
//!          WARNING :<aTrsf> must be applied <br>
//!           to the object to display before computation  !!! <br>
virtual /*instead*/  void Compute(OCNaroWrappers::OCPrs3d_Projector^ aProjector, OCNaroWrappers::OCGeom_Transformation^ aTrsf, OCNaroWrappers::OCPrs3d_Presentation^ aPresentation) override;


//! Indicates that the dimension we are concerned with is an offset. <br>
virtual /*instead*/  OCAIS_KindOfDimension KindOfDimension() override;

//! Returns true if the offset datum is movable. <br>
virtual /*instead*/  System::Boolean IsMovable() override;

//! Sets a transformation aTrsf for presentation and <br>
//! selection to a relative position. <br>
 /*instead*/  void SetRelativePos(OCNaroWrappers::OCgp_Trsf^ aTrsf) ;

~OCAIS_OffsetDimension()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
