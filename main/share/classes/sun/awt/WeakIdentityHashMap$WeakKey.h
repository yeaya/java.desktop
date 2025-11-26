#ifndef _sun_awt_WeakIdentityHashMap$WeakKey_h_
#define _sun_awt_WeakIdentityHashMap$WeakKey_h_
//$ class sun.awt.WeakIdentityHashMap$WeakKey
//$ extends java.lang.ref.WeakReference

#include <java/lang/ref/WeakReference.h>

namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}

namespace sun {
	namespace awt {

class WeakIdentityHashMap$WeakKey : public ::java::lang::ref::WeakReference {
	$class(WeakIdentityHashMap$WeakKey, $NO_CLASS_INIT, ::java::lang::ref::WeakReference)
public:
	WeakIdentityHashMap$WeakKey();
	void init$(Object$* key, ::java::lang::ref::ReferenceQueue* q);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	int32_t hash = 0;
};

	} // awt
} // sun

#endif // _sun_awt_WeakIdentityHashMap$WeakKey_h_