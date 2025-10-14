#ifndef _javax_swing_plaf_basic_BasicComboPopup$1_h_
#define _javax_swing_plaf_basic_BasicComboPopup$1_h_
//$ class javax.swing.plaf.basic.BasicComboPopup$1
//$ extends javax.swing.JList

#include <javax/swing/JList.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class ListModel;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicComboPopup;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicComboPopup$1 : public ::javax::swing::JList {
	$class(BasicComboPopup$1, $NO_CLASS_INIT, ::javax::swing::JList)
public:
	BasicComboPopup$1();
	using ::javax::swing::JList::getToolTipText;
	using ::javax::swing::JList::contains;
	using ::javax::swing::JList::enable;
	using ::javax::swing::JList::getBounds;
	using ::javax::swing::JList::getSize;
	using ::javax::swing::JList::getLocation;
	using ::javax::swing::JList::firePropertyChange;
	using ::javax::swing::JList::add;
	using ::javax::swing::JList::getMousePosition;
	void init$(::javax::swing::plaf::basic::BasicComboPopup* this$0, ::javax::swing::ListModel* dataModel);
	using ::javax::swing::JList::list;
	virtual void processMouseEvent(::java::awt::event::MouseEvent* e) override;
	using ::javax::swing::JList::setUI;
	using ::javax::swing::JList::requestFocus;
	using ::javax::swing::JList::requestFocusInWindow;
	using ::javax::swing::JList::repaint;
	using ::javax::swing::JList::remove;
	::javax::swing::plaf::basic::BasicComboPopup* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicComboPopup$1_h_