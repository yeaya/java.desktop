#ifndef _javax_swing_DropMode_h_
#define _javax_swing_DropMode_h_
//$ class javax.swing.DropMode
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("INSERT")
#undef INSERT
#pragma push_macro("INSERT_COLS")
#undef INSERT_COLS
#pragma push_macro("INSERT_ROWS")
#undef INSERT_ROWS
#pragma push_macro("ON")
#undef ON
#pragma push_macro("ON_OR_INSERT")
#undef ON_OR_INSERT
#pragma push_macro("ON_OR_INSERT_COLS")
#undef ON_OR_INSERT_COLS
#pragma push_macro("ON_OR_INSERT_ROWS")
#undef ON_OR_INSERT_ROWS
#pragma push_macro("USE_SELECTION")
#undef USE_SELECTION

namespace javax {
	namespace swing {

class $import DropMode : public ::java::lang::Enum {
	$class(DropMode, 0, ::java::lang::Enum)
public:
	DropMode();
	static $Array<::javax::swing::DropMode>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::javax::swing::DropMode* valueOf($String* name);
	static $Array<::javax::swing::DropMode>* values();
	static ::javax::swing::DropMode* USE_SELECTION;
	static ::javax::swing::DropMode* ON;
	static ::javax::swing::DropMode* INSERT;
	static ::javax::swing::DropMode* INSERT_ROWS;
	static ::javax::swing::DropMode* INSERT_COLS;
	static ::javax::swing::DropMode* ON_OR_INSERT;
	static ::javax::swing::DropMode* ON_OR_INSERT_ROWS;
	static ::javax::swing::DropMode* ON_OR_INSERT_COLS;
	static $Array<::javax::swing::DropMode>* $VALUES;
};

	} // swing
} // javax

#pragma pop_macro("INSERT")
#pragma pop_macro("INSERT_COLS")
#pragma pop_macro("INSERT_ROWS")
#pragma pop_macro("ON")
#pragma pop_macro("ON_OR_INSERT")
#pragma pop_macro("ON_OR_INSERT_COLS")
#pragma pop_macro("ON_OR_INSERT_ROWS")
#pragma pop_macro("USE_SELECTION")

#endif // _javax_swing_DropMode_h_