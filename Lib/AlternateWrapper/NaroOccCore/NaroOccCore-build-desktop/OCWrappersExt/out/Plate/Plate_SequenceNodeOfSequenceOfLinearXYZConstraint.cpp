// File generated by CPPExt (CPP file)
//

#include "Plate_SequenceNodeOfSequenceOfLinearXYZConstraint.h"
#include "../Converter.h"
#include "Plate_LinearXYZConstraint.h"
#include "Plate_SequenceOfLinearXYZConstraint.h"


using namespace OCNaroWrappers;

OCPlate_SequenceNodeOfSequenceOfLinearXYZConstraint::OCPlate_SequenceNodeOfSequenceOfLinearXYZConstraint(Handle(Plate_SequenceNodeOfSequenceOfLinearXYZConstraint)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Plate_SequenceNodeOfSequenceOfLinearXYZConstraint(*nativeHandle);
}

OCPlate_SequenceNodeOfSequenceOfLinearXYZConstraint::OCPlate_SequenceNodeOfSequenceOfLinearXYZConstraint(OCNaroWrappers::OCPlate_LinearXYZConstraint^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Plate_SequenceNodeOfSequenceOfLinearXYZConstraint(new Plate_SequenceNodeOfSequenceOfLinearXYZConstraint(*((Plate_LinearXYZConstraint*)I->Handle), n, p));
}

OCPlate_LinearXYZConstraint^ OCPlate_SequenceNodeOfSequenceOfLinearXYZConstraint::Value()
{
  Plate_LinearXYZConstraint* tmp = new Plate_LinearXYZConstraint();
  *tmp = (*((Handle_Plate_SequenceNodeOfSequenceOfLinearXYZConstraint*)nativeHandle))->Value();
  return gcnew OCPlate_LinearXYZConstraint(tmp);
}

