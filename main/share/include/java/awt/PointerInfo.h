#ifndef _java_awt_PointerInfo_h_
#define _java_awt_PointerInfo_h_
//$ class java.awt.PointerInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class GraphicsDevice;
		class Point;
	}
}

namespace java {
	namespace awt {

class $import PointerInfo : public ::java::lang::Object {
	$class(PointerInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PointerInfo();
	void init$(::java::awt::GraphicsDevice* device, ::java::awt::Point* location);
	virtual ::java::awt::GraphicsDevice* getDevice();
	virtual ::java::awt::Point* getLocation();
	::java::awt::GraphicsDevice* device = nullptr;
	::java::awt::Point* location = nullptr;
};

	} // awt
} // java

#endif // _java_awt_PointerInfo_h_