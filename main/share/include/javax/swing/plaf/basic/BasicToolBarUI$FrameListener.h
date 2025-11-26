#ifndef _javax_swing_plaf_basic_BasicToolBarUI$FrameListener_h_
#define _javax_swing_plaf_basic_BasicToolBarUI$FrameListener_h_
//$ class javax.swing.plaf.basic.BasicToolBarUI$FrameListener
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicToolBarUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicToolBarUI$FrameListener : public ::java::awt::event::WindowAdapter {
	$class(BasicToolBarUI$FrameListener, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	BasicToolBarUI$FrameListener();
	void init$(::javax::swing::plaf::basic::BasicToolBarUI* this$0);
	virtual void windowClosing(::java::awt::event::WindowEvent* w) override;
	::javax::swing::plaf::basic::BasicToolBarUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicToolBarUI$FrameListener_h_