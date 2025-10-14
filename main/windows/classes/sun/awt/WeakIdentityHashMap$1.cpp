#include <sun/awt/WeakIdentityHashMap$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/awt/WeakIdentityHashMap$1$1.h>
#include <sun/awt/WeakIdentityHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $WeakIdentityHashMap = ::sun::awt::WeakIdentityHashMap;
using $WeakIdentityHashMap$1$1 = ::sun::awt::WeakIdentityHashMap$1$1;

namespace sun {
	namespace awt {

$FieldInfo _WeakIdentityHashMap$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/WeakIdentityHashMap;", nullptr, $FINAL | $SYNTHETIC, $field(WeakIdentityHashMap$1, this$0)},
	{}
};

$MethodInfo _WeakIdentityHashMap$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/WeakIdentityHashMap;)V", nullptr, 0, $method(static_cast<void(WeakIdentityHashMap$1::*)($WeakIdentityHashMap*)>(&WeakIdentityHashMap$1::init$))},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TK;>;", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WeakIdentityHashMap$1_EnclosingMethodInfo_ = {
	"sun.awt.WeakIdentityHashMap",
	"keySet",
	"()Ljava/util/Set;"
};

$InnerClassInfo _WeakIdentityHashMap$1_InnerClassesInfo_[] = {
	{"sun.awt.WeakIdentityHashMap$1", nullptr, nullptr, 0},
	{"sun.awt.WeakIdentityHashMap$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WeakIdentityHashMap$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.WeakIdentityHashMap$1",
	"java.util.AbstractSet",
	nullptr,
	_WeakIdentityHashMap$1_FieldInfo_,
	_WeakIdentityHashMap$1_MethodInfo_,
	"Ljava/util/AbstractSet<TK;>;",
	&_WeakIdentityHashMap$1_EnclosingMethodInfo_,
	_WeakIdentityHashMap$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.WeakIdentityHashMap"
};

$Object* allocate$WeakIdentityHashMap$1($Class* clazz) {
	return $of($alloc(WeakIdentityHashMap$1));
}

void WeakIdentityHashMap$1::init$($WeakIdentityHashMap* this$0) {
	$set(this, this$0, this$0);
	$AbstractSet::init$();
}

$Iterator* WeakIdentityHashMap$1::iterator() {
	return $new($WeakIdentityHashMap$1$1, this);
}

int32_t WeakIdentityHashMap$1::size() {
	return $nc($($nc($(this->this$0->getMap()))->keySet()))->size();
}

WeakIdentityHashMap$1::WeakIdentityHashMap$1() {
}

$Class* WeakIdentityHashMap$1::load$($String* name, bool initialize) {
	$loadClass(WeakIdentityHashMap$1, name, initialize, &_WeakIdentityHashMap$1_ClassInfo_, allocate$WeakIdentityHashMap$1);
	return class$;
}

$Class* WeakIdentityHashMap$1::class$ = nullptr;

	} // awt
} // sun