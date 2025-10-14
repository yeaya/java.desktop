#ifndef _java_beans_beancontext_BeanContextServiceProvider_h_
#define _java_beans_beancontext_BeanContextServiceProvider_h_
//$ interface java.beans.beancontext.BeanContextServiceProvider
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace beans {
		namespace beancontext {
			class BeanContextServices;
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

class $export BeanContextServiceProvider : public ::java::lang::Object {
	$interface(BeanContextServiceProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::Iterator* getCurrentServiceSelectors(::java::beans::beancontext::BeanContextServices* bcs, $Class* serviceClass) {return nullptr;}
	virtual $Object* getService(::java::beans::beancontext::BeanContextServices* bcs, Object$* requestor, $Class* serviceClass, Object$* serviceSelector) {return nullptr;}
	virtual void releaseService(::java::beans::beancontext::BeanContextServices* bcs, Object$* requestor, Object$* service) {}
};

		} // beancontext
	} // beans
} // java

#endif // _java_beans_beancontext_BeanContextServiceProvider_h_