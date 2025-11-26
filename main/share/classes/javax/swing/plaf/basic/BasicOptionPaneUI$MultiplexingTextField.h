#ifndef _javax_swing_plaf_basic_BasicOptionPaneUI$MultiplexingTextField_h_
#define _javax_swing_plaf_basic_BasicOptionPaneUI$MultiplexingTextField_h_
//$ class javax.swing.plaf.basic.BasicOptionPaneUI$MultiplexingTextField
//$ extends javax.swing.JTextField

#include <java/lang/Array.h>
#include <javax/swing/JTextField.h>

namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class KeyStroke;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicOptionPaneUI$MultiplexingTextField : public ::javax::swing::JTextField {
	$class(BasicOptionPaneUI$MultiplexingTextField, $NO_CLASS_INIT, ::javax::swing::JTextField)
public:
	BasicOptionPaneUI$MultiplexingTextField();
	using ::javax::swing::JTextField::getToolTipText;
	using ::javax::swing::JTextField::contains;
	using ::javax::swing::JTextField::enable;
	using ::javax::swing::JTextField::getBounds;
	using ::javax::swing::JTextField::getSize;
	using ::javax::swing::JTextField::getLocation;
	using ::javax::swing::JTextField::firePropertyChange;
	using ::javax::swing::JTextField::add;
	using ::javax::swing::JTextField::getMousePosition;
	void init$(int32_t cols);
	using ::javax::swing::JTextField::print;
	using ::javax::swing::JTextField::list;
	virtual bool processKeyBinding(::javax::swing::KeyStroke* ks, ::java::awt::event::KeyEvent* e, int32_t condition, bool pressed) override;
	using ::javax::swing::JTextField::requestFocus;
	using ::javax::swing::JTextField::requestFocusInWindow;
	using ::javax::swing::JTextField::repaint;
	using ::javax::swing::JTextField::remove;
	virtual void setKeyStrokes($Array<::javax::swing::KeyStroke>* strokes);
	using ::javax::swing::JTextField::setUI;
	$Array<::javax::swing::KeyStroke>* strokes = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicOptionPaneUI$MultiplexingTextField_h_