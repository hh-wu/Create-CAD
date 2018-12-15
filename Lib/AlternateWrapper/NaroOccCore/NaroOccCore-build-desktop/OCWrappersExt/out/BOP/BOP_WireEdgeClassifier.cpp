// File generated by CPPExt (CPP file)
//

#include "BOP_WireEdgeClassifier.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Face.h"
#include "BOP_BlockBuilder.h"
#include "BOP_Loop.h"
#include "../TopoDS/TopoDS_Shape.h"


using namespace OCNaroWrappers;

OCBOP_WireEdgeClassifier::OCBOP_WireEdgeClassifier(BOP_WireEdgeClassifier* nativeHandle) : OCBOP_CompositeClassifier((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBOP_WireEdgeClassifier::OCBOP_WireEdgeClassifier(OCNaroWrappers::OCTopoDS_Face^ F, OCNaroWrappers::OCBOP_BlockBuilder^ BB) : OCBOP_CompositeClassifier((OCDummy^)nullptr)

{
  nativeHandle = new BOP_WireEdgeClassifier(*((TopoDS_Face*)F->Handle), *((BOP_BlockBuilder*)BB->Handle));
}

 OCTopAbs_State OCBOP_WireEdgeClassifier::Compare(OCNaroWrappers::OCBOP_Loop^ L1, OCNaroWrappers::OCBOP_Loop^ L2)
{
  return (OCTopAbs_State)(((BOP_WireEdgeClassifier*)nativeHandle)->Compare(*((Handle_BOP_Loop*)L1->Handle), *((Handle_BOP_Loop*)L2->Handle)));
}

OCTopoDS_Shape^ OCBOP_WireEdgeClassifier::LoopToShape(OCNaroWrappers::OCBOP_Loop^ L)
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((BOP_WireEdgeClassifier*)nativeHandle)->LoopToShape(*((Handle_BOP_Loop*)L->Handle));
  return gcnew OCTopoDS_Shape(tmp);
}

 OCTopAbs_State OCBOP_WireEdgeClassifier::CompareShapes(OCNaroWrappers::OCTopoDS_Shape^ B1, OCNaroWrappers::OCTopoDS_Shape^ B2)
{
  return (OCTopAbs_State)(((BOP_WireEdgeClassifier*)nativeHandle)->CompareShapes(*((TopoDS_Shape*)B1->Handle), *((TopoDS_Shape*)B2->Handle)));
}

 OCTopAbs_State OCBOP_WireEdgeClassifier::CompareElementToShape(OCNaroWrappers::OCTopoDS_Shape^ E, OCNaroWrappers::OCTopoDS_Shape^ W)
{
  return (OCTopAbs_State)(((BOP_WireEdgeClassifier*)nativeHandle)->CompareElementToShape(*((TopoDS_Shape*)E->Handle), *((TopoDS_Shape*)W->Handle)));
}

 void OCBOP_WireEdgeClassifier::ResetShape(OCNaroWrappers::OCTopoDS_Shape^ B)
{
  ((BOP_WireEdgeClassifier*)nativeHandle)->ResetShape(*((TopoDS_Shape*)B->Handle));
}

 void OCBOP_WireEdgeClassifier::ResetElement(OCNaroWrappers::OCTopoDS_Shape^ E)
{
  ((BOP_WireEdgeClassifier*)nativeHandle)->ResetElement(*((TopoDS_Shape*)E->Handle));
}

 void OCBOP_WireEdgeClassifier::CompareElement(OCNaroWrappers::OCTopoDS_Shape^ E)
{
  ((BOP_WireEdgeClassifier*)nativeHandle)->CompareElement(*((TopoDS_Shape*)E->Handle));
}

 OCTopAbs_State OCBOP_WireEdgeClassifier::State()
{
  return (OCTopAbs_State)(((BOP_WireEdgeClassifier*)nativeHandle)->State());
}

