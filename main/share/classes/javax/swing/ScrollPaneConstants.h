#ifndef _javax_swing_ScrollPaneConstants_h_
#define _javax_swing_ScrollPaneConstants_h_
//$ interface javax.swing.ScrollPaneConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("COLUMN_HEADER")
#undef COLUMN_HEADER
#pragma push_macro("HORIZONTAL_SCROLLBAR")
#undef HORIZONTAL_SCROLLBAR
#pragma push_macro("HORIZONTAL_SCROLLBAR_ALWAYS")
#undef HORIZONTAL_SCROLLBAR_ALWAYS
#pragma push_macro("HORIZONTAL_SCROLLBAR_AS_NEEDED")
#undef HORIZONTAL_SCROLLBAR_AS_NEEDED
#pragma push_macro("HORIZONTAL_SCROLLBAR_NEVER")
#undef HORIZONTAL_SCROLLBAR_NEVER
#pragma push_macro("HORIZONTAL_SCROLLBAR_POLICY")
#undef HORIZONTAL_SCROLLBAR_POLICY
#pragma push_macro("LOWER_LEADING_CORNER")
#undef LOWER_LEADING_CORNER
#pragma push_macro("LOWER_LEFT_CORNER")
#undef LOWER_LEFT_CORNER
#pragma push_macro("LOWER_RIGHT_CORNER")
#undef LOWER_RIGHT_CORNER
#pragma push_macro("LOWER_TRAILING_CORNER")
#undef LOWER_TRAILING_CORNER
#pragma push_macro("ROW_HEADER")
#undef ROW_HEADER
#pragma push_macro("UPPER_LEADING_CORNER")
#undef UPPER_LEADING_CORNER
#pragma push_macro("UPPER_LEFT_CORNER")
#undef UPPER_LEFT_CORNER
#pragma push_macro("UPPER_RIGHT_CORNER")
#undef UPPER_RIGHT_CORNER
#pragma push_macro("UPPER_TRAILING_CORNER")
#undef UPPER_TRAILING_CORNER
#pragma push_macro("VERTICAL_SCROLLBAR")
#undef VERTICAL_SCROLLBAR
#pragma push_macro("VERTICAL_SCROLLBAR_ALWAYS")
#undef VERTICAL_SCROLLBAR_ALWAYS
#pragma push_macro("VERTICAL_SCROLLBAR_AS_NEEDED")
#undef VERTICAL_SCROLLBAR_AS_NEEDED
#pragma push_macro("VERTICAL_SCROLLBAR_NEVER")
#undef VERTICAL_SCROLLBAR_NEVER
#pragma push_macro("VERTICAL_SCROLLBAR_POLICY")
#undef VERTICAL_SCROLLBAR_POLICY
#pragma push_macro("VIEWPORT")
#undef VIEWPORT

namespace javax {
	namespace swing {

class $export ScrollPaneConstants : public ::java::lang::Object {
	$interface(ScrollPaneConstants, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static $String* VIEWPORT;
	static $String* VERTICAL_SCROLLBAR;
	static $String* HORIZONTAL_SCROLLBAR;
	static $String* ROW_HEADER;
	static $String* COLUMN_HEADER;
	static $String* LOWER_LEFT_CORNER;
	static $String* LOWER_RIGHT_CORNER;
	static $String* UPPER_LEFT_CORNER;
	static $String* UPPER_RIGHT_CORNER;
	static $String* LOWER_LEADING_CORNER;
	static $String* LOWER_TRAILING_CORNER;
	static $String* UPPER_LEADING_CORNER;
	static $String* UPPER_TRAILING_CORNER;
	static $String* VERTICAL_SCROLLBAR_POLICY;
	static $String* HORIZONTAL_SCROLLBAR_POLICY;
	static const int32_t VERTICAL_SCROLLBAR_AS_NEEDED = 20;
	static const int32_t VERTICAL_SCROLLBAR_NEVER = 21;
	static const int32_t VERTICAL_SCROLLBAR_ALWAYS = 22;
	static const int32_t HORIZONTAL_SCROLLBAR_AS_NEEDED = 30;
	static const int32_t HORIZONTAL_SCROLLBAR_NEVER = 31;
	static const int32_t HORIZONTAL_SCROLLBAR_ALWAYS = 32;
};

	} // swing
} // javax

#pragma pop_macro("COLUMN_HEADER")
#pragma pop_macro("HORIZONTAL_SCROLLBAR")
#pragma pop_macro("HORIZONTAL_SCROLLBAR_ALWAYS")
#pragma pop_macro("HORIZONTAL_SCROLLBAR_AS_NEEDED")
#pragma pop_macro("HORIZONTAL_SCROLLBAR_NEVER")
#pragma pop_macro("HORIZONTAL_SCROLLBAR_POLICY")
#pragma pop_macro("LOWER_LEADING_CORNER")
#pragma pop_macro("LOWER_LEFT_CORNER")
#pragma pop_macro("LOWER_RIGHT_CORNER")
#pragma pop_macro("LOWER_TRAILING_CORNER")
#pragma pop_macro("ROW_HEADER")
#pragma pop_macro("UPPER_LEADING_CORNER")
#pragma pop_macro("UPPER_LEFT_CORNER")
#pragma pop_macro("UPPER_RIGHT_CORNER")
#pragma pop_macro("UPPER_TRAILING_CORNER")
#pragma pop_macro("VERTICAL_SCROLLBAR")
#pragma pop_macro("VERTICAL_SCROLLBAR_ALWAYS")
#pragma pop_macro("VERTICAL_SCROLLBAR_AS_NEEDED")
#pragma pop_macro("VERTICAL_SCROLLBAR_NEVER")
#pragma pop_macro("VERTICAL_SCROLLBAR_POLICY")
#pragma pop_macro("VIEWPORT")

#endif // _javax_swing_ScrollPaneConstants_h_