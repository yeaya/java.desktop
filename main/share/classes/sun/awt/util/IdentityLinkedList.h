#ifndef _sun_awt_util_IdentityLinkedList_h_
#define _sun_awt_util_IdentityLinkedList_h_
//$ class sun.awt.util.IdentityLinkedList
//$ extends java.util.AbstractSequentialList
//$ implements java.util.Deque

#include <java/lang/Array.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/Deque.h>

namespace java {
	namespace util {
		class Collection;
		class Iterator;
		class ListIterator;
	}
}
namespace sun {
	namespace awt {
		namespace util {
			class IdentityLinkedList$Entry;
		}
	}
}

namespace sun {
	namespace awt {
		namespace util {

class IdentityLinkedList : public ::java::util::AbstractSequentialList, public ::java::util::Deque {
	$class(IdentityLinkedList, $NO_CLASS_INIT, ::java::util::AbstractSequentialList, ::java::util::Deque)
public:
	IdentityLinkedList();
	virtual $Object* clone() override;
	virtual bool containsAll(::java::util::Collection* arg0) override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::Consumer* arg0) override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::util::Collection* c);
	static int32_t access$000(::sun::awt::util::IdentityLinkedList* x0);
	static int32_t access$100(::sun::awt::util::IdentityLinkedList* x0);
	virtual bool add(Object$* e) override;
	virtual void add(int32_t index, Object$* element) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual bool addAll(int32_t index, ::java::util::Collection* c) override;
	::sun::awt::util::IdentityLinkedList$Entry* addBefore(Object$* e, ::sun::awt::util::IdentityLinkedList$Entry* entry);
	virtual void addFirst(Object$* e) override;
	virtual void addLast(Object$* e) override;
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual ::java::util::Iterator* descendingIterator() override;
	virtual $Object* element() override;
	::sun::awt::util::IdentityLinkedList$Entry* entry(int32_t index);
	virtual $Object* get(int32_t index) override;
	virtual $Object* getFirst() override;
	virtual $Object* getLast() override;
	virtual int32_t indexOf(Object$* o) override;
	virtual bool isEmpty() override;
	virtual ::java::util::Iterator* iterator() override;
	virtual int32_t lastIndexOf(Object$* o) override;
	using ::java::util::AbstractSequentialList::listIterator;
	virtual ::java::util::ListIterator* listIterator(int32_t index) override;
	virtual bool offer(Object$* e) override;
	virtual bool offerFirst(Object$* e) override;
	virtual bool offerLast(Object$* e) override;
	virtual ::java::util::stream::Stream* parallelStream() override;
	virtual $Object* peek() override;
	virtual $Object* peekFirst() override;
	virtual $Object* peekLast() override;
	virtual $Object* poll() override;
	virtual $Object* pollFirst() override;
	virtual $Object* pollLast() override;
	virtual $Object* pop() override;
	virtual void push(Object$* e) override;
	virtual bool remove(Object$* o) override;
	virtual $Object* remove(int32_t index) override;
	virtual $Object* remove() override;
	$Object* remove(::sun::awt::util::IdentityLinkedList$Entry* e);
	virtual bool removeAll(::java::util::Collection* arg0) override;
	virtual $Object* removeFirst() override;
	virtual bool removeFirstOccurrence(Object$* o) override;
	virtual bool removeIf(::java::util::function::Predicate* arg0) override;
	virtual $Object* removeLast() override;
	virtual bool removeLastOccurrence(Object$* o) override;
	virtual bool retainAll(::java::util::Collection* arg0) override;
	virtual $Object* set(int32_t index, Object$* element) override;
	virtual int32_t size() override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual ::java::util::stream::Stream* stream() override;
	virtual $ObjectArray* toArray(::java::util::function::IntFunction* arg0) override;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	::sun::awt::util::IdentityLinkedList$Entry* header = nullptr;
	int32_t size$ = 0;
};

		} // util
	} // awt
} // sun

#endif // _sun_awt_util_IdentityLinkedList_h_