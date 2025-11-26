#ifndef _java_awt_Toolkit$SelectiveAWTEventListener_h_
#define _java_awt_Toolkit$SelectiveAWTEventListener_h_
//$ class java.awt.Toolkit$SelectiveAWTEventListener
//$ extends java.awt.event.AWTEventListener

#include <java/awt/event/AWTEventListener.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class AWTEvent;
		class Toolkit;
	}
}

namespace java {
	namespace awt {

class Toolkit$SelectiveAWTEventListener : public ::java::awt::event::AWTEventListener {
	$class(Toolkit$SelectiveAWTEventListener, $NO_CLASS_INIT, ::java::awt::event::AWTEventListener)
public:
	Toolkit$SelectiveAWTEventListener();
	void init$(::java::awt::Toolkit* this$0, ::java::awt::event::AWTEventListener* l, int64_t mask);
	virtual void eventDispatched(::java::awt::AWTEvent* event) override;
	virtual $ints* getCalls();
	virtual int64_t getEventMask();
	virtual ::java::awt::event::AWTEventListener* getListener();
	virtual void orEventMasks(int64_t mask);
	::java::awt::Toolkit* this$0 = nullptr;
	::java::awt::event::AWTEventListener* listener = nullptr;
	int64_t eventMask = 0;
	$ints* calls = nullptr;
};

	} // awt
} // java

#endif // _java_awt_Toolkit$SelectiveAWTEventListener_h_