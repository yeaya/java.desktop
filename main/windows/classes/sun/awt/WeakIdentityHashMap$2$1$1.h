#ifndef _sun_awt_WeakIdentityHashMap$2$1$1_h_
#define _sun_awt_WeakIdentityHashMap$2$1$1_h_
//$ class sun.awt.WeakIdentityHashMap$2$1$1
//$ extends java.util.Map$Entry

#include <java/util/Map$Entry.h>

namespace sun {
	namespace awt {
		class WeakIdentityHashMap$2$1;
	}
}

namespace sun {
	namespace awt {

class WeakIdentityHashMap$2$1$1 : public ::java::util::Map$Entry {
	$class(WeakIdentityHashMap$2$1$1, $NO_CLASS_INIT, ::java::util::Map$Entry)
public:
	WeakIdentityHashMap$2$1$1();
	void init$(::sun::awt::WeakIdentityHashMap$2$1* this$2);
	virtual $Object* getKey() override;
	virtual $Object* getValue() override;
	virtual $Object* setValue(Object$* value) override;
	::sun::awt::WeakIdentityHashMap$2$1* this$2 = nullptr;
	::java::util::Map$Entry* entry = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_WeakIdentityHashMap$2$1$1_h_