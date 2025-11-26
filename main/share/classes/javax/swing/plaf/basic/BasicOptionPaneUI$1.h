#ifndef _javax_swing_plaf_basic_BasicOptionPaneUI$1_h_
#define _javax_swing_plaf_basic_BasicOptionPaneUI$1_h_
//$ class javax.swing.plaf.basic.BasicOptionPaneUI$1
//$ extends javax.swing.JPanel

#include <javax/swing/JPanel.h>

namespace java {
	namespace awt {
		class Dimension;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicOptionPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicOptionPaneUI$1 : public ::javax::swing::JPanel {
	$class(BasicOptionPaneUI$1, $NO_CLASS_INIT, ::javax::swing::JPanel)
public:
	BasicOptionPaneUI$1();
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	void init$(::javax::swing::plaf::basic::BasicOptionPaneUI* this$0);
	virtual ::java::awt::Dimension* getPreferredSize() override;
	using ::javax::swing::JPanel::setUI;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	using ::javax::swing::JPanel::list;
	::javax::swing::plaf::basic::BasicOptionPaneUI* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicOptionPaneUI$1_h_