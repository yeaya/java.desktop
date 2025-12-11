#ifndef _apple_laf_JRSUIConstants$Orientation_h_
#define _apple_laf_JRSUIConstants$Orientation_h_
//$ class apple.laf.JRSUIConstants$Orientation
//$ extends apple.laf.JRSUIConstants$Property

#include <apple/laf/JRSUIConstants$Direction.h>

#pragma push_macro("HORIZONTAL")
#undef HORIZONTAL
#pragma push_macro("MASK")
#undef MASK
#pragma push_macro("SHIFT")
#undef SHIFT
#pragma push_macro("SIZE")
#undef SIZE
#pragma push_macro("VERTICAL")
#undef VERTICAL

namespace apple {
	namespace laf {
		class JRSUIConstants$PropertyEncoding;
	}
}

namespace apple {
	namespace laf {

class JRSUIConstants$Orientation : public ::apple::laf::JRSUIConstants$Property {
	$class(JRSUIConstants$Orientation, 0, ::apple::laf::JRSUIConstants$Property)
public:
	JRSUIConstants$Orientation();
	void init$(int8_t value);
	virtual int64_t apply(int64_t encodedState) override;
	virtual $String* toString() override;
	static const int8_t SHIFT = 11; // ::apple::laf::JRSUIConstants$Direction::SHIFT + ::apple::laf::JRSUIConstants$Direction::SIZE
	static const int8_t SIZE = 2;
	static const int64_t MASK = 6144; // (int64_t)3 << SHIFT
	static ::apple::laf::JRSUIConstants$PropertyEncoding* orientation;
	static const int8_t _horizontal = 1;
	static ::apple::laf::JRSUIConstants$Orientation* HORIZONTAL;
	static const int8_t _vertical = 2;
	static ::apple::laf::JRSUIConstants$Orientation* VERTICAL;
};

	} // laf
} // apple

#pragma pop_macro("HORIZONTAL")
#pragma pop_macro("MASK")
#pragma pop_macro("SHIFT")
#pragma pop_macro("SIZE")
#pragma pop_macro("VERTICAL")

#endif // _apple_laf_JRSUIConstants$Orientation_h_