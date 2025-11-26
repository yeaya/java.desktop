#ifndef _java_beans_beancontext_BeanContextServices_h_
#define _java_beans_beancontext_BeanContextServices_h_
//$ interface java.beans.beancontext.BeanContextServices
//$ extends java.beans.beancontext.BeanContext,java.beans.beancontext.BeanContextServicesListener

#include <java/beans/beancontext/BeanContext.h>
#include <java/beans/beancontext/BeanContextServicesListener.h>

namespace java {
	namespace beans {
		namespace beancontext {
			class BeanContextChild;
			class BeanContextServiceProvider;
			class BeanContextServiceRevokedListener;
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
	}
}

namespace java {
	namespace beans {
		namespace beancontext {

class $export BeanContextServices : public ::java::beans::beancontext::BeanContext, public ::java::beans::beancontext::BeanContextServicesListener {
	$interface(BeanContextServices, $NO_CLASS_INIT, ::java::beans::beancontext::BeanContext, ::java::beans::beancontext::BeanContextServicesListener)
public:
	virtual void addBeanContextServicesListener(::java::beans::beancontext::BeanContextServicesListener* bcsl) {}
	virtual bool addService($Class* serviceClass, ::java::beans::beancontext::BeanContextServiceProvider* serviceProvider) {return false;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::util::Iterator* getCurrentServiceClasses() {return nullptr;}
	virtual ::java::util::Iterator* getCurrentServiceSelectors($Class* serviceClass) {return nullptr;}
	virtual $Object* getService(::java::beans::beancontext::BeanContextChild* child, Object$* requestor, $Class* serviceClass, Object$* serviceSelector, ::java::beans::beancontext::BeanContextServiceRevokedListener* bcsrl) {return nullptr;}
	virtual bool hasService($Class* serviceClass) {return false;}
	virtual int32_t hashCode() override;
	virtual void releaseService(::java::beans::beancontext::BeanContextChild* child, Object$* requestor, Object$* service) {}
	virtual void removeBeanContextServicesListener(::java::beans::beancontext::BeanContextServicesListener* bcsl) {}
	virtual void revokeService($Class* serviceClass, ::java::beans::beancontext::BeanContextServiceProvider* serviceProvider, bool revokeCurrentServicesNow) {}
	virtual $String* toString() override;
};

		} // beancontext
	} // beans
} // java

#endif // _java_beans_beancontext_BeanContextServices_h_