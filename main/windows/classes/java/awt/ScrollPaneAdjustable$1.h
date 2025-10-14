#ifndef _java_awt_ScrollPaneAdjustable$1_h_
#define _java_awt_ScrollPaneAdjustable$1_h_
//$ class java.awt.ScrollPaneAdjustable$1
//$ extends sun.awt.AWTAccessor$ScrollPaneAdjustableAccessor

#include <sun/awt/AWTAccessor$ScrollPaneAdjustableAccessor.h>

namespace java {
	namespace awt {
		class ScrollPaneAdjustable;
	}
}

namespace java {
	namespace awt {

class ScrollPaneAdjustable$1 : public ::sun::awt::AWTAccessor$ScrollPaneAdjustableAccessor {
	$class(ScrollPaneAdjustable$1, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$ScrollPaneAdjustableAccessor)
public:
	ScrollPaneAdjustable$1();
	void init$();
	virtual void setTypedValue(::java::awt::ScrollPaneAdjustable* adj, int32_t v, int32_t type) override;
};

	} // awt
} // java

#endif // _java_awt_ScrollPaneAdjustable$1_h_