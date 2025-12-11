#ifndef _apple_laf_JRSUIConstants$State_h_
#define _apple_laf_JRSUIConstants$State_h_
//$ class apple.laf.JRSUIConstants$State
//$ extends apple.laf.JRSUIConstants$Property

#include <apple/laf/JRSUIConstants$Size.h>

#pragma push_macro("ACTIVE")
#undef ACTIVE
#pragma push_macro("DISABLED")
#undef DISABLED
#pragma push_macro("DRAG")
#undef DRAG
#pragma push_macro("INACTIVE")
#undef INACTIVE
#pragma push_macro("MASK")
#undef MASK
#pragma push_macro("PRESSED")
#undef PRESSED
#pragma push_macro("PULSED")
#undef PULSED
#pragma push_macro("ROLLOVER")
#undef ROLLOVER
#pragma push_macro("SHIFT")
#undef SHIFT
#pragma push_macro("SIZE")
#undef SIZE

namespace apple {
	namespace laf {
		class JRSUIConstants$PropertyEncoding;
	}
}

namespace apple {
	namespace laf {

class JRSUIConstants$State : public ::apple::laf::JRSUIConstants$Property {
	$class(JRSUIConstants$State, 0, ::apple::laf::JRSUIConstants$Property)
public:
	JRSUIConstants$State();
	void init$(int8_t value);
	virtual int64_t apply(int64_t encodedState) override;
	virtual $String* toString() override;
	static const int8_t SHIFT = 3; // ::apple::laf::JRSUIConstants$Size::SHIFT + ::apple::laf::JRSUIConstants$Size::SIZE
	static const int8_t SIZE = 4;
	static const int64_t MASK = 120; // (int64_t)15 << SHIFT
	static ::apple::laf::JRSUIConstants$PropertyEncoding* state;
	static const int8_t _active = 1;
	static ::apple::laf::JRSUIConstants$State* ACTIVE;
	static const int8_t _inactive = 2;
	static ::apple::laf::JRSUIConstants$State* INACTIVE;
	static const int8_t _disabled = 3;
	static ::apple::laf::JRSUIConstants$State* DISABLED;
	static const int8_t _pressed = 4;
	static ::apple::laf::JRSUIConstants$State* PRESSED;
	static const int8_t _pulsed = 5;
	static ::apple::laf::JRSUIConstants$State* PULSED;
	static const int8_t _rollover = 6;
	static ::apple::laf::JRSUIConstants$State* ROLLOVER;
	static const int8_t _drag = 7;
	static ::apple::laf::JRSUIConstants$State* DRAG;
};

	} // laf
} // apple

#pragma pop_macro("ACTIVE")
#pragma pop_macro("DISABLED")
#pragma pop_macro("DRAG")
#pragma pop_macro("INACTIVE")
#pragma pop_macro("MASK")
#pragma pop_macro("PRESSED")
#pragma pop_macro("PULSED")
#pragma pop_macro("ROLLOVER")
#pragma pop_macro("SHIFT")
#pragma pop_macro("SIZE")

#endif // _apple_laf_JRSUIConstants$State_h_