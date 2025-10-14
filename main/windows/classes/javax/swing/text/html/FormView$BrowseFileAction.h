#ifndef _javax_swing_text_html_FormView$BrowseFileAction_h_
#define _javax_swing_text_html_FormView$BrowseFileAction_h_
//$ class javax.swing.text.html.FormView$BrowseFileAction
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Document;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class FormView;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class FormView$BrowseFileAction : public ::java::awt::event::ActionListener {
	$class(FormView$BrowseFileAction, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	FormView$BrowseFileAction();
	void init$(::javax::swing::text::html::FormView* this$0, ::javax::swing::text::AttributeSet* attrs, ::javax::swing::text::Document* model);
	virtual void actionPerformed(::java::awt::event::ActionEvent* ae) override;
	::javax::swing::text::html::FormView* this$0 = nullptr;
	::javax::swing::text::AttributeSet* attrs = nullptr;
	::javax::swing::text::Document* model = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_FormView$BrowseFileAction_h_