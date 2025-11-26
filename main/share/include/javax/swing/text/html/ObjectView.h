#ifndef _javax_swing_text_html_ObjectView_h_
#define _javax_swing_text_html_ObjectView_h_
//$ class javax.swing.text.html.ObjectView
//$ extends javax.swing.text.ComponentView

#include <javax/swing/text/ComponentView.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Element;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import ObjectView : public ::javax::swing::text::ComponentView {
	$class(ObjectView, $NO_CLASS_INIT, ::javax::swing::text::ComponentView)
public:
	ObjectView();
	void init$(::javax::swing::text::Element* elem);
	virtual ::java::awt::Component* createComponent() override;
	virtual ::java::awt::Component* getUnloadableRepresentation();
	using ::javax::swing::text::ComponentView::modelToView;
	void setParameters(::java::awt::Component* comp, ::javax::swing::text::AttributeSet* attr);
	using ::javax::swing::text::ComponentView::viewToModel;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_ObjectView_h_