#ifndef _javax_swing_text_html_FormSubmitEvent_h_
#define _javax_swing_text_html_FormSubmitEvent_h_
//$ class javax.swing.text.html.FormSubmitEvent
//$ extends javax.swing.text.html.HTMLFrameHyperlinkEvent

#include <javax/swing/text/html/HTMLFrameHyperlinkEvent.h>

namespace java {
	namespace net {
		class URL;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class HyperlinkEvent$EventType;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Element;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class FormSubmitEvent$MethodType;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import FormSubmitEvent : public ::javax::swing::text::html::HTMLFrameHyperlinkEvent {
	$class(FormSubmitEvent, $NO_CLASS_INIT, ::javax::swing::text::html::HTMLFrameHyperlinkEvent)
public:
	FormSubmitEvent();
	void init$(Object$* source, ::javax::swing::event::HyperlinkEvent$EventType* type, ::java::net::URL* targetURL, ::javax::swing::text::Element* sourceElement, $String* targetFrame, ::javax::swing::text::html::FormSubmitEvent$MethodType* method, $String* data);
	virtual $String* getData();
	virtual ::javax::swing::text::html::FormSubmitEvent$MethodType* getMethod();
	::javax::swing::text::html::FormSubmitEvent$MethodType* method = nullptr;
	$String* data = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_FormSubmitEvent_h_