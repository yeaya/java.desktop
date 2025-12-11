#ifndef _apple_laf_JRSUIConstants$ArrowsOnly_h_
#define _apple_laf_JRSUIConstants$ArrowsOnly_h_
//$ class apple.laf.JRSUIConstants$ArrowsOnly
//$ extends apple.laf.JRSUIConstants$Property

#include <apple/laf/JRSUIConstants$NoIndicator.h>

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

class JRSUIConstants$ArrowsOnly : public ::apple::laf::JRSUIConstants$Property {
	$class(JRSUIConstants$ArrowsOnly, 0, ::apple::laf::JRSUIConstants$Property)
public:
	JRSUIConstants$ArrowsOnly();
	void init$(int8_t value);
	virtual int64_t apply(int64_t encodedState) override;
	virtual $String* toString() override;
	static const int8_t SHIFT = 33; // ::apple::laf::JRSUIConstants$NoIndicator::SHIFT + ::apple::laf::JRSUIConstants$NoIndicator::SIZE
	static const int8_t SIZE = 1;
	static const int64_t MASK = 8589934592; // (int64_t)1 << SHIFT
	static ::apple::laf::JRSUIConstants$PropertyEncoding* focused;
	static const int8_t _no = 0;
	static ::apple::laf::JRSUIConstants$ArrowsOnly* NO;
	static const int8_t _yes = 1;
	static ::apple::laf::JRSUIConstants$ArrowsOnly* YES;
};

	} // laf
} // apple

#pragma pop_macro("MASK")
#pragma pop_macro("NO")
#pragma pop_macro("SHIFT")
#pragma pop_macro("SIZE")
#pragma pop_macro("YES")

#endif // _apple_laf_JRSUIConstants$ArrowsOnly_h_