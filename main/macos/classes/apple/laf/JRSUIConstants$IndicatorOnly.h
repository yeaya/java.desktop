#ifndef _apple_laf_JRSUIConstants$IndicatorOnly_h_
#define _apple_laf_JRSUIConstants$IndicatorOnly_h_
//$ class apple.laf.JRSUIConstants$IndicatorOnly
//$ extends apple.laf.JRSUIConstants$Property

#include <apple/laf/JRSUIConstants$Focused.h>

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

class JRSUIConstants$IndicatorOnly : public ::apple::laf::JRSUIConstants$Property {
	$class(JRSUIConstants$IndicatorOnly, 0, ::apple::laf::JRSUIConstants$Property)
public:
	JRSUIConstants$IndicatorOnly();
	void init$(int8_t value);
	virtual int64_t apply(int64_t encodedState) override;
	virtual $String* toString() override;
	static const int8_t SHIFT = 31; // ::apple::laf::JRSUIConstants$Focused::SHIFT + ::apple::laf::JRSUIConstants$Focused::SIZE
	static const int8_t SIZE = 1;
	static const int64_t MASK = 2147483648; // (int64_t)1 << SHIFT
	static ::apple::laf::JRSUIConstants$PropertyEncoding* indicatorOnly;
	static const int8_t _no = 0;
	static ::apple::laf::JRSUIConstants$IndicatorOnly* NO;
	static const int8_t _yes = 1;
	static ::apple::laf::JRSUIConstants$IndicatorOnly* YES;
};

	} // laf
} // apple

#pragma pop_macro("MASK")
#pragma pop_macro("NO")
#pragma pop_macro("SHIFT")
#pragma pop_macro("SIZE")
#pragma pop_macro("YES")

#endif // _apple_laf_JRSUIConstants$IndicatorOnly_h_