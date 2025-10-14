#ifndef _Test6256140$4_h_
#define _Test6256140$4_h_
//$ class Test6256140$4
//$ extends javax.swing.JFormattedTextField

#include <javax/swing/JFormattedTextField.h>

namespace javax {
	namespace swing {
		class JToolTip;
	}
}

class Test6256140$4 : public ::javax::swing::JFormattedTextField {
	$class(Test6256140$4, $NO_CLASS_INIT, ::javax::swing::JFormattedTextField)
public:
	Test6256140$4();
	using ::javax::swing::JFormattedTextField::getToolTipText;
	using ::javax::swing::JFormattedTextField::contains;
	using ::javax::swing::JFormattedTextField::enable;
	using ::javax::swing::JFormattedTextField::getBounds;
	using ::javax::swing::JFormattedTextField::getSize;
	using ::javax::swing::JFormattedTextField::getLocation;
	using ::javax::swing::JFormattedTextField::firePropertyChange;
	using ::javax::swing::JFormattedTextField::add;
	using ::javax::swing::JFormattedTextField::getMousePosition;
	void init$();
	virtual ::javax::swing::JToolTip* createToolTip() override;
	using ::javax::swing::JFormattedTextField::setUI;
	using ::javax::swing::JFormattedTextField::print;
	using ::javax::swing::JFormattedTextField::requestFocus;
	using ::javax::swing::JFormattedTextField::requestFocusInWindow;
	using ::javax::swing::JFormattedTextField::repaint;
	using ::javax::swing::JFormattedTextField::remove;
	using ::javax::swing::JFormattedTextField::list;
};

#endif // _Test6256140$4_h_