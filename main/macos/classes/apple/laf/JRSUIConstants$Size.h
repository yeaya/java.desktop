#ifndef _apple_laf_JRSUIConstants$Size_h_
#define _apple_laf_JRSUIConstants$Size_h_
//$ class apple.laf.JRSUIConstants$Size
//$ extends apple.laf.JRSUIConstants$Property

#include <apple/laf/JRSUIConstants$Property.h>

#pragma push_macro("LARGE")
#undef LARGE
#pragma push_macro("MASK")
#undef MASK
#pragma push_macro("MINI")
#undef MINI
#pragma push_macro("REGULAR")
#undef REGULAR
#pragma push_macro("SHIFT")
#undef SHIFT
#pragma push_macro("SIZE")
#undef SIZE
#pragma push_macro("SMALL")
#undef SMALL

namespace apple {
	namespace laf {
		class JRSUIConstants$PropertyEncoding;
	}
}

namespace apple {
	namespace laf {

class JRSUIConstants$Size : public ::apple::laf::JRSUIConstants$Property {
	$class(JRSUIConstants$Size, 0, ::apple::laf::JRSUIConstants$Property)
public:
	JRSUIConstants$Size();
	void init$(int8_t value);
	virtual int64_t apply(int64_t encodedState) override;
	virtual $String* toString() override;
	static const int8_t SHIFT = 0;
	static const int8_t SIZE = 3;
	static const int64_t MASK = 7; // (int64_t)7 << SHIFT
	static ::apple::laf::JRSUIConstants$PropertyEncoding* size;
	static const int8_t _mini = 1;
	static ::apple::laf::JRSUIConstants$Size* MINI;
	static const int8_t _small = 2;
	static ::apple::laf::JRSUIConstants$Size* SMALL;
	static const int8_t _regular = 3;
	static ::apple::laf::JRSUIConstants$Size* REGULAR;
	static const int8_t _large = 4;
	static ::apple::laf::JRSUIConstants$Size* LARGE;
};

	} // laf
} // apple

#pragma pop_macro("LARGE")
#pragma pop_macro("MASK")
#pragma pop_macro("MINI")
#pragma pop_macro("REGULAR")
#pragma pop_macro("SHIFT")
#pragma pop_macro("SIZE")
#pragma pop_macro("SMALL")

#endif // _apple_laf_JRSUIConstants$Size_h_