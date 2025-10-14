#ifndef _java_awt_Transparency_h_
#define _java_awt_Transparency_h_
//$ interface java.awt.Transparency
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BITMASK")
#undef BITMASK
#pragma push_macro("OPAQUE")
#undef OPAQUE
#pragma push_macro("TRANSLUCENT")
#undef TRANSLUCENT

namespace java {
	namespace awt {

class $export Transparency : public ::java::lang::Object {
	$interface(Transparency, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getTransparency() {return 0;}
	static const int32_t OPAQUE = 1;
	static const int32_t BITMASK = 2;
	static const int32_t TRANSLUCENT = 3;
};

	} // awt
} // java

#pragma pop_macro("BITMASK")
#pragma pop_macro("OPAQUE")
#pragma pop_macro("TRANSLUCENT")

#endif // _java_awt_Transparency_h_