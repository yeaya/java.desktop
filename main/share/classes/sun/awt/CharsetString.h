#ifndef _sun_awt_CharsetString_h_
#define _sun_awt_CharsetString_h_
//$ class sun.awt.CharsetString
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace sun {
	namespace awt {
		class FontDescriptor;
	}
}

namespace sun {
	namespace awt {

class $export CharsetString : public ::java::lang::Object {
	$class(CharsetString, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CharsetString();
	void init$($chars* charsetChars, int32_t offset, int32_t length, ::sun::awt::FontDescriptor* fontDescriptor);
	$chars* charsetChars = nullptr;
	int32_t offset = 0;
	int32_t length = 0;
	::sun::awt::FontDescriptor* fontDescriptor = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_CharsetString_h_