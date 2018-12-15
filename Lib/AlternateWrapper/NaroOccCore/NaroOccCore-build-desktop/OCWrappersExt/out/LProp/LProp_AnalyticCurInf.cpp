// File generated by CPPExt (CPP file)
//

#include "LProp_AnalyticCurInf.h"
#include "../Converter.h"
#include "LProp_CurAndInf.h"


using namespace OCNaroWrappers;

OCLProp_AnalyticCurInf::OCLProp_AnalyticCurInf(LProp_AnalyticCurInf* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCLProp_AnalyticCurInf::OCLProp_AnalyticCurInf() 
{
  nativeHandle = new LProp_AnalyticCurInf();
}

 void OCLProp_AnalyticCurInf::Perform(OCGeomAbs_CurveType T, Standard_Real UFirst, Standard_Real ULast, OCNaroWrappers::OCLProp_CurAndInf^ Result)
{
  ((LProp_AnalyticCurInf*)nativeHandle)->Perform((GeomAbs_CurveType)T, UFirst, ULast, *((LProp_CurAndInf*)Result->Handle));
}

