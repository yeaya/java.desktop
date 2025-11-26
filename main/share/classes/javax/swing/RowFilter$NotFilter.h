#ifndef _javax_swing_RowFilter$NotFilter_h_
#define _javax_swing_RowFilter$NotFilter_h_
//$ class javax.swing.RowFilter$NotFilter
//$ extends javax.swing.RowFilter

#include <javax/swing/RowFilter.h>

namespace javax {
	namespace swing {
		class RowFilter$Entry;
	}
}

namespace javax {
	namespace swing {

class RowFilter$NotFilter : public ::javax::swing::RowFilter {
	$class(RowFilter$NotFilter, $NO_CLASS_INIT, ::javax::swing::RowFilter)
public:
	RowFilter$NotFilter();
	void init$(::javax::swing::RowFilter* filter);
	virtual bool include(::javax::swing::RowFilter$Entry* value) override;
	::javax::swing::RowFilter* filter = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_RowFilter$NotFilter_h_