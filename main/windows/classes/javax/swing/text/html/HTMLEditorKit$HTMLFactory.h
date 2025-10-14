#ifndef _javax_swing_text_html_HTMLEditorKit$HTMLFactory_h_
#define _javax_swing_text_html_HTMLEditorKit$HTMLFactory_h_
//$ class javax.swing.text.html.HTMLEditorKit$HTMLFactory
//$ extends javax.swing.text.ViewFactory

#include <javax/swing/text/ViewFactory.h>

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

class $export HTMLEditorKit$HTMLFactory : public ::javax::swing::text::ViewFactory {
	$class(HTMLEditorKit$HTMLFactory, $NO_CLASS_INIT, ::javax::swing::text::ViewFactory)
public:
	HTMLEditorKit$HTMLFactory();
	void init$();
	virtual ::javax::swing::text::View* create(::javax::swing::text::Element* elem) override;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTMLEditorKit$HTMLFactory_h_