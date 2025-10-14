#ifndef _javax_swing_text_html_CommentView_h_
#define _javax_swing_text_html_CommentView_h_
//$ class javax.swing.text.html.CommentView
//$ extends javax.swing.text.html.HiddenTagView

#include <javax/swing/text/html/HiddenTagView.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
			class JTextComponent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class CommentView : public ::javax::swing::text::html::HiddenTagView {
	$class(CommentView, 0, ::javax::swing::text::html::HiddenTagView)
public:
	CommentView();
	using ::javax::swing::text::html::HiddenTagView::insertUpdate;
	void init$(::javax::swing::text::Element* e);
	virtual void _updateModelFromText() override;
	virtual ::java::awt::Component* createComponent() override;
	virtual $String* getRepresentedText() override;
	virtual ::javax::swing::text::JTextComponent* getTextComponent() override;
	using ::javax::swing::text::html::HiddenTagView::removeUpdate;
	using ::javax::swing::text::html::HiddenTagView::modelToView;
	virtual void resetBorder() override;
	using ::javax::swing::text::html::HiddenTagView::viewToModel;
	static ::javax::swing::border::Border* CBorder;
	static const int32_t commentPadding = 3;
	static const int32_t commentPaddingD = 9; // commentPadding * 3
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_CommentView_h_