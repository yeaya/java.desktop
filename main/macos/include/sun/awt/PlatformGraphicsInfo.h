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
namespace java {
	namespace lang {
		class Void;
	}
}

namespace sun {
	namespace awt {

class $import PlatformGraphicsInfo : public ::java::lang::Object {
	$class(PlatformGraphicsInfo, 0, ::java::lang::Object)
public:
	PlatformGraphicsInfo();
	void init$();
	static ::java::awt::GraphicsEnvironment* createGE();
	static ::java::awt::Toolkit* createToolkit();
	static $String* getDefaultHeadlessMessage();
	static bool getDefaultHeadlessProperty();
	static bool isInAquaSession();
	static ::java::lang::Void* lambda$static$0();
};

	} // awt
} // sun

#endif // _sun_awt_PlatformGraphicsInfo_h_