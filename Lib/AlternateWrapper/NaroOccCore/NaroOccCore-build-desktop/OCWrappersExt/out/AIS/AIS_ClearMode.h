// File generated by CPPExt (Enum)

#ifndef _AIS_ClearMode_OCWrappers_HeaderFile
#define _AIS_ClearMode_OCWrappers_HeaderFile

namespace OCNaroWrappers
{

//! Declares the type of Interactive Object. <br>
//! This is one of the following: <br>
//! -   the Datum <br>
//! -   the Object <br>
//! -   the Relation <br>
//! -   the None type. <br>
//!  The Datum is the construction element. These include <br>
//! points, lines, axes and planes. The object brings <br>
//! together topological shapes. The Relation includes <br>
//! dimensions and constraints. When the object is of an <br>
//! unknown type, the None type is declared. <br>
public enum class OCAIS_ClearMode
{ 
 AIS_CM_All,
AIS_CM_Interactive,
AIS_CM_Filters,
AIS_CM_StandardModes,
AIS_CM_TemporaryShapePrs
};

}; // OCNaroWrappers

#endif
