#ifndef _apple_laf_JRSUIConstants$Hit_h_
#define _apple_laf_JRSUIConstants$Hit_h_
//$ class apple.laf.JRSUIConstants$Hit
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("HIT")
#undef HIT
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("UNKNOWN")
#undef UNKNOWN

namespace apple {
	namespace laf {

class JRSUIConstants$Hit : public ::java::lang::Object {
	$class(JRSUIConstants$Hit, 0, ::java::lang::Object)
public:
	JRSUIConstants$Hit();
	void init$(int32_t hit);
	$String* getConstantName(::apple::laf::JRSUIConstants$Hit* hit);
	virtual bool isHit();
	virtual $String* toString() override;
	static const int32_t _unknown = (-1);
	static ::apple::laf::JRSUIConstants$Hit* UNKNOWN;
	static const int32_t _none = 0;
	static ::apple::laf::JRSUIConstants$Hit* NONE;
	static const int32_t _hit = 1;
	static ::apple::laf::JRSUIConstants$Hit* HIT;
	int32_t hit = 0;
};

	} // laf
} // apple

#pragma pop_macro("HIT")
#pragma pop_macro("NONE")
#pragma pop_macro("UNKNOWN")

#endif // _apple_laf_JRSUIConstants$Hit_h_