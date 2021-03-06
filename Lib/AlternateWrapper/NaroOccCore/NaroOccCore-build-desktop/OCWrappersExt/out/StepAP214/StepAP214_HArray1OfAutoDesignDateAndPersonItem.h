// File generated by CPPExt (Transient)
//
#ifndef _StepAP214_HArray1OfAutoDesignDateAndPersonItem_OCWrappers_HeaderFile
#define _StepAP214_HArray1OfAutoDesignDateAndPersonItem_OCWrappers_HeaderFile

// include the wrapped class
#include <StepAP214_HArray1OfAutoDesignDateAndPersonItem.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "StepAP214_Array1OfAutoDesignDateAndPersonItem.h"


namespace OCNaroWrappers
{

ref class OCStepAP214_AutoDesignDateAndPersonItem;
ref class OCStepAP214_Array1OfAutoDesignDateAndPersonItem;



public ref class OCStepAP214_HArray1OfAutoDesignDateAndPersonItem : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepAP214_HArray1OfAutoDesignDateAndPersonItem(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepAP214_HArray1OfAutoDesignDateAndPersonItem(Handle(StepAP214_HArray1OfAutoDesignDateAndPersonItem)* nativeHandle);

// Methods PUBLIC


OCStepAP214_HArray1OfAutoDesignDateAndPersonItem(Standard_Integer Low, Standard_Integer Up);


OCStepAP214_HArray1OfAutoDesignDateAndPersonItem(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepAP214_AutoDesignDateAndPersonItem^ V);


 /*instead*/  void Init(OCNaroWrappers::OCStepAP214_AutoDesignDateAndPersonItem^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepAP214_AutoDesignDateAndPersonItem^ Value) ;


 /*instead*/  OCStepAP214_AutoDesignDateAndPersonItem^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepAP214_AutoDesignDateAndPersonItem^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCStepAP214_Array1OfAutoDesignDateAndPersonItem^ Array1() ;


 /*instead*/  OCStepAP214_Array1OfAutoDesignDateAndPersonItem^ ChangeArray1() ;

~OCStepAP214_HArray1OfAutoDesignDateAndPersonItem()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
