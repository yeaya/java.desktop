#ifndef _apple_laf_JRSUIConstants$Property_h_
#define _apple_laf_JRSUIConstants$Property_h_
//$ class apple.laf.JRSUIConstants$Property
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace apple {
	namespace laf {
		class JRSUIConstants$PropertyEncoding;
	}
}

namespace apple {
	namespace laf {

class JRSUIConstants$Property : public ::java::lang::Object {
	$class(JRSUIConstants$Property, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JRSUIConstants$Property();
	void init$(::apple::laf::JRSUIConstants$PropertyEncoding* encoding, int8_t ordinal);
	virtual int64_t apply(int64_t encodedState);
	virtual $String* toString() override;
	::apple::laf::JRSUIConstants$PropertyEncoding* encoding = nullptr;
	int64_t value = 0;
	int8_t ordinal = 0;
};

	} // laf
} // apple

#endif // _apple_laf_JRSUIConstants$Property_h_