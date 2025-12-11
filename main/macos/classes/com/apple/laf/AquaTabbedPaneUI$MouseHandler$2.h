#ifndef _com_apple_laf_AquaTabbedPaneUI$MouseHandler$2_h_
#define _com_apple_laf_AquaTabbedPaneUI$MouseHandler$2_h_
//$ class com.apple.laf.AquaTabbedPaneUI$MouseHandler$2
//$ extends javax.swing.JMenuItem

#include <javax/swing/JMenuItem.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTabbedPaneUI$MouseHandler;
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Dimension;
		class Graphics;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTabbedPaneUI$MouseHandler$2 : public ::javax::swing::JMenuItem {
	$class(AquaTabbedPaneUI$MouseHandler$2, $NO_CLASS_INIT, ::javax::swing::JMenuItem)
public:
	AquaTabbedPaneUI$MouseHandler$2();
	using ::javax::swing::JMenuItem::getComponent;
	using ::javax::swing::JMenuItem::contains;
	using ::javax::swing::JMenuItem::enable;
	using ::javax::swing::JMenuItem::getBounds;
	using ::javax::swing::JMenuItem::getSize;
	using ::javax::swing::JMenuItem::getLocation;
	using ::javax::swing::JMenuItem::firePropertyChange;
	using ::javax::swing::JMenuItem::add;
	using ::javax::swing::JMenuItem::getMousePosition;
	void init$(::com::apple::laf::AquaTabbedPaneUI$MouseHandler* this$1, ::java::awt::Component* val$component);
	virtual ::java::awt::Dimension* getPreferredSize() override;
	using ::javax::swing::JMenuItem::list;
	virtual void paintComponent(::java::awt::Graphics* g) override;
	using ::javax::swing::JMenuItem::setUI;
	using ::javax::swing::JMenuItem::processMouseEvent;
	using ::javax::swing::JMenuItem::processKeyEvent;
	using ::javax::swing::JMenuItem::requestFocus;
	using ::javax::swing::JMenuItem::requestFocusInWindow;
	using ::javax::swing::JMenuItem::repaint;
	using ::javax::swing::JMenuItem::remove;
	::com::apple::laf::AquaTabbedPaneUI$MouseHandler* this$1 = nullptr;
	::java::awt::Component* val$component = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTabbedPaneUI$MouseHandler$2_h_