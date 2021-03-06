// File generated by CPPExt (CPP file)
//

#include "IntPatch_TheInterfPolyhedronOfThePPIntOfIntersection.h"
#include "../Converter.h"
#include "IntPatch_ThePolyhedronOfThePPIntOfIntersection.h"
#include "IntPatch_TheToolPolyhOfThePPIntOfIntersection.h"
#include "../Intf/Intf_TangentZone.h"


using namespace OCNaroWrappers;

OCIntPatch_TheInterfPolyhedronOfThePPIntOfIntersection::OCIntPatch_TheInterfPolyhedronOfThePPIntOfIntersection(IntPatch_TheInterfPolyhedronOfThePPIntOfIntersection* nativeHandle) : OCIntf_Interference((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCIntPatch_TheInterfPolyhedronOfThePPIntOfIntersection::OCIntPatch_TheInterfPolyhedronOfThePPIntOfIntersection() : OCIntf_Interference((OCDummy^)nullptr)

{
  nativeHandle = new IntPatch_TheInterfPolyhedronOfThePPIntOfIntersection();
}

OCIntPatch_TheInterfPolyhedronOfThePPIntOfIntersection::OCIntPatch_TheInterfPolyhedronOfThePPIntOfIntersection(OCNaroWrappers::OCIntPatch_ThePolyhedronOfThePPIntOfIntersection^ Obje1, OCNaroWrappers::OCIntPatch_ThePolyhedronOfThePPIntOfIntersection^ Obje2) : OCIntf_Interference((OCDummy^)nullptr)

{
  nativeHandle = new IntPatch_TheInterfPolyhedronOfThePPIntOfIntersection(*((IntPatch_ThePolyhedronOfThePPIntOfIntersection*)Obje1->Handle), *((IntPatch_ThePolyhedronOfThePPIntOfIntersection*)Obje2->Handle));
}

OCIntPatch_TheInterfPolyhedronOfThePPIntOfIntersection::OCIntPatch_TheInterfPolyhedronOfThePPIntOfIntersection(OCNaroWrappers::OCIntPatch_ThePolyhedronOfThePPIntOfIntersection^ Obje) : OCIntf_Interference((OCDummy^)nullptr)

{
  nativeHandle = new IntPatch_TheInterfPolyhedronOfThePPIntOfIntersection(*((IntPatch_ThePolyhedronOfThePPIntOfIntersection*)Obje->Handle));
}

 void OCIntPatch_TheInterfPolyhedronOfThePPIntOfIntersection::Perform(OCNaroWrappers::OCIntPatch_ThePolyhedronOfThePPIntOfIntersection^ Obje1, OCNaroWrappers::OCIntPatch_ThePolyhedronOfThePPIntOfIntersection^ Obje2)
{
  ((IntPatch_TheInterfPolyhedronOfThePPIntOfIntersection*)nativeHandle)->Perform(*((IntPatch_ThePolyhedronOfThePPIntOfIntersection*)Obje1->Handle), *((IntPatch_ThePolyhedronOfThePPIntOfIntersection*)Obje2->Handle));
}

 void OCIntPatch_TheInterfPolyhedronOfThePPIntOfIntersection::Perform(OCNaroWrappers::OCIntPatch_ThePolyhedronOfThePPIntOfIntersection^ Obje)
{
  ((IntPatch_TheInterfPolyhedronOfThePPIntOfIntersection*)nativeHandle)->Perform(*((IntPatch_ThePolyhedronOfThePPIntOfIntersection*)Obje->Handle));
}


