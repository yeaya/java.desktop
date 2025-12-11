#ifndef _apple_laf_JRSUIFocus_h_
#define _apple_laf_JRSUIFocus_h_
//$ class apple.laf.JRSUIFocus
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("NULL_CG_REF")
#undef NULL_CG_REF
#pragma push_macro("NULL_PTR")
#undef NULL_PTR
#pragma push_macro("RING_ABOVE")
#undef RING_ABOVE
#pragma push_macro("RING_BELOW")
#undef RING_BELOW
#pragma push_macro("RING_ONLY")
#undef RING_ONLY
#pragma push_macro("SUCCESS")
#undef SUCCESS

namespace apple {
	namespace laf {

class JRSUIFocus : public ::java::lang::Object {
	$class(JRSUIFocus, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JRSUIFocus();
	void init$(int64_t cgContext);
	virtual void beginFocus(int32_t ringStyle);
	static int32_t beginNativeFocus(int64_t cgContext, int32_t ringStyle);
	virtual void endFocus();
	static int32_t endNativeFocus(int64_t cgContext);
	static void testForFailure(int32_t status);
	static const int32_t SUCCESS = 0;
	static const int32_t NULL_PTR = (-1);
	static const int32_t NULL_CG_REF = (-2);
	static const int32_t RING_ONLY = 0;
	static const int32_t RING_ABOVE = 1;
	static const int32_t RING_BELOW = 2;
	int64_t cgContext = 0;
};

	} // laf
} // apple

#pragma pop_macro("NULL_CG_REF")
#pragma pop_macro("NULL_PTR")
#pragma pop_macro("RING_ABOVE")
#pragma pop_macro("RING_BELOW")
#pragma pop_macro("RING_ONLY")
#pragma pop_macro("SUCCESS")

#endif // _apple_laf_JRSUIFocus_h_