#ifndef _com_apple_eawt_FullScreenAdapter_h_
#define _com_apple_eawt_FullScreenAdapter_h_
//$ class com.apple.eawt.FullScreenAdapter
//$ extends com.apple.eawt.FullScreenListener

#include <com/apple/eawt/FullScreenListener.h>

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

class FullScreenAdapter : public ::com::apple::eawt::FullScreenListener {
	$class(FullScreenAdapter, $NO_CLASS_INIT, ::com::apple::eawt::FullScreenListener)
public:
	FullScreenAdapter();
	void init$();
	virtual void windowEnteredFullScreen(::com::apple::eawt::event::FullScreenEvent* e) override;
	virtual void windowEnteringFullScreen(::com::apple::eawt::event::FullScreenEvent* e) override;
	virtual void windowExitedFullScreen(::com::apple::eawt::event::FullScreenEvent* e) override;
	virtual void windowExitingFullScreen(::com::apple::eawt::event::FullScreenEvent* e) override;
};

		} // eawt
	} // apple
} // com

#endif // _com_apple_eawt_FullScreenAdapter_h_