#ifndef _bug6587742$TestPanel_h_
#define _bug6587742$TestPanel_h_
//$ class bug6587742$TestPanel
//$ extends javax.swing.JPanel

#include <javax/swing/JPanel.h>

class bug6587742;
namespace javax {
	namespace swing {
		class JComboBox;
	}
}

class bug6587742$TestPanel : public ::javax::swing::JPanel {
	$class(bug6587742$TestPanel, $NO_CLASS_INIT, ::javax::swing::JPanel)
public:
	bug6587742$TestPanel();
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	void init$(::bug6587742* this$0);
	using ::javax::swing::JPanel::setUI;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	using ::javax::swing::JPanel::list;
	::bug6587742* this$0 = nullptr;
	::javax::swing::JComboBox* cbThemes = nullptr;
};

#endif // _bug6587742$TestPanel_h_