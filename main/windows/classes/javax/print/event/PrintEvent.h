#ifndef _javax_print_event_PrintEvent_h_
#define _javax_print_event_PrintEvent_h_
//$ class javax.print.event.PrintEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

namespace javax {
	namespace print {
		namespace event {

class $export PrintEvent : public ::java::util::EventObject {
	$class(PrintEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	PrintEvent();
	void init$(Object$* source);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x1FBCC101D63C2747;
};

		} // event
	} // print
} // javax

#endif // _javax_print_event_PrintEvent_h_