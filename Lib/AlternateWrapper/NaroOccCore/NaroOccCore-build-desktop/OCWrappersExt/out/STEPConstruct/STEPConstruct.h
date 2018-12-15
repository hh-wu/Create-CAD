// File generated by CPPExt (Package)
//

#ifndef _STEPConstruct_OCWrappers_HeaderFile
#define _STEPConstruct_OCWrappers_HeaderFile

// Include the wrapped header
#include <STEPConstruct.hxx>

#include "STEPConstruct_Tool.h"
#include "STEPConstruct_UnitContext.h"
#include "STEPConstruct_Part.h"
#include "STEPConstruct_Assembly.h"
#include "STEPConstruct_Styles.h"
#include "STEPConstruct_ValidationProps.h"
#include "STEPConstruct_ExternRefs.h"
#include "STEPConstruct_AP203Context.h"
#include "STEPConstruct_ContextTool.h"
#include "STEPConstruct_DataMapOfAsciiStringTransient.h"
#include "STEPConstruct_PointHasher.h"
#include "STEPConstruct_DataMapOfPointTransient.h"
#include "STEPConstruct_DataMapNodeOfDataMapOfAsciiStringTransient.h"
#include "STEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient.h"
#include "STEPConstruct_DataMapNodeOfDataMapOfPointTransient.h"
#include "STEPConstruct_DataMapIteratorOfDataMapOfPointTransient.h"


namespace OCNaroWrappers
{
//! Defines tools for creation and investigation STEP constructs <br>
//!          used for representing various kinds of data, such as product and <br>
//!          assembly structure, unit contexts, associated information <br>
//!          The creation of these structures is made according to currently <br>
//!          active schema (AP203 or AP214 CD2 or DIS) <br>
//!          This is taken from parameter write.step.schema <br>
public ref class OCSTEPConstruct abstract sealed
{

public:
// Methods

//! Returns STEP entity of the (sub)type of RepresentationItem <br>
//!          which is a result of the tranalation of the Shape, or Null if <br>
//!          no result is recorded <br>
static /*instead*/  OCStepRepr_RepresentationItem^ FindEntity(OCNaroWrappers::OCTransfer_FinderProcess^ FinderProcess, OCNaroWrappers::OCTopoDS_Shape^ Shape) ;

//! The same as above, but in the case if item not found, repeats <br>
//!          search on the same shape without location. The Loc corresponds to the <br>
//!          location with which result is found (either location of the Shape, <br>
//!          or Null) <br>
static /*instead*/  OCStepRepr_RepresentationItem^ FindEntity(OCNaroWrappers::OCTransfer_FinderProcess^ FinderProcess, OCNaroWrappers::OCTopoDS_Shape^ Shape, OCNaroWrappers::OCTopLoc_Location^ Loc) ;

//! Returns Shape resulting from given STEP entity (Null if not mapped) <br>
static /*instead*/  OCTopoDS_Shape^ FindShape(OCNaroWrappers::OCTransfer_TransientProcess^ TransientProcess, OCNaroWrappers::OCStepRepr_RepresentationItem^ item) ;

//! Find CDSR correcponding to the component in the specified assembly <br>
static /*instead*/  System::Boolean FindCDSR(OCNaroWrappers::OCTransfer_Binder^ ComponentBinder, OCNaroWrappers::OCStepShape_ShapeDefinitionRepresentation^ AssemblySDR, OCNaroWrappers::OCStepShape_ContextDependentShapeRepresentation^ ComponentCDSR) ;


};

}; // OCNaroWrappers

#endif