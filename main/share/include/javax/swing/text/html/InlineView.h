#ifndef _javax_swing_text_html_InlineView_h_
#define _javax_swing_text_html_InlineView_h_
//$ class javax.swing.text.html.InlineView
//$ extends javax.swing.text.LabelView

#include <javax/swing/text/LabelView.h>

namespace java {
	namespace awt {
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
			class AttributeSet;
			class Element;
			class View;
			class ViewFactory;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class StyleSheet;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import InlineView : public ::javax::swing::text::LabelView {
	$class(InlineView, $NO_CLASS_INIT, ::javax::swing::text::LabelView)
public:
	InlineView();
	void init$(::javax::swing::text::Element* elem);
	virtual ::javax::swing::text::View* breakView(int32_t axis, int32_t offset, float pos, float len) override;
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual ::javax::swing::text::AttributeSet* getAttributes() override;
	virtual int32_t getBreakWeight(int32_t axis, float pos, float len) override;
	virtual ::javax::swing::text::html::StyleSheet* getStyleSheet();
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	using ::javax::swing::text::LabelView::modelToView;
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* e, ::java::awt::Shape* a, ::javax::swing::text::ViewFactory* f) override;
	virtual void setPropertiesFromAttributes() override;
	using ::javax::swing::text::LabelView::viewToModel;
	bool nowrap = false;
	::javax::swing::text::AttributeSet* attr = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_InlineView_h_