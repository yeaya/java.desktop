#ifndef _sun_awt_im_CompositionArea$FrameWindowAdapter_h_
#define _sun_awt_im_CompositionArea$FrameWindowAdapter_h_
//$ class sun.awt.im.CompositionArea$FrameWindowAdapter
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}
namespace sun {
	namespace awt {
		namespace im {
			class CompositionArea;
		}
	}
}

namespace sun {
	namespace awt {
		namespace im {

class CompositionArea$FrameWindowAdapter : public ::java::awt::event::WindowAdapter {
	$class(CompositionArea$FrameWindowAdapter, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	CompositionArea$FrameWindowAdapter();
	void init$(::sun::awt::im::CompositionArea* this$0);
	virtual void windowActivated(::java::awt::event::WindowEvent* e) override;
	::sun::awt::im::CompositionArea* this$0 = nullptr;
};

		} // im
	} // awt
} // sun

#endif // _sun_awt_im_CompositionArea$FrameWindowAdapter_h_