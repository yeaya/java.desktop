#ifndef _sun_swing_text_TextComponentPrintable$3_h_
#define _sun_swing_text_TextComponentPrintable$3_h_
//$ class sun.swing.text.TextComponentPrintable$3
//$ extends javax.swing.JPasswordField

#include <javax/swing/JPasswordField.h>

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

class TextComponentPrintable$3 : public ::javax::swing::JPasswordField {
	$class(TextComponentPrintable$3, $NO_CLASS_INIT, ::javax::swing::JPasswordField)
public:
	TextComponentPrintable$3();
	using ::javax::swing::JPasswordField::getToolTipText;
	using ::javax::swing::JPasswordField::contains;
	using ::javax::swing::JPasswordField::enable;
	using ::javax::swing::JPasswordField::getBounds;
	using ::javax::swing::JPasswordField::getSize;
	using ::javax::swing::JPasswordField::getLocation;
	using ::javax::swing::JPasswordField::firePropertyChange;
	using ::javax::swing::JPasswordField::add;
	using ::javax::swing::JPasswordField::getMousePosition;
	void init$(::sun::swing::text::TextComponentPrintable* this$0, ::javax::swing::text::JTextComponent* val$textComponent);
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	using ::javax::swing::JPasswordField::setUI;
	using ::javax::swing::JPasswordField::print;
	using ::javax::swing::JPasswordField::requestFocus;
	using ::javax::swing::JPasswordField::requestFocusInWindow;
	using ::javax::swing::JPasswordField::repaint;
	using ::javax::swing::JPasswordField::remove;
	using ::javax::swing::JPasswordField::list;
	::sun::swing::text::TextComponentPrintable* this$0 = nullptr;
	::javax::swing::text::JTextComponent* val$textComponent = nullptr;
};

		} // text
	} // swing
} // sun

#endif // _sun_swing_text_TextComponentPrintable$3_h_