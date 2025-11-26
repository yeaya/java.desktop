#ifndef _java_beans_WeakIdentityMap$Entry_h_
#define _java_beans_WeakIdentityMap$Entry_h_
//$ class java.beans.WeakIdentityMap$Entry
//$ extends java.lang.ref.WeakReference

#include <java/lang/ref/WeakReference.h>

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}

namespace java {
	namespace beans {

class WeakIdentityMap$Entry : public ::java::lang::ref::WeakReference {
	$class(WeakIdentityMap$Entry, $NO_CLASS_INIT, ::java::lang::ref::WeakReference)
public:
	WeakIdentityMap$Entry();
	void init$(Object$* key, int32_t hash, Object$* value, ::java::lang::ref::ReferenceQueue* queue, ::java::beans::WeakIdentityMap$Entry* next);
	virtual bool isMatched(Object$* key, int32_t hash);
	int32_t hash = 0;
	$volatile($Object*) value = nullptr;
	$volatile(::java::beans::WeakIdentityMap$Entry*) next = nullptr;
};

	} // beans
} // java

#endif // _java_beans_WeakIdentityMap$Entry_h_