#ifndef _apple_laf_JRSUIConstants$AlignmentHorizontal_h_
#define _apple_laf_JRSUIConstants$AlignmentHorizontal_h_
//$ class apple.laf.JRSUIConstants$AlignmentHorizontal
//$ extends apple.laf.JRSUIConstants$Property

#include <apple/laf/JRSUIConstants$AlignmentVertical.h>

#pragma push_macro("CENTER")
#undef CENTER
#pragma push_macro("LEFT")
#undef LEFT
#pragma push_macro("MASK")
#undef MASK
#pragma push_macro("RIGHT")
#undef RIGHT
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

class JRSUIConstants$AlignmentHorizontal : public ::apple::laf::JRSUIConstants$Property {
	$class(JRSUIConstants$AlignmentHorizontal, 0, ::apple::laf::JRSUIConstants$Property)
public:
	JRSUIConstants$AlignmentHorizontal();
	void init$(int8_t value);
	virtual int64_t apply(int64_t encodedState) override;
	virtual $String* toString() override;
	static const int8_t SHIFT = 15; // ::apple::laf::JRSUIConstants$AlignmentVertical::SHIFT + ::apple::laf::JRSUIConstants$AlignmentVertical::SIZE
	static const int8_t SIZE = 2;
	static const int64_t MASK = 98304; // (int64_t)3 << SHIFT
	static ::apple::laf::JRSUIConstants$PropertyEncoding* alignmentHorizontal;
	static const int8_t _left = 1;
	static ::apple::laf::JRSUIConstants$AlignmentHorizontal* LEFT;
	static const int8_t _center = 2;
	static ::apple::laf::JRSUIConstants$AlignmentHorizontal* CENTER;
	static const int8_t _right = 3;
	static ::apple::laf::JRSUIConstants$AlignmentHorizontal* RIGHT;
};

	} // laf
} // apple

#pragma pop_macro("CENTER")
#pragma pop_macro("LEFT")
#pragma pop_macro("MASK")
#pragma pop_macro("RIGHT")
#pragma pop_macro("SHIFT")
#pragma pop_macro("SIZE")

#endif // _apple_laf_JRSUIConstants$AlignmentHorizontal_h_