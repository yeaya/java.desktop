#ifndef _sun_awt_PlatformFont$PlatformFontCache_h_
#define _sun_awt_PlatformFont$PlatformFontCache_h_
//$ class sun.awt.PlatformFont$PlatformFontCache
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace sun {
	namespace awt {
		class FontDescriptor;
		class PlatformFont;
	}
}

namespace sun {
	namespace awt {

class $export PlatformFont$PlatformFontCache : public ::java::lang::Object {
	$class(PlatformFont$PlatformFontCache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PlatformFont$PlatformFontCache();
	void init$(::sun::awt::PlatformFont* this$0);
	::sun::awt::PlatformFont* this$0 = nullptr;
	char16_t uniChar = 0;
	::sun::awt::FontDescriptor* fontDescriptor = nullptr;
	::java::nio::ByteBuffer* bb = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_PlatformFont$PlatformFontCache_h_