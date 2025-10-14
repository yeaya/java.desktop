#ifndef _javax_swing_event_HyperlinkEvent_h_
#define _javax_swing_event_HyperlinkEvent_h_
//$ class javax.swing.event.HyperlinkEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

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
		namespace event {

class $export HyperlinkEvent : public ::java::util::EventObject {
	$class(HyperlinkEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	HyperlinkEvent();
	void init$(Object$* source, ::javax::swing::event::HyperlinkEvent$EventType* type, ::java::net::URL* u);
	void init$(Object$* source, ::javax::swing::event::HyperlinkEvent$EventType* type, ::java::net::URL* u, $String* desc);
	void init$(Object$* source, ::javax::swing::event::HyperlinkEvent$EventType* type, ::java::net::URL* u, $String* desc, ::javax::swing::text::Element* sourceElement);
	void init$(Object$* source, ::javax::swing::event::HyperlinkEvent$EventType* type, ::java::net::URL* u, $String* desc, ::javax::swing::text::Element* sourceElement, ::java::awt::event::InputEvent* inputEvent);
	virtual $String* getDescription();
	virtual ::javax::swing::event::HyperlinkEvent$EventType* getEventType();
	virtual ::java::awt::event::InputEvent* getInputEvent();
	virtual ::javax::swing::text::Element* getSourceElement();
	virtual ::java::net::URL* getURL();
	::javax::swing::event::HyperlinkEvent$EventType* type = nullptr;
	::java::net::URL* u = nullptr;
	$String* desc = nullptr;
	::javax::swing::text::Element* sourceElement = nullptr;
	::java::awt::event::InputEvent* inputEvent = nullptr;
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_HyperlinkEvent_h_