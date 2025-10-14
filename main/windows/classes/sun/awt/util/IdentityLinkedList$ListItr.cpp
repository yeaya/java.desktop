#include <sun/awt/util/IdentityLinkedList$ListItr.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ConcurrentModificationException.h>
#include <java/util/NoSuchElementException.h>
#include <sun/awt/util/IdentityLinkedList$Entry.h>
#include <sun/awt/util/IdentityLinkedList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentModificationException = ::java::util::ConcurrentModificationException;
using $ListIterator = ::java::util::ListIterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $IdentityLinkedList = ::sun::awt::util::IdentityLinkedList;
using $IdentityLinkedList$Entry = ::sun::awt::util::IdentityLinkedList$Entry;

namespace sun {
	namespace awt {
		namespace util {

$FieldInfo _IdentityLinkedList$ListItr_FieldInfo_[] = {
	{"this$0", "Lsun/awt/util/IdentityLinkedList;", nullptr, $FINAL | $SYNTHETIC, $field(IdentityLinkedList$ListItr, this$0)},
	{"lastReturned", "Lsun/awt/util/IdentityLinkedList$Entry;", "Lsun/awt/util/IdentityLinkedList$Entry<TE;>;", $PRIVATE, $field(IdentityLinkedList$ListItr, lastReturned)},
	{"next", "Lsun/awt/util/IdentityLinkedList$Entry;", "Lsun/awt/util/IdentityLinkedList$Entry<TE;>;", $PRIVATE, $field(IdentityLinkedList$ListItr, next$)},
	{"nextIndex", "I", nullptr, $PRIVATE, $field(IdentityLinkedList$ListItr, nextIndex$)},
	{"expectedModCount", "I", nullptr, $PRIVATE, $field(IdentityLinkedList$ListItr, expectedModCount)},
	{}
};

$MethodInfo _IdentityLinkedList$ListItr_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/util/IdentityLinkedList;I)V", nullptr, 0, $method(static_cast<void(IdentityLinkedList$ListItr::*)($IdentityLinkedList*,int32_t)>(&IdentityLinkedList$ListItr::init$))},
	{"add", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC},
	{"checkForComodification", "()V", nullptr, $FINAL, $method(static_cast<void(IdentityLinkedList$ListItr::*)()>(&IdentityLinkedList$ListItr::checkForComodification))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"hasPrevious", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"nextIndex", "()I", nullptr, $PUBLIC},
	{"previous", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"previousIndex", "()I", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC},
	{}
};

$InnerClassInfo _IdentityLinkedList$ListItr_InnerClassesInfo_[] = {
	{"sun.awt.util.IdentityLinkedList$ListItr", "sun.awt.util.IdentityLinkedList", "ListItr", $PRIVATE},
	{}
};

$ClassInfo _IdentityLinkedList$ListItr_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.util.IdentityLinkedList$ListItr",
	"java.lang.Object",
	"java.util.ListIterator",
	_IdentityLinkedList$ListItr_FieldInfo_,
	_IdentityLinkedList$ListItr_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/ListIterator<TE;>;",
	nullptr,
	_IdentityLinkedList$ListItr_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.util.IdentityLinkedList"
};

$Object* allocate$IdentityLinkedList$ListItr($Class* clazz) {
	return $of($alloc(IdentityLinkedList$ListItr));
}

void IdentityLinkedList$ListItr::init$($IdentityLinkedList* this$0, int32_t index) {
	$set(this, this$0, this$0);
	$set(this, lastReturned, this->this$0->header);
	this->expectedModCount = $IdentityLinkedList::access$000(this->this$0);
	if (index < 0 || index > this$0->size$) {
		$throwNew($IndexOutOfBoundsException, $$str({"Index: "_s, $$str(index), ", Size: "_s, $$str(this$0->size$)}));
	}
	if (index < (this$0->size$ >> 1)) {
		$set(this, next$, $nc(this$0->header)->next);
		for (this->nextIndex$ = 0; this->nextIndex$ < index; ++this->nextIndex$) {
			$set(this, next$, $nc(this->next$)->next);
		}
	} else {
		$set(this, next$, this$0->header);
		for (this->nextIndex$ = this$0->size$; this->nextIndex$ > index; --this->nextIndex$) {
			$set(this, next$, $nc(this->next$)->previous);
		}
	}
}

bool IdentityLinkedList$ListItr::hasNext() {
	return this->nextIndex$ != this->this$0->size$;
}

$Object* IdentityLinkedList$ListItr::next() {
	checkForComodification();
	if (this->nextIndex$ == this->this$0->size$) {
		$throwNew($NoSuchElementException);
	}
	$set(this, lastReturned, this->next$);
	$set(this, next$, $nc(this->next$)->next);
	++this->nextIndex$;
	return $of($nc(this->lastReturned)->element);
}

bool IdentityLinkedList$ListItr::hasPrevious() {
	return this->nextIndex$ != 0;
}

$Object* IdentityLinkedList$ListItr::previous() {
	if (this->nextIndex$ == 0) {
		$throwNew($NoSuchElementException);
	}
	$set(this, lastReturned, ($assignField(this, next$, $nc(this->next$)->previous)));
	--this->nextIndex$;
	checkForComodification();
	return $of($nc(this->lastReturned)->element);
}

int32_t IdentityLinkedList$ListItr::nextIndex() {
	return this->nextIndex$;
}

int32_t IdentityLinkedList$ListItr::previousIndex() {
	return this->nextIndex$ - 1;
}

void IdentityLinkedList$ListItr::remove() {
	checkForComodification();
	$var($IdentityLinkedList$Entry, lastNext, $nc(this->lastReturned)->next);
	try {
		this->this$0->remove(this->lastReturned);
	} catch ($NoSuchElementException&) {
		$var($NoSuchElementException, e, $catch());
		$throwNew($IllegalStateException);
	}
	if (this->next$ == this->lastReturned) {
		$set(this, next$, lastNext);
	} else {
		--this->nextIndex$;
	}
	$set(this, lastReturned, this->this$0->header);
	++this->expectedModCount;
}

void IdentityLinkedList$ListItr::set(Object$* e) {
	if (this->lastReturned == this->this$0->header) {
		$throwNew($IllegalStateException);
	}
	checkForComodification();
	$set($nc(this->lastReturned), element, e);
}

void IdentityLinkedList$ListItr::add(Object$* e) {
	checkForComodification();
	$set(this, lastReturned, this->this$0->header);
	this->this$0->addBefore(e, this->next$);
	++this->nextIndex$;
	++this->expectedModCount;
}

void IdentityLinkedList$ListItr::checkForComodification() {
	if ($IdentityLinkedList::access$100(this->this$0) != this->expectedModCount) {
		$throwNew($ConcurrentModificationException);
	}
}

IdentityLinkedList$ListItr::IdentityLinkedList$ListItr() {
}

$Class* IdentityLinkedList$ListItr::load$($String* name, bool initialize) {
	$loadClass(IdentityLinkedList$ListItr, name, initialize, &_IdentityLinkedList$ListItr_ClassInfo_, allocate$IdentityLinkedList$ListItr);
	return class$;
}

$Class* IdentityLinkedList$ListItr::class$ = nullptr;

		} // util
	} // awt
} // sun