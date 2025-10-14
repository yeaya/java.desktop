#ifndef _javax_swing_plaf_basic_BasicSplitPaneDivider$1_h_
#define _javax_swing_plaf_basic_BasicSplitPaneDivider$1_h_
//$ class javax.swing.plaf.basic.BasicSplitPaneDivider$1
//$ extends javax.swing.JButton

#include <javax/swing/JButton.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicSplitPaneDivider;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicSplitPaneDivider$1 : public ::javax::swing::JButton {
	$class(BasicSplitPaneDivider$1, $NO_CLASS_INIT, ::javax::swing::JButton)
public:
	BasicSplitPaneDivider$1();
	using ::javax::swing::JButton::contains;
	using ::javax::swing::JButton::enable;
	using ::javax::swing::JButton::getBounds;
	using ::javax::swing::JButton::getSize;
	using ::javax::swing::JButton::getLocation;
	using ::javax::swing::JButton::firePropertyChange;
	using ::javax::swing::JButton::add;
	using ::javax::swing::JButton::getMousePosition;
	void init$(::javax::swing::plaf::basic::BasicSplitPaneDivider* this$0);
	virtual bool isFocusTraversable() override;
	using ::javax::swing::JButton::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::JButton::requestFocus;
	using ::javax::swing::JButton::requestFocusInWindow;
	using ::javax::swing::JButton::repaint;
	using ::javax::swing::JButton::remove;
	virtual void setBorder(::javax::swing::border::Border* b) override;
	using ::javax::swing::JButton::setUI;
	::javax::swing::plaf::basic::BasicSplitPaneDivider* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicSplitPaneDivider$1_h_