#ifndef _javax_swing_text_html_EditableView_h_
#define _javax_swing_text_html_EditableView_h_
//$ class javax.swing.text.html.EditableView
//$ extends javax.swing.text.ComponentView

#include <javax/swing/text/ComponentView.h>

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

class EditableView : public ::javax::swing::text::ComponentView {
	$class(EditableView, $NO_CLASS_INIT, ::javax::swing::text::ComponentView)
public:
	EditableView();
	void init$(::javax::swing::text::Element* e);
	virtual float getMaximumSpan(int32_t axis) override;
	virtual float getMinimumSpan(int32_t axis) override;
	virtual float getPreferredSpan(int32_t axis) override;
	virtual bool isVisible() override;
	using ::javax::swing::text::ComponentView::modelToView;
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* allocation) override;
	virtual void setParent(::javax::swing::text::View* parent) override;
	using ::javax::swing::text::ComponentView::viewToModel;
	bool isVisible$ = false;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_EditableView_h_