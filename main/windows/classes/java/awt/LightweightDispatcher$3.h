#ifndef _java_awt_LightweightDispatcher$3_h_
#define _java_awt_LightweightDispatcher$3_h_
//$ class java.awt.LightweightDispatcher$3
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class LightweightDispatcher;
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}

namespace java {
	namespace awt {

class LightweightDispatcher$3 : public ::java::lang::Runnable {
	$class(LightweightDispatcher$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	LightweightDispatcher$3();
	void init$(::java::awt::LightweightDispatcher* this$0, ::java::awt::event::MouseEvent* val$mouseEvent, ::java::awt::Point* val$ptSrcOrigin);
	virtual void run() override;
	::java::awt::LightweightDispatcher* this$0 = nullptr;
	::java::awt::Point* val$ptSrcOrigin = nullptr;
	::java::awt::event::MouseEvent* val$mouseEvent = nullptr;
};

	} // awt
} // java

#endif // _java_awt_LightweightDispatcher$3_h_