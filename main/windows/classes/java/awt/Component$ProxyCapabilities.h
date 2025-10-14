#ifndef _java_awt_Component$ProxyCapabilities_h_
#define _java_awt_Component$ProxyCapabilities_h_
//$ class java.awt.Component$ProxyCapabilities
//$ extends sun.java2d.pipe.hw.ExtendedBufferCapabilities

#include <sun/java2d/pipe/hw/ExtendedBufferCapabilities.h>

namespace java {
	namespace awt {
		class BufferCapabilities;
		class Component;
	}
}

namespace java {
	namespace awt {

class Component$ProxyCapabilities : public ::sun::java2d::pipe::hw::ExtendedBufferCapabilities {
	$class(Component$ProxyCapabilities, $NO_CLASS_INIT, ::sun::java2d::pipe::hw::ExtendedBufferCapabilities)
public:
	Component$ProxyCapabilities();
	void init$(::java::awt::Component* this$0, ::java::awt::BufferCapabilities* orig);
	::java::awt::Component* this$0 = nullptr;
	::java::awt::BufferCapabilities* orig = nullptr;
};

	} // awt
} // java

#endif // _java_awt_Component$ProxyCapabilities_h_