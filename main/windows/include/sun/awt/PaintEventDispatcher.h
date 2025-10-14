#ifndef _sun_awt_PaintEventDispatcher_h_
#define _sun_awt_PaintEventDispatcher_h_
//$ class sun.awt.PaintEventDispatcher
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class PaintEvent;
		}
	}
}
namespace java {
	namespace lang {
		class Runnable;
	}
}

namespace sun {
	namespace awt {

class $import PaintEventDispatcher : public ::java::lang::Object {
	$class(PaintEventDispatcher, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PaintEventDispatcher();
	void init$();
	virtual ::java::awt::event::PaintEvent* createPaintEvent(::java::awt::Component* target, int32_t x, int32_t y, int32_t w, int32_t h);
	static ::sun::awt::PaintEventDispatcher* getPaintEventDispatcher();
	virtual bool queueSurfaceDataReplacing(::java::awt::Component* c, ::java::lang::Runnable* r);
	static void setPaintEventDispatcher(::sun::awt::PaintEventDispatcher* dispatcher);
	virtual bool shouldDoNativeBackgroundErase(::java::awt::Component* c);
	static ::sun::awt::PaintEventDispatcher* dispatcher;
};

	} // awt
} // sun

#endif // _sun_awt_PaintEventDispatcher_h_