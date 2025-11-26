#ifndef _javax_swing_text_LabelView_h_
#define _javax_swing_text_LabelView_h_
//$ class javax.swing.text.LabelView
//$ extends javax.swing.text.GlyphView

#include <javax/swing/text/GlyphView.h>

namespace java {
	namespace awt {
		class Color;
		class Font;
		class FontMetrics;
		class Shape;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class DocumentEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
			class ViewFactory;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export LabelView : public ::javax::swing::text::GlyphView {
	$class(LabelView, $NO_CLASS_INIT, ::javax::swing::text::GlyphView)
public:
	LabelView();
	void init$(::javax::swing::text::Element* elem);
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual ::java::awt::Color* getBackground() override;
	virtual ::java::awt::Font* getFont() override;
	virtual ::java::awt::FontMetrics* getFontMetrics();
	virtual ::java::awt::Color* getForeground() override;
	virtual bool isStrikeThrough() override;
	virtual bool isSubscript() override;
	virtual bool isSuperscript() override;
	virtual bool isUnderline() override;
	using ::javax::swing::text::GlyphView::modelToView;
	virtual void setBackground(::java::awt::Color* bg);
	virtual void setPropertiesFromAttributes();
	virtual void setStrikeThrough(bool s);
	virtual void setSubscript(bool s);
	virtual void setSuperscript(bool s);
	virtual void setUnderline(bool u);
	void sync();
	using ::javax::swing::text::GlyphView::viewToModel;
	::java::awt::Font* font = nullptr;
	::java::awt::Color* fg = nullptr;
	::java::awt::Color* bg = nullptr;
	bool underline = false;
	bool strike = false;
	bool superscript = false;
	bool subscript = false;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_LabelView_h_