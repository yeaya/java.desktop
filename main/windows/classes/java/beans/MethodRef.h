#ifndef _java_beans_MethodRef_h_
#define _java_beans_MethodRef_h_
//$ class java.beans.MethodRef
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace ref {
			class SoftReference;
			class WeakReference;
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

namespace java {
	namespace beans {

class MethodRef : public ::java::lang::Object {
	$class(MethodRef, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MethodRef();
	void init$();
	static ::java::lang::reflect::Method* find($Class* type, $String* signature);
	::java::lang::reflect::Method* get();
	bool isSet();
	void set(::java::lang::reflect::Method* method);
	$String* signature = nullptr;
	::java::lang::ref::SoftReference* methodRef = nullptr;
	::java::lang::ref::WeakReference* typeRef = nullptr;
};

	} // beans
} // java

#endif // _java_beans_MethodRef_h_