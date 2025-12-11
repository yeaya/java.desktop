#ifndef _apple_laf_JRSUIConstants$ScrollBarPart_h_
#define _apple_laf_JRSUIConstants$ScrollBarPart_h_
//$ class apple.laf.JRSUIConstants$ScrollBarPart
//$ extends apple.laf.JRSUIConstants$Property

#include <apple/laf/JRSUIConstants$SegmentPosition.h>

#pragma push_macro("ARROW_MAX")
#undef ARROW_MAX
#pragma push_macro("ARROW_MAX_INSIDE")
#undef ARROW_MAX_INSIDE
#pragma push_macro("ARROW_MIN")
#undef ARROW_MIN
#pragma push_macro("ARROW_MIN_INSIDE")
#undef ARROW_MIN_INSIDE
#pragma push_macro("MASK")
#undef MASK
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("SHIFT")
#undef SHIFT
#pragma push_macro("SIZE")
#undef SIZE
#pragma push_macro("THUMB")
#undef THUMB
#pragma push_macro("TRACK_MAX")
#undef TRACK_MAX
#pragma push_macro("TRACK_MIN")
#undef TRACK_MIN

namespace apple {
	namespace laf {
		class JRSUIConstants$PropertyEncoding;
	}
}

namespace apple {
	namespace laf {

class JRSUIConstants$ScrollBarPart : public ::apple::laf::JRSUIConstants$Property {
	$class(JRSUIConstants$ScrollBarPart, 0, ::apple::laf::JRSUIConstants$Property)
public:
	JRSUIConstants$ScrollBarPart();
	void init$(int8_t value);
	virtual int64_t apply(int64_t encodedState) override;
	virtual $String* toString() override;
	static const int8_t SHIFT = 20; // ::apple::laf::JRSUIConstants$SegmentPosition::SHIFT + ::apple::laf::JRSUIConstants$SegmentPosition::SIZE
	static const int8_t SIZE = 4;
	static const int64_t MASK = 15728640; // (int64_t)15 << SHIFT
	static ::apple::laf::JRSUIConstants$PropertyEncoding* scrollBarPart;
	static const int8_t _none = 1;
	static ::apple::laf::JRSUIConstants$ScrollBarPart* NONE;
	static const int8_t _thumb = 2;
	static ::apple::laf::JRSUIConstants$ScrollBarPart* THUMB;
	static const int8_t _arrowMin = 3;
	static ::apple::laf::JRSUIConstants$ScrollBarPart* ARROW_MIN;
	static const int8_t _arrowMax = 4;
	static ::apple::laf::JRSUIConstants$ScrollBarPart* ARROW_MAX;
	static const int8_t _arrowMaxInside = 5;
	static ::apple::laf::JRSUIConstants$ScrollBarPart* ARROW_MAX_INSIDE;
	static const int8_t _arrowMinInside = 6;
	static ::apple::laf::JRSUIConstants$ScrollBarPart* ARROW_MIN_INSIDE;
	static const int8_t _trackMin = 7;
	static ::apple::laf::JRSUIConstants$ScrollBarPart* TRACK_MIN;
	static const int8_t _trackMax = 8;
	static ::apple::laf::JRSUIConstants$ScrollBarPart* TRACK_MAX;
};

	} // laf
} // apple

#pragma pop_macro("ARROW_MAX")
#pragma pop_macro("ARROW_MAX_INSIDE")
#pragma pop_macro("ARROW_MIN")
#pragma pop_macro("ARROW_MIN_INSIDE")
#pragma pop_macro("MASK")
#pragma pop_macro("NONE")
#pragma pop_macro("SHIFT")
#pragma pop_macro("SIZE")
#pragma pop_macro("THUMB")
#pragma pop_macro("TRACK_MAX")
#pragma pop_macro("TRACK_MIN")

#endif // _apple_laf_JRSUIConstants$ScrollBarPart_h_