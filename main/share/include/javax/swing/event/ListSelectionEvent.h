#ifndef _javax_swing_event_ListSelectionEvent_h_
#define _javax_swing_event_ListSelectionEvent_h_
//$ class javax.swing.event.ListSelectionEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

namespace javax {
	namespace swing {
		namespace event {

class $import ListSelectionEvent : public ::java::util::EventObject {
	$class(ListSelectionEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	ListSelectionEvent();
	void init$(Object$* source, int32_t firstIndex, int32_t lastIndex, bool isAdjusting);
	virtual int32_t getFirstIndex();
	virtual int32_t getLastIndex();
	virtual bool getValueIsAdjusting();
	virtual $String* toString() override;
	int32_t firstIndex = 0;
	int32_t lastIndex = 0;
	bool isAdjusting = false;
};

		} // event
	} // swing
} // javax

#endif // _javax_swing_event_ListSelectionEvent_h_