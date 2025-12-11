#ifndef _com_apple_laf_AquaComboBoxPopup$1_h_
#define _com_apple_laf_AquaComboBoxPopup$1_h_
//$ class com.apple.laf.AquaComboBoxPopup$1
//$ extends javax.swing.JList

#include <javax/swing/JList.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaComboBoxPopup;
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
namespace javax {
	namespace swing {
		class ListModel;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaComboBoxPopup$1 : public ::javax::swing::JList {
	$class(AquaComboBoxPopup$1, $NO_CLASS_INIT, ::javax::swing::JList)
public:
	AquaComboBoxPopup$1();
	using ::javax::swing::JList::getToolTipText;
	using ::javax::swing::JList::contains;
	using ::javax::swing::JList::enable;
	using ::javax::swing::JList::getBounds;
	using ::javax::swing::JList::getSize;
	using ::javax::swing::JList::getLocation;
	using ::javax::swing::JList::firePropertyChange;
	using ::javax::swing::JList::add;
	using ::javax::swing::JList::getMousePosition;
	void init$(::com::apple::laf::AquaComboBoxPopup* this$0, ::javax::swing::ListModel* dataModel);
	using ::javax::swing::JList::list;
	virtual void processMouseEvent(::java::awt::event::MouseEvent* e) override;
	using ::javax::swing::JList::setUI;
	using ::javax::swing::JList::requestFocus;
	using ::javax::swing::JList::requestFocusInWindow;
	using ::javax::swing::JList::repaint;
	using ::javax::swing::JList::remove;
	::com::apple::laf::AquaComboBoxPopup* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaComboBoxPopup$1_h_