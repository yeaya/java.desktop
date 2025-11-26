#ifndef _sun_awt_AWTAccessor$FrameAccessor_h_
#define _sun_awt_AWTAccessor$FrameAccessor_h_
//$ interface sun.awt.AWTAccessor$FrameAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Frame;
		class Rectangle;
	}
}

namespace sun {
	namespace awt {

class $export AWTAccessor$FrameAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$FrameAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t getExtendedState(::java::awt::Frame* frame) {return 0;}
	virtual ::java::awt::Rectangle* getMaximizedBounds(::java::awt::Frame* frame) {return nullptr;}
	virtual void setExtendedState(::java::awt::Frame* frame, int32_t state) {}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$FrameAccessor_h_