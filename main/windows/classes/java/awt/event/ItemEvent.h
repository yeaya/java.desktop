#ifndef _java_awt_event_ItemEvent_h_
#define _java_awt_event_ItemEvent_h_
//$ class java.awt.event.ItemEvent
//$ extends java.awt.AWTEvent

#include <java/awt/AWTEvent.h>

#pragma push_macro("DESELECTED")
#undef DESELECTED
#pragma push_macro("ITEM_FIRST")
#undef ITEM_FIRST
#pragma push_macro("ITEM_LAST")
#undef ITEM_LAST
#pragma push_macro("ITEM_STATE_CHANGED")
#undef ITEM_STATE_CHANGED
#pragma push_macro("SELECTED")
#undef SELECTED

namespace java {
	namespace awt {
		class ItemSelectable;
	}
}

namespace java {
	namespace awt {
		namespace event {

class $export ItemEvent : public ::java::awt::AWTEvent {
	$class(ItemEvent, $NO_CLASS_INIT, ::java::awt::AWTEvent)
public:
	ItemEvent();
	void init$(::java::awt::ItemSelectable* source, int32_t id, Object$* item, int32_t stateChange);
	virtual $Object* getItem();
	virtual ::java::awt::ItemSelectable* getItemSelectable();
	virtual int32_t getStateChange();
	virtual $String* paramString() override;
	static const int32_t ITEM_FIRST = 701;
	static const int32_t ITEM_LAST = 701;
	static const int32_t ITEM_STATE_CHANGED = ITEM_FIRST;
	static const int32_t SELECTED = 1;
	static const int32_t DESELECTED = 2;
	$Object* item = nullptr;
	int32_t stateChange = 0;
	static const int64_t serialVersionUID = (int64_t)0xF78D6F2DB997C1EB;
};

		} // event
	} // awt
} // java

#pragma pop_macro("DESELECTED")
#pragma pop_macro("ITEM_FIRST")
#pragma pop_macro("ITEM_LAST")
#pragma pop_macro("ITEM_STATE_CHANGED")
#pragma pop_macro("SELECTED")

#endif // _java_awt_event_ItemEvent_h_