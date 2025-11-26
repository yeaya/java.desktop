#ifndef _java_awt_ComponentOrientation_h_
#define _java_awt_ComponentOrientation_h_
//$ class java.awt.ComponentOrientation
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

#pragma push_macro("HORIZ_BIT")
#undef HORIZ_BIT
#pragma push_macro("LEFT_TO_RIGHT")
#undef LEFT_TO_RIGHT
#pragma push_macro("LTR_BIT")
#undef LTR_BIT
#pragma push_macro("RIGHT_TO_LEFT")
#undef RIGHT_TO_LEFT
#pragma push_macro("UNKNOWN")
#undef UNKNOWN
#pragma push_macro("UNK_BIT")
#undef UNK_BIT

namespace java {
	namespace util {
		class Locale;
		class ResourceBundle;
	}
}

namespace java {
	namespace awt {

class $export ComponentOrientation : public ::java::io::Serializable {
	$class(ComponentOrientation, 0, ::java::io::Serializable)
public:
	ComponentOrientation();
	void init$(int32_t value);
	static ::java::awt::ComponentOrientation* getOrientation(::java::util::Locale* locale);
	static ::java::awt::ComponentOrientation* getOrientation(::java::util::ResourceBundle* bdl);
	bool isHorizontal();
	bool isLeftToRight();
	static const int64_t serialVersionUID = (int64_t)0xC6EAA745A19C63CC;
	static const int32_t UNK_BIT = 1;
	static const int32_t HORIZ_BIT = 2;
	static const int32_t LTR_BIT = 4;
	static ::java::awt::ComponentOrientation* LEFT_TO_RIGHT;
	static ::java::awt::ComponentOrientation* RIGHT_TO_LEFT;
	static ::java::awt::ComponentOrientation* UNKNOWN;
	int32_t orientation = 0;
};

	} // awt
} // java

#pragma pop_macro("HORIZ_BIT")
#pragma pop_macro("LEFT_TO_RIGHT")
#pragma pop_macro("LTR_BIT")
#pragma pop_macro("RIGHT_TO_LEFT")
#pragma pop_macro("UNKNOWN")
#pragma pop_macro("UNK_BIT")

#endif // _java_awt_ComponentOrientation_h_