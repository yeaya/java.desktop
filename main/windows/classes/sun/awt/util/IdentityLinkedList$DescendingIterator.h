#ifndef _sun_awt_util_IdentityLinkedList$DescendingIterator_h_
#define _sun_awt_util_IdentityLinkedList$DescendingIterator_h_
//$ class sun.awt.util.IdentityLinkedList$DescendingIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace sun {
	namespace awt {
		namespace util {
			class IdentityLinkedList;
			class IdentityLinkedList$ListItr;
		}
	}
}

namespace sun {
	namespace awt {
		namespace util {

class IdentityLinkedList$DescendingIterator : public ::java::util::Iterator {
	$class(IdentityLinkedList$DescendingIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	IdentityLinkedList$DescendingIterator();
	void init$(::sun::awt::util::IdentityLinkedList* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::sun::awt::util::IdentityLinkedList* this$0 = nullptr;
	::sun::awt::util::IdentityLinkedList$ListItr* itr = nullptr;
};

		} // util
	} // awt
} // sun

#endif // _sun_awt_util_IdentityLinkedList$DescendingIterator_h_