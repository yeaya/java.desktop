#ifndef _javax_swing_RowFilter$AndFilter_h_
#define _javax_swing_RowFilter$AndFilter_h_
//$ class javax.swing.RowFilter$AndFilter
//$ extends javax.swing.RowFilter$OrFilter

#include <javax/swing/RowFilter$OrFilter.h>

namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace javax {
	namespace swing {
		class RowFilter$Entry;
	}
}

namespace javax {
	namespace swing {

class RowFilter$AndFilter : public ::javax::swing::RowFilter$OrFilter {
	$class(RowFilter$AndFilter, $NO_CLASS_INIT, ::javax::swing::RowFilter$OrFilter)
public:
	RowFilter$AndFilter();
	void init$(::java::lang::Iterable* filters);
	virtual bool include(::javax::swing::RowFilter$Entry* value) override;
};

	} // swing
} // javax

#endif // _javax_swing_RowFilter$AndFilter_h_