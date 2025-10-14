#ifndef _sun_swing_text_TextComponentPrintable$4_h_
#define _sun_swing_text_TextComponentPrintable$4_h_
//$ class sun.swing.text.TextComponentPrintable$4
//$ extends javax.swing.JTextField

#include <javax/swing/JTextField.h>

namespace java {
	namespace awt {
		class Font;
		class FontMetrics;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent;
		}
	}
}
namespace sun {
	namespace swing {
		namespace text {
			class TextComponentPrintable;
		}
	}
}

namespace sun {
	namespace swing {
		namespace text {

class TextComponentPrintable$4 : public ::javax::swing::JTextField {
	$class(TextComponentPrintable$4, $NO_CLASS_INIT, ::javax::swing::JTextField)
public:
	TextComponentPrintable$4();
	using ::javax::swing::JTextField::getToolTipText;
	using ::javax::swing::JTextField::contains;
	using ::javax::swing::JTextField::enable;
	using ::javax::swing::JTextField::getBounds;
	using ::javax::swing::JTextField::getSize;
	using ::javax::swing::JTextField::getLocation;
	using ::javax::swing::JTextField::firePropertyChange;
	using ::javax::swing::JTextField::add;
	using ::javax::swing::JTextField::getMousePosition;
	void init$(::sun::swing::text::TextComponentPrintable* this$0, ::javax::swing::text::JTextComponent* val$textComponent);
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	using ::javax::swing::JTextField::setUI;
	using ::javax::swing::JTextField::print;
	using ::javax::swing::JTextField::requestFocus;
	using ::javax::swing::JTextField::requestFocusInWindow;
	using ::javax::swing::JTextField::repaint;
	using ::javax::swing::JTextField::remove;
	using ::javax::swing::JTextField::list;
	::sun::swing::text::TextComponentPrintable* this$0 = nullptr;
	::javax::swing::text::JTextComponent* val$textComponent = nullptr;
};

		} // text
	} // swing
} // sun

#endif // _sun_swing_text_TextComponentPrintable$4_h_