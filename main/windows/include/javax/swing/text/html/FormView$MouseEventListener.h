#ifndef _javax_swing_text_html_FormView$MouseEventListener_h_
#define _javax_swing_text_html_FormView$MouseEventListener_h_
//$ class javax.swing.text.html.FormView$MouseEventListener
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
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

class $import FormView$MouseEventListener : public ::java::awt::event::MouseAdapter {
	$class(FormView$MouseEventListener, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	FormView$MouseEventListener();
	void init$(::javax::swing::text::html::FormView* this$0);
	virtual void mouseReleased(::java::awt::event::MouseEvent* evt) override;
	::javax::swing::text::html::FormView* this$0 = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_FormView$MouseEventListener_h_