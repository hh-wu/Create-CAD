// File generated by CPPExt (CPP file)
//

#include "Quantity_Color.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCQuantity_Color::OCQuantity_Color(Quantity_Color* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCQuantity_Color::OCQuantity_Color() 
{
  nativeHandle = new Quantity_Color();
}

OCQuantity_Color::OCQuantity_Color(OCQuantity_NameOfColor AName) 
{
  nativeHandle = new Quantity_Color((Quantity_NameOfColor)AName);
}

OCQuantity_Color::OCQuantity_Color(Quantity_Parameter R1, Quantity_Parameter R2, Quantity_Parameter R3, OCQuantity_TypeOfColor AType) 
{
  nativeHandle = new Quantity_Color(R1, R2, R3, (Quantity_TypeOfColor)AType);
}

OCQuantity_Color^ OCQuantity_Color::Assign(OCNaroWrappers::OCQuantity_Color^ Other)
{
  Quantity_Color* tmp = new Quantity_Color();
  *tmp = ((Quantity_Color*)nativeHandle)->Assign(*((Quantity_Color*)Other->Handle));
  return gcnew OCQuantity_Color(tmp);
}

 void OCQuantity_Color::ChangeContrast(Quantity_Rate ADelta)
{
  ((Quantity_Color*)nativeHandle)->ChangeContrast(ADelta);
}

 void OCQuantity_Color::ChangeIntensity(Quantity_Rate ADelta)
{
  ((Quantity_Color*)nativeHandle)->ChangeIntensity(ADelta);
}

 void OCQuantity_Color::SetValues(OCQuantity_NameOfColor AName)
{
  ((Quantity_Color*)nativeHandle)->SetValues((Quantity_NameOfColor)AName);
}

 void OCQuantity_Color::SetValues(Quantity_Parameter R1, Quantity_Parameter R2, Quantity_Parameter R3, OCQuantity_TypeOfColor AType)
{
  ((Quantity_Color*)nativeHandle)->SetValues(R1, R2, R3, (Quantity_TypeOfColor)AType);
}

 void OCQuantity_Color::Delta(OCNaroWrappers::OCQuantity_Color^ AColor, Quantity_Parameter& DC, Quantity_Parameter& DI)
{
  ((Quantity_Color*)nativeHandle)->Delta(*((Quantity_Color*)AColor->Handle), DC, DI);
}

 Standard_Real OCQuantity_Color::Distance(OCNaroWrappers::OCQuantity_Color^ AColor)
{
  return ((Quantity_Color*)nativeHandle)->Distance(*((Quantity_Color*)AColor->Handle));
}

 Standard_Real OCQuantity_Color::SquareDistance(OCNaroWrappers::OCQuantity_Color^ AColor)
{
  return ((Quantity_Color*)nativeHandle)->SquareDistance(*((Quantity_Color*)AColor->Handle));
}

 Quantity_Parameter OCQuantity_Color::Blue()
{
  return ((Quantity_Color*)nativeHandle)->Blue();
}

 Quantity_Parameter OCQuantity_Color::Green()
{
  return ((Quantity_Color*)nativeHandle)->Green();
}

 Quantity_Parameter OCQuantity_Color::Hue()
{
  return ((Quantity_Color*)nativeHandle)->Hue();
}

 System::Boolean OCQuantity_Color::IsDifferent(OCNaroWrappers::OCQuantity_Color^ Other)
{
  return OCConverter::StandardBooleanToBoolean(((Quantity_Color*)nativeHandle)->IsDifferent(*((Quantity_Color*)Other->Handle)));
}

 System::Boolean OCQuantity_Color::IsEqual(OCNaroWrappers::OCQuantity_Color^ Other)
{
  return OCConverter::StandardBooleanToBoolean(((Quantity_Color*)nativeHandle)->IsEqual(*((Quantity_Color*)Other->Handle)));
}

 Quantity_Parameter OCQuantity_Color::Light()
{
  return ((Quantity_Color*)nativeHandle)->Light();
}

 OCQuantity_NameOfColor OCQuantity_Color::Name()
{
  return (OCQuantity_NameOfColor)(((Quantity_Color*)nativeHandle)->Name());
}

 Quantity_Parameter OCQuantity_Color::Red()
{
  return ((Quantity_Color*)nativeHandle)->Red();
}

 Quantity_Parameter OCQuantity_Color::Saturation()
{
  return ((Quantity_Color*)nativeHandle)->Saturation();
}

 void OCQuantity_Color::Values(Quantity_Parameter& R1, Quantity_Parameter& R2, Quantity_Parameter& R3, OCQuantity_TypeOfColor AType)
{
  ((Quantity_Color*)nativeHandle)->Values(R1, R2, R3, (Quantity_TypeOfColor)AType);
}

 void OCQuantity_Color::SetEpsilon(Quantity_Parameter AnEpsilon)
{
  Quantity_Color::SetEpsilon(AnEpsilon);
}

 Quantity_Parameter OCQuantity_Color::Epsilon()
{
  return Quantity_Color::Epsilon();
}

 OCQuantity_NameOfColor OCQuantity_Color::Name(Quantity_Parameter R, Quantity_Parameter G, Quantity_Parameter B)
{
  return (OCQuantity_NameOfColor)(Quantity_Color::Name(R, G, B));
}

 System::String^ OCQuantity_Color::StringName(OCQuantity_NameOfColor AColor)
{
  return OCConverter::StandardCStringToString(Quantity_Color::StringName((Quantity_NameOfColor)AColor));
}

 void OCQuantity_Color::HlsRgb(Quantity_Parameter H, Quantity_Parameter L, Quantity_Parameter S, Quantity_Parameter& R, Quantity_Parameter& G, Quantity_Parameter& B)
{
  Quantity_Color::HlsRgb(H, L, S, R, G, B);
}

 void OCQuantity_Color::RgbHls(Quantity_Parameter R, Quantity_Parameter G, Quantity_Parameter B, Quantity_Parameter& H, Quantity_Parameter& L, Quantity_Parameter& S)
{
  Quantity_Color::RgbHls(R, G, B, H, L, S);
}

 void OCQuantity_Color::Color2argb(OCNaroWrappers::OCQuantity_Color^ theColor, Standard_Integer& theARGB)
{
  Quantity_Color::Color2argb(*((Quantity_Color*)theColor->Handle), theARGB);
}

 void OCQuantity_Color::Argb2color(Standard_Integer theARGB, OCNaroWrappers::OCQuantity_Color^ theColor)
{
  Quantity_Color::Argb2color(theARGB, *((Quantity_Color*)theColor->Handle));
}

 void OCQuantity_Color::Test()
{
  Quantity_Color::Test();
}


