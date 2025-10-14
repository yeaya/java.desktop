#ifndef _javax_swing_tree_DefaultTreeCellEditor$DefaultTextField_h_
#define _javax_swing_tree_DefaultTreeCellEditor$DefaultTextField_h_
//$ class javax.swing.tree.DefaultTreeCellEditor$DefaultTextField
//$ extends javax.swing.JTextField

#include <javax/swing/JTextField.h>

namespace java {
	namespace awt {
		class Dimension;
		class Font;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class DefaultTreeCellEditor;
		}
	}
}

namespace javax {
	namespace swing {
		namespace tree {

class $export DefaultTreeCellEditor$DefaultTextField : public ::javax::swing::JTextField {
	$class(DefaultTreeCellEditor$DefaultTextField, $NO_CLASS_INIT, ::javax::swing::JTextField)
public:
	DefaultTreeCellEditor$DefaultTextField();
	using ::javax::swing::JTextField::getToolTipText;
	using ::javax::swing::JTextField::contains;
	using ::javax::swing::JTextField::enable;
	using ::javax::swing::JTextField::getBounds;
	using ::javax::swing::JTextField::getSize;
	using ::javax::swing::JTextField::getLocation;
	using ::javax::swing::JTextField::firePropertyChange;
	using ::javax::swing::JTextField::add;
	using ::javax::swing::JTextField::getMousePosition;
	void init$(::javax::swing::tree::DefaultTreeCellEditor* this$0, ::javax::swing::border::Border* border);
	virtual ::javax::swing::border::Border* getBorder() override;
	virtual ::java::awt::Font* getFont() override;
	virtual ::java::awt::Dimension* getPreferredSize() override;
	using ::javax::swing::JTextField::print;
	using ::javax::swing::JTextField::requestFocus;
	using ::javax::swing::JTextField::requestFocusInWindow;
	using ::javax::swing::JTextField::repaint;
	using ::javax::swing::JTextField::remove;
	using ::javax::swing::JTextField::list;
	virtual void setBorder(::javax::swing::border::Border* border) override;
	using ::javax::swing::JTextField::setUI;
	::javax::swing::tree::DefaultTreeCellEditor* this$0 = nullptr;
	::javax::swing::border::Border* border = nullptr;
};

		} // tree
	} // swing
} // javax

#endif // _javax_swing_tree_DefaultTreeCellEditor$DefaultTextField_h_