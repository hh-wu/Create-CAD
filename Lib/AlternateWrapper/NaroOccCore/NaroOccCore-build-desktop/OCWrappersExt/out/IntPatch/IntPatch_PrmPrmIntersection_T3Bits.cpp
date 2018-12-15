// File generated by CPPExt (CPP file)
//

#include "IntPatch_PrmPrmIntersection_T3Bits.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCIntPatch_PrmPrmIntersection_T3Bits::OCIntPatch_PrmPrmIntersection_T3Bits(IntPatch_PrmPrmIntersection_T3Bits* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntPatch_PrmPrmIntersection_T3Bits::OCIntPatch_PrmPrmIntersection_T3Bits(Standard_Integer size) 
{
  nativeHandle = new IntPatch_PrmPrmIntersection_T3Bits(size);
}

 void OCIntPatch_PrmPrmIntersection_T3Bits::Add(Standard_Integer t)
{
  ((IntPatch_PrmPrmIntersection_T3Bits*)nativeHandle)->Add(t);
}

 Standard_Integer OCIntPatch_PrmPrmIntersection_T3Bits::Val(Standard_Integer t)
{
  return ((IntPatch_PrmPrmIntersection_T3Bits*)nativeHandle)->Val(t);
}

 void OCIntPatch_PrmPrmIntersection_T3Bits::Raz(Standard_Integer t)
{
  ((IntPatch_PrmPrmIntersection_T3Bits*)nativeHandle)->Raz(t);
}

 void OCIntPatch_PrmPrmIntersection_T3Bits::ResetAnd()
{
  ((IntPatch_PrmPrmIntersection_T3Bits*)nativeHandle)->ResetAnd();
}

 Standard_Integer OCIntPatch_PrmPrmIntersection_T3Bits::And(OCNaroWrappers::OCIntPatch_PrmPrmIntersection_T3Bits^ Oth, Standard_Integer& indiceprecedent)
{
  return ((IntPatch_PrmPrmIntersection_T3Bits*)nativeHandle)->And(*((IntPatch_PrmPrmIntersection_T3Bits*)Oth->Handle), indiceprecedent);
}

