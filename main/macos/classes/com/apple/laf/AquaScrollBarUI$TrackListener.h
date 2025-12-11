#ifndef _com_apple_laf_AquaScrollBarUI$TrackListener_h_
#define _com_apple_laf_AquaScrollBarUI$TrackListener_h_
//$ class com.apple.laf.AquaScrollBarUI$TrackListener
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

namespace apple {
	namespace laf {
		class JRSUIConstants$Hit;
	}
}
namespace com {
	namespace apple {
		namespace laf {
			class AquaScrollBarUI;
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

class AquaScrollBarUI$TrackListener : public ::java::awt::event::MouseAdapter {
	$class(AquaScrollBarUI$TrackListener, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	AquaScrollBarUI$TrackListener();
	void init$(::com::apple::laf::AquaScrollBarUI* this$0);
	virtual int32_t getValueFromOffset(int32_t xOffset, int32_t yOffset, int32_t firstValue);
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseDraggedInArrows(::java::awt::event::MouseEvent* e);
	virtual void mouseDraggedInTrack(::java::awt::event::MouseEvent* e);
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressedInArrows(::java::awt::event::MouseEvent* e, ::apple::laf::JRSUIConstants$Hit* part);
	virtual void mousePressedInTrack(::java::awt::event::MouseEvent* e, ::apple::laf::JRSUIConstants$Hit* part);
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleasedInArrows(::java::awt::event::MouseEvent* e);
	virtual void mouseReleasedInTrack(::java::awt::event::MouseEvent* e);
	virtual void moveToMouse(::java::awt::event::MouseEvent* e);
	::com::apple::laf::AquaScrollBarUI* this$0 = nullptr;
	int32_t fCurrentMouseX = 0;
	int32_t fCurrentMouseY = 0;
	bool fInArrows = false;
	bool fStillInArrow = false;
	bool fStillInTrack = false;
	int32_t fFirstMouseX = 0;
	int32_t fFirstMouseY = 0;
	int32_t fFirstValue = 0;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaScrollBarUI$TrackListener_h_