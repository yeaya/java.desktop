#ifndef _sun_swing_text_TextComponentPrintable$7_h_
#define _sun_swing_text_TextComponentPrintable$7_h_
//$ class sun.swing.text.TextComponentPrintable$7
//$ extends javax.swing.JEditorPane

#include <javax/swing/JEditorPane.h>

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

class TextComponentPrintable$7 : public ::javax::swing::JEditorPane {
	$class(TextComponentPrintable$7, $NO_CLASS_INIT, ::javax::swing::JEditorPane)
public:
	TextComponentPrintable$7();
	using ::javax::swing::JEditorPane::getText;
	using ::javax::swing::JEditorPane::getToolTipText;
	using ::javax::swing::JEditorPane::contains;
	using ::javax::swing::JEditorPane::enable;
	using ::javax::swing::JEditorPane::getBounds;
	using ::javax::swing::JEditorPane::getSize;
	using ::javax::swing::JEditorPane::getLocation;
	using ::javax::swing::JEditorPane::firePropertyChange;
	using ::javax::swing::JEditorPane::add;
	using ::javax::swing::JEditorPane::getMousePosition;
	void init$(::sun::swing::text::TextComponentPrintable* this$0, ::javax::swing::text::JTextComponent* val$textComponent);
	virtual ::javax::swing::text::EditorKit* getEditorKit() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* font) override;
	using ::javax::swing::JEditorPane::read;
	using ::javax::swing::JEditorPane::setUI;
	using ::javax::swing::JEditorPane::print;
	using ::javax::swing::JEditorPane::requestFocus;
	using ::javax::swing::JEditorPane::requestFocusInWindow;
	using ::javax::swing::JEditorPane::repaint;
	using ::javax::swing::JEditorPane::remove;
	using ::javax::swing::JEditorPane::list;
	::sun::swing::text::TextComponentPrintable* this$0 = nullptr;
	::javax::swing::text::JTextComponent* val$textComponent = nullptr;
};

		} // text
	} // swing
} // sun

#endif // _sun_swing_text_TextComponentPrintable$7_h_