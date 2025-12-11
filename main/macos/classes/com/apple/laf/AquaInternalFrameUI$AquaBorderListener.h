#ifndef _com_apple_laf_AquaInternalFrameUI$AquaBorderListener_h_
#define _com_apple_laf_AquaInternalFrameUI$AquaBorderListener_h_
//$ class com.apple.laf.AquaInternalFrameUI$AquaBorderListener
//$ extends javax.swing.event.MouseInputAdapter

#include <javax/swing/event/MouseInputAdapter.h>

#pragma push_macro("RESIZE_NONE")
#undef RESIZE_NONE

namespace com {
	namespace apple {
		namespace laf {
			class AquaInternalFrameUI;
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JDesktopPane;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaInternalFrameUI$AquaBorderListener : public ::javax::swing::event::MouseInputAdapter {
	$class(AquaInternalFrameUI$AquaBorderListener, $NO_CLASS_INIT, ::javax::swing::event::MouseInputAdapter)
public:
	AquaInternalFrameUI$AquaBorderListener();
	void init$(::com::apple::laf::AquaInternalFrameUI* this$0);
	virtual bool didForwardEvent(::java::awt::event::MouseEvent* e);
	virtual bool didForwardEventInternal(::java::awt::event::MouseEvent* e);
	virtual ::java::awt::Component* findComponentToHitBehindMe(::javax::swing::JDesktopPane* pane, ::java::awt::Point* parentPoint);
	virtual int32_t getButtonHit(::java::awt::event::MouseEvent* e);
	virtual bool isEventInWindowShadow(::java::awt::Point* point);
	virtual bool isTitleBarDraggableArea(::java::awt::event::MouseEvent* e);
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual void repaintButtons();
	virtual bool updatePressed(::java::awt::event::MouseEvent* e);
	virtual void updateRollover(::java::awt::event::MouseEvent* e);
	::com::apple::laf::AquaInternalFrameUI* this$0 = nullptr;
	int32_t _x = 0;
	int32_t _y = 0;
	int32_t __x = 0;
	int32_t __y = 0;
	::java::awt::Rectangle* startingBounds = nullptr;
	bool fDraggingFrame = false;
	int32_t resizeDir = 0;
	static const int32_t RESIZE_NONE = 0;
	bool discardRelease = false;
	bool isTryingToForwardEvent = false;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("RESIZE_NONE")

#endif // _com_apple_laf_AquaInternalFrameUI$AquaBorderListener_h_