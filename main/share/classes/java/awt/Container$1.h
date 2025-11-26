#ifndef _java_awt_Container$1_h_
#define _java_awt_Container$1_h_
//$ class java.awt.Container$1
//$ extends sun.awt.AWTAccessor$ContainerAccessor

#include <sun/awt/AWTAccessor$ContainerAccessor.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
	}
}

namespace java {
	namespace awt {

class Container$1 : public ::sun::awt::AWTAccessor$ContainerAccessor {
	$class(Container$1, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$ContainerAccessor)
public:
	Container$1();
	void init$();
	virtual ::java::awt::Component* findComponentAt(::java::awt::Container* cont, int32_t x, int32_t y, bool ignoreEnabled) override;
	virtual void startLWModal(::java::awt::Container* cont) override;
	virtual void stopLWModal(::java::awt::Container* cont) override;
	virtual void validateUnconditionally(::java::awt::Container* cont) override;
};

	} // awt
} // java

#endif // _java_awt_Container$1_h_