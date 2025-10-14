#ifndef _sun_swing_text_TextComponentPrintable$6_h_
#define _sun_swing_text_TextComponentPrintable$6_h_
//$ class sun.swing.text.TextComponentPrintable$6
//$ extends javax.swing.JTextPane

#include <javax/swing/JTextPane.h>

namespace java {
	namespace awt {
		class Font;
		class FontMetrics;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class EditorKit;
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

class TextComponentPrintable$6 : public ::javax::swing::JTextPane {
	$class(TextComponentPrintable$6, $NO_CLASS_INIT, ::javax::swing::JTextPane)
public:
	TextComponentPrintable$6();
	using ::javax::swing::JTextPane::getText;
	using ::javax::swing::JTextPane::getToolTipText;
	using ::javax::swing::JTextPane::contains;
	using ::javax::swing::JTextPane::enable;
	using ::javax::swing::JTextPane::getBounds;
	using ::javax::swing::JTextPane::getSize;
	using ::javax::swing::JTextPane::getLocation;
	using ::javax::swing::JTextPane::firePropertyChange;
	using ::javax::swing::JTextPane::add;
	using ::javax::swing::JTextPane::getMousePosition;
	void init$(::sun::swing::text::TextComponentPrintable* this$0, ::javax::swing::text::JTextComponent* val$textComponent);
	virtual ::javax::swing::text::EditorKit* getEditorKit() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	using ::javax::swing::JTextPane::read;
	using ::javax::swing::JTextPane::setUI;
	using ::javax::swing::JTextPane::print;
	using ::javax::swing::JTextPane::requestFocus;
	using ::javax::swing::JTextPane::requestFocusInWindow;
	using ::javax::swing::JTextPane::repaint;
	using ::javax::swing::JTextPane::remove;
	using ::javax::swing::JTextPane::list;
	::sun::swing::text::TextComponentPrintable* this$0 = nullptr;
	::javax::swing::text::JTextComponent* val$textComponent = nullptr;
};

		} // text
	} // swing
} // sun

#endif // _sun_swing_text_TextComponentPrintable$6_h_