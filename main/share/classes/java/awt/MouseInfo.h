#ifndef _java_awt_MouseInfo_h_
#define _java_awt_MouseInfo_h_
//$ class java.awt.MouseInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class GraphicsDevice;
		class PointerInfo;
	}
}

namespace java {
	namespace awt {

class $export MouseInfo : public ::java::lang::Object {
	$class(MouseInfo, 0, ::java::lang::Object)
public:
	MouseInfo();
	void init$();
	static bool areScreenDevicesIndependent($Array<::java::awt::GraphicsDevice>* gds);
	static int32_t getNumberOfButtons();
	static ::java::awt::PointerInfo* getPointerInfo();
	static bool $assertionsDisabled;
};

	} // awt
} // java

#endif // _java_awt_MouseInfo_h_