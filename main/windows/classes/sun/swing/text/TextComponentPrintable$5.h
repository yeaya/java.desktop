#ifndef _sun_swing_text_TextComponentPrintable$5_h_
#define _sun_swing_text_TextComponentPrintable$5_h_
//$ class sun.swing.text.TextComponentPrintable$5
//$ extends javax.swing.JTextArea

#include <javax/swing/JTextArea.h>

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

class TextComponentPrintable$5 : public ::javax::swing::JTextArea {
	$class(TextComponentPrintable$5, $NO_CLASS_INIT, ::javax::swing::JTextArea)
public:
	TextComponentPrintable$5();
	using ::javax::swing::JTextArea::getToolTipText;
	using ::javax::swing::JTextArea::contains;
	using ::javax::swing::JTextArea::enable;
	using ::javax::swing::JTextArea::getBounds;
	using ::javax::swing::JTextArea::getSize;
	using ::javax::swing::JTextArea::getLocation;
	using ::javax::swing::JTextArea::firePropertyChange;
	using ::javax::swing::JTextArea::add;
	using ::javax::swing::JTextArea::getMousePosition;
	void init$(::sun::swing::text::TextComponentPrintable* this$0, ::javax::swing::text::JTextComponent* val$textComponent);
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	using ::javax::swing::JTextArea::setUI;
	using ::javax::swing::JTextArea::print;
	using ::javax::swing::JTextArea::requestFocus;
	using ::javax::swing::JTextArea::requestFocusInWindow;
	using ::javax::swing::JTextArea::repaint;
	using ::javax::swing::JTextArea::remove;
	using ::javax::swing::JTextArea::list;
	::sun::swing::text::TextComponentPrintable* this$0 = nullptr;
	::javax::swing::text::JTextComponent* val$textComponent = nullptr;
};

		} // text
	} // swing
} // sun

#endif // _sun_swing_text_TextComponentPrintable$5_h_