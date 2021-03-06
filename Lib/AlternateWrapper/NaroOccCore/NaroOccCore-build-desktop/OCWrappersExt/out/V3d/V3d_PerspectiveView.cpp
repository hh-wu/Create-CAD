// File generated by CPPExt (CPP file)
//

#include "V3d_PerspectiveView.h"
#include "../Converter.h"
#include "V3d_Viewer.h"
#include "V3d_OrthographicView.h"


using namespace OCNaroWrappers;

OCV3d_PerspectiveView::OCV3d_PerspectiveView(Handle(V3d_PerspectiveView)* nativeHandle) : OCV3d_View((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_V3d_PerspectiveView(*nativeHandle);
}

OCV3d_PerspectiveView::OCV3d_PerspectiveView(OCNaroWrappers::OCV3d_Viewer^ VM) : OCV3d_View((OCDummy^)nullptr)

{
  nativeHandle = new Handle_V3d_PerspectiveView(new V3d_PerspectiveView(*((Handle_V3d_Viewer*)VM->Handle)));
}

OCV3d_PerspectiveView::OCV3d_PerspectiveView(OCNaroWrappers::OCV3d_Viewer^ VM, OCNaroWrappers::OCV3d_OrthographicView^ V) : OCV3d_View((OCDummy^)nullptr)

{
  nativeHandle = new Handle_V3d_PerspectiveView(new V3d_PerspectiveView(*((Handle_V3d_Viewer*)VM->Handle), *((Handle_V3d_OrthographicView*)V->Handle)));
}

OCV3d_PerspectiveView::OCV3d_PerspectiveView(OCNaroWrappers::OCV3d_Viewer^ VM, OCNaroWrappers::OCV3d_PerspectiveView^ V) : OCV3d_View((OCDummy^)nullptr)

{
  nativeHandle = new Handle_V3d_PerspectiveView(new V3d_PerspectiveView(*((Handle_V3d_Viewer*)VM->Handle), *((Handle_V3d_PerspectiveView*)V->Handle)));
}

OCV3d_PerspectiveView^ OCV3d_PerspectiveView::Copy()
{
  Handle(V3d_PerspectiveView) tmp = (*((Handle_V3d_PerspectiveView*)nativeHandle))->Copy();
  return gcnew OCV3d_PerspectiveView(&tmp);
}

 void OCV3d_PerspectiveView::SetAngle(Quantity_PlaneAngle Angle)
{
  (*((Handle_V3d_PerspectiveView*)nativeHandle))->SetAngle(Angle);
}

 Quantity_PlaneAngle OCV3d_PerspectiveView::Angle()
{
  return (*((Handle_V3d_PerspectiveView*)nativeHandle))->Angle();
}

 void OCV3d_PerspectiveView::SetPerspective(Quantity_PlaneAngle Angle, Standard_Real UVRatio, Standard_Real ZNear, Standard_Real ZFar)
{
  (*((Handle_V3d_PerspectiveView*)nativeHandle))->SetPerspective(Angle, UVRatio, ZNear, ZFar);
}


