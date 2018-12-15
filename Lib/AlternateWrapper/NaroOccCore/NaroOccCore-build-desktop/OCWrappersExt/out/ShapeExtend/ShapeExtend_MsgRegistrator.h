// File generated by CPPExt (Transient)
//
#ifndef _ShapeExtend_MsgRegistrator_OCWrappers_HeaderFile
#define _ShapeExtend_MsgRegistrator_OCWrappers_HeaderFile

// include the wrapped class
#include <ShapeExtend_MsgRegistrator.hxx>
#include "../Converter.h"

#include "ShapeExtend_BasicMsgRegistrator.h"

#include "ShapeExtend_DataMapOfTransientListOfMsg.h"
#include "ShapeExtend_DataMapOfShapeListOfMsg.h"
#include "../Message/Message_Gravity.h"


namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCMessage_Msg;
ref class OCTopoDS_Shape;
ref class OCShapeExtend_DataMapOfTransientListOfMsg;
ref class OCShapeExtend_DataMapOfShapeListOfMsg;


//! Attaches messages to the objects (generic Transient or shape). <br>
//!          The objects of this class are transmitted to the Shape Healing <br>
//!          algorithms so that they could collect messages occurred during <br>
//!          processing. <br>
public ref class OCShapeExtend_MsgRegistrator : OCShapeExtend_BasicMsgRegistrator {

protected:
  // dummy constructor;
  OCShapeExtend_MsgRegistrator(OCDummy^) : OCShapeExtend_BasicMsgRegistrator((OCDummy^)nullptr) {};

public:

// constructor from native
OCShapeExtend_MsgRegistrator(Handle(ShapeExtend_MsgRegistrator)* nativeHandle);

// Methods PUBLIC

//! Creates an object. <br>
OCShapeExtend_MsgRegistrator();

//! Sends a message to be attached to the object. <br>
//!          If the object is in the map then the message is added to the <br>
//!          list, otherwise the object is firstly added to the map. <br>
virtual /*instead*/  void Send(OCNaroWrappers::OCStandard_Transient^ object, OCNaroWrappers::OCMessage_Msg^ message, OCMessage_Gravity gravity) override;

//! Sends a message to be attached to the shape. <br>
//!          If the shape is in the map then the message is added to the <br>
//!          list, otherwise the shape is firstly added to the map. <br>
virtual /*instead*/  void Send(OCNaroWrappers::OCTopoDS_Shape^ shape, OCNaroWrappers::OCMessage_Msg^ message, OCMessage_Gravity gravity) override;

//! Returns a Map of objects and message list <br>
 /*instead*/  OCShapeExtend_DataMapOfTransientListOfMsg^ MapTransient() ;

//! Returns a Map of shapes and message list <br>
 /*instead*/  OCShapeExtend_DataMapOfShapeListOfMsg^ MapShape() ;

~OCShapeExtend_MsgRegistrator()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif