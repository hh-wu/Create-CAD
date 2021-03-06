// File generated by CPPExt (CPP file)
//

#include "Select2D_SensitivePoint.h"
#include "../Converter.h"
#include "../SelectBasics/SelectBasics_EntityOwner.h"
#include "../gp/gp_Pnt2d.h"
#include "../SelectBasics/SelectBasics_ListOfBox2d.h"


using namespace OCNaroWrappers;

OCSelect2D_SensitivePoint::OCSelect2D_SensitivePoint(Handle(Select2D_SensitivePoint)* nativeHandle) : OCSelect2D_SensitiveEntity((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Select2D_SensitivePoint(*nativeHandle);
}

OCSelect2D_SensitivePoint::OCSelect2D_SensitivePoint(OCNaroWrappers::OCSelectBasics_EntityOwner^ OwnerId, OCNaroWrappers::OCgp_Pnt2d^ Location, Standard_Real InitSensitivity) : OCSelect2D_SensitiveEntity((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Select2D_SensitivePoint(new Select2D_SensitivePoint(*((Handle_SelectBasics_EntityOwner*)OwnerId->Handle), *((gp_Pnt2d*)Location->Handle), InitSensitivity));
}

 void OCSelect2D_SensitivePoint::Set(Standard_Real aSensitivity)
{
  (*((Handle_Select2D_SensitivePoint*)nativeHandle))->Set(aSensitivity);
}

 void OCSelect2D_SensitivePoint::Areas(OCNaroWrappers::OCSelectBasics_ListOfBox2d^ aresul)
{
  (*((Handle_Select2D_SensitivePoint*)nativeHandle))->Areas(*((SelectBasics_ListOfBox2d*)aresul->Handle));
}

OCgp_Pnt2d^ OCSelect2D_SensitivePoint::Location()
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = (*((Handle_Select2D_SensitivePoint*)nativeHandle))->Location();
  return gcnew OCgp_Pnt2d(tmp);
}

 System::Boolean OCSelect2D_SensitivePoint::Matches(Standard_Real X, Standard_Real Y, Standard_Real aTol, Standard_Real& DMin)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Select2D_SensitivePoint*)nativeHandle))->Matches(X, Y, aTol, DMin));
}

 System::Boolean OCSelect2D_SensitivePoint::Matches(Standard_Real XMin, Standard_Real YMin, Standard_Real XMax, Standard_Real YMax, Standard_Real aTol)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Select2D_SensitivePoint*)nativeHandle))->Matches(XMin, YMin, XMax, YMax, aTol));
}


