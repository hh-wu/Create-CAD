// File generated by CPPExt (CPP file)
//

#include "Quantity_Period.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCQuantity_Period::OCQuantity_Period(Quantity_Period* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCQuantity_Period::OCQuantity_Period(Standard_Integer dd, Standard_Integer hh, Standard_Integer mn, Standard_Integer ss, Standard_Integer mis, Standard_Integer mics) 
{
  nativeHandle = new Quantity_Period(dd, hh, mn, ss, mis, mics);
}

OCQuantity_Period::OCQuantity_Period(Standard_Integer ss, Standard_Integer mics) 
{
  nativeHandle = new Quantity_Period(ss, mics);
}

 void OCQuantity_Period::Values(Standard_Integer& dd, Standard_Integer& hh, Standard_Integer& mn, Standard_Integer& ss, Standard_Integer& mis, Standard_Integer& mics)
{
  ((Quantity_Period*)nativeHandle)->Values(dd, hh, mn, ss, mis, mics);
}

 void OCQuantity_Period::Values(Standard_Integer& ss, Standard_Integer& mics)
{
  ((Quantity_Period*)nativeHandle)->Values(ss, mics);
}

 void OCQuantity_Period::SetValues(Standard_Integer dd, Standard_Integer hh, Standard_Integer mn, Standard_Integer ss, Standard_Integer mis, Standard_Integer mics)
{
  ((Quantity_Period*)nativeHandle)->SetValues(dd, hh, mn, ss, mis, mics);
}

 void OCQuantity_Period::SetValues(Standard_Integer ss, Standard_Integer mics)
{
  ((Quantity_Period*)nativeHandle)->SetValues(ss, mics);
}

OCQuantity_Period^ OCQuantity_Period::Subtract(OCNaroWrappers::OCQuantity_Period^ anOther)
{
  Quantity_Period* tmp = new Quantity_Period(0, 0, 0, 0, 0, 0);
  *tmp = ((Quantity_Period*)nativeHandle)->Subtract(*((Quantity_Period*)anOther->Handle));
  return gcnew OCQuantity_Period(tmp);
}

OCQuantity_Period^ OCQuantity_Period::Add(OCNaroWrappers::OCQuantity_Period^ anOther)
{
  Quantity_Period* tmp = new Quantity_Period(0, 0, 0, 0, 0, 0);
  *tmp = ((Quantity_Period*)nativeHandle)->Add(*((Quantity_Period*)anOther->Handle));
  return gcnew OCQuantity_Period(tmp);
}

 System::Boolean OCQuantity_Period::IsEqual(OCNaroWrappers::OCQuantity_Period^ anOther)
{
  return OCConverter::StandardBooleanToBoolean(((Quantity_Period*)nativeHandle)->IsEqual(*((Quantity_Period*)anOther->Handle)));
}

 System::Boolean OCQuantity_Period::IsShorter(OCNaroWrappers::OCQuantity_Period^ anOther)
{
  return OCConverter::StandardBooleanToBoolean(((Quantity_Period*)nativeHandle)->IsShorter(*((Quantity_Period*)anOther->Handle)));
}

 System::Boolean OCQuantity_Period::IsLonger(OCNaroWrappers::OCQuantity_Period^ anOther)
{
  return OCConverter::StandardBooleanToBoolean(((Quantity_Period*)nativeHandle)->IsLonger(*((Quantity_Period*)anOther->Handle)));
}

 System::Boolean OCQuantity_Period::IsValid(Standard_Integer dd, Standard_Integer hh, Standard_Integer mn, Standard_Integer ss, Standard_Integer mis, Standard_Integer mics)
{
  return OCConverter::StandardBooleanToBoolean(Quantity_Period::IsValid(dd, hh, mn, ss, mis, mics));
}

 System::Boolean OCQuantity_Period::IsValid(Standard_Integer ss, Standard_Integer mics)
{
  return OCConverter::StandardBooleanToBoolean(Quantity_Period::IsValid(ss, mics));
}


