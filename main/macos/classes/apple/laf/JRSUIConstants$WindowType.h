#ifndef _apple_laf_JRSUIConstants$WindowType_h_
#define _apple_laf_JRSUIConstants$WindowType_h_
//$ class apple.laf.JRSUIConstants$WindowType
//$ extends apple.laf.JRSUIConstants$Property

#include <apple/laf/JRSUIConstants$Variant.h>

#pragma push_macro("DOCUMENT")
#undef DOCUMENT
#pragma push_macro("MASK")
#undef MASK
#pragma push_macro("SHIFT")
#undef SHIFT
#pragma push_macro("SIZE")
#undef SIZE
#pragma push_macro("TITLELESS_UTILITY")
#undef TITLELESS_UTILITY
#pragma push_macro("UTILITY")
#undef UTILITY

namespace apple {
	namespace laf {
		class JRSUIConstants$PropertyEncoding;
	}
}

namespace apple {
	namespace laf {

class JRSUIConstants$WindowType : public ::apple::laf::JRSUIConstants$Property {
	$class(JRSUIConstants$WindowType, 0, ::apple::laf::JRSUIConstants$Property)
public:
	JRSUIConstants$WindowType();
	void init$(int8_t value);
	virtual int64_t apply(int64_t encodedState) override;
	virtual $String* toString() override;
	static const int8_t SHIFT = 28; // ::apple::laf::JRSUIConstants$Variant::SHIFT + ::apple::laf::JRSUIConstants$Variant::SIZE
	static const int8_t SIZE = 2;
	static const int64_t MASK = 805306368; // (int64_t)3 << SHIFT
	static ::apple::laf::JRSUIConstants$PropertyEncoding* windowType;
	static const int8_t _document = 1;
	static ::apple::laf::JRSUIConstants$WindowType* DOCUMENT;
	static const int8_t _utility = 2;
	static ::apple::laf::JRSUIConstants$WindowType* UTILITY;
	static const int8_t _titlelessUtility = 3;
	static ::apple::laf::JRSUIConstants$WindowType* TITLELESS_UTILITY;
};

	} // laf
} // apple

#pragma pop_macro("DOCUMENT")
#pragma pop_macro("MASK")
#pragma pop_macro("SHIFT")
#pragma pop_macro("SIZE")
#pragma pop_macro("TITLELESS_UTILITY")
#pragma pop_macro("UTILITY")

#endif // _apple_laf_JRSUIConstants$WindowType_h_