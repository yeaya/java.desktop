#ifndef _javax_swing_text_html_HTMLEditorKit$HTMLFactory$1_h_
#define _javax_swing_text_html_HTMLEditorKit$HTMLFactory$1_h_
//$ class javax.swing.text.html.HTMLEditorKit$HTMLFactory$1
//$ extends javax.swing.text.html.BlockView

#include <java/lang/Array.h>
#include <javax/swing/text/html/BlockView.h>

namespace java {
	namespace awt {
		class Shape;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
			class Position$Bias;
			class ViewFactory;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class HTMLEditorKit$HTMLFactory;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class HTMLEditorKit$HTMLFactory$1 : public ::javax::swing::text::html::BlockView {
	$class(HTMLEditorKit$HTMLFactory$1, $NO_CLASS_INIT, ::javax::swing::text::html::BlockView)
public:
	HTMLEditorKit$HTMLFactory$1();
	using ::javax::swing::text::html::BlockView::getViewIndex;
	void init$(::javax::swing::text::html::HTMLEditorKit$HTMLFactory* this$0, ::javax::swing::text::Element* elem, int32_t axis);
	virtual float getMaximumSpan(int32_t axis) override;
	virtual float getMinimumSpan(int32_t axis) override;
	virtual int32_t getNextVisualPositionFrom(int32_t pos, ::javax::swing::text::Position$Bias* b, ::java::awt::Shape* a, int32_t direction, $Array<::javax::swing::text::Position$Bias>* biasRet) override;
	virtual float getPreferredSpan(int32_t axis) override;
	virtual void loadChildren(::javax::swing::text::ViewFactory* f) override;
	using ::javax::swing::text::html::BlockView::modelToView;
	virtual ::java::awt::Shape* modelToView(int32_t pos, ::java::awt::Shape* a, ::javax::swing::text::Position$Bias* b) override;
	using ::javax::swing::text::html::BlockView::viewToModel;
	::javax::swing::text::html::HTMLEditorKit$HTMLFactory* this$0 = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTMLEditorKit$HTMLFactory$1_h_