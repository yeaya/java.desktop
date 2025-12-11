#ifndef _com_apple_laf_AquaSliderUI$TrackListener_h_
#define _com_apple_laf_AquaSliderUI$TrackListener_h_
//$ class com.apple.laf.AquaSliderUI$TrackListener
//$ extends javax.swing.plaf.basic.BasicSliderUI$TrackListener

#include <javax/swing/plaf/basic/BasicSliderUI$TrackListener.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaSliderUI;
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

class AquaSliderUI$TrackListener : public ::javax::swing::plaf::basic::BasicSliderUI$TrackListener {
	$class(AquaSliderUI$TrackListener, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicSliderUI$TrackListener)
public:
	AquaSliderUI$TrackListener();
	void init$(::com::apple::laf::AquaSliderUI* this$0);
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual bool shouldScroll(int32_t direction) override;
	::com::apple::laf::AquaSliderUI* this$0 = nullptr;
	int32_t offset = 0;
	int32_t currentMouseX = 0;
	int32_t currentMouseY = 0;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaSliderUI$TrackListener_h_