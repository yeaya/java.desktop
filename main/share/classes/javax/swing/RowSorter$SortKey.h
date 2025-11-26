#ifndef _javax_swing_RowSorter$SortKey_h_
#define _javax_swing_RowSorter$SortKey_h_
//$ class javax.swing.RowSorter$SortKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		class SortOrder;
	}
}

namespace javax {
	namespace swing {

class $export RowSorter$SortKey : public ::java::lang::Object {
	$class(RowSorter$SortKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RowSorter$SortKey();
	void init$(int32_t column, ::javax::swing::SortOrder* sortOrder);
	virtual bool equals(Object$* o) override;
	int32_t getColumn();
	::javax::swing::SortOrder* getSortOrder();
	virtual int32_t hashCode() override;
	int32_t column = 0;
	::javax::swing::SortOrder* sortOrder = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_RowSorter$SortKey_h_