#ifndef _javax_swing_text_html_NoFramesView_h_
#define _javax_swing_text_html_NoFramesView_h_
//$ class javax.swing.text.html.NoFramesView
//$ extends javax.swing.text.html.BlockView

#include <javax/swing/text/html/BlockView.h>

namespace java {
	namespace awt {
		class Graphics;
		class Shape;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
			class View;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class NoFramesView : public ::javax::swing::text::html::BlockView {
	$class(NoFramesView, $NO_CLASS_INIT, ::javax::swing::text::html::BlockView)
public:
	NoFramesView();
	using ::javax::swing::text::html::BlockView::getViewIndex;
	void init$(::javax::swing::text::Element* elem, int32_t axis);
	virtual float getMaximumSpan(int32_t axis) override;
	virtual float getMinimumSpan(int32_t axis) override;
	virtual float getPreferredSpan(int32_t axis) override;
	virtual bool isVisible() override;
	virtual void layout(int32_t width, int32_t height) override;
	using ::javax::swing::text::html::BlockView::modelToView;
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* allocation) override;
	virtual void setParent(::javax::swing::text::View* p) override;
	using ::javax::swing::text::html::BlockView::viewToModel;
	bool visible = false;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_NoFramesView_h_