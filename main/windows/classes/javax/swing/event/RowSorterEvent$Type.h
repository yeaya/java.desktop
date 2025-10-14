#ifndef _javax_swing_event_RowSorterEvent$Type_h_
#define _javax_swing_event_RowSorterEvent$Type_h_
//$ class javax.swing.event.RowSorterEvent$Type
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("SORTED")
#undef SORTED
#pragma push_macro("SORT_ORDER_CHANGED")
#undef SORT_ORDER_CHANGED

namespace javax {
	namespace swing {
		namespace event {

class $export RowSorterEvent$Type : public ::java::lang::Enum {
	$class(RowSorterEvent$Type, 0, ::java::lang::Enum)
public:
	RowSorterEvent$Type();
	static $Array<::javax::swing::event::RowSorterEvent$Type>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::javax::swing::event::RowSorterEvent$Type* valueOf($String* name);
	static $Array<::javax::swing::event::RowSorterEvent$Type>* values();
	static ::javax::swing::event::RowSorterEvent$Type* SORT_ORDER_CHANGED;
	static ::javax::swing::event::RowSorterEvent$Type* SORTED;
	static $Array<::javax::swing::event::RowSorterEvent$Type>* $VALUES;
};

		} // event
	} // swing
} // javax

#pragma pop_macro("SORTED")
#pragma pop_macro("SORT_ORDER_CHANGED")

#endif // _javax_swing_event_RowSorterEvent$Type_h_