#ifndef _javax_swing_plaf_basic_BasicInternalFrameTitlePane$SystemMenuBar_h_
#define _javax_swing_plaf_basic_BasicInternalFrameTitlePane$SystemMenuBar_h_
//$ class javax.swing.plaf.basic.BasicInternalFrameTitlePane$SystemMenuBar
//$ extends javax.swing.JMenuBar

#include <javax/swing/JMenuBar.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicInternalFrameTitlePane;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicInternalFrameTitlePane$SystemMenuBar : public ::javax::swing::JMenuBar {
	$class(BasicInternalFrameTitlePane$SystemMenuBar, $NO_CLASS_INIT, ::javax::swing::JMenuBar)
public:
	BasicInternalFrameTitlePane$SystemMenuBar();
	using ::javax::swing::JMenuBar::add;
	using ::javax::swing::JMenuBar::getComponent;
	using ::javax::swing::JMenuBar::contains;
	using ::javax::swing::JMenuBar::enable;
	using ::javax::swing::JMenuBar::getBounds;
	using ::javax::swing::JMenuBar::getSize;
	using ::javax::swing::JMenuBar::getLocation;
	using ::javax::swing::JMenuBar::firePropertyChange;
	using ::javax::swing::JMenuBar::getMousePosition;
	void init$(::javax::swing::plaf::basic::BasicInternalFrameTitlePane* this$0);
	virtual bool isFocusTraversable() override;
	virtual bool isOpaque() override;
	using ::javax::swing::JMenuBar::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::JMenuBar::processMouseEvent;
	using ::javax::swing::JMenuBar::processKeyEvent;
	using ::javax::swing::JMenuBar::requestFocus;
	using ::javax::swing::JMenuBar::repaint;
	using ::javax::swing::JMenuBar::remove;
	virtual void requestFocus() override;
	using ::javax::swing::JMenuBar::setUI;
	using ::javax::swing::JMenuBar::requestFocusInWindow;
	::javax::swing::plaf::basic::BasicInternalFrameTitlePane* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicInternalFrameTitlePane$SystemMenuBar_h_