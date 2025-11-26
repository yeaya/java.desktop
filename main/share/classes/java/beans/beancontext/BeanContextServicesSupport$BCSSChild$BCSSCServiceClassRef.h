#ifndef _java_beans_beancontext_BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef_h_
#define _java_beans_beancontext_BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef_h_
//$ class java.beans.beancontext.BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace beans {
		namespace beancontext {
			class BeanContextServiceProvider;
			class BeanContextServiceRevokedListener;
			class BeanContextServicesSupport$BCSSChild;
		}
	}
}
namespace java {
	namespace util {
		class HashMap;
		class Iterator;
	}
}

namespace java {
	namespace beans {
		namespace beancontext {

class $export BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef : public ::java::lang::Object {
	$class(BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef();
	void init$(::java::beans::beancontext::BeanContextServicesSupport$BCSSChild* this$1, $Class* sc, ::java::beans::beancontext::BeanContextServiceProvider* bcsp, bool delegated);
	virtual void addRef(bool delegated);
	virtual void addRequestor(Object$* requestor, ::java::beans::beancontext::BeanContextServiceRevokedListener* bcsrl);
	virtual ::java::util::Iterator* cloneOfEntries();
	virtual ::java::util::Iterator* entries();
	virtual ::java::beans::beancontext::BeanContextServiceProvider* getDelegateProvider();
	virtual int32_t getDelegateRefs();
	virtual int32_t getRefs();
	virtual $Class* getServiceClass();
	virtual ::java::beans::beancontext::BeanContextServiceProvider* getServiceProvider();
	virtual int32_t getServiceRefs();
	virtual bool isDelegated();
	virtual bool isEmpty();
	virtual void releaseRef(bool delegated);
	virtual void removeRequestor(Object$* requestor);
	virtual void verifyAndMaybeSetProvider(::java::beans::beancontext::BeanContextServiceProvider* bcsp, bool isDelegated);
	virtual void verifyRequestor(Object$* requestor, ::java::beans::beancontext::BeanContextServiceRevokedListener* bcsrl);
	::java::beans::beancontext::BeanContextServicesSupport$BCSSChild* this$1 = nullptr;
	$Class* serviceClass = nullptr;
	::java::beans::beancontext::BeanContextServiceProvider* serviceProvider = nullptr;
	int32_t serviceRefs = 0;
	::java::beans::beancontext::BeanContextServiceProvider* delegateProvider = nullptr;
	int32_t delegateRefs = 0;
	::java::util::HashMap* requestors = nullptr;
};

		} // beancontext
	} // beans
} // java

#endif // _java_beans_beancontext_BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef_h_