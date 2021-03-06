// File generated by CPPExt (MPV)
//
#ifndef _StepVisual_Array1OfInvisibleItem_OCWrappers_HeaderFile
#define _StepVisual_Array1OfInvisibleItem_OCWrappers_HeaderFile

// include native header
#include <StepVisual_Array1OfInvisibleItem.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCStepVisual_InvisibleItem;



public ref class OCStepVisual_Array1OfInvisibleItem  {

protected:
  StepVisual_Array1OfInvisibleItem* nativeHandle;
  OCStepVisual_Array1OfInvisibleItem(OCDummy^) {};

public:
  property StepVisual_Array1OfInvisibleItem* Handle
  {
    StepVisual_Array1OfInvisibleItem* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStepVisual_Array1OfInvisibleItem(StepVisual_Array1OfInvisibleItem* nativeHandle);

// Methods PUBLIC


OCStepVisual_Array1OfInvisibleItem(Standard_Integer Low, Standard_Integer Up);


OCStepVisual_Array1OfInvisibleItem(OCNaroWrappers::OCStepVisual_InvisibleItem^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCStepVisual_InvisibleItem^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCStepVisual_Array1OfInvisibleItem^ Assign(OCNaroWrappers::OCStepVisual_Array1OfInvisibleItem^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepVisual_InvisibleItem^ Value) ;


 /*instead*/  OCStepVisual_InvisibleItem^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepVisual_InvisibleItem^ ChangeValue(Standard_Integer Index) ;

~OCStepVisual_Array1OfInvisibleItem()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
