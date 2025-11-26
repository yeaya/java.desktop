#ifndef _java_awt_Frame$1_h_
#define _java_awt_Frame$1_h_
//$ class java.awt.Frame$1
//$ extends sun.awt.AWTAccessor$FrameAccessor

#include <sun/awt/AWTAccessor$FrameAccessor.h>

namespace java {
	namespace awt {
		class Frame;
		class Rectangle;
	}
}

namespace java {
	namespace awt {

class Frame$1 : public ::sun::awt::AWTAccessor$FrameAccessor {
	$class(Frame$1, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$FrameAccessor)
public:
	Frame$1();
	void init$();
	virtual int32_t getExtendedState(::java::awt::Frame* frame) override;
	virtual ::java::awt::Rectangle* getMaximizedBounds(::java::awt::Frame* frame) override;
	virtual void setExtendedState(::java::awt::Frame* frame, int32_t state) override;
};

	} // awt
} // java

#endif // _java_awt_Frame$1_h_