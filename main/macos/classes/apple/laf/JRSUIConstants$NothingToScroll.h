#ifndef _apple_laf_JRSUIConstants$NothingToScroll_h_
#define _apple_laf_JRSUIConstants$NothingToScroll_h_
//$ class apple.laf.JRSUIConstants$NothingToScroll
//$ extends apple.laf.JRSUIConstants$Property

#include <apple/laf/JRSUIConstants$SegmentLeadingSeparator.h>

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

class JRSUIConstants$NothingToScroll : public ::apple::laf::JRSUIConstants$Property {
	$class(JRSUIConstants$NothingToScroll, 0, ::apple::laf::JRSUIConstants$Property)
public:
	JRSUIConstants$NothingToScroll();
	void init$(int8_t value);
	virtual int64_t apply(int64_t encodedState) override;
	virtual $String* toString() override;
	static const int8_t SHIFT = 37; // ::apple::laf::JRSUIConstants$SegmentLeadingSeparator::SHIFT + ::apple::laf::JRSUIConstants$SegmentLeadingSeparator::SIZE
	static const int8_t SIZE = 1;
	static const int64_t MASK = 137438953472; // (int64_t)1 << SHIFT
	static ::apple::laf::JRSUIConstants$PropertyEncoding* focused;
	static const int8_t _no = 0;
	static ::apple::laf::JRSUIConstants$NothingToScroll* NO;
	static const int8_t _yes = 1;
	static ::apple::laf::JRSUIConstants$NothingToScroll* YES;
};

	} // laf
} // apple

#pragma pop_macro("MASK")
#pragma pop_macro("NO")
#pragma pop_macro("SHIFT")
#pragma pop_macro("SIZE")
#pragma pop_macro("YES")

#endif // _apple_laf_JRSUIConstants$NothingToScroll_h_