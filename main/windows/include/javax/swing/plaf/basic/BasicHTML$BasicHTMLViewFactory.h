#ifndef _javax_swing_plaf_basic_BasicHTML$BasicHTMLViewFactory_h_
#define _javax_swing_plaf_basic_BasicHTML$BasicHTMLViewFactory_h_
//$ class javax.swing.plaf.basic.BasicHTML$BasicHTMLViewFactory
//$ extends javax.swing.text.html.HTMLEditorKit$HTMLFactory

#include <javax/swing/text/html/HTMLEditorKit$HTMLFactory.h>

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
		namespace plaf {
			namespace basic {

class $import BasicHTML$BasicHTMLViewFactory : public ::javax::swing::text::html::HTMLEditorKit$HTMLFactory {
	$class(BasicHTML$BasicHTMLViewFactory, $NO_CLASS_INIT, ::javax::swing::text::html::HTMLEditorKit$HTMLFactory)
public:
	BasicHTML$BasicHTMLViewFactory();
	void init$();
	virtual ::javax::swing::text::View* create(::javax::swing::text::Element* elem) override;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicHTML$BasicHTMLViewFactory_h_