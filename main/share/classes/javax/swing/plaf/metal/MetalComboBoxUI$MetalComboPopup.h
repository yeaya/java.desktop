#ifndef _javax_swing_plaf_metal_MetalComboBoxUI$MetalComboPopup_h_
#define _javax_swing_plaf_metal_MetalComboBoxUI$MetalComboPopup_h_
//$ class javax.swing.plaf.metal.MetalComboBoxUI$MetalComboPopup
//$ extends javax.swing.plaf.basic.BasicComboPopup

#include <javax/swing/plaf/basic/BasicComboPopup.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JComboBox;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalComboBoxUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $export MetalComboBoxUI$MetalComboPopup : public ::javax::swing::plaf::basic::BasicComboPopup {
	$class(MetalComboBoxUI$MetalComboPopup, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicComboPopup)
public:
	MetalComboBoxUI$MetalComboPopup();
	using ::javax::swing::plaf::basic::BasicComboPopup::add;
	using ::javax::swing::plaf::basic::BasicComboPopup::getComponent;
	using ::javax::swing::plaf::basic::BasicComboPopup::contains;
	using ::javax::swing::plaf::basic::BasicComboPopup::enable;
	using ::javax::swing::plaf::basic::BasicComboPopup::getBounds;
	using ::javax::swing::plaf::basic::BasicComboPopup::getSize;
	using ::javax::swing::plaf::basic::BasicComboPopup::getLocation;
	using ::javax::swing::plaf::basic::BasicComboPopup::firePropertyChange;
	using ::javax::swing::plaf::basic::BasicComboPopup::getMousePosition;
	void init$(::javax::swing::plaf::metal::MetalComboBoxUI* this$0, ::javax::swing::JComboBox* cBox);
	virtual void delegateFocus(::java::awt::event::MouseEvent* e) override;
	using ::javax::swing::plaf::basic::BasicComboPopup::show;
	using ::javax::swing::plaf::basic::BasicComboPopup::setUI;
	using ::javax::swing::plaf::basic::BasicComboPopup::remove;
	using ::javax::swing::plaf::basic::BasicComboPopup::setLocation;
	using ::javax::swing::plaf::basic::BasicComboPopup::processMouseEvent;
	using ::javax::swing::plaf::basic::BasicComboPopup::requestFocus;
	using ::javax::swing::plaf::basic::BasicComboPopup::requestFocusInWindow;
	using ::javax::swing::plaf::basic::BasicComboPopup::repaint;
	using ::javax::swing::plaf::basic::BasicComboPopup::list;
	::javax::swing::plaf::metal::MetalComboBoxUI* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalComboBoxUI$MetalComboPopup_h_