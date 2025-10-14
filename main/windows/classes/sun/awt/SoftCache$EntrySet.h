#ifndef _sun_awt_SoftCache$EntrySet_h_
#define _sun_awt_SoftCache$EntrySet_h_
//$ class sun.awt.SoftCache$EntrySet
//$ extends java.util.AbstractSet

#include <java/util/AbstractSet.h>

namespace java {
	namespace util {
		class Iterator;
		class Set;
	}
}
namespace sun {
	namespace awt {
		class SoftCache;
	}
}

namespace sun {
	namespace awt {

class SoftCache$EntrySet : public ::java::util::AbstractSet {
	$class(SoftCache$EntrySet, $NO_CLASS_INIT, ::java::util::AbstractSet)
public:
	SoftCache$EntrySet();
	void init$(::sun::awt::SoftCache* this$0);
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual bool remove(Object$* o) override;
	virtual int32_t size() override;
	using ::java::util::AbstractSet::toArray;
	::sun::awt::SoftCache* this$0 = nullptr;
	::java::util::Set* hashEntries = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_SoftCache$EntrySet_h_