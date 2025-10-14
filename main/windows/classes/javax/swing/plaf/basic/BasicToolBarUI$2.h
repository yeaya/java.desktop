#ifndef _javax_swing_plaf_basic_BasicToolBarUI$2_h_
#define _javax_swing_plaf_basic_BasicToolBarUI$2_h_
//$ class javax.swing.plaf.basic.BasicToolBarUI$2
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

class BasicToolBarUI$2 : public ::java::awt::event::WindowAdapter {
	$class(BasicToolBarUI$2, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	BasicToolBarUI$2();
	void init$(::javax::swing::plaf::basic::BasicToolBarUI* this$0);
	virtual void windowOpened(::java::awt::event::WindowEvent* e) override;
	::javax::swing::plaf::basic::BasicToolBarUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicToolBarUI$2_h_