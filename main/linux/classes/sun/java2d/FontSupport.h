#ifndef _sun_java2d_FontSupport_h_
#define _sun_java2d_FontSupport_h_
//$ interface sun.java2d.FontSupport
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		class FontConfiguration;
	}
}

namespace sun {
	namespace java2d {

class $export FontSupport : public ::java::lang::Object {
	$interface(FontSupport, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::sun::awt::FontConfiguration* getFontConfiguration() {return nullptr;}
};

	} // java2d
} // sun

#endif // _sun_java2d_FontSupport_h_