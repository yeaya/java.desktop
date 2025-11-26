#ifndef _java_beans_beancontext_BeanContextServicesSupport$BCSSProxyServiceProvider_h_
#define _java_beans_beancontext_BeanContextServicesSupport$BCSSProxyServiceProvider_h_
//$ class java.beans.beancontext.BeanContextServicesSupport$BCSSProxyServiceProvider
//$ extends java.beans.beancontext.BeanContextServiceProvider
//$ implements java.beans.beancontext.BeanContextServiceRevokedListener

#include <java/beans/beancontext/BeanContextServiceProvider.h>
#include <java/beans/beancontext/BeanContextServiceRevokedListener.h>

namespace java {
	namespace beans {
		namespace beancontext {
			class BeanContextServiceRevokedEvent;
			class BeanContextServices;
			class BeanContextServicesSupport;
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

class $export BeanContextServicesSupport$BCSSProxyServiceProvider : public ::java::beans::beancontext::BeanContextServiceProvider, public ::java::beans::beancontext::BeanContextServiceRevokedListener {
	$class(BeanContextServicesSupport$BCSSProxyServiceProvider, $NO_CLASS_INIT, ::java::beans::beancontext::BeanContextServiceProvider, ::java::beans::beancontext::BeanContextServiceRevokedListener)
public:
	BeanContextServicesSupport$BCSSProxyServiceProvider();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::beans::beancontext::BeanContextServicesSupport* this$0, ::java::beans::beancontext::BeanContextServices* bcs);
	virtual ::java::util::Iterator* getCurrentServiceSelectors(::java::beans::beancontext::BeanContextServices* bcs, $Class* serviceClass) override;
	virtual $Object* getService(::java::beans::beancontext::BeanContextServices* bcs, Object$* requestor, $Class* serviceClass, Object$* serviceSelector) override;
	virtual void releaseService(::java::beans::beancontext::BeanContextServices* bcs, Object$* requestor, Object$* service) override;
	virtual void serviceRevoked(::java::beans::beancontext::BeanContextServiceRevokedEvent* bcsre) override;
	virtual $String* toString() override;
	::java::beans::beancontext::BeanContextServicesSupport* this$0 = nullptr;
	::java::beans::beancontext::BeanContextServices* nestingCtxt = nullptr;
};

		} // beancontext
	} // beans
} // java

#endif // _java_beans_beancontext_BeanContextServicesSupport$BCSSProxyServiceProvider_h_