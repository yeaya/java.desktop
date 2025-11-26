#ifndef _java_awt_SequencedEvent_h_
#define _java_awt_SequencedEvent_h_
//$ class java.awt.SequencedEvent
//$ extends java.awt.AWTEvent
//$ implements java.awt.ActiveEvent

#include <java/awt/AWTEvent.h>
#include <java/awt/ActiveEvent.h>
#include <java/awt/event/FocusEvent.h>

#pragma push_macro("FOCUS_LAST")
#undef FOCUS_LAST
#pragma push_macro("ID")
#undef ID

namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace util {
		class LinkedList;
	}
}
namespace sun {
	namespace awt {
		class AppContext;
	}
}

namespace java {
	namespace awt {

class SequencedEvent : public ::java::awt::AWTEvent, public ::java::awt::ActiveEvent {
	$class(SequencedEvent, 0, ::java::awt::AWTEvent, ::java::awt::ActiveEvent)
public:
	SequencedEvent();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::AWTEvent* nested);
	virtual void dispatch() override;
	void dispose();
	static ::java::awt::SequencedEvent* getFirst();
	static ::java::awt::SequencedEvent* getFirstWithContext();
	bool isFirstOrDisposed();
	static bool isOwnerAppContextDisposed(::java::awt::SequencedEvent* se);
	bool lambda$dispatch$0();
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x0799F90BE83EFF2B;
	static const int32_t ID = 1006; // java::awt::event::FocusEvent::FOCUS_LAST + 1
	static ::java::util::LinkedList* list;
	::java::awt::AWTEvent* nested = nullptr;
	::sun::awt::AppContext* appContext = nullptr;
	bool disposed = false;
	::java::util::LinkedList* pendingEvents = nullptr;
	static bool fxAppThreadIsDispatchThread;
	$Thread* fxCheckSequenceThread = nullptr;
};

	} // awt
} // java

#pragma pop_macro("FOCUS_LAST")
#pragma pop_macro("ID")

#endif // _java_awt_SequencedEvent_h_