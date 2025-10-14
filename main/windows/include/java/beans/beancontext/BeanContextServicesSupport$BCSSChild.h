#ifndef _java_beans_beancontext_BeanContextServicesSupport$BCSSChild_h_
#define _java_beans_beancontext_BeanContextServicesSupport$BCSSChild_h_
//$ class java.beans.beancontext.BeanContextServicesSupport$BCSSChild
//$ extends java.beans.beancontext.BeanContextSupport$BCSChild

#include <java/beans/beancontext/BeanContextSupport$BCSChild.h>

namespace java {
	namespace beans {
		namespace beancontext {
			class BeanContextServiceProvider;
			class BeanContextServiceRevokedListener;
			class BeanContextServicesSupport;
		}
	}
}
namespace java {
	namespace util {
		class HashMap;
	}
}

namespace java {
	namespace beans {
		namespace beancontext {

class $import BeanContextServicesSupport$BCSSChild : public ::java::beans::beancontext::BeanContextSupport$BCSChild {
	$class(BeanContextServicesSupport$BCSSChild, $NO_CLASS_INIT, ::java::beans::beancontext::BeanContextSupport$BCSChild)
public:
	BeanContextServicesSupport$BCSSChild();
	void init$(::java::beans::beancontext::BeanContextServicesSupport* this$0, Object$* bcc, Object$* peer);
	virtual void cleanupReferences();
	virtual void releaseService(Object$* requestor, Object$* service);
	virtual void revokeAllDelegatedServicesNow();
	virtual void revokeService($Class* serviceClass, bool isDelegated, bool revokeNow);
	virtual void usingService(Object$* requestor, Object$* service, $Class* serviceClass, ::java::beans::beancontext::BeanContextServiceProvider* bcsp, bool isDelegated, ::java::beans::beancontext::BeanContextServiceRevokedListener* bcsrl);
	::java::beans::beancontext::BeanContextServicesSupport* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xD2B478876D2CD287;
	::java::util::HashMap* serviceClasses = nullptr;
	::java::util::HashMap* serviceRequestors = nullptr;
};

		} // beancontext
	} // beans
} // java

#endif // _java_beans_beancontext_BeanContextServicesSupport$BCSSChild_h_