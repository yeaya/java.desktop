#include <sun/awt/util/IdentityLinkedList.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/ListIterator.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <sun/awt/util/IdentityLinkedList$DescendingIterator.h>
#include <sun/awt/util/IdentityLinkedList$Entry.h>
#include <sun/awt/util/IdentityLinkedList$ListItr.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Array = ::java::lang::reflect::Array;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $Collection = ::java::util::Collection;
using $Deque = ::java::util::Deque;
using $Iterator = ::java::util::Iterator;
using $ListIterator = ::java::util::ListIterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $IntFunction = ::java::util::function::IntFunction;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $IdentityLinkedList$DescendingIterator = ::sun::awt::util::IdentityLinkedList$DescendingIterator;
using $IdentityLinkedList$Entry = ::sun::awt::util::IdentityLinkedList$Entry;
using $IdentityLinkedList$ListItr = ::sun::awt::util::IdentityLinkedList$ListItr;

namespace sun {
	namespace awt {
		namespace util {

$FieldInfo _IdentityLinkedList_FieldInfo_[] = {
	{"header", "Lsun/awt/util/IdentityLinkedList$Entry;", "Lsun/awt/util/IdentityLinkedList$Entry<TE;>;", $PRIVATE | $TRANSIENT, $field(IdentityLinkedList, header)},
	{"size", "I", nullptr, $PRIVATE | $TRANSIENT, $field(IdentityLinkedList, size$)},
	{}
};

$MethodInfo _IdentityLinkedList_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*containsAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*forEach", "(Ljava/util/function/Consumer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IdentityLinkedList::*)()>(&IdentityLinkedList::init$))},
	{"<init>", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<+TE;>;)V", $PUBLIC, $method(static_cast<void(IdentityLinkedList::*)($Collection*)>(&IdentityLinkedList::init$))},
	{"access$000", "(Lsun/awt/util/IdentityLinkedList;)I", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)(IdentityLinkedList*)>(&IdentityLinkedList::access$000))},
	{"access$100", "(Lsun/awt/util/IdentityLinkedList;)I", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)(IdentityLinkedList*)>(&IdentityLinkedList::access$100))},
	{"add", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"add", "(ILjava/lang/Object;)V", "(ITE;)V", $PUBLIC},
	{"addAll", "(Ljava/util/Collection;)Z", "(Ljava/util/Collection<+TE;>;)Z", $PUBLIC},
	{"addAll", "(ILjava/util/Collection;)Z", "(ILjava/util/Collection<+TE;>;)Z", $PUBLIC},
	{"addBefore", "(Ljava/lang/Object;Lsun/awt/util/IdentityLinkedList$Entry;)Lsun/awt/util/IdentityLinkedList$Entry;", "(TE;Lsun/awt/util/IdentityLinkedList$Entry<TE;>;)Lsun/awt/util/IdentityLinkedList$Entry<TE;>;", $PRIVATE, $method(static_cast<$IdentityLinkedList$Entry*(IdentityLinkedList::*)(Object$*,$IdentityLinkedList$Entry*)>(&IdentityLinkedList::addBefore))},
	{"addFirst", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC},
	{"addLast", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"descendingIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"element", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"entry", "(I)Lsun/awt/util/IdentityLinkedList$Entry;", "(I)Lsun/awt/util/IdentityLinkedList$Entry<TE;>;", $PRIVATE, $method(static_cast<$IdentityLinkedList$Entry*(IdentityLinkedList::*)(int32_t)>(&IdentityLinkedList::entry))},
	{"get", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"getFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"getLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"indexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"*isEmpty", "()Z", nullptr, $PUBLIC},
	{"*iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC},
	{"lastIndexOf", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"listIterator", "(I)Ljava/util/ListIterator;", "(I)Ljava/util/ListIterator<TE;>;", $PUBLIC},
	{"offer", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"offerFirst", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"offerLast", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"*parallelStream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"peek", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"peekFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"peekLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"poll", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"pollFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"pollLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"pop", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"push", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"remove", "(I)Ljava/lang/Object;", "(I)TE;", $PUBLIC},
	{"remove", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"remove", "(Lsun/awt/util/IdentityLinkedList$Entry;)Ljava/lang/Object;", "(Lsun/awt/util/IdentityLinkedList$Entry<TE;>;)TE;", $PRIVATE, $method(static_cast<$Object*(IdentityLinkedList::*)($IdentityLinkedList$Entry*)>(&IdentityLinkedList::remove))},
	{"*removeAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"removeFirst", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"removeFirstOccurrence", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*removeIf", "(Ljava/util/function/Predicate;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removeLast", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"removeLastOccurrence", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*retainAll", "(Ljava/util/Collection;)Z", nullptr, $PUBLIC},
	{"set", "(ILjava/lang/Object;)Ljava/lang/Object;", "(ITE;)TE;", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"*spliterator", "()Ljava/util/Spliterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*stream", "()Ljava/util/stream/Stream;", nullptr, $PUBLIC | $ABSTRACT},
	{"*toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"toArray", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;)[TT;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _IdentityLinkedList_InnerClassesInfo_[] = {
	{"sun.awt.util.IdentityLinkedList$DescendingIterator", "sun.awt.util.IdentityLinkedList", "DescendingIterator", $PRIVATE},
	{"sun.awt.util.IdentityLinkedList$Entry", "sun.awt.util.IdentityLinkedList", "Entry", $PRIVATE | $STATIC},
	{"sun.awt.util.IdentityLinkedList$ListItr", "sun.awt.util.IdentityLinkedList", "ListItr", $PRIVATE},
	{}
};

$ClassInfo _IdentityLinkedList_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.util.IdentityLinkedList",
	"java.util.AbstractSequentialList",
	"java.util.Deque",
	_IdentityLinkedList_FieldInfo_,
	_IdentityLinkedList_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/AbstractSequentialList<TE;>;Ljava/util/List<TE;>;Ljava/util/Deque<TE;>;",
	nullptr,
	_IdentityLinkedList_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.util.IdentityLinkedList$DescendingIterator,sun.awt.util.IdentityLinkedList$Entry,sun.awt.util.IdentityLinkedList$ListItr"
};

$Object* allocate$IdentityLinkedList($Class* clazz) {
	return $of($alloc(IdentityLinkedList));
}

$Iterator* IdentityLinkedList::iterator() {
	 return this->$AbstractSequentialList::iterator();
}

bool IdentityLinkedList::equals(Object$* arg0) {
	 return this->$AbstractSequentialList::equals(arg0);
}

int32_t IdentityLinkedList::hashCode() {
	 return this->$AbstractSequentialList::hashCode();
}

bool IdentityLinkedList::isEmpty() {
	 return this->$AbstractSequentialList::isEmpty();
}

bool IdentityLinkedList::containsAll($Collection* arg0) {
	 return this->$AbstractSequentialList::containsAll(arg0);
}

bool IdentityLinkedList::removeAll($Collection* arg0) {
	 return this->$AbstractSequentialList::removeAll(arg0);
}

bool IdentityLinkedList::retainAll($Collection* arg0) {
	 return this->$AbstractSequentialList::retainAll(arg0);
}

$String* IdentityLinkedList::toString() {
	 return this->$AbstractSequentialList::toString();
}

$ObjectArray* IdentityLinkedList::toArray($IntFunction* arg0) {
	 return this->$AbstractSequentialList::toArray(arg0);
}

bool IdentityLinkedList::removeIf($Predicate* arg0) {
	 return this->$AbstractSequentialList::removeIf(arg0);
}

$Spliterator* IdentityLinkedList::spliterator() {
	 return this->$AbstractSequentialList::spliterator();
}

$Stream* IdentityLinkedList::stream() {
	 return this->$AbstractSequentialList::stream();
}

$Stream* IdentityLinkedList::parallelStream() {
	 return this->$AbstractSequentialList::parallelStream();
}

void IdentityLinkedList::forEach($Consumer* arg0) {
	this->$AbstractSequentialList::forEach(arg0);
}

$Object* IdentityLinkedList::clone() {
	 return this->$AbstractSequentialList::clone();
}

void IdentityLinkedList::finalize() {
	this->$AbstractSequentialList::finalize();
}

int32_t IdentityLinkedList::access$100(IdentityLinkedList* x0) {
	$init(IdentityLinkedList);
	return $nc(x0)->modCount;
}

int32_t IdentityLinkedList::access$000(IdentityLinkedList* x0) {
	$init(IdentityLinkedList);
	return $nc(x0)->modCount;
}

void IdentityLinkedList::init$() {
	$AbstractSequentialList::init$();
	$set(this, header, $new($IdentityLinkedList$Entry, nullptr, nullptr, nullptr));
	this->size$ = 0;
	$set($nc(this->header), next, ($assignField($nc(this->header), previous, this->header)));
}

void IdentityLinkedList::init$($Collection* c) {
	IdentityLinkedList::init$();
	addAll(c);
}

$Object* IdentityLinkedList::getFirst() {
	if (this->size$ == 0) {
		$throwNew($NoSuchElementException);
	}
	return $of($nc($nc(this->header)->next)->element);
}

$Object* IdentityLinkedList::getLast() {
	if (this->size$ == 0) {
		$throwNew($NoSuchElementException);
	}
	return $of($nc($nc(this->header)->previous)->element);
}

$Object* IdentityLinkedList::removeFirst() {
	return $of(remove($nc(this->header)->next));
}

$Object* IdentityLinkedList::removeLast() {
	return $of(remove($nc(this->header)->previous));
}

void IdentityLinkedList::addFirst(Object$* e) {
	addBefore(e, $nc(this->header)->next);
}

void IdentityLinkedList::addLast(Object$* e) {
	addBefore(e, this->header);
}

bool IdentityLinkedList::contains(Object$* o) {
	return indexOf(o) != -1;
}

int32_t IdentityLinkedList::size() {
	return this->size$;
}

bool IdentityLinkedList::add(Object$* e) {
	addBefore(e, this->header);
	return true;
}

bool IdentityLinkedList::remove(Object$* o) {
	{
		$var($IdentityLinkedList$Entry, e, $nc(this->header)->next);
		for (; e != this->header; $assign(e, $nc(e)->next)) {
			if ($equals(o, e->element)) {
				remove(e);
				return true;
			}
		}
	}
	return false;
}

bool IdentityLinkedList::addAll($Collection* c) {
	return addAll(this->size$, c);
}

bool IdentityLinkedList::addAll(int32_t index, $Collection* c) {
	if (index < 0 || index > this->size$) {
		$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index), ", Size: "_s, $$str(this->size$)}));
	}
	$var($ObjectArray, a, $nc(c)->toArray());
	int32_t numNew = $nc(a)->length;
	if (numNew == 0) {
		return false;
	}
	++this->modCount;
	$var($IdentityLinkedList$Entry, successor, index == this->size$ ? this->header : entry(index));
	$var($IdentityLinkedList$Entry, predecessor, $nc(successor)->previous);
	for (int32_t i = 0; i < numNew; ++i) {
		$var($Object, tmp, a->get(i));
		$var($IdentityLinkedList$Entry, e, $new($IdentityLinkedList$Entry, tmp, successor, predecessor));
		$set($nc(predecessor), next, e);
		$assign(predecessor, e);
	}
	$set(successor, previous, predecessor);
	this->size$ += numNew;
	return true;
}

