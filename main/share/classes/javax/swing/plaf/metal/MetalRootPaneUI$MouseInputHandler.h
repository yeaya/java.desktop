#ifndef _javax_swing_plaf_metal_MetalRootPaneUI$MouseInputHandler_h_
#define _javax_swing_plaf_metal_MetalRootPaneUI$MouseInputHandler_h_
//$ class javax.swing.plaf.metal.MetalRootPaneUI$MouseInputHandler
//$ extends javax.swing.event.MouseInputListener

#include <javax/swing/event/MouseInputListener.h>

namespace java {
	namespace awt {
		class Dimension;
		class Rectangle;
		class Window;
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
		namespace plaf {
			namespace metal {
				class MetalRootPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalRootPaneUI$MouseInputHandler : public ::javax::swing::event::MouseInputListener {
	$class(MetalRootPaneUI$MouseInputHandler, $NO_CLASS_INIT, ::javax::swing::event::MouseInputListener)
public:
	MetalRootPaneUI$MouseInputHandler();
	void init$(::javax::swing::plaf::metal::MetalRootPaneUI* this$0);
	void adjust(::java::awt::Rectangle* bounds, ::java::awt::Dimension* min, int32_t deltaX, int32_t deltaY, int32_t deltaWidth, int32_t deltaHeight);
	int32_t calculateCorner(::java::awt::Window* w, int32_t x, int32_t y);
	int32_t calculatePosition(int32_t spot, int32_t width);
	int32_t getCursor(int32_t corner);
	virtual void mouseClicked(::java::awt::event::MouseEvent* ev) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* ev) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* ev) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* ev) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* ev) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* ev) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* ev) override;
	::javax::swing::plaf::metal::MetalRootPaneUI* this$0 = nullptr;
	bool isMovingWindow = false;
	int32_t dragCursor = 0;
	int32_t dragOffsetX = 0;
	int32_t dragOffsetY = 0;
	int32_t dragWidth = 0;
	int32_t dragHeight = 0;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalRootPaneUI$MouseInputHandler_h_