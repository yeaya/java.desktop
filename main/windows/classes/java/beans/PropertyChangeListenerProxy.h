#ifndef _java_beans_PropertyChangeListenerProxy_h_
#define _java_beans_PropertyChangeListenerProxy_h_
//$ class java.beans.PropertyChangeListenerProxy
//$ extends java.util.EventListenerProxy
//$ implements java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>
#include <java/util/EventListenerProxy.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}

namespace java {
	namespace beans {

class $export PropertyChangeListenerProxy : public ::java::util::EventListenerProxy, public ::java::beans::PropertyChangeListener {
	$class(PropertyChangeListenerProxy, $NO_CLASS_INIT, ::java::util::EventListenerProxy, ::java::beans::PropertyChangeListener)
public:
	PropertyChangeListenerProxy();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* propertyName, ::java::beans::PropertyChangeListener* listener);
	virtual $String* getPropertyName();
	virtual void propertyChange(::java::beans::PropertyChangeEvent* event) override;
	virtual $String* toString() override;
	$String* propertyName = nullptr;
};

	} // beans
} // java

#endif // _java_beans_PropertyChangeListenerProxy_h_