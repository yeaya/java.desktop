#ifndef _sun_awt_dnd_SunDragSourceContextPeer$EventDispatcher_h_
#define _sun_awt_dnd_SunDragSourceContextPeer$EventDispatcher_h_
//$ class sun.awt.dnd.SunDragSourceContextPeer$EventDispatcher
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		namespace dnd {
			class DragSourceEvent;
		}
	}
}
namespace sun {
	namespace awt {
		namespace dnd {
			class SunDragSourceContextPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace dnd {

class SunDragSourceContextPeer$EventDispatcher : public ::java::lang::Runnable {
	$class(SunDragSourceContextPeer$EventDispatcher, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	SunDragSourceContextPeer$EventDispatcher();
	void init$(::sun::awt::dnd::SunDragSourceContextPeer* this$0, int32_t dispatchType, ::java::awt::dnd::DragSourceEvent* event);
	virtual void run() override;
	::sun::awt::dnd::SunDragSourceContextPeer* this$0 = nullptr;
	int32_t dispatchType = 0;
	::java::awt::dnd::DragSourceEvent* event = nullptr;
};

		} // dnd
	} // awt
} // sun

#endif // _sun_awt_dnd_SunDragSourceContextPeer$EventDispatcher_h_