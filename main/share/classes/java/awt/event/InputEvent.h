#ifndef _java_awt_event_InputEvent_h_
#define _java_awt_event_InputEvent_h_
//$ class java.awt.event.InputEvent
//$ extends java.awt.event.ComponentEvent

#include <java/awt/Event.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/lang/Array.h>

#pragma push_macro("ALT_DOWN_MASK")
#undef ALT_DOWN_MASK
#pragma push_macro("ALT_GRAPH_DOWN_MASK")
#undef ALT_GRAPH_DOWN_MASK
#pragma push_macro("ALT_GRAPH_MASK")
#undef ALT_GRAPH_MASK
#pragma push_macro("ALT_MASK")
#undef ALT_MASK
#pragma push_macro("BUTTON1_DOWN_MASK")
#undef BUTTON1_DOWN_MASK
#pragma push_macro("BUTTON1_MASK")
#undef BUTTON1_MASK
#pragma push_macro("BUTTON2_DOWN_MASK")
#undef BUTTON2_DOWN_MASK
#pragma push_macro("BUTTON2_MASK")
#undef BUTTON2_MASK
#pragma push_macro("BUTTON3_DOWN_MASK")
#undef BUTTON3_DOWN_MASK
#pragma push_macro("BUTTON3_MASK")
#undef BUTTON3_MASK
#pragma push_macro("BUTTON_DOWN_MASK")
#undef BUTTON_DOWN_MASK
#pragma push_macro("CTRL_DOWN_MASK")
#undef CTRL_DOWN_MASK
#pragma push_macro("CTRL_MASK")
#undef CTRL_MASK
#pragma push_macro("FIRST_HIGH_BIT")
#undef FIRST_HIGH_BIT
#pragma push_macro("HIGH_MODIFIERS")
#undef HIGH_MODIFIERS
#pragma push_macro("JDK_1_3_MODIFIERS")
#undef JDK_1_3_MODIFIERS
#pragma push_macro("META_DOWN_MASK")
#undef META_DOWN_MASK
#pragma push_macro("META_MASK")
#undef META_MASK
#pragma push_macro("SHIFT_DOWN_MASK")
#undef SHIFT_DOWN_MASK
#pragma push_macro("SHIFT_MASK")
#undef SHIFT_MASK

namespace java {
	namespace awt {
		class Component;
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace java {
	namespace awt {
		namespace event {

class $export InputEvent : public ::java::awt::event::ComponentEvent {
	$class(InputEvent, 0, ::java::awt::event::ComponentEvent)
public:
	InputEvent();
	void init$(::java::awt::Component* source, int32_t id, int64_t when, int32_t modifiers);
	bool canAccessSystemClipboard();
	virtual void consume() override;
	static $ints* getButtonDownMasks();
	static int32_t getMaskForButton(int32_t button);
	virtual int32_t getModifiers();
	virtual int32_t getModifiersEx();
	static $String* getModifiersExText(int32_t modifiers);
	virtual int64_t getWhen();
	static void initIDs();
	virtual bool isAltDown();
	virtual bool isAltGraphDown();
	virtual bool isConsumed() override;
	virtual bool isControlDown();
	virtual bool isMetaDown();
	virtual bool isShiftDown();
	static ::sun::util::logging::PlatformLogger* logger;
	static const int32_t SHIFT_MASK = ::java::awt::Event::SHIFT_MASK;
	static const int32_t CTRL_MASK = ::java::awt::Event::CTRL_MASK;
	static const int32_t META_MASK = ::java::awt::Event::META_MASK;
	static const int32_t ALT_MASK = ::java::awt::Event::ALT_MASK;
	static const int32_t ALT_GRAPH_MASK = 32; // 1 << 5
	static const int32_t BUTTON1_MASK = 16; // 1 << 4
	static const int32_t BUTTON2_MASK = ::java::awt::Event::ALT_MASK;
	static const int32_t BUTTON3_MASK = ::java::awt::Event::META_MASK;
	static const int32_t SHIFT_DOWN_MASK = 64; // 1 << 6
	static const int32_t CTRL_DOWN_MASK = 128; // 1 << 7
	static const int32_t META_DOWN_MASK = 256; // 1 << 8
	static const int32_t ALT_DOWN_MASK = 512; // 1 << 9
	static const int32_t BUTTON1_DOWN_MASK = 1024; // 1 << 10
	static const int32_t BUTTON2_DOWN_MASK = 2048; // 1 << 11
	static const int32_t BUTTON3_DOWN_MASK = 4096; // 1 << 12
	static const int32_t ALT_GRAPH_DOWN_MASK = 8192; // 1 << 13
	static $ints* BUTTON_DOWN_MASK;
	static const int32_t FIRST_HIGH_BIT = 0x80000000; // 1 << 31
	static const int32_t JDK_1_3_MODIFIERS = 63; // SHIFT_DOWN_MASK - 1
	static const int32_t HIGH_MODIFIERS = 0x80000000; // ~(FIRST_HIGH_BIT - 1)
	int64_t when = 0;
	int32_t modifiers = 0;
	bool canAccessSystemClipboard$ = false;
	static const int64_t serialVersionUID = (int64_t)0xDD8C4BC5CB31C166;
};

		} // event
	} // awt
} // java

#pragma pop_macro("ALT_DOWN_MASK")
#pragma pop_macro("ALT_GRAPH_DOWN_MASK")
#pragma pop_macro("ALT_GRAPH_MASK")
#pragma pop_macro("ALT_MASK")
#pragma pop_macro("BUTTON1_DOWN_MASK")
#pragma pop_macro("BUTTON1_MASK")
#pragma pop_macro("BUTTON2_DOWN_MASK")
#pragma pop_macro("BUTTON2_MASK")
#pragma pop_macro("BUTTON3_DOWN_MASK")
#pragma pop_macro("BUTTON3_MASK")
#pragma pop_macro("BUTTON_DOWN_MASK")
#pragma pop_macro("CTRL_DOWN_MASK")
#pragma pop_macro("CTRL_MASK")
#pragma pop_macro("FIRST_HIGH_BIT")
#pragma pop_macro("HIGH_MODIFIERS")
#pragma pop_macro("JDK_1_3_MODIFIERS")
#pragma pop_macro("META_DOWN_MASK")
#pragma pop_macro("META_MASK")
#pragma pop_macro("SHIFT_DOWN_MASK")
#pragma pop_macro("SHIFT_MASK")

#endif // _java_awt_event_InputEvent_h_