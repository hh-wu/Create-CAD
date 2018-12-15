// File generated by CPPExt (CPP file)
//

#include "Message_ListIteratorOfListOfMsg.h"
#include "../Converter.h"
#include "Message_ListOfMsg.h"
#include "Message_Msg.h"
#include "Message_ListNodeOfListOfMsg.h"


using namespace OCNaroWrappers;

OCMessage_ListIteratorOfListOfMsg::OCMessage_ListIteratorOfListOfMsg(Message_ListIteratorOfListOfMsg* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCMessage_ListIteratorOfListOfMsg::OCMessage_ListIteratorOfListOfMsg() 
{
  nativeHandle = new Message_ListIteratorOfListOfMsg();
}

OCMessage_ListIteratorOfListOfMsg::OCMessage_ListIteratorOfListOfMsg(OCNaroWrappers::OCMessage_ListOfMsg^ L) 
{
  nativeHandle = new Message_ListIteratorOfListOfMsg(*((Message_ListOfMsg*)L->Handle));
}

 void OCMessage_ListIteratorOfListOfMsg::Initialize(OCNaroWrappers::OCMessage_ListOfMsg^ L)
{
  ((Message_ListIteratorOfListOfMsg*)nativeHandle)->Initialize(*((Message_ListOfMsg*)L->Handle));
}

 System::Boolean OCMessage_ListIteratorOfListOfMsg::More()
{
  return OCConverter::StandardBooleanToBoolean(((Message_ListIteratorOfListOfMsg*)nativeHandle)->More());
}

 void OCMessage_ListIteratorOfListOfMsg::Next()
{
  ((Message_ListIteratorOfListOfMsg*)nativeHandle)->Next();
}

OCMessage_Msg^ OCMessage_ListIteratorOfListOfMsg::Value()
{
  Message_Msg* tmp = new Message_Msg();
  *tmp = ((Message_ListIteratorOfListOfMsg*)nativeHandle)->Value();
  return gcnew OCMessage_Msg(tmp);
}

