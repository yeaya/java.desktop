#ifndef _javax_swing_plaf_metal_MetalTitlePane$SystemMenuBar_h_
#define _javax_swing_plaf_metal_MetalTitlePane$SystemMenuBar_h_
//$ class javax.swing.plaf.metal.MetalTitlePane$SystemMenuBar
//$ extends javax.swing.JMenuBar

#include <javax/swing/JMenuBar.h>

namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalTitlePane;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalTitlePane$SystemMenuBar : public ::javax::swing::JMenuBar {
	$class(MetalTitlePane$SystemMenuBar, $NO_CLASS_INIT, ::javax::swing::JMenuBar)
public:
	MetalTitlePane$SystemMenuBar();
	using ::javax::swing::JMenuBar::add;
	using ::javax::swing::JMenuBar::getComponent;
	using ::javax::swing::JMenuBar::contains;
	using ::javax::swing::JMenuBar::enable;
	using ::javax::swing::JMenuBar::getBounds;
	using ::javax::swing::JMenuBar::getSize;
	using ::javax::swing::JMenuBar::getLocation;
	using ::javax::swing::JMenuBar::firePropertyChange;
	using ::javax::swing::JMenuBar::getMousePosition;
	void init$(::javax::swing::plaf::metal::MetalTitlePane* this$0);
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	using ::javax::swing::JMenuBar::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::JMenuBar::setUI;
	using ::javax::swing::JMenuBar::processMouseEvent;
	using ::javax::swing::JMenuBar::processKeyEvent;
	using ::javax::swing::JMenuBar::requestFocus;
	using ::javax::swing::JMenuBar::requestFocusInWindow;
	using ::javax::swing::JMenuBar::repaint;
	using ::javax::swing::JMenuBar::remove;
	::javax::swing::plaf::metal::MetalTitlePane* this$0 = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalTitlePane$SystemMenuBar_h_