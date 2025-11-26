#ifndef _BasicComboNPE_h_
#define _BasicComboNPE_h_
//$ class BasicComboNPE
//$ extends javax.swing.JComboBox

#include <java/lang/Array.h>
#include <javax/swing/JComboBox.h>

namespace javax {
	namespace swing {
		class ComboBoxModel;
	}
}

class $export BasicComboNPE : public ::javax::swing::JComboBox {
	$class(BasicComboNPE, $NO_CLASS_INIT, ::javax::swing::JComboBox)
public:
	BasicComboNPE();
	using ::javax::swing::JComboBox::contains;
	using ::javax::swing::JComboBox::enable;
	using ::javax::swing::JComboBox::getBounds;
	using ::javax::swing::JComboBox::getSize;
	using ::javax::swing::JComboBox::getLocation;
	using ::javax::swing::JComboBox::firePropertyChange;
	using ::javax::swing::JComboBox::add;
	using ::javax::swing::JComboBox::getMousePosition;
	void init$();
	virtual ::javax::swing::ComboBoxModel* getModel() override;
	using ::javax::swing::JComboBox::list;
	static void main($StringArray* args);
	using ::javax::swing::JComboBox::setUI;
	using ::javax::swing::JComboBox::requestFocus;
	using ::javax::swing::JComboBox::requestFocusInWindow;
	using ::javax::swing::JComboBox::repaint;
	using ::javax::swing::JComboBox::remove;
};

#endif // _BasicComboNPE_h_