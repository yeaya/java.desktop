#ifndef _com_apple_eawt_FullScreenListener_h_
#define _com_apple_eawt_FullScreenListener_h_
//$ interface com.apple.eawt.FullScreenListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {
				class FullScreenEvent;
			}
		}
	}
}

namespace com {
	namespace apple {
		namespace eawt {

class FullScreenListener : public ::java::util::EventListener {
	$interface(FullScreenListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void windowEnteredFullScreen(::com::apple::eawt::event::FullScreenEvent* e) {}
	virtual void windowEnteringFullScreen(::com::apple::eawt::event::FullScreenEvent* e) {}
	virtual void windowExitedFullScreen(::com::apple::eawt::event::FullScreenEvent* e) {}
	virtual void windowExitingFullScreen(::com::apple::eawt::event::FullScreenEvent* e) {}
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt_FullScreenListener_h_