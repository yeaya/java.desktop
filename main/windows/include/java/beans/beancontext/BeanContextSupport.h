#ifndef _java_beans_beancontext_BeanContextSupport_h_
#define _java_beans_beancontext_BeanContextSupport_h_
//$ class java.beans.beancontext.BeanContextSupport
//$ extends java.beans.beancontext.BeanContextChildSupport
//$ implements java.beans.beancontext.BeanContext,java.beans.PropertyChangeListener,java.beans.VetoableChangeListener

#include <java/beans/PropertyChangeListener.h>
#include <java/beans/VetoableChangeListener.h>
#include <java/beans/beancontext/BeanContext.h>
#include <java/beans/beancontext/BeanContextChildSupport.h>
#include <java/lang/Array.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
		class Visibility;
	}
}
namespace java {
	namespace beans {
		namespace beancontext {
			class BeanContextChild;
			class BeanContextMembershipEvent;
			class BeanContextMembershipListener;
			class BeanContextSupport$BCSChild;
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
		class ObjectInputStream;
		class ObjectOutputStream;
		class Serializable;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class ArrayList;
		class Collection;
		class HashMap;
		class Iterator;
		class Locale;
	}
}

namespace java {
	namespace beans {
		namespace beancontext {

class $import BeanContextSupport : public ::java::beans::beancontext::BeanContextChildSupport, public ::java::beans::beancontext::BeanContext, public ::java::beans::PropertyChangeListener, public ::java::beans::VetoableChangeListener {
	$class(BeanContextSupport, $NO_CLASS_INIT, ::java::beans::beancontext::BeanContextChildSupport, ::java::beans::beancontext::BeanContext, ::java::beans::PropertyChangeListener, ::java::beans::VetoableChangeListener)
public:
	BeanContextSupport();
	virtual void addPropertyChangeListener($String* name, ::java::beans::PropertyChangeListener* pcl) override;
	virtual void addVetoableChangeListener($String* name, ::java::beans::VetoableChangeListener* vcl) override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::beans::beancontext::BeanContext* getBeanContext() override;
	virtual int32_t hashCode() override;
	void init$(::java::beans::beancontext::BeanContext* peer, ::java::util::Locale* lcle, bool dTime, bool visible);
	void init$(::java::beans::beancontext::BeanContext* peer, ::java::util::Locale* lcle, bool dtime);
	void init$(::java::beans::beancontext::BeanContext* peer, ::java::util::Locale* lcle);
	void init$(::java::beans::beancontext::BeanContext* peer);
	void init$();
	virtual bool add(Object$* targetChild) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual void addBeanContextMembershipListener(::java::beans::beancontext::BeanContextMembershipListener* bcml) override;
	virtual bool avoidingGui() override;
	virtual ::java::util::Iterator* bcsChildren();
	virtual void bcsPreDeserializationHook(::java::io::ObjectInputStream* ois);
	virtual void bcsPreSerializationHook(::java::io::ObjectOutputStream* oos);
	virtual void childDeserializedHook(Object$* child, ::java::beans::beancontext::BeanContextSupport$BCSChild* bcsc);
	virtual void childJustAddedHook(Object$* child, ::java::beans::beancontext::BeanContextSupport$BCSChild* bcsc);
	virtual void childJustRemovedHook(Object$* child, ::java::beans::beancontext::BeanContextSupport$BCSChild* bcsc);
	static bool classEquals($Class* first, $Class* second);
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual bool containsAll(::java::util::Collection* c) override;
	virtual bool containsKey(Object$* o);
	$ObjectArray* copyChildren();
	virtual ::java::beans::beancontext::BeanContextSupport$BCSChild* createBCSChild(Object$* targetChild, Object$* peer);
	void deserialize(::java::io::ObjectInputStream* ois, ::java::util::Collection* coll);
	virtual void dontUseGui() override;
	void fireChildrenAdded(::java::beans::beancontext::BeanContextMembershipEvent* bcme);
	void fireChildrenRemoved(::java::beans::beancontext::BeanContextMembershipEvent* bcme);
	virtual ::java::beans::beancontext::BeanContext* getBeanContextPeer();
	static ::java::beans::beancontext::BeanContextChild* getChildBeanContextChild(Object$* child);
	static ::java::beans::beancontext::BeanContextMembershipListener* getChildBeanContextMembershipListener(Object$* child);
	static ::java::beans::PropertyChangeListener* getChildPropertyChangeListener(Object$* child);
	static ::java::io::Serializable* getChildSerializable(Object$* child);
	static ::java::beans::VetoableChangeListener* getChildVetoableChangeListener(Object$* child);
	static ::java::beans::Visibility* getChildVisibility(Object$* child);
	virtual ::java::util::Locale* getLocale();
	virtual ::java::net::URL* getResource($String* name, ::java::beans::beancontext::BeanContextChild* bcc) override;
	virtual ::java::io::InputStream* getResourceAsStream($String* name, ::java::beans::beancontext::BeanContextChild* bcc) override;
	virtual void initialize();
	virtual $Object* instantiateChild($String* beanName) override;
	virtual bool isDesignTime() override;
	virtual bool isEmpty() override;
	virtual bool isSerializing();
	virtual ::java::util::Iterator* iterator() override;
	virtual bool needsGui() override;
	virtual void okToUseGui() override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* pce) override;
	void readChildren(::java::io::ObjectInputStream* ois);
	void readObject(::java::io::ObjectInputStream* ois);
	virtual bool remove(Object$* targetChild) override;
	virtual bool remove(Object$* targetChild, bool callChildSetBC);
	virtual bool removeAll(::java::util::Collection* c) override;
	virtual void removeBeanContextMembershipListener(::java::beans::beancontext::BeanContextMembershipListener* bcml) override;
	virtual void removePropertyChangeListener($String* name, ::java::beans::PropertyChangeListener* pcl) override;
	virtual void removeVetoableChangeListener($String* name, ::java::beans::VetoableChangeListener* vcl) override;
	virtual bool retainAll(::java::util::Collection* c) override;
	void serialize(::java::io::ObjectOutputStream* oos, ::java::util::Collection* coll);
	virtual void setBeanContext(::java::beans::beancontext::BeanContext* bc) override;
	virtual void setDesignTime(bool dTime) override;
	virtual void setLocale(::java::util::Locale* newLocale);
	virtual int32_t size() override;
	using ::java::beans::beancontext::BeanContext::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* arry) override;
	virtual $String* toString() override;
	virtual bool validatePendingAdd(Object$* targetChild);
	virtual bool validatePendingRemove(Object$* targetChild);
	virtual void vetoableChange(::java::beans::PropertyChangeEvent* pce) override;
	void writeChildren(::java::io::ObjectOutputStream* oos);
	void writeObject(::java::io::ObjectOutputStream* oos);
	static const int64_t serialVersionUID = (int64_t)0xBC4820F0918FB90C;
	::java::util::HashMap* children = nullptr;
	int32_t serializable = 0;
	::java::util::ArrayList* bcmListeners = nullptr;
	::java::util::Locale* locale = nullptr;
	bool okToUseGui$ = false;
	bool designTime = false;
	::java::beans::PropertyChangeListener* childPCL = nullptr;
	::java::beans::VetoableChangeListener* childVCL = nullptr;
	bool serializing = false;
};

		} // beancontext
	} // beans
} // java

#endif // _java_beans_beancontext_BeanContextSupport_h_