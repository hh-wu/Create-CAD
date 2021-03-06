// File generated by CPPExt (CPP file)
//

#include "BOPTools_Curve.h"
#include "../Converter.h"
#include "../IntTools/IntTools_Curve.h"
#include "BOPTools_PaveSet.h"
#include "BOPTools_PaveBlock.h"
#include "BOPTools_ListOfPaveBlock.h"
#include "../TColStd/TColStd_ListOfInteger.h"


using namespace OCNaroWrappers;

OCBOPTools_Curve::OCBOPTools_Curve(BOPTools_Curve* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCBOPTools_Curve::OCBOPTools_Curve() 
{
  nativeHandle = new BOPTools_Curve();
}

OCBOPTools_Curve::OCBOPTools_Curve(OCNaroWrappers::OCIntTools_Curve^ aIC) 
{
  nativeHandle = new BOPTools_Curve(*((IntTools_Curve*)aIC->Handle));
}

 void OCBOPTools_Curve::SetCurve(OCNaroWrappers::OCIntTools_Curve^ aIC)
{
  ((BOPTools_Curve*)nativeHandle)->SetCurve(*((IntTools_Curve*)aIC->Handle));
}

OCIntTools_Curve^ OCBOPTools_Curve::Curve()
{
  IntTools_Curve* tmp = new IntTools_Curve();
  *tmp = ((BOPTools_Curve*)nativeHandle)->Curve();
  return gcnew OCIntTools_Curve(tmp);
}

OCBOPTools_PaveSet^ OCBOPTools_Curve::Set()
{
  BOPTools_PaveSet* tmp = new BOPTools_PaveSet();
  *tmp = ((BOPTools_Curve*)nativeHandle)->Set();
  return gcnew OCBOPTools_PaveSet(tmp);
}

 void OCBOPTools_Curve::AppendNewBlock(OCNaroWrappers::OCBOPTools_PaveBlock^ aPB)
{
  ((BOPTools_Curve*)nativeHandle)->AppendNewBlock(*((BOPTools_PaveBlock*)aPB->Handle));
}

OCBOPTools_ListOfPaveBlock^ OCBOPTools_Curve::NewPaveBlocks()
{
  BOPTools_ListOfPaveBlock* tmp = new BOPTools_ListOfPaveBlock();
  *tmp = ((BOPTools_Curve*)nativeHandle)->NewPaveBlocks();
  return gcnew OCBOPTools_ListOfPaveBlock(tmp);
}

OCTColStd_ListOfInteger^ OCBOPTools_Curve::TechnoVertices()
{
  TColStd_ListOfInteger* tmp = new TColStd_ListOfInteger();
  *tmp = ((BOPTools_Curve*)nativeHandle)->TechnoVertices();
  return gcnew OCTColStd_ListOfInteger(tmp);
}


