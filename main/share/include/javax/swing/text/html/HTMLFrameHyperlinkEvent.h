#ifndef _javax_swing_text_html_HTMLFrameHyperlinkEvent_h_
#define _javax_swing_text_html_HTMLFrameHyperlinkEvent_h_
//$ class javax.swing.text.html.HTMLFrameHyperlinkEvent
//$ extends javax.swing.event.HyperlinkEvent

#include <javax/swing/event/HyperlinkEvent.h>

namespace java {
	namespace awt {
		namespace event {
			class InputEvent;
		}
	}
}
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

class $import HTMLFrameHyperlinkEvent : public ::javax::swing::event::HyperlinkEvent {
	$class(HTMLFrameHyperlinkEvent, $NO_CLASS_INIT, ::javax::swing::event::HyperlinkEvent)
public:
	HTMLFrameHyperlinkEvent();
	void init$(Object$* source, ::javax::swing::event::HyperlinkEvent$EventType* type, ::java::net::URL* targetURL, $String* targetFrame);
	void init$(Object$* source, ::javax::swing::event::HyperlinkEvent$EventType* type, ::java::net::URL* targetURL, $String* desc, $String* targetFrame);
	void init$(Object$* source, ::javax::swing::event::HyperlinkEvent$EventType* type, ::java::net::URL* targetURL, ::javax::swing::text::Element* sourceElement, $String* targetFrame);
	void init$(Object$* source, ::javax::swing::event::HyperlinkEvent$EventType* type, ::java::net::URL* targetURL, $String* desc, ::javax::swing::text::Element* sourceElement, $String* targetFrame);
	void init$(Object$* source, ::javax::swing::event::HyperlinkEvent$EventType* type, ::java::net::URL* targetURL, $String* desc, ::javax::swing::text::Element* sourceElement, ::java::awt::event::InputEvent* inputEvent, $String* targetFrame);
	virtual $String* getTarget();
	$String* targetFrame = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTMLFrameHyperlinkEvent_h_