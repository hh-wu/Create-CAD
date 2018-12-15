// File generated by CPPExt (CPP file)
//

#include "TNaming_ListOfIndexedDataMapOfShapeListOfShape.h"
#include "../Converter.h"
#include "TNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape.h"
#include "../TopTools/TopTools_IndexedDataMapOfShapeListOfShape.h"
#include "TNaming_ListNodeOfListOfIndexedDataMapOfShapeListOfShape.h"


using namespace OCNaroWrappers;

OCTNaming_ListOfIndexedDataMapOfShapeListOfShape::OCTNaming_ListOfIndexedDataMapOfShapeListOfShape(TNaming_ListOfIndexedDataMapOfShapeListOfShape* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTNaming_ListOfIndexedDataMapOfShapeListOfShape::OCTNaming_ListOfIndexedDataMapOfShapeListOfShape() 
{
  nativeHandle = new TNaming_ListOfIndexedDataMapOfShapeListOfShape();
}

 void OCTNaming_ListOfIndexedDataMapOfShapeListOfShape::Assign(OCNaroWrappers::OCTNaming_ListOfIndexedDataMapOfShapeListOfShape^ Other)
{
  ((TNaming_ListOfIndexedDataMapOfShapeListOfShape*)nativeHandle)->Assign(*((TNaming_ListOfIndexedDataMapOfShapeListOfShape*)Other->Handle));
}

 Standard_Integer OCTNaming_ListOfIndexedDataMapOfShapeListOfShape::Extent()
{
  return ((TNaming_ListOfIndexedDataMapOfShapeListOfShape*)nativeHandle)->Extent();
}

 System::Boolean OCTNaming_ListOfIndexedDataMapOfShapeListOfShape::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((TNaming_ListOfIndexedDataMapOfShapeListOfShape*)nativeHandle)->IsEmpty());
}

 void OCTNaming_ListOfIndexedDataMapOfShapeListOfShape::Prepend(OCNaroWrappers::OCTopTools_IndexedDataMapOfShapeListOfShape^ I)
{
  ((TNaming_ListOfIndexedDataMapOfShapeListOfShape*)nativeHandle)->Prepend(*((TopTools_IndexedDataMapOfShapeListOfShape*)I->Handle));
}

 void OCTNaming_ListOfIndexedDataMapOfShapeListOfShape::Prepend(OCNaroWrappers::OCTopTools_IndexedDataMapOfShapeListOfShape^ I, OCNaroWrappers::OCTNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape^ theIt)
{
  ((TNaming_ListOfIndexedDataMapOfShapeListOfShape*)nativeHandle)->Prepend(*((TopTools_IndexedDataMapOfShapeListOfShape*)I->Handle), *((TNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape*)theIt->Handle));
}

 void OCTNaming_ListOfIndexedDataMapOfShapeListOfShape::Prepend(OCNaroWrappers::OCTNaming_ListOfIndexedDataMapOfShapeListOfShape^ Other)
{
  ((TNaming_ListOfIndexedDataMapOfShapeListOfShape*)nativeHandle)->Prepend(*((TNaming_ListOfIndexedDataMapOfShapeListOfShape*)Other->Handle));
}

 void OCTNaming_ListOfIndexedDataMapOfShapeListOfShape::Append(OCNaroWrappers::OCTopTools_IndexedDataMapOfShapeListOfShape^ I)
{
  ((TNaming_ListOfIndexedDataMapOfShapeListOfShape*)nativeHandle)->Append(*((TopTools_IndexedDataMapOfShapeListOfShape*)I->Handle));
}

 void OCTNaming_ListOfIndexedDataMapOfShapeListOfShape::Append(OCNaroWrappers::OCTopTools_IndexedDataMapOfShapeListOfShape^ I, OCNaroWrappers::OCTNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape^ theIt)
{
  ((TNaming_ListOfIndexedDataMapOfShapeListOfShape*)nativeHandle)->Append(*((TopTools_IndexedDataMapOfShapeListOfShape*)I->Handle), *((TNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape*)theIt->Handle));
}

 void OCTNaming_ListOfIndexedDataMapOfShapeListOfShape::Append(OCNaroWrappers::OCTNaming_ListOfIndexedDataMapOfShapeListOfShape^ Other)
{
  ((TNaming_ListOfIndexedDataMapOfShapeListOfShape*)nativeHandle)->Append(*((TNaming_ListOfIndexedDataMapOfShapeListOfShape*)Other->Handle));
}