void IdentityLinkedList::clear() {
	$var($IdentityLinkedList$Entry, e, $nc(this->header)->next);
	while (e != this->header) {
		$var($IdentityLinkedList$Entry, next, $nc(e)->next);
		$set(e, next, ($assignField(e, previous, nullptr)));
		$set(e, element, nullptr);
		$assign(e, next);
	}
	$set($nc(this->header), next, ($assignField($nc(this->header), previous, this->header)));
	this->size$ = 0;
	++this->modCount;
}

$Object* IdentityLinkedList::get(int32_t index) {
	return $of($nc($(entry(index)))->element);
}

$Object* IdentityLinkedList::set(int32_t index, Object$* element) {
	$var($IdentityLinkedList$Entry, e, entry(index));
	$var($Object, oldVal, $nc(e)->element);
	$set(e, element, element);
	return $of(oldVal);
}

void IdentityLinkedList::add(int32_t index, Object$* element) {
	addBefore(element, (index == this->size$ ? this->header : $(entry(index))));
}

$Object* IdentityLinkedList::remove(int32_t index) {
	return $of(remove($(entry(index))));
}

$IdentityLinkedList$Entry* IdentityLinkedList::entry(int32_t index) {
	if (index < 0 || index >= this->size$) {
		$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index), ", Size: "_s, $$str(this->size$)}));
	}
	$var($IdentityLinkedList$Entry, e, this->header);
	if (index < (this->size$ >> 1)) {
		for (int32_t i = 0; i <= index; ++i) {
			$assign(e, $nc(e)->next);
		}
	} else {
		for (int32_t i = this->size$; i > index; --i) {
			$assign(e, $nc(e)->previous);
		}
	}
	return e;
}

