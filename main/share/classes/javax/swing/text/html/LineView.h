#ifndef _javax_swing_text_html_LineView_h_
#define _javax_swing_text_html_LineView_h_
//$ class javax.swing.text.html.LineView
//$ extends javax.swing.text.html.ParagraphView

#include <javax/swing/text/html/ParagraphView.h>

namespace javax {
	namespace swing {
		namespace text {
			class Element;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class LineView : public ::javax::swing::text::html::ParagraphView {
	$class(LineView, $NO_CLASS_INIT, ::javax::swing::text::html::ParagraphView)
public:
	LineView();
	using ::javax::swing::text::html::ParagraphView::breakView;
	using ::javax::swing::text::html::ParagraphView::getBreakWeight;
	using ::javax::swing::text::html::ParagraphView::getViewIndex;
	void init$(::javax::swing::text::Element* elem);
	virtual float getAlignment(int32_t axis) override;
	virtual int32_t getCharactersPerTab();
	virtual float getMinimumSpan(int32_t axis) override;
	virtual float getPreTab(float x, int32_t tabOffset);
	virtual int32_t getResizeWeight(int32_t axis) override;
	virtual bool isVisible() override;
	virtual void layout(int32_t width, int32_t height) override;
	using ::javax::swing::text::html::ParagraphView::modelToView;
	virtual float nextTabStop(float x, int32_t tabOffset) override;
	using ::javax::swing::text::html::ParagraphView::viewToModel;
	int32_t tabBase = 0;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_LineView_h_