#ifndef _java_beans_Beans_h_
#define _java_beans_Beans_h_
//$ class java.beans.Beans
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace beans {
		class AppletInitializer;
	}
}
namespace java {
	namespace beans {
		namespace beancontext {
			class BeanContext;
		}
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
	}
}

namespace java {
	namespace beans {

class $import Beans : public ::java::lang::Object {
	$class(Beans, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Beans();
	void init$();
	static $Object* getInstanceOf(Object$* bean, $Class* targetType);
	static $Object* instantiate(::java::lang::ClassLoader* cls, $String* beanName);
	static $Object* instantiate(::java::lang::ClassLoader* cls, $String* beanName, ::java::beans::beancontext::BeanContext* beanContext);
	static $Object* instantiate(::java::lang::ClassLoader* cls, $String* beanName, ::java::beans::beancontext::BeanContext* beanContext, ::java::beans::AppletInitializer* initializer);
	static bool isDesignTime();
	static bool isGuiAvailable();
	static bool isInstanceOf(Object$* bean, $Class* targetType);
	static void setDesignTime(bool isDesignTime);
	static void setGuiAvailable(bool isGuiAvailable);
	static void unsafeBeanContextAdd(::java::beans::beancontext::BeanContext* beanContext, Object$* res);
};

	} // beans
} // java

#endif // _java_beans_Beans_h_