#ifndef _java_awt_AWTEvent_h_
#define _java_awt_AWTEvent_h_
//$ class java.awt.AWTEvent
//$ extends java.util.EventObject

#include <java/lang/Array.h>
#include <java/util/EventObject.h>

#pragma push_macro("ACTION_EVENT_MASK")
#undef ACTION_EVENT_MASK
#pragma push_macro("ADJUSTMENT_EVENT_MASK")
#undef ADJUSTMENT_EVENT_MASK
#pragma push_macro("COMPONENT_EVENT_MASK")
#undef COMPONENT_EVENT_MASK
#pragma push_macro("CONTAINER_EVENT_MASK")
#undef CONTAINER_EVENT_MASK
#pragma push_macro("FOCUS_EVENT_MASK")
#undef FOCUS_EVENT_MASK
#pragma push_macro("HIERARCHY_BOUNDS_EVENT_MASK")
#undef HIERARCHY_BOUNDS_EVENT_MASK
#pragma push_macro("HIERARCHY_EVENT_MASK")
#undef HIERARCHY_EVENT_MASK
#pragma push_macro("INPUT_METHODS_ENABLED_MASK")
#undef INPUT_METHODS_ENABLED_MASK
#pragma push_macro("INPUT_METHOD_EVENT_MASK")
#undef INPUT_METHOD_EVENT_MASK
#pragma push_macro("INVOCATION_EVENT_MASK")
#undef INVOCATION_EVENT_MASK
#pragma push_macro("ITEM_EVENT_MASK")
#undef ITEM_EVENT_MASK
#pragma push_macro("KEY_EVENT_MASK")
#undef KEY_EVENT_MASK
#pragma push_macro("MOUSE_EVENT_MASK")
#undef MOUSE_EVENT_MASK
#pragma push_macro("MOUSE_MOTION_EVENT_MASK")
#undef MOUSE_MOTION_EVENT_MASK
#pragma push_macro("MOUSE_WHEEL_EVENT_MASK")
#undef MOUSE_WHEEL_EVENT_MASK
#pragma push_macro("PAINT_EVENT_MASK")
#undef PAINT_EVENT_MASK
#pragma push_macro("RESERVED_ID_MAX")
#undef RESERVED_ID_MAX
#pragma push_macro("TEXT_EVENT_MASK")
#undef TEXT_EVENT_MASK
#pragma push_macro("WINDOW_EVENT_MASK")
#undef WINDOW_EVENT_MASK
#pragma push_macro("WINDOW_FOCUS_EVENT_MASK")
#undef WINDOW_FOCUS_EVENT_MASK
#pragma push_macro("WINDOW_STATE_EVENT_MASK")
#undef WINDOW_STATE_EVENT_MASK

namespace java {
	namespace awt {
		class Event;
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class ComponentPeer;
		}
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}

namespace java {
	namespace awt {

class $import AWTEvent : public ::java::util::EventObject {
	$class(AWTEvent, 0, ::java::util::EventObject)
public:
	AWTEvent();
	void init$(::java::awt::Event* event);
	void init$(Object$* source, int32_t id);
	virtual void consume();
	virtual ::java::awt::Event* convertToOld();
	virtual void copyPrivateDataInto(::java::awt::AWTEvent* that);
	virtual void dispatched();
	::java::security::AccessControlContext* getAccessControlContext();
	virtual int32_t getID();
	static void initIDs();
	virtual bool isConsumed();
	void nativeSetSource(::java::awt::peer::ComponentPeer* peer);
	virtual $String* paramString();
	virtual void setSource(Object$* newSource);
	virtual $String* toString() override;
	$bytes* bdata = nullptr;
	int32_t id = 0;
	bool consumed = false;
	$volatile(::java::security::AccessControlContext*) acc = nullptr;
	bool focusManagerIsDispatching = false;
	bool isPosted = false;
	bool isSystemGenerated = false;
	static const int64_t COMPONENT_EVENT_MASK = 1;
	static const int64_t CONTAINER_EVENT_MASK = 2;
	static const int64_t FOCUS_EVENT_MASK = 4;
	static const int64_t KEY_EVENT_MASK = 8;
	static const int64_t MOUSE_EVENT_MASK = 16;
	static const int64_t MOUSE_MOTION_EVENT_MASK = 32;
	static const int64_t WINDOW_EVENT_MASK = 64;
	static const int64_t ACTION_EVENT_MASK = 128;
	static const int64_t ADJUSTMENT_EVENT_MASK = 256;
	static const int64_t ITEM_EVENT_MASK = 512;
	static const int64_t TEXT_EVENT_MASK = 1024;
	static const int64_t INPUT_METHOD_EVENT_MASK = 2048;
	static const int64_t INPUT_METHODS_ENABLED_MASK = 4096;
	static const int64_t PAINT_EVENT_MASK = 8192;
	static const int64_t INVOCATION_EVENT_MASK = 16384;
	static const int64_t HIERARCHY_EVENT_MASK = 32768;
	static const int64_t HIERARCHY_BOUNDS_EVENT_MASK = 0x00010000;
	static const int64_t MOUSE_WHEEL_EVENT_MASK = 0x00020000;
	static const int64_t WINDOW_STATE_EVENT_MASK = 0x00040000;
	static const int64_t WINDOW_FOCUS_EVENT_MASK = 0x00080000;
	static const int32_t RESERVED_ID_MAX = 1999;
	static const int64_t serialVersionUID = (int64_t)0xE6AB2DE118DF8AC3;
};

	} // awt
} // java

#pragma pop_macro("ACTION_EVENT_MASK")
#pragma pop_macro("ADJUSTMENT_EVENT_MASK")
#pragma pop_macro("COMPONENT_EVENT_MASK")
#pragma pop_macro("CONTAINER_EVENT_MASK")
#pragma pop_macro("FOCUS_EVENT_MASK")
#pragma pop_macro("HIERARCHY_BOUNDS_EVENT_MASK")
#pragma pop_macro("HIERARCHY_EVENT_MASK")
#pragma pop_macro("INPUT_METHODS_ENABLED_MASK")
#pragma pop_macro("INPUT_METHOD_EVENT_MASK")
#pragma pop_macro("INVOCATION_EVENT_MASK")
#pragma pop_macro("ITEM_EVENT_MASK")
#pragma pop_macro("KEY_EVENT_MASK")
#pragma pop_macro("MOUSE_EVENT_MASK")
#pragma pop_macro("MOUSE_MOTION_EVENT_MASK")
#pragma pop_macro("MOUSE_WHEEL_EVENT_MASK")
#pragma pop_macro("PAINT_EVENT_MASK")
#pragma pop_macro("RESERVED_ID_MAX")
#pragma pop_macro("TEXT_EVENT_MASK")
#pragma pop_macro("WINDOW_EVENT_MASK")
#pragma pop_macro("WINDOW_FOCUS_EVENT_MASK")
#pragma pop_macro("WINDOW_STATE_EVENT_MASK")

#endif // _java_awt_AWTEvent_h_