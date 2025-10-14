#ifndef _javax_swing_event_InternalFrameEvent_h_
#define _javax_swing_event_InternalFrameEvent_h_
//$ class javax.swing.event.InternalFrameEvent
//$ extends java.awt.AWTEvent

#include <java/awt/AWTEvent.h>

#pragma push_macro("INTERNAL_FRAME_ACTIVATED")
#undef INTERNAL_FRAME_ACTIVATED
#pragma push_macro("INTERNAL_FRAME_CLOSED")
#undef INTERNAL_FRAME_CLOSED
#pragma push_macro("INTERNAL_FRAME_CLOSING")
#undef INTERNAL_FRAME_CLOSING
#pragma push_macro("INTERNAL_FRAME_DEACTIVATED")
#undef INTERNAL_FRAME_DEACTIVATED
#pragma push_macro("INTERNAL_FRAME_DEICONIFIED")
#undef INTERNAL_FRAME_DEICONIFIED
#pragma push_macro("INTERNAL_FRAME_FIRST")
#undef INTERNAL_FRAME_FIRST
#pragma push_macro("INTERNAL_FRAME_ICONIFIED")
#undef INTERNAL_FRAME_ICONIFIED
#pragma push_macro("INTERNAL_FRAME_LAST")
#undef INTERNAL_FRAME_LAST
#pragma push_macro("INTERNAL_FRAME_OPENED")
#undef INTERNAL_FRAME_OPENED

namespace javax {
	namespace swing {
		class JInternalFrame;
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $export InternalFrameEvent : public ::java::awt::AWTEvent {
	$class(InternalFrameEvent, $NO_CLASS_INIT, ::java::awt::AWTEvent)
public:
	InternalFrameEvent();
	void init$(::javax::swing::JInternalFrame* source, int32_t id);
	virtual ::javax::swing::JInternalFrame* getInternalFrame();
	virtual $String* paramString() override;
	static const int32_t INTERNAL_FRAME_FIRST = 25549;
	static const int32_t INTERNAL_FRAME_LAST = 25555;
	static const int32_t INTERNAL_FRAME_OPENED = INTERNAL_FRAME_FIRST;
	static const int32_t INTERNAL_FRAME_CLOSING = 25550; // 1 + INTERNAL_FRAME_FIRST
	static const int32_t INTERNAL_FRAME_CLOSED = 25551; // 2 + INTERNAL_FRAME_FIRST
	static const int32_t INTERNAL_FRAME_ICONIFIED = 25552; // 3 + INTERNAL_FRAME_FIRST
	static const int32_t INTERNAL_FRAME_DEICONIFIED = 25553; // 4 + INTERNAL_FRAME_FIRST
	static const int32_t INTERNAL_FRAME_ACTIVATED = 25554; // 5 + INTERNAL_FRAME_FIRST
	static const int32_t INTERNAL_FRAME_DEACTIVATED = 25555; // 6 + INTERNAL_FRAME_FIRST
};

		} // event
	} // swing
} // javax

#pragma pop_macro("INTERNAL_FRAME_ACTIVATED")
#pragma pop_macro("INTERNAL_FRAME_CLOSED")
#pragma pop_macro("INTERNAL_FRAME_CLOSING")
#pragma pop_macro("INTERNAL_FRAME_DEACTIVATED")
#pragma pop_macro("INTERNAL_FRAME_DEICONIFIED")
#pragma pop_macro("INTERNAL_FRAME_FIRST")
#pragma pop_macro("INTERNAL_FRAME_ICONIFIED")
#pragma pop_macro("INTERNAL_FRAME_LAST")
#pragma pop_macro("INTERNAL_FRAME_OPENED")

#endif // _javax_swing_event_InternalFrameEvent_h_