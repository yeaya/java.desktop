#ifndef _javax_swing_text_html_AccessibleHTML$DocumentHandler_h_
#define _javax_swing_text_html_AccessibleHTML$DocumentHandler_h_
//$ class javax.swing.text.html.AccessibleHTML$DocumentHandler
//$ extends javax.swing.event.DocumentListener

#include <javax/swing/event/DocumentListener.h>

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
			namespace html {
				class AccessibleHTML;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class AccessibleHTML$DocumentHandler : public ::javax::swing::event::DocumentListener {
	$class(AccessibleHTML$DocumentHandler, $NO_CLASS_INIT, ::javax::swing::event::DocumentListener)
public:
	AccessibleHTML$DocumentHandler();
	void init$(::javax::swing::text::html::AccessibleHTML* this$0);
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* e) override;
	::javax::swing::text::html::AccessibleHTML* this$0 = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_AccessibleHTML$DocumentHandler_h_