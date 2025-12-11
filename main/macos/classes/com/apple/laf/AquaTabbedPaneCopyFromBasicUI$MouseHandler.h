#ifndef _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$MouseHandler_h_
#define _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$MouseHandler_h_
//$ class com.apple.laf.AquaTabbedPaneCopyFromBasicUI$MouseHandler
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTabbedPaneCopyFromBasicUI;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTabbedPaneCopyFromBasicUI$MouseHandler : public ::java::awt::event::MouseAdapter {
	$class(AquaTabbedPaneCopyFromBasicUI$MouseHandler, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	AquaTabbedPaneCopyFromBasicUI$MouseHandler();
	void init$(::com::apple::laf::AquaTabbedPaneCopyFromBasicUI* this$0);
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	::com::apple::laf::AquaTabbedPaneCopyFromBasicUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTabbedPaneCopyFromBasicUI$MouseHandler_h_