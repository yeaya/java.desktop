#ifndef _sun_awt_AWTAccessor$ContainerAccessor_h_
#define _sun_awt_AWTAccessor$ContainerAccessor_h_
//$ interface sun.awt.AWTAccessor$ContainerAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
	}
}

namespace sun {
	namespace awt {

class $export AWTAccessor$ContainerAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$ContainerAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::Component* findComponentAt(::java::awt::Container* cont, int32_t x, int32_t y, bool ignoreEnabled) {return nullptr;}
	virtual void startLWModal(::java::awt::Container* cont) {}
	virtual void stopLWModal(::java::awt::Container* cont) {}
	virtual void validateUnconditionally(::java::awt::Container* cont) {}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$ContainerAccessor_h_