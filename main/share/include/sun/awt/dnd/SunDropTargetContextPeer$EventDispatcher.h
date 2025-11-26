#ifndef _sun_awt_dnd_SunDropTargetContextPeer$EventDispatcher_h_
#define _sun_awt_dnd_SunDropTargetContextPeer$EventDispatcher_h_
//$ class sun.awt.dnd.SunDropTargetContextPeer$EventDispatcher
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class HashSet;
	}
}
namespace sun {
	namespace awt {
		namespace datatransfer {
			class ToolkitThreadBlockedHandler;
		}
	}
}
namespace sun {
	namespace awt {
		namespace dnd {
			class SunDropTargetContextPeer;
			class SunDropTargetEvent;
		}
	}
}

namespace sun {
	namespace awt {
		namespace dnd {

class $import SunDropTargetContextPeer$EventDispatcher : public ::java::lang::Object {
	$class(SunDropTargetContextPeer$EventDispatcher, 0, ::java::lang::Object)
public:
	SunDropTargetContextPeer$EventDispatcher();
	void init$(::sun::awt::dnd::SunDropTargetContextPeer* peer, int32_t dropAction, int32_t actions, $longs* formats, int64_t nativeCtxt, bool dispatchType);
	void dispatchDropEvent(::sun::awt::dnd::SunDropTargetEvent* e);
	void dispatchEnterEvent(::sun::awt::dnd::SunDropTargetEvent* e);
	virtual void dispatchEvent(::sun::awt::dnd::SunDropTargetEvent* e);
	void dispatchExitEvent(::sun::awt::dnd::SunDropTargetEvent* e);
	void dispatchMotionEvent(::sun::awt::dnd::SunDropTargetEvent* e);
	virtual int32_t getReturnValue();
	virtual bool isDone();
	virtual void registerEvent(::sun::awt::dnd::SunDropTargetEvent* e);
	virtual void setReturnValue(int32_t ret);
	virtual void unregisterAllEvents();
	virtual void unregisterEvent(::sun::awt::dnd::SunDropTargetEvent* e);
	::sun::awt::dnd::SunDropTargetContextPeer* peer = nullptr;
	int32_t dropAction = 0;
	int32_t actions = 0;
	$longs* formats = nullptr;
	int64_t nativeCtxt = 0;
	bool dispatchType = false;
	bool dispatcherDone = false;
	int32_t returnValue = 0;
	::java::util::HashSet* eventSet = nullptr;
	static ::sun::awt::datatransfer::ToolkitThreadBlockedHandler* handler;
};

		} // dnd
	} // awt
} // sun

#endif // _sun_awt_dnd_SunDropTargetContextPeer$EventDispatcher_h_