OCTopTools_IndexedDataMapOfShapeListOfShape^ OCTNaming_ListOfIndexedDataMapOfShapeListOfShape::First()
{
  TopTools_IndexedDataMapOfShapeListOfShape* tmp = new TopTools_IndexedDataMapOfShapeListOfShape(0);
  *tmp = ((TNaming_ListOfIndexedDataMapOfShapeListOfShape*)nativeHandle)->First();
  return gcnew OCTopTools_IndexedDataMapOfShapeListOfShape(tmp);
}

OCTopTools_IndexedDataMapOfShapeListOfShape^ OCTNaming_ListOfIndexedDataMapOfShapeListOfShape::Last()
{
  TopTools_IndexedDataMapOfShapeListOfShape* tmp = new TopTools_IndexedDataMapOfShapeListOfShape(0);
  *tmp = ((TNaming_ListOfIndexedDataMapOfShapeListOfShape*)nativeHandle)->Last();
  return gcnew OCTopTools_IndexedDataMapOfShapeListOfShape(tmp);
}

 void OCTNaming_ListOfIndexedDataMapOfShapeListOfShape::RemoveFirst()
{
  ((TNaming_ListOfIndexedDataMapOfShapeListOfShape*)nativeHandle)->RemoveFirst();
}

 void OCTNaming_ListOfIndexedDataMapOfShapeListOfShape::Remove(OCNaroWrappers::OCTNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape^ It)
{
  ((TNaming_ListOfIndexedDataMapOfShapeListOfShape*)nativeHandle)->Remove(*((TNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape*)It->Handle));
}

 void OCTNaming_ListOfIndexedDataMapOfShapeListOfShape::InsertBefore(OCNaroWrappers::OCTopTools_IndexedDataMapOfShapeListOfShape^ I, OCNaroWrappers::OCTNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape^ It)
{
  ((TNaming_ListOfIndexedDataMapOfShapeListOfShape*)nativeHandle)->InsertBefore(*((TopTools_IndexedDataMapOfShapeListOfShape*)I->Handle), *((TNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape*)It->Handle));
}

 void OCTNaming_ListOfIndexedDataMapOfShapeListOfShape::InsertBefore(OCNaroWrappers::OCTNaming_ListOfIndexedDataMapOfShapeListOfShape^ Other, OCNaroWrappers::OCTNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape^ It)
{
  ((TNaming_ListOfIndexedDataMapOfShapeListOfShape*)nativeHandle)->InsertBefore(*((TNaming_ListOfIndexedDataMapOfShapeListOfShape*)Other->Handle), *((TNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape*)It->Handle));
}

 void OCTNaming_ListOfIndexedDataMapOfShapeListOfShape::InsertAfter(OCNaroWrappers::OCTopTools_IndexedDataMapOfShapeListOfShape^ I, OCNaroWrappers::OCTNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape^ It)
{
  ((TNaming_ListOfIndexedDataMapOfShapeListOfShape*)nativeHandle)->InsertAfter(*((TopTools_IndexedDataMapOfShapeListOfShape*)I->Handle), *((TNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape*)It->Handle));
}

 void OCTNaming_ListOfIndexedDataMapOfShapeListOfShape::InsertAfter(OCNaroWrappers::OCTNaming_ListOfIndexedDataMapOfShapeListOfShape^ Other, OCNaroWrappers::OCTNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape^ It)
{
  ((TNaming_ListOfIndexedDataMapOfShapeListOfShape*)nativeHandle)->InsertAfter(*((TNaming_ListOfIndexedDataMapOfShapeListOfShape*)Other->Handle), *((TNaming_ListIteratorOfListOfIndexedDataMapOfShapeListOfShape*)It->Handle));
}

