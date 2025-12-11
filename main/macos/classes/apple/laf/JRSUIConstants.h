#ifndef _apple_laf_JRSUIConstants_h_
#define _apple_laf_JRSUIConstants_h_
//$ class apple.laf.JRSUIConstants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("FOCUS_SIZE")
#undef FOCUS_SIZE

namespace apple {
	namespace laf {
		class JRSUIConstants$Hit;
	}
}

namespace apple {
	namespace laf {

class JRSUIConstants : public ::java::lang::Object {
	$class(JRSUIConstants, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JRSUIConstants();
	void init$();
	static ::apple::laf::JRSUIConstants$Hit* getHit(int32_t hit);
	static int64_t getPtrForConstant(int32_t constant);
	static const int32_t FOCUS_SIZE = 4;
};

	} // laf
} // apple

#pragma pop_macro("FOCUS_SIZE")

#endif // _apple_laf_JRSUIConstants_h_