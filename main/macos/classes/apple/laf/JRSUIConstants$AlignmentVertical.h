#ifndef _apple_laf_JRSUIConstants$AlignmentVertical_h_
#define _apple_laf_JRSUIConstants$AlignmentVertical_h_
//$ class apple.laf.JRSUIConstants$AlignmentVertical
//$ extends apple.laf.JRSUIConstants$Property

#include <apple/laf/JRSUIConstants$Orientation.h>

#pragma push_macro("BOTTOM")
#undef BOTTOM
#pragma push_macro("CENTER")
#undef CENTER
#pragma push_macro("MASK")
#undef MASK
#pragma push_macro("SHIFT")
#undef SHIFT
#pragma push_macro("SIZE")
#undef SIZE
#pragma push_macro("TOP")
#undef TOP

namespace apple {
	namespace laf {
		class JRSUIConstants$PropertyEncoding;
	}
}

namespace apple {
	namespace laf {

class JRSUIConstants$AlignmentVertical : public ::apple::laf::JRSUIConstants$Property {
	$class(JRSUIConstants$AlignmentVertical, 0, ::apple::laf::JRSUIConstants$Property)
public:
	JRSUIConstants$AlignmentVertical();
	void init$(int8_t value);
	virtual int64_t apply(int64_t encodedState) override;
	virtual $String* toString() override;
	static const int8_t SHIFT = 13; // ::apple::laf::JRSUIConstants$Orientation::SHIFT + ::apple::laf::JRSUIConstants$Orientation::SIZE
	static const int8_t SIZE = 2;
	static const int64_t MASK = 24576; // (int64_t)3 << SHIFT
	static ::apple::laf::JRSUIConstants$PropertyEncoding* alignmentVertical;
	static const int8_t _top = 1;
	static ::apple::laf::JRSUIConstants$AlignmentVertical* TOP;
	static const int8_t _center = 2;
	static ::apple::laf::JRSUIConstants$AlignmentVertical* CENTER;
	static const int8_t _bottom = 3;
	static ::apple::laf::JRSUIConstants$AlignmentVertical* BOTTOM;
};

	} // laf
} // apple

#pragma pop_macro("BOTTOM")
#pragma pop_macro("CENTER")
#pragma pop_macro("MASK")
#pragma pop_macro("SHIFT")
#pragma pop_macro("SIZE")
#pragma pop_macro("TOP")

#endif // _apple_laf_JRSUIConstants$AlignmentVertical_h_