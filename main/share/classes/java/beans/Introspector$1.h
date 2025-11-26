#ifndef _java_beans_Introspector$1_h_
#define _java_beans_Introspector$1_h_
//$ class java.beans.Introspector$1
//$ extends jdk.internal.access.JavaBeansAccess

#include <java/lang/Array.h>
#include <jdk/internal/access/JavaBeansAccess.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
			class Method;
		}
	}
}

namespace java {
	namespace beans {

class Introspector$1 : public ::jdk::internal::access::JavaBeansAccess {
	$class(Introspector$1, $NO_CLASS_INIT, ::jdk::internal::access::JavaBeansAccess)
public:
	Introspector$1();
	void init$();
	virtual $StringArray* getConstructorPropertiesValue(::java::lang::reflect::Constructor* ctr) override;
	virtual ::java::lang::reflect::Method* getReadMethod($Class* clazz, $String* property) override;
};

	} // beans
} // java

#endif // _java_beans_Introspector$1_h_