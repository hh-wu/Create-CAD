// File generated by CPPExt (Package)
//

#ifndef _TransferBRep_OCWrappers_HeaderFile
#define _TransferBRep_OCWrappers_HeaderFile

// Include the wrapped header
#include <TransferBRep.hxx>

#include "TransferBRep_Reader.h"
#include "TransferBRep_ShapeInfo.h"
#include "TransferBRep_BinderOfShape.h"
#include "TransferBRep_ShapeBinder.h"
#include "TransferBRep_ShapeListBinder.h"
#include "TransferBRep_ShapeMapper.h"
#include "TransferBRep_OrientedShapeMapper.h"
#include "TransferBRep_TransferResultInfo.h"
#include "TransferBRep_SequenceOfTransferResultInfo.h"
#include "TransferBRep_HSequenceOfTransferResultInfo.h"
#include "TransferBRep_SequenceNodeOfSequenceOfTransferResultInfo.h"


namespace OCNaroWrappers
{
//! This package gathers services to simply read files and convert <br>
//!           them to Shapes from CasCade. IE. it can be used in conjunction <br>
//!           with purely CasCade software <br>
public ref class OCTransferBRep abstract sealed
{

public:
// Methods

//! Get the Shape recorded in a Binder <br>
//!           If the Binder brings a multiple result, search for the Shape <br>
static /*instead*/  OCTopoDS_Shape^ ShapeResult(OCNaroWrappers::OCTransfer_Binder^ binder) ;

//! Get the Shape recorded in a TransientProcess as result of the <br>
//!           Transfer of an entity. I.E. in the binder bound to that Entity <br>
//!           If no result or result not a single Shape, returns a Null Shape <br>
static /*instead*/  OCTopoDS_Shape^ ShapeResult(OCNaroWrappers::OCTransfer_TransientProcess^ TP, OCNaroWrappers::OCStandard_Transient^ ent) ;

//! Sets a Shape as a result for a starting entity <ent> <br>
//!           (reverse of ShapeResult) <br>
//!           It simply creates a ShapeBinder then binds it to the entity <br>
static /*instead*/  void SetShapeResult(OCNaroWrappers::OCTransfer_TransientProcess^ TP, OCNaroWrappers::OCStandard_Transient^ ent, OCNaroWrappers::OCTopoDS_Shape^ result) ;

//! Gets the Shapes recorded in a TransientProcess as result of a <br>
//!           Transfer, considers roots only or all results according <br>
//!           <rootsonly>, returns them as a HSequence <br>
static /*instead*/  OCTopTools_HSequenceOfShape^ Shapes(OCNaroWrappers::OCTransfer_TransientProcess^ TP, System::Boolean rootsonly) ;

//! Gets the Shapes recorded in a TransientProcess as result of a <br>
//!           Transfer, for a given list of starting entities, returns <br>
//!           the shapes as a HSequence <br>
static /*instead*/  OCTopTools_HSequenceOfShape^ Shapes(OCNaroWrappers::OCTransfer_TransientProcess^ TP, OCNaroWrappers::OCTColStd_HSequenceOfTransient^ list) ;

//! Returns a Status regarding a Shape in a FinderProcess <br>
//!           - FORWARD means bound with SAME Orientation <br>
//!           - REVERSED means bound with REVERSE Orientation <br>
//!           - EXTERNAL means NOT BOUND <br>
//!           - INTERNAL is not used <br>
static /*instead*/  OCTopAbs_Orientation ShapeState(OCNaroWrappers::OCTransfer_FinderProcess^ FP, OCNaroWrappers::OCTopoDS_Shape^ shape) ;

//! Returns the result (as a Binder) attached to a given Shape <br>
//!           Null if none <br>
static /*instead*/  OCTransfer_Binder^ ResultFromShape(OCNaroWrappers::OCTransfer_FinderProcess^ FP, OCNaroWrappers::OCTopoDS_Shape^ shape) ;

//! Returns the result as pure Transient attached to a Shape <br>
//!           first one if multiple result <br>
static /*instead*/  OCStandard_Transient^ TransientFromShape(OCNaroWrappers::OCTransfer_FinderProcess^ FP, OCNaroWrappers::OCTopoDS_Shape^ shape) ;

//! Binds a Transient Result to a Shape in a FinderProcess <br>
//!           (as first result if multiple : does not add it to existing one) <br>
static /*instead*/  void SetTransientFromShape(OCNaroWrappers::OCTransfer_FinderProcess^ FP, OCNaroWrappers::OCTopoDS_Shape^ shape, OCNaroWrappers::OCStandard_Transient^ result) ;

//! Returns a ShapeMapper for a given Shape (location included) <br>
//!           Either <shape> is already mapped, then its Mapper is returned <br>
//!           Or it is not, then a new one is created then returned, BUT <br>
//!             it is not mapped here (use Bind or FindElseBind to do this) <br>
static /*instead*/  OCTransferBRep_ShapeMapper^ ShapeMapper(OCNaroWrappers::OCTransfer_FinderProcess^ FP, OCNaroWrappers::OCTopoDS_Shape^ shape) ;

//! Fills sequence of TransferResultInfo for each type of entity <br>
//!          given in the EntityTypes (entity are given as objects). <br>
//!          Method IsKind applied to the entities in TP is used to <br>
//!          compare with entities in EntityTypes. <br>
//!          TopAbs_ShapeEnum). <br>
static /*instead*/  void TransferResultInfo(OCNaroWrappers::OCTransfer_TransientProcess^ TP, OCNaroWrappers::OCTColStd_HSequenceOfTransient^ EntityTypes, OCNaroWrappers::OCTransferBRep_HSequenceOfTransferResultInfo^ InfoSeq) ;

//! Fills sequence of TransferResultInfo for each type of shape <br>
//!          given in the ShapeTypes (which are in fact considered as <br>
//!          TopAbs_ShapeEnum). <br>
//!          The Finders in the FP are considered as ShapeMappers. <br>
static /*instead*/  void TransferResultInfo(OCNaroWrappers::OCTransfer_FinderProcess^ FP, OCNaroWrappers::OCTColStd_HSequenceOfInteger^ ShapeTypes, OCNaroWrappers::OCTransferBRep_HSequenceOfTransferResultInfo^ InfoSeq) ;

//! Prints the results of transfer to given priner with given header. <br>
static /*instead*/  void PrintResultInfo(OCNaroWrappers::OCMessage_Printer^ Printer, OCNaroWrappers::OCMessage_Msg^ Header, OCNaroWrappers::OCTransferBRep_TransferResultInfo^ ResultInfo, System::Boolean printEmpty) ;

//! Performs a heavy check by calling the Analyser from BRepCheck <br>
//!           This tool computes a lot of informations about integrity of a <br>
//!           Shape. This method uses it and converts its internal result <br>
//!           to a classic check-list. <br>
//!           <lev> allows to get more informations : <br>
//!            0 : BRepCheck only <br>
//!            1(D) + Curves/Surfaces not C0  ;  2 + SameParameter on Edges <br>
//!  Warning : entities to which checks are bound are the Shapes themselves, <br>
//!           embedded in ShapeMapper <br>
static /*instead*/  OCInterface_CheckIterator^ BRepCheck(OCNaroWrappers::OCTopoDS_Shape^ shape, Standard_Integer lev) ;

//! Takes a starting CheckIterator which brings checks bound with <br>
//!           starting objects (Shapes, Transient from an Imagine appli ...) <br>
//!           and converts it to a CheckIterator in which checks are bound <br>
//!           with results in an InterfaceModel <br>
//!           Mapping is recorded in the FinderProcess <br>
//!           Starting objects for which no individual result is recorded <br>
//!           remain in their state <br>
static /*instead*/  OCInterface_CheckIterator^ ResultCheckList(OCNaroWrappers::OCInterface_CheckIterator^ chl, OCNaroWrappers::OCTransfer_FinderProcess^ FP, OCNaroWrappers::OCInterface_InterfaceModel^ model) ;

//! Returns the list of objects to which a non-empty Check is <br>
//!           bound in a check-list. Objects are transients, they can then <br>
//!           be either Imagine objects entities for an Interface Norm. <br>
//!           <alsoshapes> commands Shapes to be returned too <br>
//!           (as ShapeMapper), see also CheckedShapes <br>
static /*instead*/  OCTColStd_HSequenceOfTransient^ Checked(OCNaroWrappers::OCInterface_CheckIterator^ chl, System::Boolean alsoshapes) ;

//! Returns the list of shapes to which a non-empty Check is bound <br>
//!           in a check-list <br>
static /*instead*/  OCTopTools_HSequenceOfShape^ CheckedShapes(OCNaroWrappers::OCInterface_CheckIterator^ chl) ;

//! Returns the check-list bound to a given object, generally none <br>
//!           (if OK) or one check. <obj> can be, either a true Transient <br>
//!           object or entity, or a ShapeMapper, in that case the Shape is <br>
//!           considered <br>
static /*instead*/  OCInterface_CheckIterator^ CheckObject(OCNaroWrappers::OCInterface_CheckIterator^ chl, OCNaroWrappers::OCStandard_Transient^ obj) ;


};

}; // OCNaroWrappers

#endif
