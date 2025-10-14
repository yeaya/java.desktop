#ifndef _sun_awt_PlatformGraphicsInfo_h_
#define _sun_awt_PlatformGraphicsInfo_h_
//$ class sun.awt.PlatformGraphicsInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class GraphicsEnvironment;
		class Toolkit;
	}
}

namespace sun {
	namespace awt {

class $export PlatformGraphicsInfo : public ::java::lang::Object {
	$class(PlatformGraphicsInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PlatformGraphicsInfo();
	void init$();
	static ::java::awt::GraphicsEnvironment* createGE();
	static ::java::awt::Toolkit* createToolkit();
	static $String* getDefaultHeadlessMessage();
	static bool getDefaultHeadlessProperty();
};

	} // awt
} // sun

#endif // _sun_awt_PlatformGraphicsInfo_h_