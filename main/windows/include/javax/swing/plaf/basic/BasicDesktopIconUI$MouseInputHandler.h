#ifndef _javax_swing_plaf_basic_BasicDesktopIconUI$MouseInputHandler_h_
#define _javax_swing_plaf_basic_BasicDesktopIconUI$MouseInputHandler_h_
//$ class javax.swing.plaf.basic.BasicDesktopIconUI$MouseInputHandler
//$ extends javax.swing.event.MouseInputAdapter

#include <javax/swing/event/MouseInputAdapter.h>

namespace java {
	namespace awt {
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
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicDesktopIconUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicDesktopIconUI$MouseInputHandler : public ::javax::swing::event::MouseInputAdapter {
	$class(BasicDesktopIconUI$MouseInputHandler, $NO_CLASS_INIT, ::javax::swing::event::MouseInputAdapter)
public:
	BasicDesktopIconUI$MouseInputHandler();
	void init$(::javax::swing::plaf::basic::BasicDesktopIconUI* this$0);
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual void moveAndRepaint(::javax::swing::JComponent* f, int32_t newX, int32_t newY, int32_t newWidth, int32_t newHeight);
	::javax::swing::plaf::basic::BasicDesktopIconUI* this$0 = nullptr;
	int32_t _x = 0;
	int32_t _y = 0;
	int32_t __x = 0;
	int32_t __y = 0;
	::java::awt::Rectangle* startingBounds = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicDesktopIconUI$MouseInputHandler_h_