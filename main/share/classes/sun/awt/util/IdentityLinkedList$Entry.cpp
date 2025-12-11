#include <sun/awt/util/IdentityLinkedList$Entry.h>

#include <sun/awt/util/IdentityLinkedList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace util {

$FieldInfo _IdentityLinkedList$Entry_FieldInfo_[] = {
	{"element", "Ljava/lang/Object;", "TE;", 0, $field(IdentityLinkedList$Entry, element)},
	{"next", "Lsun/awt/util/IdentityLinkedList$Entry;", "Lsun/awt/util/IdentityLinkedList$Entry<TE;>;", 0, $field(IdentityLinkedList$Entry, next)},
	{"previous", "Lsun/awt/util/IdentityLinkedList$Entry;", "Lsun/awt/util/IdentityLinkedList$Entry<TE;>;", 0, $field(IdentityLinkedList$Entry, previous)},
	{}
};

$MethodInfo _IdentityLinkedList$Entry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Lsun/awt/util/IdentityLinkedList$Entry;Lsun/awt/util/IdentityLinkedList$Entry;)V", "(TE;Lsun/awt/util/IdentityLinkedList$Entry<TE;>;Lsun/awt/util/IdentityLinkedList$Entry<TE;>;)V", 0, $method(static_cast<void(IdentityLinkedList$Entry::*)(Object$*,IdentityLinkedList$Entry*,IdentityLinkedList$Entry*)>(&IdentityLinkedList$Entry::init$))},
	{}
};

$InnerClassInfo _IdentityLinkedList$Entry_InnerClassesInfo_[] = {
	{"sun.awt.util.IdentityLinkedList$Entry", "sun.awt.util.IdentityLinkedList", "Entry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IdentityLinkedList$Entry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.util.IdentityLinkedList$Entry",
	"java.lang.Object",
	nullptr,
	_IdentityLinkedList$Entry_FieldInfo_,
	_IdentityLinkedList$Entry_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_IdentityLinkedList$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.util.IdentityLinkedList"
};

$Object* allocate$IdentityLinkedList$Entry($Class* clazz) {
	return $of($alloc(IdentityLinkedList$Entry));
}

void IdentityLinkedList$Entry::init$(Object$* element, IdentityLinkedList$Entry* next, IdentityLinkedList$Entry* previous) {
	$set(this, element, element);
	$set(this, next, next);
	$set(this, previous, previous);
}

IdentityLinkedList$Entry::IdentityLinkedList$Entry() {
}

$Class* IdentityLinkedList$Entry::load$($String* name, bool initialize) {
	$loadClass(IdentityLinkedList$Entry, name, initialize, &_IdentityLinkedList$Entry_ClassInfo_, allocate$IdentityLinkedList$Entry);
	return class$;
}

$Class* IdentityLinkedList$Entry::class$ = nullptr;

		} // util
	} // awt
} // sun