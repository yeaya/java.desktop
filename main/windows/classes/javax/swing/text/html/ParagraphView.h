#ifndef _javax_swing_text_html_ParagraphView_h_
#define _javax_swing_text_html_ParagraphView_h_
//$ class javax.swing.text.html.ParagraphView
//$ extends javax.swing.text.ParagraphView

#include <javax/swing/text/ParagraphView.h>

namespace java {
	namespace awt {
		class Graphics;
		class Shape;
	}
}
namespace javax {
	namespace swing {
		class SizeRequirements;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Element;
			class View;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class CSS$LengthValue;
				class StyleSheet;
				class StyleSheet$BoxPainter;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export ParagraphView : public ::javax::swing::text::ParagraphView {
	$class(ParagraphView, $NO_CLASS_INIT, ::javax::swing::text::ParagraphView)
public:
	ParagraphView();
	using ::javax::swing::text::ParagraphView::breakView;
	using ::javax::swing::text::ParagraphView::getBreakWeight;
	using ::javax::swing::text::ParagraphView::getViewIndex;
	void init$(::javax::swing::text::Element* elem);
	virtual ::javax::swing::SizeRequirements* calculateMinorAxisRequirements(int32_t axis, ::javax::swing::SizeRequirements* r) override;
	virtual ::javax::swing::text::AttributeSet* getAttributes() override;
	virtual float getMaximumSpan(int32_t axis) override;
	virtual float getMinimumSpan(int32_t axis) override;
	virtual float getPreferredSpan(int32_t axis) override;
	virtual ::javax::swing::text::html::StyleSheet* getStyleSheet();
	virtual bool isVisible() override;
	using ::javax::swing::text::ParagraphView::modelToView;
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* a) override;
	virtual void setParent(::javax::swing::text::View* parent) override;
	virtual void setPropertiesFromAttributes() override;
	using ::javax::swing::text::ParagraphView::viewToModel;
	::javax::swing::text::AttributeSet* attr = nullptr;
	::javax::swing::text::html::StyleSheet$BoxPainter* painter = nullptr;
	::javax::swing::text::html::CSS$LengthValue* cssWidth = nullptr;
	::javax::swing::text::html::CSS$LengthValue* cssHeight = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_ParagraphView_h_