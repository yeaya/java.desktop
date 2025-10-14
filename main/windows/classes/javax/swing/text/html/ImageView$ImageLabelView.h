#ifndef _javax_swing_text_html_ImageView$ImageLabelView_h_
#define _javax_swing_text_html_ImageView$ImageLabelView_h_
//$ class javax.swing.text.html.ImageView$ImageLabelView
//$ extends javax.swing.text.html.InlineView

#include <javax/swing/text/html/InlineView.h>

namespace java {
	namespace awt {
		class Color;
		class Graphics;
		class Shape;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
			class Segment;
			class View;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class ImageView;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class ImageView$ImageLabelView : public ::javax::swing::text::html::InlineView {
	$class(ImageView$ImageLabelView, $NO_CLASS_INIT, ::javax::swing::text::html::InlineView)
public:
	ImageView$ImageLabelView();
	void init$(::javax::swing::text::html::ImageView* this$0, ::javax::swing::text::Element* e, $String* text);
	virtual ::javax::swing::text::View* breakView(int32_t axis, int32_t p0, float pos, float len) override;
	virtual int32_t getEndOffset() override;
	virtual ::java::awt::Color* getForeground() override;
	virtual int32_t getStartOffset() override;
	virtual ::javax::swing::text::Segment* getText(int32_t p0, int32_t p1) override;
	using ::javax::swing::text::html::InlineView::modelToView;
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* a) override;
	virtual void reset($String* text);
	using ::javax::swing::text::html::InlineView::viewToModel;
	::javax::swing::text::html::ImageView* this$0 = nullptr;
	::javax::swing::text::Segment* segment = nullptr;
	::java::awt::Color* fg = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_ImageView$ImageLabelView_h_