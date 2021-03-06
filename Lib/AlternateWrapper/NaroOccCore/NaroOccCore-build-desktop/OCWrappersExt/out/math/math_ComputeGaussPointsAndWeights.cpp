// File generated by CPPExt (CPP file)
//

#include "math_ComputeGaussPointsAndWeights.h"
#include "../Converter.h"
#include "../TColStd/TColStd_HArray1OfReal.h"
#include "math_Vector.h"


using namespace OCNaroWrappers;

OCmath_ComputeGaussPointsAndWeights::OCmath_ComputeGaussPointsAndWeights(math_ComputeGaussPointsAndWeights* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCmath_ComputeGaussPointsAndWeights::OCmath_ComputeGaussPointsAndWeights(Standard_Integer Number) 
{
  nativeHandle = new math_ComputeGaussPointsAndWeights(Number);
}

 System::Boolean OCmath_ComputeGaussPointsAndWeights::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((math_ComputeGaussPointsAndWeights*)nativeHandle)->IsDone());
}

OCmath_Vector^ OCmath_ComputeGaussPointsAndWeights::Points()
{
  math_Vector* tmp = new math_Vector(0, 0);
  *tmp = ((math_ComputeGaussPointsAndWeights*)nativeHandle)->Points();
  return gcnew OCmath_Vector(tmp);
}

OCmath_Vector^ OCmath_ComputeGaussPointsAndWeights::Weights()
{
  math_Vector* tmp = new math_Vector(0, 0);
  *tmp = ((math_ComputeGaussPointsAndWeights*)nativeHandle)->Weights();
  return gcnew OCmath_Vector(tmp);
}


