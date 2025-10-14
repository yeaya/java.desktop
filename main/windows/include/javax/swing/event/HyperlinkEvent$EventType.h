#ifndef _javax_swing_event_HyperlinkEvent$EventType_h_
#define _javax_swing_event_HyperlinkEvent$EventType_h_
//$ class javax.swing.event.HyperlinkEvent$EventType
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ACTIVATED")
#undef ACTIVATED
#pragma push_macro("ENTERED")
#undef ENTERED
#pragma push_macro("EXITED")
#undef EXITED

namespace javax {
	namespace swing {
		namespace event {

class $import HyperlinkEvent$EventType : public ::java::lang::Object {
	$class(HyperlinkEvent$EventType, 0, ::java::lang::Object)
public:
	HyperlinkEvent$EventType();
	void init$($String* s);
	virtual $String* toString() override;
	static ::javax::swing::event::HyperlinkEvent$EventType* ENTERED;
	static ::javax::swing::event::HyperlinkEvent$EventType* EXITED;
	static ::javax::swing::event::HyperlinkEvent$EventType* ACTIVATED;
	$String* typeString = nullptr;
};

		} // event
	} // swing
} // javax

#pragma pop_macro("ACTIVATED")
#pragma pop_macro("ENTERED")
#pragma pop_macro("EXITED")

#endif // _javax_swing_event_HyperlinkEvent$EventType_h_