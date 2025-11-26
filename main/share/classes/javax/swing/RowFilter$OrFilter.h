#ifndef _javax_swing_RowFilter$OrFilter_h_
#define _javax_swing_RowFilter$OrFilter_h_
//$ class javax.swing.RowFilter$OrFilter
//$ extends javax.swing.RowFilter

#include <javax/swing/RowFilter.h>

namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace swing {
		class RowFilter$Entry;
	}
}

namespace javax {
	namespace swing {

class RowFilter$OrFilter : public ::javax::swing::RowFilter {
	$class(RowFilter$OrFilter, $NO_CLASS_INIT, ::javax::swing::RowFilter)
public:
	RowFilter$OrFilter();
	void init$(::java::lang::Iterable* filters);
	virtual bool include(::javax::swing::RowFilter$Entry* value) override;
	::java::util::List* filters = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_RowFilter$OrFilter_h_