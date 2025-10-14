#ifndef _bug6406264_h_
#define _bug6406264_h_
//$ class bug6406264
//$ extends javax.swing.JComboBox

#include <java/lang/Array.h>
#include <javax/swing/JComboBox.h>

namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export bug6406264 : public ::javax::swing::JComboBox {
	$class(bug6406264, $NO_CLASS_INIT, ::javax::swing::JComboBox)
public:
	bug6406264();
	using ::javax::swing::JComboBox::contains;
	using ::javax::swing::JComboBox::enable;
	using ::javax::swing::JComboBox::getBounds;
	using ::javax::swing::JComboBox::getSize;
	using ::javax::swing::JComboBox::getLocation;
	using ::javax::swing::JComboBox::firePropertyChange;
	using ::javax::swing::JComboBox::add;
	using ::javax::swing::JComboBox::getMousePosition;
	void init$($ObjectArray* items);
	using ::javax::swing::JComboBox::list;
	static void main($StringArray* args);
	using ::javax::swing::JComboBox::setUI;
	using ::javax::swing::JComboBox::requestFocus;
	using ::javax::swing::JComboBox::requestFocusInWindow;
	using ::javax::swing::JComboBox::repaint;
	using ::javax::swing::JComboBox::remove;
	virtual void updateUI() override;
	static ::javax::swing::JFrame* frame;
	static ::bug6406264* comboBox;
};

#endif // _bug6406264_h_