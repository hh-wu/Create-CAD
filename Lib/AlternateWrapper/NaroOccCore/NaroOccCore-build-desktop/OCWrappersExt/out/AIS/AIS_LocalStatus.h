// File generated by CPPExt (Transient)
//
#ifndef _AIS_LocalStatus_OCWrappers_HeaderFile
#define _AIS_LocalStatus_OCWrappers_HeaderFile

// include the wrapped class
#include <AIS_LocalStatus.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../TColStd/TColStd_ListOfInteger.h"
#include "../Quantity/Quantity_NameOfColor.h"


namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCTColStd_ListOfInteger;


//! Stored Info about temporary objects. <br>
public ref class OCAIS_LocalStatus : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCAIS_LocalStatus(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCAIS_LocalStatus(Handle(AIS_LocalStatus)* nativeHandle);

// Methods PUBLIC


OCAIS_LocalStatus(System::Boolean IsTemporary, System::Boolean Decompose, Standard_Integer DisplayMode, Standard_Integer SelectionMode, Standard_Integer HilightMode, System::Boolean SubIntensity, OCQuantity_NameOfColor TheHiCol);


 /*instead*/  System::Boolean Decomposed() ;


 /*instead*/  System::Boolean IsTemporary() ;


 /*instead*/  Standard_Integer DisplayMode() ;


 /*instead*/  OCTColStd_ListOfInteger^ SelectionModes() ;


 /*instead*/  System::Boolean IsActivated(Standard_Integer aSelMode) ;


 /*instead*/  Standard_Integer HilightMode() ;


 /*instead*/  System::Boolean IsSubIntensityOn() ;


 /*instead*/  OCQuantity_NameOfColor HilightColor() ;


 /*instead*/  void SetDecomposition(System::Boolean astatus) ;


 /*instead*/  void SetTemporary(System::Boolean astatus) ;


 /*instead*/  void SetDisplayMode(Standard_Integer aMode) ;


 /*instead*/  void SetFirstDisplay(System::Boolean aStatus) ;


 /*instead*/  System::Boolean IsFirstDisplay() ;


 /*instead*/  void AddSelectionMode(Standard_Integer aMode) ;


 /*instead*/  void RemoveSelectionMode(Standard_Integer aMode) ;


 /*instead*/  void ClearSelectionModes() ;


 /*instead*/  System::Boolean IsSelModeIn(Standard_Integer aMode) ;


 /*instead*/  void SetHilightMode(Standard_Integer aMode) ;


 /*instead*/  void SetHilightColor(OCQuantity_NameOfColor aHiCol) ;


 /*instead*/  void SubIntensityOn() ;


 /*instead*/  void SubIntensityOff() ;


 /*instead*/  void SetPreviousState(OCNaroWrappers::OCStandard_Transient^ aStatus) ;


 /*instead*/  OCStandard_Transient^ PreviousState() ;

~OCAIS_LocalStatus()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
