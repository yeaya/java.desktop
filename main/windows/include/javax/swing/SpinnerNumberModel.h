#ifndef _javax_swing_SpinnerNumberModel_h_
#define _javax_swing_SpinnerNumberModel_h_
//$ class javax.swing.SpinnerNumberModel
//$ extends javax.swing.AbstractSpinnerModel

#include <javax/swing/AbstractSpinnerModel.h>

namespace java {
	namespace lang {
		class Comparable;
		class Number;
	}
}

namespace javax {
	namespace swing {

class $import SpinnerNumberModel : public ::javax::swing::AbstractSpinnerModel {
	$class(SpinnerNumberModel, $NO_CLASS_INIT, ::javax::swing::AbstractSpinnerModel)
public:
	SpinnerNumberModel();
	void init$(::java::lang::Number* value, ::java::lang::Comparable* minimum, ::java::lang::Comparable* maximum, ::java::lang::Number* stepSize);
	void init$(int32_t value, int32_t minimum, int32_t maximum, int32_t stepSize);
	void init$(double value, double minimum, double maximum, double stepSize);
	void init$();
	virtual ::java::lang::Comparable* getMaximum();
	virtual ::java::lang::Comparable* getMinimum();
	virtual $Object* getNextValue() override;
	virtual ::java::lang::Number* getNumber();
	virtual $Object* getPreviousValue() override;
	virtual ::java::lang::Number* getStepSize();
	virtual $Object* getValue() override;
	::java::lang::Number* incrValue(int32_t dir);
	virtual void setMaximum(::java::lang::Comparable* maximum);
	virtual void setMinimum(::java::lang::Comparable* minimum);
	virtual void setStepSize(::java::lang::Number* stepSize);
	virtual void setValue(Object$* value) override;
	::java::lang::Number* stepSize = nullptr;
	::java::lang::Number* value = nullptr;
	::java::lang::Comparable* minimum = nullptr;
	::java::lang::Comparable* maximum = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_SpinnerNumberModel_h_