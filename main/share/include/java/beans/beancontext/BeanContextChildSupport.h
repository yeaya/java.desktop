#ifndef _java_beans_beancontext_BeanContextChildSupport_h_
#define _java_beans_beancontext_BeanContextChildSupport_h_
//$ class java.beans.beancontext.BeanContextChildSupport
//$ extends java.beans.beancontext.BeanContextChild
//$ implements java.beans.beancontext.BeanContextServicesListener,java.io.Serializable

#include <java/beans/beancontext/BeanContextChild.h>
#include <java/beans/beancontext/BeanContextServicesListener.h>
#include <java/io/Serializable.h>

namespace java {
	namespace beans {
		class PropertyChangeListener;
		class PropertyChangeSupport;
		class VetoableChangeListener;
		class VetoableChangeSupport;
	}
}
namespace java {
	namespace beans {
		namespace beancontext {
			class BeanContext;
			class BeanContextServiceAvailableEvent;
			class BeanContextServiceRevokedEvent;
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}

namespace java {
	namespace beans {
		namespace beancontext {

class $import BeanContextChildSupport : public ::java::beans::beancontext::BeanContextChild, public ::java::beans::beancontext::BeanContextServicesListener, public ::java::io::Serializable {
	$class(BeanContextChildSupport, $NO_CLASS_INIT, ::java::beans::beancontext::BeanContextChild, ::java::beans::beancontext::BeanContextServicesListener, ::java::io::Serializable)
public:
	BeanContextChildSupport();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::beans::beancontext::BeanContextChild* bcc);
	virtual void addPropertyChangeListener($String* name, ::java::beans::PropertyChangeListener* pcl) override;
	virtual void addVetoableChangeListener($String* name, ::java::beans::VetoableChangeListener* vcl) override;
	virtual void firePropertyChange($String* name, Object$* oldValue, Object$* newValue);
	virtual void fireVetoableChange($String* name, Object$* oldValue, Object$* newValue);
	virtual ::java::beans::beancontext::BeanContext* getBeanContext() override;
	virtual ::java::beans::beancontext::BeanContextChild* getBeanContextChildPeer();
	virtual void initializeBeanContextResources();
	virtual bool isDelegated();
	void readObject(::java::io::ObjectInputStream* ois);
	virtual void releaseBeanContextResources();
	virtual void removePropertyChangeListener($String* name, ::java::beans::PropertyChangeListener* pcl) override;
	virtual void removeVetoableChangeListener($String* name, ::java::beans::VetoableChangeListener* vcl) override;
	virtual void serviceAvailable(::java::beans::beancontext::BeanContextServiceAvailableEvent* bcsae) override;
	virtual void serviceRevoked(::java::beans::beancontext::BeanContextServiceRevokedEvent* bcsre) override;
	virtual void setBeanContext(::java::beans::beancontext::BeanContext* bc) override;
	virtual $String* toString() override;
	virtual bool validatePendingSetBeanContext(::java::beans::beancontext::BeanContext* newValue);
	void writeObject(::java::io::ObjectOutputStream* oos);
	static const int64_t serialVersionUID = (int64_t)0x57D4EFC704DC7225;
	::java::beans::beancontext::BeanContextChild* beanContextChildPeer = nullptr;
	::java::beans::PropertyChangeSupport* pcSupport = nullptr;
	::java::beans::VetoableChangeSupport* vcSupport = nullptr;
	::java::beans::beancontext::BeanContext* beanContext = nullptr;
	bool rejectedSetBCOnce = false;
};

		} // beancontext
	} // beans
} // java

#endif // _java_beans_beancontext_BeanContextChildSupport_h_