// File generated by CPPExt (CPP file)
//

#include "math_FunctionSetRoot.h"
#include "../Converter.h"
#include "math_FunctionSetWithDerivatives.h"
#include "math_Vector.h"
#include "math_Matrix.h"


using namespace OCNaroWrappers;

OCmath_FunctionSetRoot::OCmath_FunctionSetRoot(math_FunctionSetRoot* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCmath_FunctionSetRoot::OCmath_FunctionSetRoot(OCNaroWrappers::OCmath_FunctionSetWithDerivatives^ F, OCNaroWrappers::OCmath_Vector^ Tolerance, Standard_Integer NbIterations) 
{
  nativeHandle = new math_FunctionSetRoot(*((math_FunctionSetWithDerivatives*)F->Handle), *((math_Vector*)Tolerance->Handle), NbIterations);
}

OCmath_FunctionSetRoot::OCmath_FunctionSetRoot(OCNaroWrappers::OCmath_FunctionSetWithDerivatives^ F, Standard_Integer NbIterations) 
{
  nativeHandle = new math_FunctionSetRoot(*((math_FunctionSetWithDerivatives*)F->Handle), NbIterations);
}

OCmath_FunctionSetRoot::OCmath_FunctionSetRoot(OCNaroWrappers::OCmath_FunctionSetWithDerivatives^ F, OCNaroWrappers::OCmath_Vector^ StartingPoint, OCNaroWrappers::OCmath_Vector^ Tolerance, Standard_Integer NbIterations) 
{
  nativeHandle = new math_FunctionSetRoot(*((math_FunctionSetWithDerivatives*)F->Handle), *((math_Vector*)StartingPoint->Handle), *((math_Vector*)Tolerance->Handle), NbIterations);
}

OCmath_FunctionSetRoot::OCmath_FunctionSetRoot(OCNaroWrappers::OCmath_FunctionSetWithDerivatives^ F, OCNaroWrappers::OCmath_Vector^ StartingPoint, OCNaroWrappers::OCmath_Vector^ Tolerance, OCNaroWrappers::OCmath_Vector^ infBound, OCNaroWrappers::OCmath_Vector^ supBound, Standard_Integer NbIterations) 
{
  nativeHandle = new math_FunctionSetRoot(*((math_FunctionSetWithDerivatives*)F->Handle), *((math_Vector*)StartingPoint->Handle), *((math_Vector*)Tolerance->Handle), *((math_Vector*)infBound->Handle), *((math_Vector*)supBound->Handle), NbIterations);
}

 void OCmath_FunctionSetRoot::Delete()
{
  ((math_FunctionSetRoot*)nativeHandle)->Delete();
}

 void OCmath_FunctionSetRoot::SetTolerance(OCNaroWrappers::OCmath_Vector^ Tolerance)
{
  ((math_FunctionSetRoot*)nativeHandle)->SetTolerance(*((math_Vector*)Tolerance->Handle));
}

 void OCmath_FunctionSetRoot::Perform(OCNaroWrappers::OCmath_FunctionSetWithDerivatives^ F, OCNaroWrappers::OCmath_Vector^ StartingPoint, OCNaroWrappers::OCmath_Vector^ infBound, OCNaroWrappers::OCmath_Vector^ supBound)
{
  ((math_FunctionSetRoot*)nativeHandle)->Perform(*((math_FunctionSetWithDerivatives*)F->Handle), *((math_Vector*)StartingPoint->Handle), *((math_Vector*)infBound->Handle), *((math_Vector*)supBound->Handle));
}

 System::Boolean OCmath_FunctionSetRoot::IsSolutionReached(OCNaroWrappers::OCmath_FunctionSetWithDerivatives^ F)
{
  return OCConverter::StandardBooleanToBoolean(((math_FunctionSetRoot*)nativeHandle)->IsSolutionReached(*((math_FunctionSetWithDerivatives*)F->Handle)));
}

 System::Boolean OCmath_FunctionSetRoot::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((math_FunctionSetRoot*)nativeHandle)->IsDone());
}

 Standard_Integer OCmath_FunctionSetRoot::NbIterations()
{
  return ((math_FunctionSetRoot*)nativeHandle)->NbIterations();
}

 Standard_Integer OCmath_FunctionSetRoot::StateNumber()
{
  return ((math_FunctionSetRoot*)nativeHandle)->StateNumber();
}

OCmath_Vector^ OCmath_FunctionSetRoot::Root()
{
  math_Vector* tmp = new math_Vector(0, 0);
  *tmp = ((math_FunctionSetRoot*)nativeHandle)->Root();
  return gcnew OCmath_Vector(tmp);
}

 void OCmath_FunctionSetRoot::Root(OCNaroWrappers::OCmath_Vector^ Root)
{
  ((math_FunctionSetRoot*)nativeHandle)->Root(*((math_Vector*)Root->Handle));
}

OCmath_Matrix^ OCmath_FunctionSetRoot::Derivative()
{
  math_Matrix* tmp = new math_Matrix(0, 0, 0, 0);
  *tmp = ((math_FunctionSetRoot*)nativeHandle)->Derivative();
  return gcnew OCmath_Matrix(tmp);
}

 void OCmath_FunctionSetRoot::Derivative(OCNaroWrappers::OCmath_Matrix^ Der)
{
  ((math_FunctionSetRoot*)nativeHandle)->Derivative(*((math_Matrix*)Der->Handle));
}

OCmath_Vector^ OCmath_FunctionSetRoot::FunctionSetErrors()
{
  math_Vector* tmp = new math_Vector(0, 0);
  *tmp = ((math_FunctionSetRoot*)nativeHandle)->FunctionSetErrors();
  return gcnew OCmath_Vector(tmp);
}

 void OCmath_FunctionSetRoot::FunctionSetErrors(OCNaroWrappers::OCmath_Vector^ Err)
{
  ((math_FunctionSetRoot*)nativeHandle)->FunctionSetErrors(*((math_Vector*)Err->Handle));
}

 void OCmath_FunctionSetRoot::Dump(Standard_OStream& o)
{
  ((math_FunctionSetRoot*)nativeHandle)->Dump(o);
}


