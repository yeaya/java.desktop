#ifndef _javax_swing_RowFilter$NumberFilter_h_
#define _javax_swing_RowFilter$NumberFilter_h_
//$ class javax.swing.RowFilter$NumberFilter
//$ extends javax.swing.RowFilter$GeneralFilter

#include <java/lang/Array.h>
#include <javax/swing/RowFilter$GeneralFilter.h>

namespace java {
	namespace lang {
		class Number;
	}
}
namespace javax {
	namespace swing {
		class RowFilter$ComparisonType;
		class RowFilter$Entry;
	}
}

namespace javax {
	namespace swing {

class RowFilter$NumberFilter : public ::javax::swing::RowFilter$GeneralFilter {
	$class(RowFilter$NumberFilter, $NO_CLASS_INIT, ::javax::swing::RowFilter$GeneralFilter)
public:
	RowFilter$NumberFilter();
	using ::javax::swing::RowFilter$GeneralFilter::include;
	void init$(::javax::swing::RowFilter$ComparisonType* type, ::java::lang::Number* number, $ints* columns);
	virtual bool include(::javax::swing::RowFilter$Entry* value, int32_t index) override;
	int32_t longCompare(::java::lang::Number* o);
	bool isComparable = false;
	::java::lang::Number* number = nullptr;
	::javax::swing::RowFilter$ComparisonType* type = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_RowFilter$NumberFilter_h_