// File generated by CPPExt (MPV)
//
#ifndef _StepData_HeaderTool_OCWrappers_HeaderFile
#define _StepData_HeaderTool_OCWrappers_HeaderFile

// include native header
#include <StepData_HeaderTool.hxx>
#include "../Converter.h"


#include "../TColStd/TColStd_SequenceOfAsciiString.h"


namespace OCNaroWrappers
{

ref class OCStepData_StepReaderData;
ref class OCTColStd_SequenceOfAsciiString;
ref class OCTCollection_AsciiString;
ref class OCStepData_Protocol;
ref class OCStepData_FileProtocol;


//! HeaderTool exploits data from Header to build a Protocol : <br>
//!           it uses the Header Entity FileSchema to do this. <br>
//!           It builds a Protocol from the Global List of Protocols <br>
//!           stored in the Library ReaderLib <br>
public ref class OCStepData_HeaderTool  {

protected:
  StepData_HeaderTool* nativeHandle;
  OCStepData_HeaderTool(OCDummy^) {};

public:
  property StepData_HeaderTool* Handle
  {
    StepData_HeaderTool* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStepData_HeaderTool(StepData_HeaderTool* nativeHandle);

// Methods PUBLIC

//! Creates a HeaderTool from data read from a File. Computes the <br>
//!           list of Schema Names. The Protocol will be computed later <br>
//!           (because there are several options) <br>
OCStepData_HeaderTool(OCNaroWrappers::OCStepData_StepReaderData^ data);

//! Creates a HeaderTool directly from a list of Schema Names <br>
OCStepData_HeaderTool(OCNaroWrappers::OCTColStd_SequenceOfAsciiString^ names);

//! Returns the count of SchemaNames <br>
 /*instead*/  Standard_Integer NbSchemaNames() ;

//! Returns a SchemaName, given its rank <br>
 /*instead*/  OCTCollection_AsciiString^ SchemaName(Standard_Integer num) ;

//! Returns the Protocol which corresponds to a Schema Name <br>
//!           Returns a Null Handle if this Schema Name is attached to no <br>
//!           Protocol recorded in the Global List of ReaderLib <br>
 /*instead*/  OCStepData_Protocol^ NamedProtocol(OCNaroWrappers::OCTCollection_AsciiString^ name) ;

//! Fills a FileProtocol with the list of Protocols attached to <br>
//!           the list of Schema Names. It can remain empty ... <br>
 /*instead*/  void Build(OCNaroWrappers::OCStepData_FileProtocol^ protocol) ;

//! Returns a Protocol computed from the list of Schema Names : <br>
//!           - a Null Handle if no SchemaName has been recognized (or list <br>
//!             empty) <br>
//!           - a single Protocol if only one SchemaName has been recognized <br>
//!           - a FileProtocol with its componants if several SchemaNames <br>
//!             have been recognized <br>
 /*instead*/  OCStepData_Protocol^ Protocol() ;

//! Returns True if either Build or Protocol has been called <br>
//!           If it is False, Ignored and NbIgnored should not be called <br>
 /*instead*/  System::Boolean IsDone() ;

//! Returns the count of ignored SchemaNames (0 if all were OK) <br>
 /*instead*/  Standard_Integer NbIgnoreds() ;

//! Returns an ignored SchemaName, given its rank in the list of <br>
//!           Ignored SchemaNames (not in the total list) <br>
 /*instead*/  OCTCollection_AsciiString^ Ignored(Standard_Integer num) ;

//! Sends the state of the HeaderTool in a comprehensive way, <br>
//!           to an output stream <br>
 /*instead*/  void Print(Standard_OStream& S) ;

~OCStepData_HeaderTool()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif