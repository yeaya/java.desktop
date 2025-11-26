#ifndef _JTreeFocusTest$2_h_
#define _JTreeFocusTest$2_h_
//$ class JTreeFocusTest$2
//$ extends javax.swing.JTree

#include <javax/swing/JTree.h>

class JTreeFocusTest;
namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class TreeModel;
		}
	}
}

class JTreeFocusTest$2 : public ::javax::swing::JTree {
	$class(JTreeFocusTest$2, $NO_CLASS_INIT, ::javax::swing::JTree)
public:
	JTreeFocusTest$2();
	using ::javax::swing::JTree::getToolTipText;
	using ::javax::swing::JTree::contains;
	using ::javax::swing::JTree::enable;
	using ::javax::swing::JTree::getBounds;
	using ::javax::swing::JTree::getSize;
	using ::javax::swing::JTree::getLocation;
	using ::javax::swing::JTree::firePropertyChange;
	using ::javax::swing::JTree::add;
	using ::javax::swing::JTree::getMousePosition;
	void init$(::JTreeFocusTest* this$0, ::javax::swing::tree::TreeModel* arg0);
	using ::javax::swing::JTree::isVisible;
	using ::javax::swing::JTree::list;
	virtual void processKeyEvent(::java::awt::event::KeyEvent* e) override;
	using ::javax::swing::JTree::setUI;
	using ::javax::swing::JTree::requestFocus;
	using ::javax::swing::JTree::requestFocusInWindow;
	using ::javax::swing::JTree::repaint;
	using ::javax::swing::JTree::remove;
	::JTreeFocusTest* this$0 = nullptr;
};

#endif // _JTreeFocusTest$2_h_