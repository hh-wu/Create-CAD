// File generated by CPPExt (CPP file)
//

#include "StepAP214_AutoDesignOrganizationAssignment.h"
#include "../Converter.h"
#include "StepAP214_HArray1OfAutoDesignGeneralOrgItem.h"
#include "../StepBasic/StepBasic_Organization.h"
#include "../StepBasic/StepBasic_OrganizationRole.h"
#include "StepAP214_AutoDesignGeneralOrgItem.h"


using namespace OCNaroWrappers;

OCStepAP214_AutoDesignOrganizationAssignment::OCStepAP214_AutoDesignOrganizationAssignment(Handle(StepAP214_AutoDesignOrganizationAssignment)* nativeHandle) : OCStepBasic_OrganizationAssignment((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepAP214_AutoDesignOrganizationAssignment(*nativeHandle);
}

OCStepAP214_AutoDesignOrganizationAssignment::OCStepAP214_AutoDesignOrganizationAssignment() : OCStepBasic_OrganizationAssignment((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepAP214_AutoDesignOrganizationAssignment(new StepAP214_AutoDesignOrganizationAssignment());
}

 void OCStepAP214_AutoDesignOrganizationAssignment::Init(OCNaroWrappers::OCStepBasic_Organization^ aAssignedOrganization, OCNaroWrappers::OCStepBasic_OrganizationRole^ aRole)
{
  (*((Handle_StepAP214_AutoDesignOrganizationAssignment*)nativeHandle))->Init(*((Handle_StepBasic_Organization*)aAssignedOrganization->Handle), *((Handle_StepBasic_OrganizationRole*)aRole->Handle));
}

 void OCStepAP214_AutoDesignOrganizationAssignment::Init(OCNaroWrappers::OCStepBasic_Organization^ aAssignedOrganization, OCNaroWrappers::OCStepBasic_OrganizationRole^ aRole, OCNaroWrappers::OCStepAP214_HArray1OfAutoDesignGeneralOrgItem^ aItems)
{
  (*((Handle_StepAP214_AutoDesignOrganizationAssignment*)nativeHandle))->Init(*((Handle_StepBasic_Organization*)aAssignedOrganization->Handle), *((Handle_StepBasic_OrganizationRole*)aRole->Handle), *((Handle_StepAP214_HArray1OfAutoDesignGeneralOrgItem*)aItems->Handle));
}

 void OCStepAP214_AutoDesignOrganizationAssignment::SetItems(OCNaroWrappers::OCStepAP214_HArray1OfAutoDesignGeneralOrgItem^ aItems)
{
  (*((Handle_StepAP214_AutoDesignOrganizationAssignment*)nativeHandle))->SetItems(*((Handle_StepAP214_HArray1OfAutoDesignGeneralOrgItem*)aItems->Handle));
}

OCStepAP214_HArray1OfAutoDesignGeneralOrgItem^ OCStepAP214_AutoDesignOrganizationAssignment::Items()
{
  Handle(StepAP214_HArray1OfAutoDesignGeneralOrgItem) tmp = (*((Handle_StepAP214_AutoDesignOrganizationAssignment*)nativeHandle))->Items();
  return gcnew OCStepAP214_HArray1OfAutoDesignGeneralOrgItem(&tmp);
}

OCStepAP214_AutoDesignGeneralOrgItem^ OCStepAP214_AutoDesignOrganizationAssignment::ItemsValue(Standard_Integer num)
{
  StepAP214_AutoDesignGeneralOrgItem* tmp = new StepAP214_AutoDesignGeneralOrgItem();
  *tmp = (*((Handle_StepAP214_AutoDesignOrganizationAssignment*)nativeHandle))->ItemsValue(num);
  return gcnew OCStepAP214_AutoDesignGeneralOrgItem(tmp);
}

 Standard_Integer OCStepAP214_AutoDesignOrganizationAssignment::NbItems()
{
  return (*((Handle_StepAP214_AutoDesignOrganizationAssignment*)nativeHandle))->NbItems();
}


