#ifndef _javax_swing_text_html_ListView_h_
#define _javax_swing_text_html_ListView_h_
//$ class javax.swing.text.html.ListView
//$ extends javax.swing.text.html.BlockView

#include <javax/swing/text/html/BlockView.h>

namespace java {
	namespace awt {
		class Graphics;
		class Rectangle;
		class Shape;
	}
}
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
				class StyleSheet$ListPainter;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import ListView : public ::javax::swing::text::html::BlockView {
	$class(ListView, $NO_CLASS_INIT, ::javax::swing::text::html::BlockView)
public:
	ListView();
	using ::javax::swing::text::html::BlockView::getViewIndex;
	void init$(::javax::swing::text::Element* elem);
	virtual float getAlignment(int32_t axis) override;
	using ::javax::swing::text::html::BlockView::modelToView;
	virtual void paint(::java::awt::Graphics* g, ::java::awt::Shape* allocation) override;
	virtual void paintChild(::java::awt::Graphics* g, ::java::awt::Rectangle* alloc, int32_t index) override;
	virtual void setPropertiesFromAttributes() override;
	using ::javax::swing::text::html::BlockView::viewToModel;
	::javax::swing::text::html::StyleSheet$ListPainter* listPainter = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_ListView_h_