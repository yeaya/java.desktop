#ifndef _javax_swing_plaf_basic_BasicFileChooserUI$DoubleClickListener_h_
#define _javax_swing_plaf_basic_BasicFileChooserUI$DoubleClickListener_h_
//$ class javax.swing.plaf.basic.BasicFileChooserUI$DoubleClickListener
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
		class JList;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicFileChooserUI;
				class BasicFileChooserUI$Handler;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicFileChooserUI$DoubleClickListener : public ::java::awt::event::MouseAdapter {
	$class(BasicFileChooserUI$DoubleClickListener, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	BasicFileChooserUI$DoubleClickListener();
	void init$(::javax::swing::plaf::basic::BasicFileChooserUI* this$0, ::javax::swing::JList* list);
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	::javax::swing::plaf::basic::BasicFileChooserUI* this$0 = nullptr;
	::javax::swing::plaf::basic::BasicFileChooserUI$Handler* handler = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicFileChooserUI$DoubleClickListener_h_