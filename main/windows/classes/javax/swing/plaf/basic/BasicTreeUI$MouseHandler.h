#ifndef _javax_swing_plaf_basic_BasicTreeUI$MouseHandler_h_
#define _javax_swing_plaf_basic_BasicTreeUI$MouseHandler_h_
//$ class javax.swing.plaf.basic.BasicTreeUI$MouseHandler
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

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
			namespace basic {
				class BasicTreeUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicTreeUI$MouseHandler : public ::java::awt::event::MouseAdapter {
	$class(BasicTreeUI$MouseHandler, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	BasicTreeUI$MouseHandler();
	void init$(::javax::swing::plaf::basic::BasicTreeUI* this$0);
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	::javax::swing::plaf::basic::BasicTreeUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTreeUI$MouseHandler_h_