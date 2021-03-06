// File generated by CPPExt (CPP file)
//

#include "Convert_ConeToBSplineSurface.h"
#include "../Converter.h"
#include "../gp/gp_Cone.h"


using namespace OCNaroWrappers;

OCConvert_ConeToBSplineSurface::OCConvert_ConeToBSplineSurface(Convert_ConeToBSplineSurface* nativeHandle) : OCConvert_ElementarySurfaceToBSplineSurface((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCConvert_ConeToBSplineSurface::OCConvert_ConeToBSplineSurface(OCNaroWrappers::OCgp_Cone^ C, Standard_Real U1, Standard_Real U2, Standard_Real V1, Standard_Real V2) : OCConvert_ElementarySurfaceToBSplineSurface((OCDummy^)nullptr)

{
  nativeHandle = new Convert_ConeToBSplineSurface(*((gp_Cone*)C->Handle), U1, U2, V1, V2);
}

OCConvert_ConeToBSplineSurface::OCConvert_ConeToBSplineSurface(OCNaroWrappers::OCgp_Cone^ C, Standard_Real V1, Standard_Real V2) : OCConvert_ElementarySurfaceToBSplineSurface((OCDummy^)nullptr)

{
  nativeHandle = new Convert_ConeToBSplineSurface(*((gp_Cone*)C->Handle), V1, V2);
}


