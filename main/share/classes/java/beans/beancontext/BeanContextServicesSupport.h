#ifndef _java_beans_beancontext_BeanContextServicesSupport_h_
#define _java_beans_beancontext_BeanContextServicesSupport_h_
//$ class java.beans.beancontext.BeanContextServicesSupport
//$ extends java.beans.beancontext.BeanContextSupport
//$ implements java.beans.beancontext.BeanContextServices

#include <java/beans/beancontext/BeanContextServices.h>
#include <java/beans/beancontext/BeanContextSupport.h>

namespace java {
	namespace beans {
		namespace beancontext {
			class BeanContextChild;
			class BeanContextServiceAvailableEvent;
			class BeanContextServiceProvider;
			class BeanContextServiceRevokedEvent;
			class BeanContextServiceRevokedListener;
			class BeanContextServicesListener;
			class BeanContextServicesSupport$BCSSProxyServiceProvider;
			class BeanContextServicesSupport$BCSSServiceProvider;
			class BeanContextSupport$BCSChild;
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
	namespace util {
		class ArrayList;
		class HashMap;
		class Iterator;
		class Locale;
	}
}

namespace java {
	namespace beans {
		namespace beancontext {

class $export BeanContextServicesSupport : public ::java::beans::beancontext::BeanContextSupport, public ::java::beans::beancontext::BeanContextServices {
	$class(BeanContextServicesSupport, $NO_CLASS_INIT, ::java::beans::beancontext::BeanContextSupport, ::java::beans::beancontext::BeanContextServices)
public:
	BeanContextServicesSupport();
	virtual bool add(Object$* targetChild) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual void addBeanContextMembershipListener(::java::beans::beancontext::BeanContextMembershipListener* bcml) override;
	virtual void addPropertyChangeListener($String* name, ::java::beans::PropertyChangeListener* pcl) override;
	virtual void addVetoableChangeListener($String* name, ::java::beans::VetoableChangeListener* vcl) override;
	virtual bool avoidingGui() override;
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual bool contains(Object$* o) override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual void dontUseGui() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::Consumer* arg0) override;
	virtual ::java::beans::beancontext::BeanContext* getBeanContext() override;
	virtual ::java::net::URL* getResource($String* name, ::java::beans::beancontext::BeanContextChild* bcc) override;
	virtual ::java::io::InputStream* getResourceAsStream($String* name, ::java::beans::beancontext::BeanContextChild* bcc) override;
	virtual int32_t hashCode() override;
	void init$(::java::beans::beancontext::BeanContextServices* peer, ::java::util::Locale* lcle, bool dTime, bool visible);
	void init$(::java::beans::beancontext::BeanContextServices* peer, ::java::util::Locale* lcle, bool dtime);
	void init$(::java::beans::beancontext::BeanContextServices* peer, ::java::util::Locale* lcle);
	void init$(::java::beans::beancontext::BeanContextServices* peer);
	void init$();
	virtual void addBeanContextServicesListener(::java::beans::beancontext::BeanContextServicesListener* bcsl) override;
	virtual bool addService($Class* serviceClass, ::java::beans::beancontext::BeanContextServiceProvider* bcsp) override;
	virtual bool addService($Class* serviceClass, ::java::beans::beancontext::BeanContextServiceProvider* bcsp, bool fireEvent);
	virtual void bcsPreDeserializationHook(::java::io::ObjectInputStream* ois) override;
	virtual void bcsPreSerializationHook(::java::io::ObjectOutputStream* oos) override;
	virtual void childJustRemovedHook(Object$* child, ::java::beans::beancontext::BeanContextSupport$BCSChild* bcsc) override;
	virtual ::java::beans::beancontext::BeanContextSupport$BCSChild* createBCSChild(Object$* targetChild, Object$* peer) override;
	virtual ::java::beans::beancontext::BeanContextServicesSupport$BCSSServiceProvider* createBCSSServiceProvider($Class* sc, ::java::beans::beancontext::BeanContextServiceProvider* bcsp);
	void fireServiceAdded($Class* serviceClass);
	void fireServiceAdded(::java::beans::beancontext::BeanContextServiceAvailableEvent* bcssae);
	void fireServiceRevoked(::java::beans::beancontext::BeanContextServiceRevokedEvent* bcsre);
	void fireServiceRevoked($Class* serviceClass, bool revokeNow);
	virtual ::java::beans::beancontext::BeanContextServices* getBeanContextServicesPeer();
	static ::java::beans::beancontext::BeanContextServicesListener* getChildBeanContextServicesListener(Object$* child);
	virtual ::java::util::Iterator* getCurrentServiceClasses() override;
	virtual ::java::util::Iterator* getCurrentServiceSelectors($Class* serviceClass) override;
	virtual $Object* getService(::java::beans::beancontext::BeanContextChild* child, Object$* requestor, $Class* serviceClass, Object$* serviceSelector, ::java::beans::beancontext::BeanContextServiceRevokedListener* bcsrl) override;
	virtual bool hasService($Class* serviceClass) override;
	virtual void initialize() override;
	virtual void initializeBeanContextResources() override;
	virtual $Object* instantiateChild($String* beanName) override;
	virtual bool isDesignTime() override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool needsGui() override;
	virtual void okToUseGui() override;
	virtual ::java::util::stream::Stream* parallelStream() override;
	void readObject(::java::io::ObjectInputStream* ois);
	virtual void releaseBeanContextResources() override;
	virtual void releaseService(::java::beans::beancontext::BeanContextChild* child, Object$* requestor, Object$* service) override;
	using ::java::beans::beancontext::BeanContextSupport::remove;
	virtual bool remove(Object$* targetChild) override;
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual void removeBeanContextMembershipListener(::java::beans::beancontext::BeanContextMembershipListener* bcml) override;
	virtual void removeBeanContextServicesListener(::java::beans::beancontext::BeanContextServicesListener* bcsl) override;
	virtual bool removeIf(::java::util::function::Predicate* arg0) override;
	virtual void removePropertyChangeListener($String* name, ::java::beans::PropertyChangeListener* pcl) override;
	virtual void removeVetoableChangeListener($String* name, ::java::beans::VetoableChangeListener* vcl) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	virtual void revokeService($Class* serviceClass, ::java::beans::beancontext::BeanContextServiceProvider* bcsp, bool revokeCurrentServicesNow) override;
	virtual void serviceAvailable(::java::beans::beancontext::BeanContextServiceAvailableEvent* bcssae) override;
	virtual void serviceRevoked(::java::beans::beancontext::BeanContextServiceRevokedEvent* bcssre) override;
	virtual void setBeanContext(::java::beans::beancontext::BeanContext* bc) override;
	virtual void setDesignTime(bool dTime) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* arry) override;
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* arg0) override;
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* oos);
	static const int64_t serialVersionUID = (int64_t)0x8A1D88F01D200C9A;
	::java::util::HashMap* services = nullptr;
	int32_t serializable = 0;
	::java::beans::beancontext::BeanContextServicesSupport$BCSSProxyServiceProvider* proxy = nullptr;
	::java::util::ArrayList* bcsListeners = nullptr;
};

		} // beancontext
	} // beans
} // java

#endif // _java_beans_beancontext_BeanContextServicesSupport_h_