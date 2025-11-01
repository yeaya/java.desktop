#ifndef _java_awt_Toolkit$ToolkitEventMulticaster_h_
#define _java_awt_Toolkit$ToolkitEventMulticaster_h_
//$ class java.awt.Toolkit$ToolkitEventMulticaster
//$ extends java.awt.AWTEventMulticaster
//$ implements java.awt.event.AWTEventListener

#include <java/awt/AWTEventMulticaster.h>
#include <java/awt/event/AWTEventListener.h>

namespace java {
	namespace awt {
		class AWTEvent;
	}
}
namespace java {
	namespace util {
		class EventListener;
	}
}

namespace java {
	namespace awt {

class Toolkit$ToolkitEventMulticaster : public ::java::awt::AWTEventMulticaster, public ::java::awt::event::AWTEventListener {
	$class(Toolkit$ToolkitEventMulticaster, $NO_CLASS_INIT, ::java::awt::AWTEventMulticaster, ::java::awt::event::AWTEventListener)
public:
	Toolkit$ToolkitEventMulticaster();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::event::AWTEventListener* a, ::java::awt::event::AWTEventListener* b);
	static ::java::awt::event::AWTEventListener* add(::java::awt::event::AWTEventListener* a, ::java::awt::event::AWTEventListener* b);
	virtual void eventDispatched(::java::awt::AWTEvent* event) override;
	static ::java::awt::event::AWTEventListener* remove(::java::awt::event::AWTEventListener* l, ::java::awt::event::AWTEventListener* oldl);
	virtual ::java::util::EventListener* remove(::java::util::EventListener* oldl) override;
	virtual $String* toString() override;
};

	} // awt
} // java

#endif // _java_awt_Toolkit$ToolkitEventMulticaster_h_