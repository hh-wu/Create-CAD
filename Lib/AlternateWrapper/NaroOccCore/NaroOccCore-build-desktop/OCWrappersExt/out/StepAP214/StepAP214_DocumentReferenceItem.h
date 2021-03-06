// File generated by CPPExt (MPV)
//
#ifndef _StepAP214_DocumentReferenceItem_OCWrappers_HeaderFile
#define _StepAP214_DocumentReferenceItem_OCWrappers_HeaderFile

// include native header
#include <StepAP214_DocumentReferenceItem.hxx>
#include "../Converter.h"

#include "../StepData/StepData_SelectType.h"

#include "../StepData/StepData_SelectType.h"


namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCStepBasic_Approval;
ref class OCStepRepr_DescriptiveRepresentationItem;
ref class OCStepRepr_MaterialDesignation;
ref class OCStepBasic_ProductDefinition;
ref class OCStepBasic_ProductDefinitionRelationship;
ref class OCStepRepr_PropertyDefinition;
ref class OCStepRepr_Representation;
ref class OCStepRepr_ShapeAspect;
ref class OCStepRepr_ShapeAspectRelationship;



public ref class OCStepAP214_DocumentReferenceItem  : public OCStepData_SelectType {

protected:
  // dummy constructor;
  OCStepAP214_DocumentReferenceItem(OCDummy^) : OCStepData_SelectType((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepAP214_DocumentReferenceItem(StepAP214_DocumentReferenceItem* nativeHandle);

// Methods PUBLIC

//! Returns a DocumentReferenceItem SelectType <br>
OCStepAP214_DocumentReferenceItem();

//! Recognizes a DocumentReferenceItem Kind Entity that is : <br>
 /*instead*/  Standard_Integer CaseNum(OCNaroWrappers::OCStandard_Transient^ ent) ;

//! returns Value as a Approval (Null if another type) <br>
 /*instead*/  OCStepBasic_Approval^ Approval() ;

//! returns Value as a  (Null if another type) <br>
 /*instead*/  OCStepRepr_DescriptiveRepresentationItem^ DescriptiveRepresentationItem() ;

//! returns Value as a MaterialDesignation (Null if another type) <br>
 /*instead*/  OCStepRepr_MaterialDesignation^ MaterialDesignation() ;

//! returns Value as a ProductDefinition (Null if another type) <br>
 /*instead*/  OCStepBasic_ProductDefinition^ ProductDefinition() ;

//! returns Value as aProductDefinitionRelationship (Null if another type) <br>
 /*instead*/  OCStepBasic_ProductDefinitionRelationship^ ProductDefinitionRelationship() ;

//! returns Value as a PropertyDefinition (Null if another type) <br>
 /*instead*/  OCStepRepr_PropertyDefinition^ PropertyDefinition() ;

//! returns Value as a Representation (Null if another type) <br>
 /*instead*/  OCStepRepr_Representation^ Representation() ;

//! returns Value as a ShapeAspect (Null if another type) <br>
 /*instead*/  OCStepRepr_ShapeAspect^ ShapeAspect() ;

//! returns Value as a ShapeAspectRelationship (Null if another type) <br>
 /*instead*/  OCStepRepr_ShapeAspectRelationship^ ShapeAspectRelationship() ;

~OCStepAP214_DocumentReferenceItem()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
