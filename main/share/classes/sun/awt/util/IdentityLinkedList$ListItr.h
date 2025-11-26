#ifndef _sun_awt_util_IdentityLinkedList$ListItr_h_
#define _sun_awt_util_IdentityLinkedList$ListItr_h_
//$ class sun.awt.util.IdentityLinkedList$ListItr
//$ extends java.util.ListIterator

#include <java/util/ListIterator.h>

namespace sun {
	namespace awt {
		namespace util {
			class IdentityLinkedList;
			class IdentityLinkedList$Entry;
		}
	}
}

namespace sun {
	namespace awt {
		namespace util {

class IdentityLinkedList$ListItr : public ::java::util::ListIterator {
	$class(IdentityLinkedList$ListItr, $NO_CLASS_INIT, ::java::util::ListIterator)
public:
	IdentityLinkedList$ListItr();
	void init$(::sun::awt::util::IdentityLinkedList* this$0, int32_t index);
	virtual void add(Object$* e) override;
	void checkForComodification();
	virtual bool hasNext() override;
	virtual bool hasPrevious() override;
	virtual $Object* next() override;
	virtual int32_t nextIndex() override;
	virtual $Object* previous() override;
	virtual int32_t previousIndex() override;
	virtual void remove() override;
	virtual void set(Object$* e) override;
	::sun::awt::util::IdentityLinkedList* this$0 = nullptr;
	::sun::awt::util::IdentityLinkedList$Entry* lastReturned = nullptr;
	::sun::awt::util::IdentityLinkedList$Entry* next$ = nullptr;
	int32_t nextIndex$ = 0;
	int32_t expectedModCount = 0;
};

		} // util
	} // awt
} // sun

#endif // _sun_awt_util_IdentityLinkedList$ListItr_h_