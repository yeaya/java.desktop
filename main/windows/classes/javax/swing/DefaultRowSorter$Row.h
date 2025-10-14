#ifndef _javax_swing_DefaultRowSorter$Row_h_
#define _javax_swing_DefaultRowSorter$Row_h_
//$ class javax.swing.DefaultRowSorter$Row
//$ extends java.lang.Comparable

#include <java/lang/Comparable.h>

namespace javax {
	namespace swing {
		class DefaultRowSorter;
	}
}

namespace javax {
	namespace swing {

class DefaultRowSorter$Row : public ::java::lang::Comparable {
	$class(DefaultRowSorter$Row, $NO_CLASS_INIT, ::java::lang::Comparable)
public:
	DefaultRowSorter$Row();
	void init$(::javax::swing::DefaultRowSorter* sorter, int32_t index);
	virtual int32_t compareTo(::javax::swing::DefaultRowSorter$Row* o);
	virtual int32_t compareTo(Object$* o) override;
	::javax::swing::DefaultRowSorter* sorter = nullptr;
	int32_t modelIndex = 0;
};

	} // swing
} // javax

#endif // _javax_swing_DefaultRowSorter$Row_h_