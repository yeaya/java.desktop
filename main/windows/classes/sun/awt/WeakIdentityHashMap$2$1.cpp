#include <sun/awt/WeakIdentityHashMap$2$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <sun/awt/WeakIdentityHashMap$2$1$1.h>
#include <sun/awt/WeakIdentityHashMap$2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $WeakIdentityHashMap$2 = ::sun::awt::WeakIdentityHashMap$2;
using $WeakIdentityHashMap$2$1$1 = ::sun::awt::WeakIdentityHashMap$2$1$1;

namespace sun {
	namespace awt {

$FieldInfo _WeakIdentityHashMap$2$1_FieldInfo_[] = {
	{"this$1", "Lsun/awt/WeakIdentityHashMap$2;", nullptr, $FINAL | $SYNTHETIC, $field(WeakIdentityHashMap$2$1, this$1)},
	{"val$iterator", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(WeakIdentityHashMap$2$1, val$iterator)},
	{}
};

$MethodInfo _WeakIdentityHashMap$2$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/WeakIdentityHashMap$2;Ljava/util/Iterator;)V", "()V", 0, $method(static_cast<void(WeakIdentityHashMap$2$1::*)($WeakIdentityHashMap$2*,$Iterator*)>(&WeakIdentityHashMap$2$1::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<TK;TV;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _WeakIdentityHashMap$2$1_EnclosingMethodInfo_ = {
	"sun.awt.WeakIdentityHashMap$2",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _WeakIdentityHashMap$2$1_InnerClassesInfo_[] = {
	{"sun.awt.WeakIdentityHashMap$2", nullptr, nullptr, 0},
	{"sun.awt.WeakIdentityHashMap$2$1", nullptr, nullptr, 0},
	{"sun.awt.WeakIdentityHashMap$2$1$1", nullptr, nullptr, 0},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _WeakIdentityHashMap$2$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.WeakIdentityHashMap$2$1",
	"java.lang.Object",
	"java.util.Iterator",
	_WeakIdentityHashMap$2$1_FieldInfo_,
	_WeakIdentityHashMap$2$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/util/Map$Entry<TK;TV;>;>;",
	&_WeakIdentityHashMap$2$1_EnclosingMethodInfo_,
	_WeakIdentityHashMap$2$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.WeakIdentityHashMap"
};

$Object* allocate$WeakIdentityHashMap$2$1($Class* clazz) {
	return $of($alloc(WeakIdentityHashMap$2$1));
}

void WeakIdentityHashMap$2$1::init$($WeakIdentityHashMap$2* this$1, $Iterator* val$iterator) {
	$set(this, this$1, this$1);
	$set(this, val$iterator, val$iterator);
}

bool WeakIdentityHashMap$2$1::hasNext() {
	return $nc(this->val$iterator)->hasNext();
}

$Object* WeakIdentityHashMap$2$1::next() {
	return $of($new($WeakIdentityHashMap$2$1$1, this));
}

WeakIdentityHashMap$2$1::WeakIdentityHashMap$2$1() {
}

$Class* WeakIdentityHashMap$2$1::load$($String* name, bool initialize) {
	$loadClass(WeakIdentityHashMap$2$1, name, initialize, &_WeakIdentityHashMap$2$1_ClassInfo_, allocate$WeakIdentityHashMap$2$1);
	return class$;
}

$Class* WeakIdentityHashMap$2$1::class$ = nullptr;

	} // awt
} // sun