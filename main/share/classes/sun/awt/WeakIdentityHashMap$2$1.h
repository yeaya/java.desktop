#ifndef _sun_awt_WeakIdentityHashMap$2$1_h_
#define _sun_awt_WeakIdentityHashMap$2$1_h_
//$ class sun.awt.WeakIdentityHashMap$2$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace sun {
	namespace awt {
		class WeakIdentityHashMap$2;
	}
}

namespace sun {
	namespace awt {

class WeakIdentityHashMap$2$1 : public ::java::util::Iterator {
	$class(WeakIdentityHashMap$2$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	WeakIdentityHashMap$2$1();
	void init$(::sun::awt::WeakIdentityHashMap$2* this$1, ::java::util::Iterator* val$iterator);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::sun::awt::WeakIdentityHashMap$2* this$1 = nullptr;
	::java::util::Iterator* val$iterator = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_WeakIdentityHashMap$2$1_h_