#include <sun/awt/util/IdentityLinkedList$DescendingIterator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/util/IdentityLinkedList$ListItr.h>
#include <sun/awt/util/IdentityLinkedList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $IdentityLinkedList = ::sun::awt::util::IdentityLinkedList;
using $IdentityLinkedList$ListItr = ::sun::awt::util::IdentityLinkedList$ListItr;

namespace sun {
	namespace awt {
		namespace util {

$FieldInfo _IdentityLinkedList$DescendingIterator_FieldInfo_[] = {
	{"this$0", "Lsun/awt/util/IdentityLinkedList;", nullptr, $FINAL | $SYNTHETIC, $field(IdentityLinkedList$DescendingIterator, this$0)},
	{"itr", "Lsun/awt/util/IdentityLinkedList$ListItr;", "Lsun/awt/util/IdentityLinkedList<TE;>.ListItr;", $FINAL, $field(IdentityLinkedList$DescendingIterator, itr)},
	{}
};

$MethodInfo _IdentityLinkedList$DescendingIterator_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/util/IdentityLinkedList;)V", nullptr, $PRIVATE, $method(static_cast<void(IdentityLinkedList$DescendingIterator::*)($IdentityLinkedList*)>(&IdentityLinkedList$DescendingIterator::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _IdentityLinkedList$DescendingIterator_InnerClassesInfo_[] = {
	{"sun.awt.util.IdentityLinkedList$DescendingIterator", "sun.awt.util.IdentityLinkedList", "DescendingIterator", $PRIVATE},
	{}
};

$ClassInfo _IdentityLinkedList$DescendingIterator_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.util.IdentityLinkedList$DescendingIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_IdentityLinkedList$DescendingIterator_FieldInfo_,
	_IdentityLinkedList$DescendingIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
	nullptr,
	_IdentityLinkedList$DescendingIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.util.IdentityLinkedList"
};

$Object* allocate$IdentityLinkedList$DescendingIterator($Class* clazz) {
	return $of($alloc(IdentityLinkedList$DescendingIterator));
}

void IdentityLinkedList$DescendingIterator::init$($IdentityLinkedList* this$0) {
	$set(this, this$0, this$0);
	$set(this, itr, $new($IdentityLinkedList$ListItr, this->this$0, this->this$0->size()));
}

bool IdentityLinkedList$DescendingIterator::hasNext() {
	return $nc(this->itr)->hasPrevious();
}

$Object* IdentityLinkedList$DescendingIterator::next() {
	return $of($nc(this->itr)->previous());
}

void IdentityLinkedList$DescendingIterator::remove() {
	$nc(this->itr)->remove();
}

IdentityLinkedList$DescendingIterator::IdentityLinkedList$DescendingIterator() {
}

$Class* IdentityLinkedList$DescendingIterator::load$($String* name, bool initialize) {
	$loadClass(IdentityLinkedList$DescendingIterator, name, initialize, &_IdentityLinkedList$DescendingIterator_ClassInfo_, allocate$IdentityLinkedList$DescendingIterator);
	return class$;
}

$Class* IdentityLinkedList$DescendingIterator::class$ = nullptr;

		} // util
	} // awt
} // sun