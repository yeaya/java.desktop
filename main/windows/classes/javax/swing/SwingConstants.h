#ifndef _javax_swing_SwingConstants_h_
#define _javax_swing_SwingConstants_h_
//$ interface javax.swing.SwingConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BOTTOM")
#undef BOTTOM
#pragma push_macro("CENTER")
#undef CENTER
#pragma push_macro("EAST")
#undef EAST
#pragma push_macro("HORIZONTAL")
#undef HORIZONTAL
#pragma push_macro("LEADING")
#undef LEADING
#pragma push_macro("LEFT")
#undef LEFT
#pragma push_macro("NEXT")
#undef NEXT
#pragma push_macro("NORTH")
#undef NORTH
#pragma push_macro("NORTH_EAST")
#undef NORTH_EAST
#pragma push_macro("NORTH_WEST")
#undef NORTH_WEST
#pragma push_macro("PREVIOUS")
#undef PREVIOUS
#pragma push_macro("RIGHT")
#undef RIGHT
#pragma push_macro("SOUTH")
#undef SOUTH
#pragma push_macro("SOUTH_EAST")
#undef SOUTH_EAST
#pragma push_macro("SOUTH_WEST")
#undef SOUTH_WEST
#pragma push_macro("TOP")
#undef TOP
#pragma push_macro("TRAILING")
#undef TRAILING
#pragma push_macro("VERTICAL")
#undef VERTICAL
#pragma push_macro("WEST")
#undef WEST

namespace javax {
	namespace swing {

class $export SwingConstants : public ::java::lang::Object {
	$interface(SwingConstants, $NO_CLASS_INIT, ::java::lang::Object)
public:
	static const int32_t CENTER = 0;
	static const int32_t TOP = 1;
	static const int32_t LEFT = 2;
	static const int32_t BOTTOM = 3;
	static const int32_t RIGHT = 4;
	static const int32_t NORTH = 1;
	static const int32_t NORTH_EAST = 2;
	static const int32_t EAST = 3;
	static const int32_t SOUTH_EAST = 4;
	static const int32_t SOUTH = 5;
	static const int32_t SOUTH_WEST = 6;
	static const int32_t WEST = 7;
	static const int32_t NORTH_WEST = 8;
	static const int32_t HORIZONTAL = 0;
	static const int32_t VERTICAL = 1;
	static const int32_t LEADING = 10;
	static const int32_t TRAILING = 11;
	static const int32_t NEXT = 12;
	static const int32_t PREVIOUS = 13;
};

	} // swing
} // javax

#pragma pop_macro("BOTTOM")
#pragma pop_macro("CENTER")
#pragma pop_macro("EAST")
#pragma pop_macro("HORIZONTAL")
#pragma pop_macro("LEADING")
#pragma pop_macro("LEFT")
#pragma pop_macro("NEXT")
#pragma pop_macro("NORTH")
#pragma pop_macro("NORTH_EAST")
#pragma pop_macro("NORTH_WEST")
#pragma pop_macro("PREVIOUS")
#pragma pop_macro("RIGHT")
#pragma pop_macro("SOUTH")
#pragma pop_macro("SOUTH_EAST")
#pragma pop_macro("SOUTH_WEST")
#pragma pop_macro("TOP")
#pragma pop_macro("TRAILING")
#pragma pop_macro("VERTICAL")
#pragma pop_macro("WEST")

#endif // _javax_swing_SwingConstants_h_