int32_t IdentityLinkedList::indexOf(Object$* o) {
	int32_t index = 0;
	{
		$var($IdentityLinkedList$Entry, e, $nc(this->header)->next);
		for (; e != this->header; $assign(e, $nc(e)->next)) {
			if ($equals(o, e->element)) {
				return index;
			}
			++index;
		}
	}
	return -1;
}

int32_t IdentityLinkedList::lastIndexOf(Object$* o) {
	int32_t index = this->size$;
	{
		$var($IdentityLinkedList$Entry, e, $nc(this->header)->previous);
		for (; e != this->header; $assign(e, $nc(e)->previous)) {
			--index;
			if ($equals(o, e->element)) {
				return index;
			}
		}
	}
	return -1;
}

$Object* IdentityLinkedList::peek() {
	if (this->size$ == 0) {
		return $of(nullptr);
	}
	return $of(getFirst());
}

$Object* IdentityLinkedList::element() {
	return $of(getFirst());
}

$Object* IdentityLinkedList::poll() {
	if (this->size$ == 0) {
		return $of(nullptr);
	}
	return $of(removeFirst());
}

$Object* IdentityLinkedList::remove() {
	return $of(removeFirst());
}

bool IdentityLinkedList::offer(Object$* e) {
	return add(e);
}

