#ifndef _javax_swing_SpinnerDateModel_h_
#define _javax_swing_SpinnerDateModel_h_
//$ class javax.swing.SpinnerDateModel
//$ extends javax.swing.AbstractSpinnerModel

#include <javax/swing/AbstractSpinnerModel.h>

namespace java {
	namespace lang {
		class Comparable;
	}
}
namespace java {
	namespace util {
		class Calendar;
		class Date;
	}
}

namespace javax {
	namespace swing {

class $import SpinnerDateModel : public ::javax::swing::AbstractSpinnerModel {
	$class(SpinnerDateModel, $NO_CLASS_INIT, ::javax::swing::AbstractSpinnerModel)
public:
	SpinnerDateModel();
	void init$(::java::util::Date* value, ::java::lang::Comparable* start, ::java::lang::Comparable* end, int32_t calendarField);
	void init$();
	bool calendarFieldOK(int32_t calendarField);
	virtual int32_t getCalendarField();
	virtual ::java::util::Date* getDate();
	virtual ::java::lang::Comparable* getEnd();
	virtual $Object* getNextValue() override;
	virtual $Object* getPreviousValue() override;
	virtual ::java::lang::Comparable* getStart();
	virtual $Object* getValue() override;
	virtual void setCalendarField(int32_t calendarField);
	virtual void setEnd(::java::lang::Comparable* end);
	virtual void setStart(::java::lang::Comparable* start);
	virtual void setValue(Object$* value) override;
	::java::lang::Comparable* start = nullptr;
	::java::lang::Comparable* end = nullptr;
	::java::util::Calendar* value = nullptr;
	int32_t calendarField = 0;
};

	} // swing
} // javax

#endif // _javax_swing_SpinnerDateModel_h_