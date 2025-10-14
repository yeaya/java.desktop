#ifndef _sun_awt_WeakIdentityHashMap$1$1_h_
#define _sun_awt_WeakIdentityHashMap$1$1_h_
//$ class sun.awt.WeakIdentityHashMap$1$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace sun {
	namespace awt {
		class WeakIdentityHashMap$1;
	}
}

namespace sun {
	namespace awt {

class WeakIdentityHashMap$1$1 : public ::java::util::Iterator {
	$class(WeakIdentityHashMap$1$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	WeakIdentityHashMap$1$1();
	void init$(::sun::awt::WeakIdentityHashMap$1* this$1);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::sun::awt::WeakIdentityHashMap$1* this$1 = nullptr;
	$Object* next$ = nullptr;
	::java::util::Iterator* iterator = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_WeakIdentityHashMap$1$1_h_