#ifndef _sun_lwawt_macosx_CMouseDragGestureRecognizer_h_
#define _sun_lwawt_macosx_CMouseDragGestureRecognizer_h_
//$ class sun.lwawt.macosx.CMouseDragGestureRecognizer
//$ extends java.awt.dnd.MouseDragGestureRecognizer

#include <java/awt/dnd/MouseDragGestureRecognizer.h>
#include <java/awt/event/InputEvent.h>

#pragma push_macro("BUTTON1_DOWN_MASK")
#undef BUTTON1_DOWN_MASK
#pragma push_macro("BUTTON2_DOWN_MASK")
#undef BUTTON2_DOWN_MASK
#pragma push_macro("BUTTON3_DOWN_MASK")
#undef BUTTON3_DOWN_MASK

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			class DragGestureListener;
			class DragSource;
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

namespace sun {
	namespace lwawt {
		namespace macosx {

class CMouseDragGestureRecognizer : public ::java::awt::dnd::MouseDragGestureRecognizer {
	$class(CMouseDragGestureRecognizer, 0, ::java::awt::dnd::MouseDragGestureRecognizer)
public:
	CMouseDragGestureRecognizer();
	void init$(::java::awt::dnd::DragSource* ds, ::java::awt::Component* c, int32_t act, ::java::awt::dnd::DragGestureListener* dgl);
	void init$(::java::awt::dnd::DragSource* ds, ::java::awt::Component* c, int32_t act);
	void init$(::java::awt::dnd::DragSource* ds, ::java::awt::Component* c);
	void init$(::java::awt::dnd::DragSource* ds);
	static int32_t getMotionThreshold();
	virtual int32_t mapDragOperationFromModifiers(::java::awt::event::MouseEvent* e);
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	static int32_t fMotionThreshold;
	static const int32_t kDefaultMotionThreshold = 3;
	static const int32_t ButtonMask = 7168; // ::java::awt::event::InputEvent::BUTTON1_DOWN_MASK | ::java::awt::event::InputEvent::BUTTON2_DOWN_MASK | ::java::awt::event::InputEvent::BUTTON3_DOWN_MASK
};

		} // macosx
	} // lwawt
} // sun

#pragma pop_macro("BUTTON1_DOWN_MASK")
#pragma pop_macro("BUTTON2_DOWN_MASK")
#pragma pop_macro("BUTTON3_DOWN_MASK")

#endif // _sun_lwawt_macosx_CMouseDragGestureRecognizer_h_