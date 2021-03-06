// File generated by CPPExt (Transient)
//
#ifndef _AIS_ConcentricRelation_OCWrappers_HeaderFile
#define _AIS_ConcentricRelation_OCWrappers_HeaderFile

// include the wrapped class
#include <AIS_ConcentricRelation.hxx>
#include "../Converter.h"

#include "AIS_Relation.h"

#include "../gp/gp_Pnt.h"
#include "../gp/gp_Dir.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCGeom_Plane;
ref class OCPrsMgr_PresentationManager3d;
ref class OCPrs3d_Presentation;
ref class OCPrs3d_Projector;
ref class OCPrsMgr_PresentationManager2d;
ref class OCGraphic2d_GraphicObject;
ref class OCGeom_Transformation;
ref class OCSelectMgr_Selection;


//! A framework to define a constraint by a relation of <br>
//! concentricity between two or more interactive datums. <br>
//! The display of this constraint is also defined. <br>
//! A plane is used to create an axis along which the <br>
//! relation of concentricity can be extended. <br>
public ref class OCAIS_ConcentricRelation : OCAIS_Relation {

protected:
  // dummy constructor;
  OCAIS_ConcentricRelation(OCDummy^) : OCAIS_Relation((OCDummy^)nullptr) {};

public:

// constructor from native
OCAIS_ConcentricRelation(Handle(AIS_ConcentricRelation)* nativeHandle);

// Methods PUBLIC

//! Constructs the display object for concentric relations <br>
//! between shapes. <br>
//! This object is defined by the two shapes, aFShape <br>
//! and aSShape and the plane aPlane. <br>
//! aPlane is provided to create an axis along which the <br>
//! relation of concentricity can be extended. <br>
OCAIS_ConcentricRelation(OCNaroWrappers::OCTopoDS_Shape^ aFShape, OCNaroWrappers::OCTopoDS_Shape^ aSShape, OCNaroWrappers::OCGeom_Plane^ aPlane);

//! computes the presentation according to a point of view <br>
//!          given by <aProjector>. <br>
//!          To be Used when the associated degenerated Presentations <br>
//!          have been transformed by <aTrsf> which is not a Pure <br>
//!          Translation. The HLR Prs can't be deducted automatically <br>
//!          WARNING :<aTrsf> must be applied <br>
//!           to the object to display before computation  !!! <br>
virtual /*instead*/  void Compute(OCNaroWrappers::OCPrs3d_Projector^ aProjector, OCNaroWrappers::OCGeom_Transformation^ aTrsf, OCNaroWrappers::OCPrs3d_Presentation^ aPresentation) override;

~OCAIS_ConcentricRelation()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
