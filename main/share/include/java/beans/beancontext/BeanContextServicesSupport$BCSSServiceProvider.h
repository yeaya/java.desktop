#ifndef _java_beans_beancontext_BeanContextServicesSupport$BCSSServiceProvider_h_
#define _java_beans_beancontext_BeanContextServicesSupport$BCSSServiceProvider_h_
//$ class java.beans.beancontext.BeanContextServicesSupport$BCSSServiceProvider
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace beans {
		namespace beancontext {
			class BeanContextServiceProvider;
		}
	}
}

namespace java {
	namespace beans {
		namespace beancontext {

class $import BeanContextServicesSupport$BCSSServiceProvider : public ::java::io::Serializable {
	$class(BeanContextServicesSupport$BCSSServiceProvider, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	BeanContextServicesSupport$BCSSServiceProvider();
	void init$($Class* sc, ::java::beans::beancontext::BeanContextServiceProvider* bcsp);
	virtual ::java::beans::beancontext::BeanContextServiceProvider* getServiceProvider();
	static const int64_t serialVersionUID = (int64_t)0x0BF3E001B368542E;
	::java::beans::beancontext::BeanContextServiceProvider* serviceProvider = nullptr;
};

		} // beancontext
	} // beans
} // java

#endif // _java_beans_beancontext_BeanContextServicesSupport$BCSSServiceProvider_h_