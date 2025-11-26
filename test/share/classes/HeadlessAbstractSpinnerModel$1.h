#ifndef _HeadlessAbstractSpinnerModel$1_h_
#define _HeadlessAbstractSpinnerModel$1_h_
//$ class HeadlessAbstractSpinnerModel$1
//$ extends javax.swing.AbstractSpinnerModel

#include <javax/swing/AbstractSpinnerModel.h>

class HeadlessAbstractSpinnerModel$1 : public ::javax::swing::AbstractSpinnerModel {
	$class(HeadlessAbstractSpinnerModel$1, $NO_CLASS_INIT, ::javax::swing::AbstractSpinnerModel)
public:
	HeadlessAbstractSpinnerModel$1();
	void init$();
	virtual $Object* getNextValue() override;
	virtual $Object* getPreviousValue() override;
	virtual $Object* getValue() override;
	virtual void setValue(Object$* value) override;
};

#endif // _HeadlessAbstractSpinnerModel$1_h_