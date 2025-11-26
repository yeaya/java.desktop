#ifndef _javax_swing_plaf_basic_BasicToolBarUI$1ToolBarDialog$1_h_
#define _javax_swing_plaf_basic_BasicToolBarUI$1ToolBarDialog$1_h_
//$ class javax.swing.plaf.basic.BasicToolBarUI$1ToolBarDialog$1
//$ extends javax.swing.JRootPane

#include <javax/swing/JRootPane.h>

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicToolBarUI$1ToolBarDialog;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicToolBarUI$1ToolBarDialog$1 : public ::javax::swing::JRootPane {
	$class(BasicToolBarUI$1ToolBarDialog$1, $NO_CLASS_INIT, ::javax::swing::JRootPane)
public:
	BasicToolBarUI$1ToolBarDialog$1();
	using ::javax::swing::JRootPane::contains;
	using ::javax::swing::JRootPane::enable;
	using ::javax::swing::JRootPane::getBounds;
	using ::javax::swing::JRootPane::getSize;
	using ::javax::swing::JRootPane::getLocation;
	using ::javax::swing::JRootPane::firePropertyChange;
	using ::javax::swing::JRootPane::add;
	using ::javax::swing::JRootPane::getMousePosition;
	void init$(::javax::swing::plaf::basic::BasicToolBarUI$1ToolBarDialog* this$1);
	using ::javax::swing::JRootPane::setUI;
	using ::javax::swing::JRootPane::requestFocus;
	using ::javax::swing::JRootPane::requestFocusInWindow;
	using ::javax::swing::JRootPane::repaint;
	using ::javax::swing::JRootPane::remove;
	using ::javax::swing::JRootPane::list;
	virtual void validate() override;
	::javax::swing::plaf::basic::BasicToolBarUI$1ToolBarDialog* this$1 = nullptr;
	bool packing = false;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicToolBarUI$1ToolBarDialog$1_h_