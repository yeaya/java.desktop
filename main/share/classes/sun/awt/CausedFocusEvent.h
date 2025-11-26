#ifndef _sun_awt_CausedFocusEvent_h_
#define _sun_awt_CausedFocusEvent_h_
//$ class sun.awt.CausedFocusEvent
//$ extends java.awt.event.FocusEvent

#include <java/awt/event/FocusEvent.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace sun {
	namespace awt {
		class CausedFocusEvent$Cause;
	}
}

namespace sun {
	namespace awt {

class CausedFocusEvent : public ::java::awt::event::FocusEvent {
	$class(CausedFocusEvent, 0, ::java::awt::event::FocusEvent)
public:
	CausedFocusEvent();
	void init$(::java::awt::Component* source, int32_t id, bool temporary, ::java::awt::Component* opposite, ::sun::awt::CausedFocusEvent$Cause* cause);
	static bool access$000(::sun::awt::CausedFocusEvent* x0);
	virtual $Object* readResolve() override;
	static const int64_t serialVersionUID = (int64_t)0xCD6227B556346B1E;
	static ::java::awt::Component* dummy;
	::sun::awt::CausedFocusEvent$Cause* cause = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_CausedFocusEvent_h_