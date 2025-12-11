#ifndef _apple_laf_JRSUIConstants$SegmentPosition_h_
#define _apple_laf_JRSUIConstants$SegmentPosition_h_
//$ class apple.laf.JRSUIConstants$SegmentPosition
//$ extends apple.laf.JRSUIConstants$Property

#include <apple/laf/JRSUIConstants$AlignmentHorizontal.h>

#pragma push_macro("FIRST")
#undef FIRST
#pragma push_macro("LAST")
#undef LAST
#pragma push_macro("MASK")
#undef MASK
#pragma push_macro("MIDDLE")
#undef MIDDLE
#pragma push_macro("ONLY")
#undef ONLY
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

class JRSUIConstants$SegmentPosition : public ::apple::laf::JRSUIConstants$Property {
	$class(JRSUIConstants$SegmentPosition, 0, ::apple::laf::JRSUIConstants$Property)
public:
	JRSUIConstants$SegmentPosition();
	void init$(int8_t value);
	virtual int64_t apply(int64_t encodedState) override;
	virtual $String* toString() override;
	static const int8_t SHIFT = 17; // ::apple::laf::JRSUIConstants$AlignmentHorizontal::SHIFT + ::apple::laf::JRSUIConstants$AlignmentHorizontal::SIZE
	static const int8_t SIZE = 3;
	static const int64_t MASK = 917504; // (int64_t)7 << SHIFT
	static ::apple::laf::JRSUIConstants$PropertyEncoding* segmentPosition;
	static const int8_t _first = 1;
	static ::apple::laf::JRSUIConstants$SegmentPosition* FIRST;
	static const int8_t _middle = 2;
	static ::apple::laf::JRSUIConstants$SegmentPosition* MIDDLE;
	static const int8_t _last = 3;
	static ::apple::laf::JRSUIConstants$SegmentPosition* LAST;
	static const int8_t _only = 4;
	static ::apple::laf::JRSUIConstants$SegmentPosition* ONLY;
};

	} // laf
} // apple

#pragma pop_macro("FIRST")
#pragma pop_macro("LAST")
#pragma pop_macro("MASK")
#pragma pop_macro("MIDDLE")
#pragma pop_macro("ONLY")
#pragma pop_macro("SHIFT")
#pragma pop_macro("SIZE")

#endif // _apple_laf_JRSUIConstants$SegmentPosition_h_