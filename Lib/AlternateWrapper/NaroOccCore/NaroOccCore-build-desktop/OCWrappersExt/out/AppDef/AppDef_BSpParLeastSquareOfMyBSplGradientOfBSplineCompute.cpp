// File generated by CPPExt (CPP file)
//

#include "AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute.h"
#include "../Converter.h"
#include "../TColStd/TColStd_HArray1OfReal.h"
#include "../TColStd/TColStd_HArray1OfInteger.h"
#include "AppDef_MultiLine.h"
#include "AppDef_MyLineTool.h"
#include "../math/math_Vector.h"
#include "../TColStd/TColStd_Array1OfReal.h"
#include "../TColStd/TColStd_Array1OfInteger.h"
#include "../AppParCurves/AppParCurves_MultiCurve.h"
#include "../AppParCurves/AppParCurves_MultiBSpCurve.h"
#include "../math/math_Matrix.h"
#include "../math/math_IntegerVector.h"


using namespace OCNaroWrappers;

OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute(AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute(OCNaroWrappers::OCAppDef_MultiLine^ SSP, Standard_Integer FirstPoint, Standard_Integer LastPoint, OCAppParCurves_Constraint FirstCons, OCAppParCurves_Constraint LastCons, OCNaroWrappers::OCmath_Vector^ Parameters, Standard_Integer NbPol) 
{
  nativeHandle = new AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute(*((AppDef_MultiLine*)SSP->Handle), FirstPoint, LastPoint, (AppParCurves_Constraint)FirstCons, (AppParCurves_Constraint)LastCons, *((math_Vector*)Parameters->Handle), NbPol);
}

OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute(OCNaroWrappers::OCAppDef_MultiLine^ SSP, Standard_Integer FirstPoint, Standard_Integer LastPoint, OCAppParCurves_Constraint FirstCons, OCAppParCurves_Constraint LastCons, Standard_Integer NbPol) 
{
  nativeHandle = new AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute(*((AppDef_MultiLine*)SSP->Handle), FirstPoint, LastPoint, (AppParCurves_Constraint)FirstCons, (AppParCurves_Constraint)LastCons, NbPol);
}

OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute(OCNaroWrappers::OCAppDef_MultiLine^ SSP, OCNaroWrappers::OCTColStd_Array1OfReal^ Knots, OCNaroWrappers::OCTColStd_Array1OfInteger^ Mults, Standard_Integer FirstPoint, Standard_Integer LastPoint, OCAppParCurves_Constraint FirstCons, OCAppParCurves_Constraint LastCons, OCNaroWrappers::OCmath_Vector^ Parameters, Standard_Integer NbPol) 
{
  nativeHandle = new AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute(*((AppDef_MultiLine*)SSP->Handle), *((TColStd_Array1OfReal*)Knots->Handle), *((TColStd_Array1OfInteger*)Mults->Handle), FirstPoint, LastPoint, (AppParCurves_Constraint)FirstCons, (AppParCurves_Constraint)LastCons, *((math_Vector*)Parameters->Handle), NbPol);
}

OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute(OCNaroWrappers::OCAppDef_MultiLine^ SSP, OCNaroWrappers::OCTColStd_Array1OfReal^ Knots, OCNaroWrappers::OCTColStd_Array1OfInteger^ Mults, Standard_Integer FirstPoint, Standard_Integer LastPoint, OCAppParCurves_Constraint FirstCons, OCAppParCurves_Constraint LastCons, Standard_Integer NbPol) 
{
  nativeHandle = new AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute(*((AppDef_MultiLine*)SSP->Handle), *((TColStd_Array1OfReal*)Knots->Handle), *((TColStd_Array1OfInteger*)Mults->Handle), FirstPoint, LastPoint, (AppParCurves_Constraint)FirstCons, (AppParCurves_Constraint)LastCons, NbPol);
}

 void OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::Perform(OCNaroWrappers::OCmath_Vector^ Parameters)
{
  ((AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute*)nativeHandle)->Perform(*((math_Vector*)Parameters->Handle));
}

 void OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::Perform(OCNaroWrappers::OCmath_Vector^ Parameters, Standard_Real l1, Standard_Real l2)
{
  ((AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute*)nativeHandle)->Perform(*((math_Vector*)Parameters->Handle), l1, l2);
}

 void OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::Perform(OCNaroWrappers::OCmath_Vector^ Parameters, OCNaroWrappers::OCmath_Vector^ V1t, OCNaroWrappers::OCmath_Vector^ V2t, Standard_Real l1, Standard_Real l2)
{
  ((AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute*)nativeHandle)->Perform(*((math_Vector*)Parameters->Handle), *((math_Vector*)V1t->Handle), *((math_Vector*)V2t->Handle), l1, l2);
}

 void OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::Perform(OCNaroWrappers::OCmath_Vector^ Parameters, OCNaroWrappers::OCmath_Vector^ V1t, OCNaroWrappers::OCmath_Vector^ V2t, OCNaroWrappers::OCmath_Vector^ V1c, OCNaroWrappers::OCmath_Vector^ V2c, Standard_Real l1, Standard_Real l2)
{
  ((AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute*)nativeHandle)->Perform(*((math_Vector*)Parameters->Handle), *((math_Vector*)V1t->Handle), *((math_Vector*)V2t->Handle), *((math_Vector*)V1c->Handle), *((math_Vector*)V2c->Handle), l1, l2);
}

 System::Boolean OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute*)nativeHandle)->IsDone());
}

