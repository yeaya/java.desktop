#ifndef _apple_laf_JRSUIConstants$SegmentLeadingSeparator_h_
#define _apple_laf_JRSUIConstants$SegmentLeadingSeparator_h_
//$ class apple.laf.JRSUIConstants$SegmentLeadingSeparator
//$ extends apple.laf.JRSUIConstants$Property

#include <apple/laf/JRSUIConstants$SegmentTrailingSeparator.h>

#pragma push_macro("MASK")
#undef MASK
#pragma push_macro("NO")
#undef NO
#pragma push_macro("SHIFT")
#undef SHIFT
#pragma push_macro("SIZE")
#undef SIZE
#pragma push_macro("YES")
#undef YES

namespace apple {
	namespace laf {
		class JRSUIConstants$PropertyEncoding;
	}
}

namespace apple {
	namespace laf {

class JRSUIConstants$SegmentLeadingSeparator : public ::apple::laf::JRSUIConstants$Property {
	$class(JRSUIConstants$SegmentLeadingSeparator, 0, ::apple::laf::JRSUIConstants$Property)
public:
	JRSUIConstants$SegmentLeadingSeparator();
	void init$(int8_t value);
	virtual int64_t apply(int64_t encodedState) override;
	virtual $String* toString() override;
	static const int8_t SHIFT = 36; // ::apple::laf::JRSUIConstants$SegmentTrailingSeparator::SHIFT + ::apple::laf::JRSUIConstants$SegmentTrailingSeparator::SIZE
	static const int8_t SIZE = 1;
	static const int64_t MASK = 68719476736; // (int64_t)1 << SHIFT
	static ::apple::laf::JRSUIConstants$PropertyEncoding* leadingSeparator;
	static const int8_t _no = 0;
	static ::apple::laf::JRSUIConstants$SegmentLeadingSeparator* NO;
	static const int8_t _yes = 1;
	static ::apple::laf::JRSUIConstants$SegmentLeadingSeparator* YES;
};

	} // laf
} // apple

#pragma pop_macro("MASK")
#pragma pop_macro("NO")
#pragma pop_macro("SHIFT")
#pragma pop_macro("SIZE")
#pragma pop_macro("YES")

#endif // _apple_laf_JRSUIConstants$SegmentLeadingSeparator_h_