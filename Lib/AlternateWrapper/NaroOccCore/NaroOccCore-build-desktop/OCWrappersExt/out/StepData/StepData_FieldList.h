// File generated by CPPExt (MPV)
//
#ifndef _StepData_FieldList_OCWrappers_HeaderFile
#define _StepData_FieldList_OCWrappers_HeaderFile

// include native header
#include <StepData_FieldList.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCStepData_Field;
ref class OCInterface_EntityIterator;


//! Describes a list of fields, in a general way <br>
//!           This basic class is for a null size list <br>
//!           Subclasses are for 1, N (fixed) or Dynamic sizes <br>
public ref class OCStepData_FieldList  {

protected:
  StepData_FieldList* nativeHandle;
  OCStepData_FieldList(OCDummy^) {};

public:
  property StepData_FieldList* Handle
  {
    StepData_FieldList* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStepData_FieldList(StepData_FieldList* nativeHandle);

// Methods PUBLIC

//! Creates a FieldList of 0 Field <br>
OCStepData_FieldList();

//! Returns the count of fields. Here, returns 0 <br>
virtual /*instead*/  Standard_Integer NbFields() ;

//! Returns the field n0 <num> between 1 and NbFields (read only) <br>
virtual /*instead*/  OCStepData_Field^ Field(Standard_Integer num) ;

//! Returns the field n0 <num> between 1 and NbFields, in order to <br>
//!           modify its content <br>
virtual /*instead*/  OCStepData_Field^ CField(Standard_Integer num) ;

//! Fills an iterator with the entities shared by <me> <br>
 /*instead*/  void FillShared(OCNaroWrappers::OCInterface_EntityIterator^ iter) ;

~OCStepData_FieldList()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
