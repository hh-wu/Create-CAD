// File generated by CPPExt (CPP file)
//

#include "OSD_File.h"
#include "../Converter.h"
#include "OSD_Path.h"
#include "OSD_Protection.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "OSD_Printer.h"


using namespace OCNaroWrappers;

OCOSD_File::OCOSD_File(OSD_File* nativeHandle) : OCOSD_FileNode((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCOSD_File::OCOSD_File() : OCOSD_FileNode((OCDummy^)nullptr)

{
  nativeHandle = new OSD_File();
}

OCOSD_File::OCOSD_File(OCNaroWrappers::OCOSD_Path^ Name) : OCOSD_FileNode((OCDummy^)nullptr)

{
  nativeHandle = new OSD_File(*((OSD_Path*)Name->Handle));
}

 void OCOSD_File::Build(OCOSD_OpenMode Mode, OCNaroWrappers::OCOSD_Protection^ Protect)
{
  ((OSD_File*)nativeHandle)->Build((OSD_OpenMode)Mode, *((OSD_Protection*)Protect->Handle));
}

 void OCOSD_File::Open(OCOSD_OpenMode Mode, OCNaroWrappers::OCOSD_Protection^ Protect)
{
  ((OSD_File*)nativeHandle)->Open((OSD_OpenMode)Mode, *((OSD_Protection*)Protect->Handle));
}

 void OCOSD_File::Append(OCOSD_OpenMode Mode, OCNaroWrappers::OCOSD_Protection^ Protect)
{
  ((OSD_File*)nativeHandle)->Append((OSD_OpenMode)Mode, *((OSD_Protection*)Protect->Handle));
}

 void OCOSD_File::Read(OCNaroWrappers::OCTCollection_AsciiString^ Buffer, Standard_Integer Nbyte)
{
  ((OSD_File*)nativeHandle)->Read(*((TCollection_AsciiString*)Buffer->Handle), Nbyte);
}

 void OCOSD_File::ReadLine(OCNaroWrappers::OCTCollection_AsciiString^ Buffer, Standard_Integer NByte, Standard_Integer& NbyteRead)
{
  ((OSD_File*)nativeHandle)->ReadLine(*((TCollection_AsciiString*)Buffer->Handle), NByte, NbyteRead);
}

 void OCOSD_File::Read(Standard_Address& Buffer, Standard_Integer Nbyte, Standard_Integer& Readbyte)
{
  ((OSD_File*)nativeHandle)->Read(Buffer, Nbyte, Readbyte);
}

 void OCOSD_File::Write(OCNaroWrappers::OCTCollection_AsciiString^ Buffer, Standard_Integer Nbyte)
{
  ((OSD_File*)nativeHandle)->Write(*((TCollection_AsciiString*)Buffer->Handle), Nbyte);
}

 void OCOSD_File::Write(Standard_Address Buffer, Standard_Integer Nbyte)
{
  ((OSD_File*)nativeHandle)->Write(Buffer, Nbyte);
}

 void OCOSD_File::Seek(Standard_Integer Offset, OCOSD_FromWhere Whence)
{
  ((OSD_File*)nativeHandle)->Seek(Offset, (OSD_FromWhere)Whence);
}

 void OCOSD_File::Close()
{
  ((OSD_File*)nativeHandle)->Close();
}

 System::Boolean OCOSD_File::IsAtEnd()
{
  return OCConverter::StandardBooleanToBoolean(((OSD_File*)nativeHandle)->IsAtEnd());
}

 OCOSD_KindFile OCOSD_File::KindOfFile()
{
  return (OCOSD_KindFile)(((OSD_File*)nativeHandle)->KindOfFile());
}

OCOSD_File^ OCOSD_File::BuildTemporary()
{
  OSD_File* tmp = new OSD_File();
  *tmp = OSD_File::BuildTemporary();
  return gcnew OCOSD_File(tmp);
}

 void OCOSD_File::SetLock(OCOSD_LockType Lock)
{
  ((OSD_File*)nativeHandle)->SetLock((OSD_LockType)Lock);
}

 void OCOSD_File::UnLock()
{
  ((OSD_File*)nativeHandle)->UnLock();
}

 OCOSD_LockType OCOSD_File::GetLock()
{
  return (OCOSD_LockType)(((OSD_File*)nativeHandle)->GetLock());
}

 System::Boolean OCOSD_File::IsLocked()
{
  return OCConverter::StandardBooleanToBoolean(((OSD_File*)nativeHandle)->IsLocked());
}

 Standard_Integer OCOSD_File::Size()
{
  return ((OSD_File*)nativeHandle)->Size();
}

 void OCOSD_File::Print(OCNaroWrappers::OCOSD_Printer^ WhichPrinter)
{
  ((OSD_File*)nativeHandle)->Print(*((OSD_Printer*)WhichPrinter->Handle));
}

 System::Boolean OCOSD_File::IsOpen()
{
  return OCConverter::StandardBooleanToBoolean(((OSD_File*)nativeHandle)->IsOpen());
}

 System::Boolean OCOSD_File::IsReadable()
{
  return OCConverter::StandardBooleanToBoolean(((OSD_File*)nativeHandle)->IsReadable());
}

 System::Boolean OCOSD_File::IsWriteable()
{
  return OCConverter::StandardBooleanToBoolean(((OSD_File*)nativeHandle)->IsWriteable());
}

 System::Boolean OCOSD_File::IsExecutable()
{
  return OCConverter::StandardBooleanToBoolean(((OSD_File*)nativeHandle)->IsExecutable());
}

 System::Boolean OCOSD_File::ReadLastLine(OCNaroWrappers::OCTCollection_AsciiString^ aLine, Standard_Integer aDelay, Standard_Integer aNbTries)
{
  return OCConverter::StandardBooleanToBoolean(((OSD_File*)nativeHandle)->ReadLastLine(*((TCollection_AsciiString*)aLine->Handle), aDelay, aNbTries));
}

 System::Boolean OCOSD_File::Edit()
{
  return OCConverter::StandardBooleanToBoolean(((OSD_File*)nativeHandle)->Edit());
}