bool IdentityLinkedList::offerFirst(Object$* e) {
	addFirst(e);
	return true;
}

bool IdentityLinkedList::offerLast(Object$* e) {
	addLast(e);
	return true;
}

$Object* IdentityLinkedList::peekFirst() {
	if (this->size$ == 0) {
		return $of(nullptr);
	}
	return $of(getFirst());
}

$Object* IdentityLinkedList::peekLast() {
	if (this->size$ == 0) {
		return $of(nullptr);
	}
	return $of(getLast());
}

$Object* IdentityLinkedList::pollFirst() {
	if (this->size$ == 0) {
		return $of(nullptr);
	}
	return $of(removeFirst());
}

$Object* IdentityLinkedList::pollLast() {
	if (this->size$ == 0) {
		return $of(nullptr);
	}
	return $of(removeLast());
}

void IdentityLinkedList::push(Object$* e) {
	addFirst(e);
}

$Object* IdentityLinkedList::pop() {
	return $of(removeFirst());
}

bool IdentityLinkedList::removeFirstOccurrence(Object$* o) {
	return remove(o);
}

bool IdentityLinkedList::removeLastOccurrence(Object$* o) {
	{
		$var($IdentityLinkedList$Entry, e, $nc(this->header)->previous);
		for (; e != this->header; $assign(e, $nc(e)->previous)) {
			if ($equals(o, e->element)) {
				remove(e);
				return true;
			}
		}
	}
	return false;
}

$ListIterator* IdentityLinkedList::listIterator(int32_t index) {
	return $new($IdentityLinkedList$ListItr, this, index);
}

$IdentityLinkedList$Entry* IdentityLinkedList::addBefore(Object$* e, $IdentityLinkedList$Entry* entry) {
	$var($IdentityLinkedList$Entry, newEntry, $new($IdentityLinkedList$Entry, e, entry, $nc(entry)->previous));
	$set($nc(newEntry->previous), next, newEntry);
	$set($nc(newEntry->next), previous, newEntry);
	++this->size$;
	++this->modCount;
	return newEntry;
}

$Object* IdentityLinkedList::remove($IdentityLinkedList$Entry* e) {
	if (e == this->header) {
		$throwNew($NoSuchElementException);
	}
	$var($Object, result, $nc(e)->element);
	$set($nc(e->previous), next, e->next);
	$set($nc(e->next), previous, e->previous);
	$set(e, next, ($assignField(e, previous, nullptr)));
	$set(e, element, nullptr);
	--this->size$;
	++this->modCount;
	return $of(result);
}

$Iterator* IdentityLinkedList::descendingIterator() {
	return $new($IdentityLinkedList$DescendingIterator, this);
}

$ObjectArray* IdentityLinkedList::toArray() {
	$var($ObjectArray, result, $new($ObjectArray, this->size$));
	int32_t i = 0;
	{
		$var($IdentityLinkedList$Entry, e, $nc(this->header)->next);
		for (; e != this->header; $assign(e, $nc(e)->next)) {
			result->set(i++, e->element);
		}
	}
	return result;
}

$ObjectArray* IdentityLinkedList::toArray($ObjectArray* a$renamed) {
	$var($ObjectArray, a, a$renamed);
	if ($nc(a)->length < this->size$) {
		$assign(a, $cast($ObjectArray, $1Array::newInstance($of(a)->getClass()->getComponentType(), this->size$)));
	}
	int32_t i = 0;
	$var($ObjectArray, result, a);
	{
		$var($IdentityLinkedList$Entry, e, $nc(this->header)->next);
		for (; e != this->header; $assign(e, $nc(e)->next)) {
			$nc(result)->set(i++, e->element);
		}
	}
	if ($nc(a)->length > this->size$) {
		a->set(this->size$, nullptr);
	}
	return a;
}

IdentityLinkedList::IdentityLinkedList() {
}

$Class* IdentityLinkedList::load$($String* name, bool initialize) {
	$loadClass(IdentityLinkedList, name, initialize, &_IdentityLinkedList_ClassInfo_, allocate$IdentityLinkedList);
	return class$;
}

$Class* IdentityLinkedList::class$ = nullptr;

		} // util
	} // awt
} // sun