// File generated by CPPExt (Transient)
//
#ifndef _TDF_DataMapNodeOfLabelIntegerMap_OCWrappers_HeaderFile
#define _TDF_DataMapNodeOfLabelIntegerMap_OCWrappers_HeaderFile

// include the wrapped class
#include <TDF_DataMapNodeOfLabelIntegerMap.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "TDF_Label.h"


namespace OCNaroWrappers
{

ref class OCTDF_Label;
ref class OCTDF_LabelMapHasher;
ref class OCTDF_LabelIntegerMap;
ref class OCTDF_DataMapIteratorOfLabelIntegerMap;



public ref class OCTDF_DataMapNodeOfLabelIntegerMap : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCTDF_DataMapNodeOfLabelIntegerMap(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDF_DataMapNodeOfLabelIntegerMap(Handle(TDF_DataMapNodeOfLabelIntegerMap)* nativeHandle);

// Methods PUBLIC


OCTDF_DataMapNodeOfLabelIntegerMap(OCNaroWrappers::OCTDF_Label^ K, Standard_Integer I, TCollection_MapNodePtr n);


 /*instead*/  OCTDF_Label^ Key() ;


 /*instead*/  Standard_Integer Value() ;

~OCTDF_DataMapNodeOfLabelIntegerMap()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
