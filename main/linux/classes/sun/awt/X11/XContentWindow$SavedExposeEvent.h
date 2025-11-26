#ifndef _sun_awt_X11_XContentWindow$SavedExposeEvent_h_
#define _sun_awt_X11_XContentWindow$SavedExposeEvent_h_
//$ class sun.awt.X11.XContentWindow$SavedExposeEvent
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XContentWindow$SavedExposeEvent : public ::java::lang::Object {
	$class(XContentWindow$SavedExposeEvent, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XContentWindow$SavedExposeEvent();
	void init$(::java::awt::Component* target, int32_t x, int32_t y, int32_t w, int32_t h);
	::java::awt::Component* target = nullptr;
	int32_t x = 0;
	int32_t y = 0;
	int32_t w = 0;
	int32_t h = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XContentWindow$SavedExposeEvent_h_