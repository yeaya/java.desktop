#ifndef _DefaultButtonTest$DefaultPanel_h_
#define _DefaultButtonTest$DefaultPanel_h_
//$ class DefaultButtonTest$DefaultPanel
//$ extends javax.swing.JPanel

#include <javax/swing/JPanel.h>

class DefaultButtonTest;
namespace javax {
	namespace swing {
		class JButton;
		class JComboBox;
		class JFrame;
		class JScrollPane;
	}
}

class $export DefaultButtonTest$DefaultPanel : public ::javax::swing::JPanel {
	$class(DefaultButtonTest$DefaultPanel, $NO_CLASS_INIT, ::javax::swing::JPanel)
public:
	DefaultButtonTest$DefaultPanel();
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	void init$(::DefaultButtonTest* this$0, ::javax::swing::JFrame* root);
	::javax::swing::JPanel* createButtonPanel(::javax::swing::JFrame* frame);
	::javax::swing::JScrollPane* createInfoPanel();
	::javax::swing::JPanel* createPanel();
	using ::javax::swing::JPanel::setUI;
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	using ::javax::swing::JPanel::list;
	::DefaultButtonTest* this$0 = nullptr;
	::javax::swing::JComboBox* combo = nullptr;
	::javax::swing::JComboBox* combo2 = nullptr;
	::javax::swing::JButton* okButton = nullptr;
	::javax::swing::JButton* cancelButton = nullptr;
};

#endif // _DefaultButtonTest$DefaultPanel_h_