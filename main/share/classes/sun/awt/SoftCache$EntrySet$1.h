#ifndef _sun_awt_SoftCache$EntrySet$1_h_
#define _sun_awt_SoftCache$EntrySet$1_h_
//$ class sun.awt.SoftCache$EntrySet$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace sun {
	namespace awt {
		class SoftCache$Entry;
		class SoftCache$EntrySet;
	}
}

namespace sun {
	namespace awt {

class SoftCache$EntrySet$1 : public ::java::util::Iterator {
	$class(SoftCache$EntrySet$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	SoftCache$EntrySet$1();
	void init$(::sun::awt::SoftCache$EntrySet* this$1);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::sun::awt::SoftCache$EntrySet* this$1 = nullptr;
	::java::util::Iterator* hashIterator = nullptr;
	::sun::awt::SoftCache$Entry* next$ = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_SoftCache$EntrySet$1_h_