OCAppParCurves_MultiCurve^ OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::BezierValue()
{
  AppParCurves_MultiCurve* tmp = new AppParCurves_MultiCurve();
  *tmp = ((AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute*)nativeHandle)->BezierValue();
  return gcnew OCAppParCurves_MultiCurve(tmp);
}

OCAppParCurves_MultiBSpCurve^ OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::BSplineValue()
{
  AppParCurves_MultiBSpCurve* tmp = new AppParCurves_MultiBSpCurve();
  *tmp = ((AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute*)nativeHandle)->BSplineValue();
  return gcnew OCAppParCurves_MultiBSpCurve(tmp);
}

OCmath_Matrix^ OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::FunctionMatrix()
{
  math_Matrix* tmp = new math_Matrix(0, 0, 0, 0);
  *tmp = ((AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute*)nativeHandle)->FunctionMatrix();
  return gcnew OCmath_Matrix(tmp);
}

OCmath_Matrix^ OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::DerivativeFunctionMatrix()
{
  math_Matrix* tmp = new math_Matrix(0, 0, 0, 0);
  *tmp = ((AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute*)nativeHandle)->DerivativeFunctionMatrix();
  return gcnew OCmath_Matrix(tmp);
}

 void OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::ErrorGradient(OCNaroWrappers::OCmath_Vector^ Grad, Standard_Real& F, Standard_Real& MaxE3d, Standard_Real& MaxE2d)
{
  ((AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute*)nativeHandle)->ErrorGradient(*((math_Vector*)Grad->Handle), F, MaxE3d, MaxE2d);
}

OCmath_Matrix^ OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::Distance()
{
  math_Matrix* tmp = new math_Matrix(0, 0, 0, 0);
  *tmp = ((AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute*)nativeHandle)->Distance();
  return gcnew OCmath_Matrix(tmp);
}

 void OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::Error(Standard_Real& F, Standard_Real& MaxE3d, Standard_Real& MaxE2d)
{
  ((AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute*)nativeHandle)->Error(F, MaxE3d, MaxE2d);
}

 Standard_Real OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::FirstLambda()
{
  return ((AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute*)nativeHandle)->FirstLambda();
}

 Standard_Real OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::LastLambda()
{
  return ((AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute*)nativeHandle)->LastLambda();
}

OCmath_Matrix^ OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::Points()
{
  math_Matrix* tmp = new math_Matrix(0, 0, 0, 0);
  *tmp = ((AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute*)nativeHandle)->Points();
  return gcnew OCmath_Matrix(tmp);
}

OCmath_Matrix^ OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::Poles()
{
  math_Matrix* tmp = new math_Matrix(0, 0, 0, 0);
  *tmp = ((AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute*)nativeHandle)->Poles();
  return gcnew OCmath_Matrix(tmp);
}

OCmath_IntegerVector^ OCAppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute::KIndex()
{
  math_IntegerVector* tmp = new math_IntegerVector(0, 0);
  *tmp = ((AppDef_BSpParLeastSquareOfMyBSplGradientOfBSplineCompute*)nativeHandle)->KIndex();
  return gcnew OCmath_IntegerVector(tmp);
}


