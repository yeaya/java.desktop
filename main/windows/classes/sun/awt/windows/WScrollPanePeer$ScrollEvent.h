#ifndef _sun_awt_windows_WScrollPanePeer$ScrollEvent_h_
#define _sun_awt_windows_WScrollPanePeer$ScrollEvent_h_
//$ class sun.awt.windows.WScrollPanePeer$ScrollEvent
//$ extends sun.awt.PeerEvent

#include <sun/awt/PeerEvent.h>

namespace java {
	namespace lang {
		class Runnable;
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WScrollPanePeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WScrollPanePeer$ScrollEvent : public ::sun::awt::PeerEvent {
	$class(WScrollPanePeer$ScrollEvent, $NO_CLASS_INIT, ::sun::awt::PeerEvent)
public:
	WScrollPanePeer$ScrollEvent();
	void init$(::sun::awt::windows::WScrollPanePeer* this$0, Object$* source, ::java::lang::Runnable* runnable);
	virtual ::sun::awt::PeerEvent* coalesceEvents(::sun::awt::PeerEvent* newEvent) override;
	::sun::awt::windows::WScrollPanePeer* this$0 = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WScrollPanePeer$ScrollEvent_h_