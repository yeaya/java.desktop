#ifndef _java_awt_event_InvocationEvent_h_
#define _java_awt_event_InvocationEvent_h_
//$ class java.awt.event.InvocationEvent
//$ extends java.awt.AWTEvent
//$ implements java.awt.ActiveEvent

#include <java/awt/AWTEvent.h>
#include <java/awt/ActiveEvent.h>

#pragma push_macro("INVOCATION_DEFAULT")
#undef INVOCATION_DEFAULT
#pragma push_macro("INVOCATION_FIRST")
#undef INVOCATION_FIRST
#pragma push_macro("INVOCATION_LAST")
#undef INVOCATION_LAST

namespace java {
	namespace lang {
		class Exception;
		class Runnable;
		class Throwable;
	}
}

namespace java {
	namespace awt {
		namespace event {

class $export InvocationEvent : public ::java::awt::AWTEvent, public ::java::awt::ActiveEvent {
	$class(InvocationEvent, 0, ::java::awt::AWTEvent, ::java::awt::ActiveEvent)
public:
	InvocationEvent();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(Object$* source, ::java::lang::Runnable* runnable);
	void init$(Object$* source, ::java::lang::Runnable* runnable, Object$* notifier, bool catchThrowables);
	void init$(Object$* source, ::java::lang::Runnable* runnable, ::java::lang::Runnable* listener, bool catchThrowables);
	void init$(Object$* source, int32_t id, ::java::lang::Runnable* runnable, Object$* notifier, bool catchThrowables);
	void init$(Object$* source, int32_t id, ::java::lang::Runnable* runnable, Object$* notifier, ::java::lang::Runnable* listener, bool catchThrowables);
	virtual void dispatch() override;
	void finishedDispatching(bool dispatched);
	virtual ::java::lang::Exception* getException();
	virtual $Throwable* getThrowable();
	virtual int64_t getWhen();
	virtual bool isDispatched();
	virtual $String* paramString() override;
	virtual $String* toString() override;
	static const int32_t INVOCATION_FIRST = 1200;
	static const int32_t INVOCATION_DEFAULT = INVOCATION_FIRST;
	static const int32_t INVOCATION_LAST = INVOCATION_DEFAULT;
	::java::lang::Runnable* runnable = nullptr;
	$volatile($Object*) notifier = nullptr;
	::java::lang::Runnable* listener = nullptr;
	$volatile(bool) dispatched$ = false;
	bool catchExceptions = false;
	::java::lang::Exception* exception = nullptr;
	$Throwable* throwable = nullptr;
	int64_t when = 0;
	static const int64_t serialVersionUID = (int64_t)0x060D2EEF74622FFA;
};

		} // event
	} // awt
} // java

#pragma pop_macro("INVOCATION_DEFAULT")
#pragma pop_macro("INVOCATION_FIRST")
#pragma pop_macro("INVOCATION_LAST")

#endif // _java_awt_event_InvocationEvent_h_