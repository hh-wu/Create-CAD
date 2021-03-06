// File generated by CPPExt (Transient)
//
#ifndef _AIS_AttributeFilter_OCWrappers_HeaderFile
#define _AIS_AttributeFilter_OCWrappers_HeaderFile

// include the wrapped class
#include <AIS_AttributeFilter.hxx>
#include "../Converter.h"

#include "../SelectMgr/SelectMgr_Filter.h"

#include "../Quantity/Quantity_NameOfColor.h"


namespace OCNaroWrappers
{

ref class OCSelectMgr_EntityOwner;


//! Selects Interactive Objects, which have the desired width or color. <br>
//! The filter questions each Interactive Object in local <br>
//! context to determine whether it has an non-null <br>
//! owner, and if so, whether it has the required color <br>
//! and width attributes. If the object returns true in each <br>
//! case, it is kept. If not, it is rejected. <br>
//! This filter is used only in an open local context. <br>
//! In the Collector viewer, you can only locate <br>
//! Interactive Objects, which answer positively to the <br>
//! filters, which are in position when a local context is open. <br>
public ref class OCAIS_AttributeFilter : OCSelectMgr_Filter {

protected:
  // dummy constructor;
  OCAIS_AttributeFilter(OCDummy^) : OCSelectMgr_Filter((OCDummy^)nullptr) {};

public:

// constructor from native
OCAIS_AttributeFilter(Handle(AIS_AttributeFilter)* nativeHandle);

// Methods PUBLIC


//! Constructs an empty attribute filter object. <br>
//! This filter object determines whether selectable <br>
//! interactive objects have a non-null owner. <br>
OCAIS_AttributeFilter();


//! Constructs an attribute filter object defined by the <br>
//! color attribute aCol. <br>
OCAIS_AttributeFilter(OCQuantity_NameOfColor aCol);


//! Constructs an attribute filter object defined by the line <br>
//! width attribute aWidth. <br>
OCAIS_AttributeFilter(Standard_Real aWidth);


//! Indicates that the Interactive Object has the color <br>
//! setting specified by the argument aCol at construction time. <br>
 /*instead*/  System::Boolean HasColor() ;


//! Indicates that the Interactive Object has the width <br>
//! setting specified by the argument aWidth at <br>
//! construction time. <br>
 /*instead*/  System::Boolean HasWidth() ;

//! Sets the color aCol. <br>
//! This must be chosen from the list of colors in Quantity_NameOfColor. <br>
 /*instead*/  void SetColor(OCQuantity_NameOfColor aCol) ;

//!  Sets the line width aWidth. <br>
 /*instead*/  void SetWidth(Standard_Real aWidth) ;


//! Removes the setting for color from the filter. <br>
 /*instead*/  void UnsetColor() ;


//! Removes the setting for width from the filter. <br>
 /*instead*/  void UnsetWidth() ;

//! Indicates that the selected Interactive Object passes <br>
//! the filter. The owner, anObj, can be either direct or <br>
//! user. A direct owner is the corresponding <br>
//! construction element, whereas a user is the <br>
//! compound shape of which the entity forms a part. <br>
//! If the Interactive Object returns Standard_True <br>
//! when detected by the Local Context selector through <br>
//! the mouse, the object is kept; if not, it is rejected. <br>
virtual /*instead*/  System::Boolean IsOk(OCNaroWrappers::OCSelectMgr_EntityOwner^ anObj) ;

~OCAIS_AttributeFilter()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
