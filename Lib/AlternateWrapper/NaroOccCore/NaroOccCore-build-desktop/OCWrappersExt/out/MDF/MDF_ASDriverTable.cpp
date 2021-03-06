// File generated by CPPExt (CPP file)
//

#include "MDF_ASDriverTable.h"
#include "../Converter.h"
#include "MDF_ASDriver.h"
#include "MDF_ASDriverHSequence.h"
#include "MDF_TypeASDriverMap.h"
#include "MDF_DriverListOfASDriverTable.h"
#include "MDF_ListNodeOfDriverListOfASDriverTable.h"
#include "MDF_ListIteratorOfDriverListOfASDriverTable.h"
#include "MDF_TypeDriverListMapOfASDriverTable.h"
#include "MDF_DataMapNodeOfTypeDriverListMapOfASDriverTable.h"
#include "MDF_DataMapIteratorOfTypeDriverListMapOfASDriverTable.h"
#include "../Standard/Standard_Type.h"


using namespace OCNaroWrappers;

OCMDF_ASDriverTable::OCMDF_ASDriverTable(Handle(MDF_ASDriverTable)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_MDF_ASDriverTable(*nativeHandle);
}

OCMDF_ASDriverTable::OCMDF_ASDriverTable() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_MDF_ASDriverTable(new MDF_ASDriverTable());
}

 void OCMDF_ASDriverTable::SetDriver(OCNaroWrappers::OCMDF_ASDriver^ anHDriver)
{
  (*((Handle_MDF_ASDriverTable*)nativeHandle))->SetDriver(*((Handle_MDF_ASDriver*)anHDriver->Handle));
}

 void OCMDF_ASDriverTable::SetDrivers(OCNaroWrappers::OCMDF_ASDriverHSequence^ aDriverHSeq)
{
  (*((Handle_MDF_ASDriverTable*)nativeHandle))->SetDrivers(*((Handle_MDF_ASDriverHSequence*)aDriverHSeq->Handle));
}

OCMDF_TypeASDriverMap^ OCMDF_ASDriverTable::GetDrivers(Standard_Integer aVersion)
{
  MDF_TypeASDriverMap* tmp = new MDF_TypeASDriverMap(0);
  *tmp = (*((Handle_MDF_ASDriverTable*)nativeHandle))->GetDrivers(aVersion);
  return gcnew OCMDF_TypeASDriverMap(tmp);
}

 System::Boolean OCMDF_ASDriverTable::GetDriver(OCNaroWrappers::OCStandard_Type^ aType, OCNaroWrappers::OCMDF_ASDriver^ anHDriver, Standard_Integer aVersion)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_MDF_ASDriverTable*)nativeHandle))->GetDriver(*((Handle_Standard_Type*)aType->Handle), *((Handle_MDF_ASDriver*)anHDriver->Handle), aVersion));
}


