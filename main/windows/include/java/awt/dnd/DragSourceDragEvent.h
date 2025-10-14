#ifndef _java_awt_dnd_DragSourceDragEvent_h_
#define _java_awt_dnd_DragSourceDragEvent_h_
//$ class java.awt.dnd.DragSourceDragEvent
//$ extends java.awt.dnd.DragSourceEvent

#include <java/awt/dnd/DragSourceEvent.h>
#include <java/awt/event/InputEvent.h>

#pragma push_macro("ALT_GRAPH_DOWN_MASK")
#undef ALT_GRAPH_DOWN_MASK
#pragma push_macro("JDK_1_3_MODIFIERS")
#undef JDK_1_3_MODIFIERS
#pragma push_macro("JDK_1_4_MODIFIERS")
#undef JDK_1_4_MODIFIERS
#pragma push_macro("SHIFT_DOWN_MASK")
#undef SHIFT_DOWN_MASK

namespace java {
	namespace awt {
		namespace dnd {
			class DragSourceContext;
		}
	}
}

namespace java {
	namespace awt {
		namespace dnd {

class $import DragSourceDragEvent : public ::java::awt::dnd::DragSourceEvent {
	$class(DragSourceDragEvent, $NO_CLASS_INIT, ::java::awt::dnd::DragSourceEvent)
public:
	DragSourceDragEvent();
	void init$(::java::awt::dnd::DragSourceContext* dsc, int32_t dropAction, int32_t action, int32_t modifiers);
	void init$(::java::awt::dnd::DragSourceContext* dsc, int32_t dropAction, int32_t action, int32_t modifiers, int32_t x, int32_t y);
	virtual int32_t getDropAction();
	virtual int32_t getGestureModifiers();
	virtual int32_t getGestureModifiersEx();
	virtual int32_t getTargetActions();
	virtual int32_t getUserAction();
	void setNewModifiers();
	void setOldModifiers();
	static const int64_t serialVersionUID = (int64_t)0x06AE15E85E4CB287;
	static const int32_t JDK_1_3_MODIFIERS = 63; // ::java::awt::event::InputEvent::SHIFT_DOWN_MASK - 1
	static const int32_t JDK_1_4_MODIFIERS = 16320; // ((::java::awt::event::InputEvent::ALT_GRAPH_DOWN_MASK << 1) - 1) & ~JDK_1_3_MODIFIERS
	int32_t targetActions = 0;
	int32_t dropAction = 0;
	int32_t gestureModifiers = 0;
	bool invalidModifiers = false;
};

		} // dnd
	} // awt
} // java

#pragma pop_macro("ALT_GRAPH_DOWN_MASK")
#pragma pop_macro("JDK_1_3_MODIFIERS")
#pragma pop_macro("JDK_1_4_MODIFIERS")
#pragma pop_macro("SHIFT_DOWN_MASK")

#endif // _java_awt_dnd_DragSourceDragEvent_h_