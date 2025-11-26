#ifndef _javax_swing_plaf_basic_BasicScrollBarUI$ScrollListener_h_
#define _javax_swing_plaf_basic_BasicScrollBarUI$ScrollListener_h_
//$ class javax.swing.plaf.basic.BasicScrollBarUI$ScrollListener
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicScrollBarUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicScrollBarUI$ScrollListener : public ::java::awt::event::ActionListener {
	$class(BasicScrollBarUI$ScrollListener, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	BasicScrollBarUI$ScrollListener();
	void init$(::javax::swing::plaf::basic::BasicScrollBarUI* this$0);
	void init$(::javax::swing::plaf::basic::BasicScrollBarUI* this$0, int32_t dir, bool block);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual void setDirection(int32_t direction);
	virtual void setScrollByBlock(bool block);
	::javax::swing::plaf::basic::BasicScrollBarUI* this$0 = nullptr;
	int32_t direction = 0;
	bool useBlockIncrement = false;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicScrollBarUI$ScrollListener_h_