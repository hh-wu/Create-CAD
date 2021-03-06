// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepBuild_SolidAreaBuilder.h"
#include "../Converter.h"
#include "TopOpeBRepBuild_LoopSet.h"
#include "TopOpeBRepBuild_LoopClassifier.h"


using namespace OCNaroWrappers;

OCTopOpeBRepBuild_SolidAreaBuilder::OCTopOpeBRepBuild_SolidAreaBuilder(TopOpeBRepBuild_SolidAreaBuilder* nativeHandle) : OCTopOpeBRepBuild_Area3dBuilder((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRepBuild_SolidAreaBuilder::OCTopOpeBRepBuild_SolidAreaBuilder() : OCTopOpeBRepBuild_Area3dBuilder((OCDummy^)nullptr)

{
  nativeHandle = new TopOpeBRepBuild_SolidAreaBuilder();
}

OCTopOpeBRepBuild_SolidAreaBuilder::OCTopOpeBRepBuild_SolidAreaBuilder(OCNaroWrappers::OCTopOpeBRepBuild_LoopSet^ LS, OCNaroWrappers::OCTopOpeBRepBuild_LoopClassifier^ LC, System::Boolean ForceClass) : OCTopOpeBRepBuild_Area3dBuilder((OCDummy^)nullptr)

{
  nativeHandle = new TopOpeBRepBuild_SolidAreaBuilder(*((TopOpeBRepBuild_LoopSet*)LS->Handle), *((TopOpeBRepBuild_LoopClassifier*)LC->Handle), OCConverter::BooleanToStandardBoolean(ForceClass));
}

 void OCTopOpeBRepBuild_SolidAreaBuilder::InitSolidAreaBuilder(OCNaroWrappers::OCTopOpeBRepBuild_LoopSet^ LS, OCNaroWrappers::OCTopOpeBRepBuild_LoopClassifier^ LC, System::Boolean ForceClass)
{
  ((TopOpeBRepBuild_SolidAreaBuilder*)nativeHandle)->InitSolidAreaBuilder(*((TopOpeBRepBuild_LoopSet*)LS->Handle), *((TopOpeBRepBuild_LoopClassifier*)LC->Handle), OCConverter::BooleanToStandardBoolean(ForceClass));
}


