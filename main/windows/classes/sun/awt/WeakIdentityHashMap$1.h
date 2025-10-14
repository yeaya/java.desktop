#ifndef _sun_awt_WeakIdentityHashMap$1_h_
#define _sun_awt_WeakIdentityHashMap$1_h_
//$ class sun.awt.WeakIdentityHashMap$1
//$ extends java.util.AbstractSet

#include <java/util/AbstractSet.h>

namespace java {
	namespace util {
		class Iterator;
	}
}
namespace sun {
	namespace awt {
		class WeakIdentityHashMap;
	}
}

namespace sun {
	namespace awt {

class WeakIdentityHashMap$1 : public ::java::util::AbstractSet {
	$class(WeakIdentityHashMap$1, $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	WeakIdentityHashMap$1();
	void init$(::sun::awt::WeakIdentityHashMap* this$0);
	virtual ::java::util::Iterator* iterator() override;
	virtual int32_t size() override;
	using ::java::util::AbstractSet::toArray;
	::sun::awt::WeakIdentityHashMap* this$0 = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_WeakIdentityHashMap$1_h_