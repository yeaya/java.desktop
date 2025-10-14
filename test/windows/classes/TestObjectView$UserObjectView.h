#ifndef _TestObjectView$UserObjectView_h_
#define _TestObjectView$UserObjectView_h_
//$ class TestObjectView$UserObjectView
//$ extends javax.swing.text.html.ObjectView

#include <javax/swing/text/html/ObjectView.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
		}
	}
}

class $export TestObjectView$UserObjectView : public ::javax::swing::text::html::ObjectView {
	$class(TestObjectView$UserObjectView, $NO_CLASS_INIT, ::javax::swing::text::html::ObjectView)
public:
	TestObjectView$UserObjectView();
	void init$(::javax::swing::text::Element* elem);
	virtual ::java::awt::Component* createComponent() override;
	using ::javax::swing::text::html::ObjectView::modelToView;
	using ::javax::swing::text::html::ObjectView::viewToModel;
};

#endif // _TestObjectView$UserObjectView_h_