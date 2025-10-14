#ifndef _sun_awt_ScrollPaneWheelScroller_h_
#define _sun_awt_ScrollPaneWheelScroller_h_
//$ class sun.awt.ScrollPaneWheelScroller
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Adjustable;
		class ScrollPane;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseWheelEvent;
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {

class $import ScrollPaneWheelScroller : public ::java::lang::Object {
	$class(ScrollPaneWheelScroller, 0, ::java::lang::Object)
public:
	ScrollPaneWheelScroller();
	void init$();
	static ::java::awt::Adjustable* getAdjustableToScroll(::java::awt::ScrollPane* sp);
	static int32_t getIncrementFromAdjustable(::java::awt::Adjustable* adj, ::java::awt::event::MouseWheelEvent* e);
	static void handleWheelScrolling(::java::awt::ScrollPane* sp, ::java::awt::event::MouseWheelEvent* e);
	static void scrollAdjustable(::java::awt::Adjustable* adj, int32_t amount);
	static ::sun::util::logging::PlatformLogger* log;
};

	} // awt
} // sun

#endif // _sun_awt_ScrollPaneWheelScroller_h_