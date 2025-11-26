#ifndef _java_beans_VetoableChangeListenerProxy_h_
#define _java_beans_VetoableChangeListenerProxy_h_
//$ class java.beans.VetoableChangeListenerProxy
//$ extends java.util.EventListenerProxy
//$ implements java.beans.VetoableChangeListener

#include <java/beans/VetoableChangeListener.h>
#include <java/util/EventListenerProxy.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}

namespace java {
	namespace beans {

class $import VetoableChangeListenerProxy : public ::java::util::EventListenerProxy, public ::java::beans::VetoableChangeListener {
	$class(VetoableChangeListenerProxy, $NO_CLASS_INIT, ::java::util::EventListenerProxy, ::java::beans::VetoableChangeListener)
public:
	VetoableChangeListenerProxy();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* propertyName, ::java::beans::VetoableChangeListener* listener);
	virtual $String* getPropertyName();
	virtual $String* toString() override;
	virtual void vetoableChange(::java::beans::PropertyChangeEvent* event) override;
	$String* propertyName = nullptr;
};

	} // beans
} // java

#endif // _java_beans_VetoableChangeListenerProxy_h_