#ifndef _apple_laf_JRSUIConstants$Direction_h_
#define _apple_laf_JRSUIConstants$Direction_h_
//$ class apple.laf.JRSUIConstants$Direction
//$ extends apple.laf.JRSUIConstants$Property

#include <apple/laf/JRSUIConstants$State.h>

#pragma push_macro("DOWN")
#undef DOWN
#pragma push_macro("EAST")
#undef EAST
#pragma push_macro("LEFT")
#undef LEFT
#pragma push_macro("MASK")
#undef MASK
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("NORTH")
#undef NORTH
#pragma push_macro("RIGHT")
#undef RIGHT
#pragma push_macro("SHIFT")
#undef SHIFT
#pragma push_macro("SIZE")
#undef SIZE
#pragma push_macro("SOUTH")
#undef SOUTH
#pragma push_macro("UP")
#undef UP
#pragma push_macro("WEST")
#undef WEST

namespace apple {
	namespace laf {
		class JRSUIConstants$PropertyEncoding;
	}
}

namespace apple {
	namespace laf {

class JRSUIConstants$Direction : public ::apple::laf::JRSUIConstants$Property {
	$class(JRSUIConstants$Direction, 0, ::apple::laf::JRSUIConstants$Property)
public:
	JRSUIConstants$Direction();
	void init$(int8_t value);
	virtual int64_t apply(int64_t encodedState) override;
	virtual $String* toString() override;
	static const int8_t SHIFT = 7; // ::apple::laf::JRSUIConstants$State::SHIFT + ::apple::laf::JRSUIConstants$State::SIZE
	static const int8_t SIZE = 4;
	static const int64_t MASK = 1920; // (int64_t)15 << SHIFT
	static ::apple::laf::JRSUIConstants$PropertyEncoding* direction;
	static const int8_t _none = 1;
	static ::apple::laf::JRSUIConstants$Direction* NONE;
	static const int8_t _up = 2;
	static ::apple::laf::JRSUIConstants$Direction* UP;
	static const int8_t _down = 3;
	static ::apple::laf::JRSUIConstants$Direction* DOWN;
	static const int8_t _left = 4;
	static ::apple::laf::JRSUIConstants$Direction* LEFT;
	static const int8_t _right = 5;
	static ::apple::laf::JRSUIConstants$Direction* RIGHT;
	static const int8_t _north = 6;
	static ::apple::laf::JRSUIConstants$Direction* NORTH;
	static const int8_t _south = 7;
	static ::apple::laf::JRSUIConstants$Direction* SOUTH;
	static const int8_t _east = 8;
	static ::apple::laf::JRSUIConstants$Direction* EAST;
	static const int8_t _west = 9;
	static ::apple::laf::JRSUIConstants$Direction* WEST;
};

	} // laf
} // apple

#pragma pop_macro("DOWN")
#pragma pop_macro("EAST")
#pragma pop_macro("LEFT")
#pragma pop_macro("MASK")
#pragma pop_macro("NONE")
#pragma pop_macro("NORTH")
#pragma pop_macro("RIGHT")
#pragma pop_macro("SHIFT")
#pragma pop_macro("SIZE")
#pragma pop_macro("SOUTH")
#pragma pop_macro("UP")
#pragma pop_macro("WEST")

#endif // _apple_laf_JRSUIConstants$Direction_h_