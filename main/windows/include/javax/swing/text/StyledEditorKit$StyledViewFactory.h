#ifndef _javax_swing_text_StyledEditorKit$StyledViewFactory_h_
#define _javax_swing_text_StyledEditorKit$StyledViewFactory_h_
//$ class javax.swing.text.StyledEditorKit$StyledViewFactory
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

class $import StyledEditorKit$StyledViewFactory : public ::javax::swing::text::ViewFactory {
	$class(StyledEditorKit$StyledViewFactory, $NO_CLASS_INIT, ::javax::swing::text::ViewFactory)
public:
	StyledEditorKit$StyledViewFactory();
	void init$();
	virtual ::javax::swing::text::View* create(::javax::swing::text::Element* elem) override;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_StyledEditorKit$StyledViewFactory_h_