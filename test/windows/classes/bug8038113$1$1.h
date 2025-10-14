#ifndef _bug8038113$1$1_h_
#define _bug8038113$1$1_h_
//$ class bug8038113$1$1
//$ extends javax.swing.JPanel

#include <javax/swing/JPanel.h>

class bug8038113$1;
namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicTreeUI;
			}
		}
	}
}

class bug8038113$1$1 : public ::javax::swing::JPanel {
	$class(bug8038113$1$1, $NO_CLASS_INIT, ::javax::swing::JPanel)
public:
	bug8038113$1$1();
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	void init$(::bug8038113$1* this$1, ::javax::swing::plaf::basic::BasicTreeUI* val$treeUI);
	using ::javax::swing::JPanel::list;
	virtual void paint(::java::awt::Graphics* g) override;
	using ::javax::swing::JPanel::setUI;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	::bug8038113$1* this$1 = nullptr;
	::javax::swing::plaf::basic::BasicTreeUI* val$treeUI = nullptr;
};

#endif // _bug8038113$1$1_h_