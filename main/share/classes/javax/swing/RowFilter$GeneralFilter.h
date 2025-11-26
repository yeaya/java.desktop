#ifndef _javax_swing_RowFilter$GeneralFilter_h_
#define _javax_swing_RowFilter$GeneralFilter_h_
//$ class javax.swing.RowFilter$GeneralFilter
//$ extends javax.swing.RowFilter

#include <java/lang/Array.h>
#include <javax/swing/RowFilter.h>

namespace javax {
	namespace swing {
		class RowFilter$Entry;
	}
}

namespace javax {
	namespace swing {

class RowFilter$GeneralFilter : public ::javax::swing::RowFilter {
	$class(RowFilter$GeneralFilter, $NO_CLASS_INIT, ::javax::swing::RowFilter)
public:
	RowFilter$GeneralFilter();
	void init$($ints* columns);
	virtual bool include(::javax::swing::RowFilter$Entry* value) override;
	virtual bool include(::javax::swing::RowFilter$Entry* value, int32_t index) {return false;}
	$ints* columns = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_RowFilter$GeneralFilter_h_