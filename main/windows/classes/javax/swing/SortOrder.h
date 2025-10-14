#ifndef _javax_swing_SortOrder_h_
#define _javax_swing_SortOrder_h_
//$ class javax.swing.SortOrder
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ASCENDING")
#undef ASCENDING
#pragma push_macro("DESCENDING")
#undef DESCENDING
#pragma push_macro("UNSORTED")
#undef UNSORTED

namespace javax {
	namespace swing {

class $export SortOrder : public ::java::lang::Enum {
	$class(SortOrder, 0, ::java::lang::Enum)
public:
	SortOrder();
	static $Array<::javax::swing::SortOrder>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::javax::swing::SortOrder* valueOf($String* name);
	static $Array<::javax::swing::SortOrder>* values();
	static ::javax::swing::SortOrder* ASCENDING;
	static ::javax::swing::SortOrder* DESCENDING;
	static ::javax::swing::SortOrder* UNSORTED;
	static $Array<::javax::swing::SortOrder>* $VALUES;
};

	} // swing
} // javax

#pragma pop_macro("ASCENDING")
#pragma pop_macro("DESCENDING")
#pragma pop_macro("UNSORTED")

#endif // _javax_swing_SortOrder_h_