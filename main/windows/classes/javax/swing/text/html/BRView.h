#ifndef _javax_swing_text_html_BRView_h_
#define _javax_swing_text_html_BRView_h_
//$ class javax.swing.text.html.BRView
//$ extends javax.swing.text.html.InlineView

#include <javax/swing/text/html/InlineView.h>

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

class BRView : public ::javax::swing::text::html::InlineView {
	$class(BRView, $NO_CLASS_INIT, ::javax::swing::text::html::InlineView)
public:
	BRView();
	void init$(::javax::swing::text::Element* elem);
	virtual int32_t getBreakWeight(int32_t axis, float pos, float len) override;
	using ::javax::swing::text::html::InlineView::modelToView;
	using ::javax::swing::text::html::InlineView::viewToModel;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_BRView_h_