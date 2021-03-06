// File generated by CPPExt (CPP file)
//

#include "WNT_ColorTable.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCWNT_ColorTable::OCWNT_ColorTable(WNT_ColorTable* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCWNT_ColorTable::OCWNT_ColorTable(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new WNT_ColorTable(Low, Up);
}

OCWNT_ColorTable::OCWNT_ColorTable(WNT_ColorRef Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new WNT_ColorTable(Item, Low, Up);
}

 void OCWNT_ColorTable::Init(WNT_ColorRef V)
{
  ((WNT_ColorTable*)nativeHandle)->Init(V);
}

 System::Boolean OCWNT_ColorTable::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((WNT_ColorTable*)nativeHandle)->IsAllocated());
}

OCWNT_ColorTable^ OCWNT_ColorTable::Assign(OCNaroWrappers::OCWNT_ColorTable^ Other)
{
  WNT_ColorTable* tmp = new WNT_ColorTable(0, 0);
  *tmp = ((WNT_ColorTable*)nativeHandle)->Assign(*((WNT_ColorTable*)Other->Handle));
  return gcnew OCWNT_ColorTable(tmp);
}

 Standard_Integer OCWNT_ColorTable::Length()
{
  return ((WNT_ColorTable*)nativeHandle)->Length();
}

 Standard_Integer OCWNT_ColorTable::Lower()
{
  return ((WNT_ColorTable*)nativeHandle)->Lower();
}

 Standard_Integer OCWNT_ColorTable::Upper()
{
  return ((WNT_ColorTable*)nativeHandle)->Upper();
}

 void OCWNT_ColorTable::SetValue(Standard_Integer Index, WNT_ColorRef Value)
{
  ((WNT_ColorTable*)nativeHandle)->SetValue(Index, Value);
}

 WNT_ColorRef OCWNT_ColorTable::Value(Standard_Integer Index)
{
  return ((WNT_ColorTable*)nativeHandle)->Value(Index);
}

 WNT_ColorRef OCWNT_ColorTable::ChangeValue(Standard_Integer Index)
{
  return ((WNT_ColorTable*)nativeHandle)->ChangeValue(Index);
}


