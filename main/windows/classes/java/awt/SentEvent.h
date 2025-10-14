#ifndef _java_awt_SentEvent_h_
#define _java_awt_SentEvent_h_
//$ class java.awt.SentEvent
//$ extends java.awt.AWTEvent
//$ implements java.awt.ActiveEvent

#include <java/awt/AWTEvent.h>
#include <java/awt/ActiveEvent.h>
#include <java/awt/event/FocusEvent.h>

#pragma push_macro("FOCUS_LAST")
#undef FOCUS_LAST
#pragma push_macro("ID")
#undef ID

namespace sun {
	namespace awt {
		class AppContext;
	}
}

namespace java {
	namespace awt {

class SentEvent : public ::java::awt::AWTEvent, public ::java::awt::ActiveEvent {
	$class(SentEvent, $NO_CLASS_INIT, ::java::awt::AWTEvent, ::java::awt::ActiveEvent)
public:
	SentEvent();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::awt::AWTEvent* nested);
	void init$(::java::awt::AWTEvent* nested, ::sun::awt::AppContext* toNotify);
	virtual void dispatch() override;
	void dispose();
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xFAAD1FF71E6C44FD;
	static const int32_t ID = 1007; // java::awt::event::FocusEvent::FOCUS_LAST + 2
	bool dispatched$ = false;
	::java::awt::AWTEvent* nested = nullptr;
	::sun::awt::AppContext* toNotify = nullptr;
};

	} // awt
} // java

#pragma pop_macro("FOCUS_LAST")
#pragma pop_macro("ID")

#endif // _java_awt_SentEvent_h_