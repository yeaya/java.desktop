#ifndef _java_beans_beancontext_BeanContextServicesSupport$BCSSChild$BCSSCServiceRef_h_
#define _java_beans_beancontext_BeanContextServicesSupport$BCSSChild$BCSSCServiceRef_h_
//$ class java.beans.beancontext.BeanContextServicesSupport$BCSSChild$BCSSCServiceRef
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace beans {
		namespace beancontext {
			class BeanContextServicesSupport$BCSSChild;
			class BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef;
		}
	}
}

namespace java {
	namespace beans {
		namespace beancontext {

class $export BeanContextServicesSupport$BCSSChild$BCSSCServiceRef : public ::java::lang::Object {
	$class(BeanContextServicesSupport$BCSSChild$BCSSCServiceRef, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BeanContextServicesSupport$BCSSChild$BCSSCServiceRef();
	void init$(::java::beans::beancontext::BeanContextServicesSupport$BCSSChild* this$1, ::java::beans::beancontext::BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef* scref, bool isDelegated);
	virtual void addRef();
	virtual ::java::beans::beancontext::BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef* getServiceClassRef();
	virtual bool isDelegated();
	virtual int32_t release();
	::java::beans::beancontext::BeanContextServicesSupport$BCSSChild* this$1 = nullptr;
	::java::beans::beancontext::BeanContextServicesSupport$BCSSChild$BCSSCServiceClassRef* serviceClassRef = nullptr;
	int32_t refCnt = 0;
	bool delegated = false;
};

		} // beancontext
	} // beans
} // java

#endif // _java_beans_beancontext_BeanContextServicesSupport$BCSSChild$BCSSCServiceRef_h_