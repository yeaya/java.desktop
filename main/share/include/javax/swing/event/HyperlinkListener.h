#ifndef _javax_swing_event_HyperlinkListener_h_
#define _javax_swing_event_HyperlinkListener_h_
//$ interface javax.swing.event.HyperlinkListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace swing {
		namespace event {
			class HyperlinkEvent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $import HyperlinkListener : public ::java::util::EventListener {
	$interface(HyperlinkListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void hyperlinkUpdate(::javax::swing::event::HyperlinkEvent* e) {}
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_HyperlinkListener_h_