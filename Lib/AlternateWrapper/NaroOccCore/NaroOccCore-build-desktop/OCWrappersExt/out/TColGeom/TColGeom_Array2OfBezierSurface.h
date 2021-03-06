// File generated by CPPExt (MPV)
//
#ifndef _TColGeom_Array2OfBezierSurface_OCWrappers_HeaderFile
#define _TColGeom_Array2OfBezierSurface_OCWrappers_HeaderFile

// include native header
#include <TColGeom_Array2OfBezierSurface.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCGeom_BezierSurface;



public ref class OCTColGeom_Array2OfBezierSurface  {

protected:
  TColGeom_Array2OfBezierSurface* nativeHandle;
  OCTColGeom_Array2OfBezierSurface(OCDummy^) {};

public:
  property TColGeom_Array2OfBezierSurface* Handle
  {
    TColGeom_Array2OfBezierSurface* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTColGeom_Array2OfBezierSurface(TColGeom_Array2OfBezierSurface* nativeHandle);

// Methods PUBLIC


OCTColGeom_Array2OfBezierSurface(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


OCTColGeom_Array2OfBezierSurface(OCNaroWrappers::OCGeom_BezierSurface^ Item, Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


 /*instead*/  void Init(OCNaroWrappers::OCGeom_BezierSurface^ V) ;


 /*instead*/  OCTColGeom_Array2OfBezierSurface^ Assign(OCNaroWrappers::OCTColGeom_Array2OfBezierSurface^ Other) ;


 /*instead*/  Standard_Integer ColLength() ;


 /*instead*/  Standard_Integer RowLength() ;


 /*instead*/  Standard_Integer LowerCol() ;


 /*instead*/  Standard_Integer LowerRow() ;


 /*instead*/  Standard_Integer UpperCol() ;


 /*instead*/  Standard_Integer UpperRow() ;


 /*instead*/  void SetValue(Standard_Integer Row, Standard_Integer Col, OCNaroWrappers::OCGeom_BezierSurface^ Value) ;


 /*instead*/  OCGeom_BezierSurface^ Value(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  OCGeom_BezierSurface^ ChangeValue(Standard_Integer Row, Standard_Integer Col) ;

~OCTColGeom_Array2OfBezierSurface()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
