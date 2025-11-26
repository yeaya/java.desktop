#ifndef _javax_swing_event_ListDataEvent_h_
#define _javax_swing_event_ListDataEvent_h_
//$ class javax.swing.event.ListDataEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

#pragma push_macro("CONTENTS_CHANGED")
#undef CONTENTS_CHANGED
#pragma push_macro("INTERVAL_ADDED")
#undef INTERVAL_ADDED
#pragma push_macro("INTERVAL_REMOVED")
#undef INTERVAL_REMOVED

namespace javax {
	namespace swing {
		namespace event {

class $export ListDataEvent : public ::java::util::EventObject {
	$class(ListDataEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	ListDataEvent();
	void init$(Object$* source, int32_t type, int32_t index0, int32_t index1);
	virtual int32_t getIndex0();
	virtual int32_t getIndex1();
	virtual int32_t getType();
	virtual $String* toString() override;
	static const int32_t CONTENTS_CHANGED = 0;
	static const int32_t INTERVAL_ADDED = 1;
	static const int32_t INTERVAL_REMOVED = 2;
	int32_t type = 0;
	int32_t index0 = 0;
	int32_t index1 = 0;
};

		} // event
	} // swing
} // javax

#pragma pop_macro("CONTENTS_CHANGED")
#pragma pop_macro("INTERVAL_ADDED")
#pragma pop_macro("INTERVAL_REMOVED")

#endif // _javax_swing_event_ListDataEvent_h_