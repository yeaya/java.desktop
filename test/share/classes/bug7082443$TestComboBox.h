#ifndef _bug7082443$TestComboBox_h_
#define _bug7082443$TestComboBox_h_
//$ class bug7082443$TestComboBox
//$ extends javax.swing.JComboBox

#include <javax/swing/JComboBox.h>

namespace javax {
	namespace swing {
		class ListCellRenderer;
	}
}

class bug7082443$TestComboBox : public ::javax::swing::JComboBox {
	$class(bug7082443$TestComboBox, $NO_CLASS_INIT, ::javax::swing::JComboBox)
public:
	bug7082443$TestComboBox();
	using ::javax::swing::JComboBox::contains;
	using ::javax::swing::JComboBox::enable;
	using ::javax::swing::JComboBox::getBounds;
	using ::javax::swing::JComboBox::getSize;
	using ::javax::swing::JComboBox::getLocation;
	using ::javax::swing::JComboBox::firePropertyChange;
	using ::javax::swing::JComboBox::add;
	using ::javax::swing::JComboBox::getMousePosition;
	void init$();
	static ::javax::swing::ListCellRenderer* access$001(::bug7082443$TestComboBox* x0);
	virtual ::javax::swing::ListCellRenderer* getRenderer() override;
	virtual bool isOldRendererOpaque();
	using ::javax::swing::JComboBox::setUI;
	using ::javax::swing::JComboBox::requestFocus;
	using ::javax::swing::JComboBox::requestFocusInWindow;
	using ::javax::swing::JComboBox::repaint;
	using ::javax::swing::JComboBox::remove;
	using ::javax::swing::JComboBox::list;
	::javax::swing::ListCellRenderer* renderer = nullptr;
};

#endif // _bug7082443$TestComboBox_h_