#ifndef _sun_awt_XSettings_h_
#define _sun_awt_XSettings_h_
//$ class sun.awt.XSettings
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Map;
	}
}

namespace sun {
	namespace awt {

class $import XSettings : public ::java::lang::Object {
	$class(XSettings, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XSettings();
	void init$();
	virtual ::java::util::Map* update($bytes* data);
	int64_t serial = 0;
};

	} // awt
} // sun

#endif // _sun_awt_XSettings_h_