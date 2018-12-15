// File generated by CPPExt (CPP file)
//

#include "Message_ListOfMsg.h"
#include "../Converter.h"
#include "Message_ListIteratorOfListOfMsg.h"
#include "Message_Msg.h"
#include "Message_ListNodeOfListOfMsg.h"


using namespace OCNaroWrappers;

OCMessage_ListOfMsg::OCMessage_ListOfMsg(Message_ListOfMsg* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCMessage_ListOfMsg::OCMessage_ListOfMsg() 
{
  nativeHandle = new Message_ListOfMsg();
}

 void OCMessage_ListOfMsg::Assign(OCNaroWrappers::OCMessage_ListOfMsg^ Other)
{
  ((Message_ListOfMsg*)nativeHandle)->Assign(*((Message_ListOfMsg*)Other->Handle));
}

 Standard_Integer OCMessage_ListOfMsg::Extent()
{
  return ((Message_ListOfMsg*)nativeHandle)->Extent();
}

 System::Boolean OCMessage_ListOfMsg::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean(((Message_ListOfMsg*)nativeHandle)->IsEmpty());
}

 void OCMessage_ListOfMsg::Prepend(OCNaroWrappers::OCMessage_Msg^ I)
{
  ((Message_ListOfMsg*)nativeHandle)->Prepend(*((Message_Msg*)I->Handle));
}

 void OCMessage_ListOfMsg::Prepend(OCNaroWrappers::OCMessage_Msg^ I, OCNaroWrappers::OCMessage_ListIteratorOfListOfMsg^ theIt)
{
  ((Message_ListOfMsg*)nativeHandle)->Prepend(*((Message_Msg*)I->Handle), *((Message_ListIteratorOfListOfMsg*)theIt->Handle));
}

 void OCMessage_ListOfMsg::Prepend(OCNaroWrappers::OCMessage_ListOfMsg^ Other)
{
  ((Message_ListOfMsg*)nativeHandle)->Prepend(*((Message_ListOfMsg*)Other->Handle));
}

 void OCMessage_ListOfMsg::Append(OCNaroWrappers::OCMessage_Msg^ I)
{
  ((Message_ListOfMsg*)nativeHandle)->Append(*((Message_Msg*)I->Handle));
}

 void OCMessage_ListOfMsg::Append(OCNaroWrappers::OCMessage_Msg^ I, OCNaroWrappers::OCMessage_ListIteratorOfListOfMsg^ theIt)
{
  ((Message_ListOfMsg*)nativeHandle)->Append(*((Message_Msg*)I->Handle), *((Message_ListIteratorOfListOfMsg*)theIt->Handle));
}

 void OCMessage_ListOfMsg::Append(OCNaroWrappers::OCMessage_ListOfMsg^ Other)
{
  ((Message_ListOfMsg*)nativeHandle)->Append(*((Message_ListOfMsg*)Other->Handle));
}

OCMessage_Msg^ OCMessage_ListOfMsg::First()
{
  Message_Msg* tmp = new Message_Msg();
  *tmp = ((Message_ListOfMsg*)nativeHandle)->First();
  return gcnew OCMessage_Msg(tmp);
}

OCMessage_Msg^ OCMessage_ListOfMsg::Last()
{
  Message_Msg* tmp = new Message_Msg();
  *tmp = ((Message_ListOfMsg*)nativeHandle)->Last();
  return gcnew OCMessage_Msg(tmp);
}

 void OCMessage_ListOfMsg::RemoveFirst()
{
  ((Message_ListOfMsg*)nativeHandle)->RemoveFirst();
}

 void OCMessage_ListOfMsg::Remove(OCNaroWrappers::OCMessage_ListIteratorOfListOfMsg^ It)
{
  ((Message_ListOfMsg*)nativeHandle)->Remove(*((Message_ListIteratorOfListOfMsg*)It->Handle));
}

 void OCMessage_ListOfMsg::InsertBefore(OCNaroWrappers::OCMessage_Msg^ I, OCNaroWrappers::OCMessage_ListIteratorOfListOfMsg^ It)
{
  ((Message_ListOfMsg*)nativeHandle)->InsertBefore(*((Message_Msg*)I->Handle), *((Message_ListIteratorOfListOfMsg*)It->Handle));
}

 void OCMessage_ListOfMsg::InsertBefore(OCNaroWrappers::OCMessage_ListOfMsg^ Other, OCNaroWrappers::OCMessage_ListIteratorOfListOfMsg^ It)
{
  ((Message_ListOfMsg*)nativeHandle)->InsertBefore(*((Message_ListOfMsg*)Other->Handle), *((Message_ListIteratorOfListOfMsg*)It->Handle));
}

 void OCMessage_ListOfMsg::InsertAfter(OCNaroWrappers::OCMessage_Msg^ I, OCNaroWrappers::OCMessage_ListIteratorOfListOfMsg^ It)
{
  ((Message_ListOfMsg*)nativeHandle)->InsertAfter(*((Message_Msg*)I->Handle), *((Message_ListIteratorOfListOfMsg*)It->Handle));
}

 void OCMessage_ListOfMsg::InsertAfter(OCNaroWrappers::OCMessage_ListOfMsg^ Other, OCNaroWrappers::OCMessage_ListIteratorOfListOfMsg^ It)
{
  ((Message_ListOfMsg*)nativeHandle)->InsertAfter(*((Message_ListOfMsg*)Other->Handle), *((Message_ListIteratorOfListOfMsg*)It->Handle));
}

