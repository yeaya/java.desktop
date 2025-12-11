#include <sun/awt/WeakIdentityHashMap$1$1.h>

#include <java/lang/ref/Reference.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Set.h>
#include <sun/awt/WeakIdentityHashMap$1.h>
#include <sun/awt/WeakIdentityHashMap$WeakKey.h>
#include <sun/awt/WeakIdentityHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Set = ::java::util::Set;
using $WeakIdentityHashMap = ::sun::awt::WeakIdentityHashMap;
using $WeakIdentityHashMap$1 = ::sun::awt::WeakIdentityHashMap$1;
using $WeakIdentityHashMap$WeakKey = ::sun::awt::WeakIdentityHashMap$WeakKey;

namespace sun {
	namespace awt {

$FieldInfo _WeakIdentityHashMap$1$1_FieldInfo_[] = {
	{"this$1", "Lsun/awt/WeakIdentityHashMap$1;", nullptr, $FINAL | $SYNTHETIC, $field(WeakIdentityHashMap$1$1, this$1)},
	{"next", "Ljava/lang/Object;", "TK;", $PRIVATE, $field(WeakIdentityHashMap$1$1, next$)},
	{"iterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<Lsun/awt/WeakIdentityHashMap$WeakKey<TK;>;>;", 0, $field(WeakIdentityHashMap$1$1, iterator)},
	{}
};

$MethodInfo _WeakIdentityHashMap$1$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/WeakIdentityHashMap$1;)V", nullptr, 0, $method(static_cast<void(WeakIdentityHashMap$1$1::*)($WeakIdentityHashMap$1*)>(&WeakIdentityHashMap$1$1::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TK;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _WeakIdentityHashMap$1$1_EnclosingMethodInfo_ = {
	"sun.awt.WeakIdentityHashMap$1",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _WeakIdentityHashMap$1$1_InnerClassesInfo_[] = {
	{"sun.awt.WeakIdentityHashMap$1", nullptr, nullptr, 0},
	{"sun.awt.WeakIdentityHashMap$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WeakIdentityHashMap$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.WeakIdentityHashMap$1$1",
	"java.lang.Object",
	"java.util.Iterator",
	_WeakIdentityHashMap$1$1_FieldInfo_,
	_WeakIdentityHashMap$1$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TK;>;",
	&_WeakIdentityHashMap$1$1_EnclosingMethodInfo_,
	_WeakIdentityHashMap$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.WeakIdentityHashMap"
};

$Object* allocate$WeakIdentityHashMap$1$1($Class* clazz) {
	return $of($alloc(WeakIdentityHashMap$1$1));
}

void WeakIdentityHashMap$1$1::init$($WeakIdentityHashMap$1* this$1) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$1, this$1);
	$set(this, iterator, $nc($($nc($($nc(this->this$1->this$0)->getMap()))->keySet()))->iterator());
}

bool WeakIdentityHashMap$1$1::hasNext() {
	$useLocalCurrentObjectStackCache();
	while ($nc(this->iterator)->hasNext()) {
		if (($set(this, next$, $nc(($cast($WeakIdentityHashMap$WeakKey, $($nc(this->iterator)->next()))))->get())) != nullptr) {
			return true;
		}
	}
	return false;
}

$Object* WeakIdentityHashMap$1$1::next() {
	if (this->next$ == nullptr && !hasNext()) {
		$throwNew($NoSuchElementException);
	}
	$var($Object, ret, this->next$);
	$set(this, next$, nullptr);
	return $of(ret);
}

WeakIdentityHashMap$1$1::WeakIdentityHashMap$1$1() {
}

$Class* WeakIdentityHashMap$1$1::load$($String* name, bool initialize) {
	$loadClass(WeakIdentityHashMap$1$1, name, initialize, &_WeakIdentityHashMap$1$1_ClassInfo_, allocate$WeakIdentityHashMap$1$1);
	return class$;
}

$Class* WeakIdentityHashMap$1$1::class$ = nullptr;

	} // awt
} // sun