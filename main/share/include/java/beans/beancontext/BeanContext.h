#ifndef _java_beans_beancontext_BeanContext_h_
#define _java_beans_beancontext_BeanContext_h_
//$ interface java.beans.beancontext.BeanContext
//$ extends java.beans.beancontext.BeanContextChild,java.util.Collection,java.beans.DesignMode,java.beans.Visibility

#include <java/beans/DesignMode.h>
#include <java/beans/Visibility.h>
#include <java/beans/beancontext/BeanContextChild.h>
#include <java/util/Collection.h>

namespace java {
	namespace beans {
		namespace beancontext {
			class BeanContextMembershipListener;
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}

namespace java {
	namespace beans {
		namespace beancontext {

class $import BeanContext : public ::java::beans::beancontext::BeanContextChild, public ::java::util::Collection, public ::java::beans::DesignMode, public ::java::beans::Visibility {
	$interface(BeanContext, 0, ::java::beans::beancontext::BeanContextChild, ::java::util::Collection, ::java::beans::DesignMode, ::java::beans::Visibility)
public:
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual void addBeanContextMembershipListener(::java::beans::beancontext::BeanContextMembershipListener* bcml) {}
	virtual ::java::net::URL* getResource($String* name, ::java::beans::beancontext::BeanContextChild* bcc) {return nullptr;}
	virtual ::java::io::InputStream* getResourceAsStream($String* name, ::java::beans::beancontext::BeanContextChild* bcc) {return nullptr;}
	virtual $Object* instantiateChild($String* beanName) {return nullptr;}
	virtual void removeBeanContextMembershipListener(::java::beans::beancontext::BeanContextMembershipListener* bcml) {}
	virtual $String* toString() override;
	static $Object* globalHierarchyLock;
};

		} // beancontext
	} // beans
} // java

#endif // _java_beans_beancontext_BeanContext_h_