// File generated by CPPExt (Transient)
//
#ifndef _MeshVS_ElementalColorPrsBuilder_OCWrappers_HeaderFile
#define _MeshVS_ElementalColorPrsBuilder_OCWrappers_HeaderFile

// include the wrapped class
#include <MeshVS_ElementalColorPrsBuilder.hxx>
#include "../Converter.h"

#include "MeshVS_PrsBuilder.h"

#include "MeshVS_DataMapOfIntegerColor.h"
#include "MeshVS_DataMapOfIntegerTwoColors.h"


namespace OCNaroWrappers
{

ref class OCMeshVS_Mesh;
ref class OCMeshVS_DataSource;
ref class OCPrs3d_Presentation;
ref class OCMeshVS_DataMapOfIntegerColor;
ref class OCQuantity_Color;
ref class OCMeshVS_DataMapOfIntegerTwoColors;


//! This class provides methods to create presentation of elements with <br>
//! assigned colors. The class contains two color maps: map of same colors for front <br>
//! and back side of face and map of different ones, <br>
public ref class OCMeshVS_ElementalColorPrsBuilder : OCMeshVS_PrsBuilder {

protected:
  // dummy constructor;
  OCMeshVS_ElementalColorPrsBuilder(OCDummy^) : OCMeshVS_PrsBuilder((OCDummy^)nullptr) {};

public:

// constructor from native
OCMeshVS_ElementalColorPrsBuilder(Handle(MeshVS_ElementalColorPrsBuilder)* nativeHandle);

// Methods PUBLIC

//! Constructor <br>
OCMeshVS_ElementalColorPrsBuilder(OCNaroWrappers::OCMeshVS_Mesh^ Parent, MeshVS_DisplayModeFlags Flags, OCNaroWrappers::OCMeshVS_DataSource^ DS, Standard_Integer Id, MeshVS_BuilderPriority Priority);

//! Builds presentation of elements with assigned colors. <br>
virtual /*instead*/  void Build(OCNaroWrappers::OCPrs3d_Presentation^ Prs, TColStd_PackedMapOfInteger IDs, TColStd_PackedMapOfInteger& IDsToExclude, System::Boolean IsElement, Standard_Integer DisplayMode) ;

//! Returns map of colors same for front and back side of face. <br>
 /*instead*/  OCMeshVS_DataMapOfIntegerColor^ GetColors1() ;

//! Sets map of colors same for front and back side of face. <br>
 /*instead*/  void SetColors1(OCNaroWrappers::OCMeshVS_DataMapOfIntegerColor^ Map) ;

//! Returns true, if map of colors isn't empty <br>
 /*instead*/  System::Boolean HasColors1() ;

//! Returns color assigned with element number ID <br>
 /*instead*/  System::Boolean GetColor1(Standard_Integer ID, OCNaroWrappers::OCQuantity_Color^ theColor) ;

//! Sets color assigned with element number ID <br>
 /*instead*/  void SetColor1(Standard_Integer ID, OCNaroWrappers::OCQuantity_Color^ theColor) ;

//! Returns map of different colors for front and back side of face <br>
 /*instead*/  OCMeshVS_DataMapOfIntegerTwoColors^ GetColors2() ;

//! Sets map of different colors for front and back side of face <br>
 /*instead*/  void SetColors2(OCNaroWrappers::OCMeshVS_DataMapOfIntegerTwoColors^ Map) ;

//! Returns true, if map isn't empty <br>
 /*instead*/  System::Boolean HasColors2() ;

//! Returns colors assigned with element number ID <br>
 /*instead*/  System::Boolean GetColor2(Standard_Integer ID, MeshVS_TwoColors& theColor) ;

//! Returns colors assigned with element number ID <br>
//! theColor1 is the front element color <br>
//! theColor2 is the back element color <br>
 /*instead*/  System::Boolean GetColor2(Standard_Integer ID, OCNaroWrappers::OCQuantity_Color^ theColor1, OCNaroWrappers::OCQuantity_Color^ theColor2) ;

//! Sets colors assigned with element number ID <br>
 /*instead*/  void SetColor2(Standard_Integer ID, MeshVS_TwoColors theTwoColors) ;

//! Sets color assigned with element number ID <br>
//! theColor1 is the front element color <br>
//! theColor2 is the back element color <br>
 /*instead*/  void SetColor2(Standard_Integer ID, OCNaroWrappers::OCQuantity_Color^ theColor1, OCNaroWrappers::OCQuantity_Color^ theColor2) ;

~OCMeshVS_ElementalColorPrsBuilder()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
