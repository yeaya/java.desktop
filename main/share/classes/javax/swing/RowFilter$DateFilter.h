#ifndef _javax_swing_RowFilter$DateFilter_h_
#define _javax_swing_RowFilter$DateFilter_h_
//$ class javax.swing.RowFilter$DateFilter
//$ extends javax.swing.RowFilter$GeneralFilter

#include <java/lang/Array.h>
#include <javax/swing/RowFilter$GeneralFilter.h>

namespace javax {
	namespace swing {
		class RowFilter$ComparisonType;
		class RowFilter$Entry;
	}
}

namespace javax {
	namespace swing {

class RowFilter$DateFilter : public ::javax::swing::RowFilter$GeneralFilter {
	$class(RowFilter$DateFilter, $NO_CLASS_INIT, ::javax::swing::RowFilter$GeneralFilter)
public:
	RowFilter$DateFilter();
	using ::javax::swing::RowFilter$GeneralFilter::include;
	void init$(::javax::swing::RowFilter$ComparisonType* type, int64_t date, $ints* columns);
	virtual bool include(::javax::swing::RowFilter$Entry* value, int32_t index) override;
	int64_t date = 0;
	::javax::swing::RowFilter$ComparisonType* type = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_RowFilter$DateFilter_h_