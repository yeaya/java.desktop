#include <sun/awt/WeakIdentityHashMap$2.h>

#include <java/util/AbstractSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/awt/WeakIdentityHashMap$2$1.h>
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
using $WeakIdentityHashMap$2$1 = ::sun::awt::WeakIdentityHashMap$2$1;

namespace sun {
	namespace awt {

$FieldInfo _WeakIdentityHashMap$2_FieldInfo_[] = {
	{"this$0", "Lsun/awt/WeakIdentityHashMap;", nullptr, $FINAL | $SYNTHETIC, $field(WeakIdentityHashMap$2, this$0)},
	{}
};

$MethodInfo _WeakIdentityHashMap$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/WeakIdentityHashMap;)V", nullptr, 0, $method(static_cast<void(WeakIdentityHashMap$2::*)($WeakIdentityHashMap*)>(&WeakIdentityHashMap$2::init$))},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/util/Map$Entry<TK;TV;>;>;", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WeakIdentityHashMap$2_EnclosingMethodInfo_ = {
	"sun.awt.WeakIdentityHashMap",
	"entrySet",
	"()Ljava/util/Set;"
};

$InnerClassInfo _WeakIdentityHashMap$2_InnerClassesInfo_[] = {
	{"sun.awt.WeakIdentityHashMap$2", nullptr, nullptr, 0},
	{"sun.awt.WeakIdentityHashMap$2$1", nullptr, nullptr, 0},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _WeakIdentityHashMap$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.WeakIdentityHashMap$2",
	"java.util.AbstractSet",
	nullptr,
	_WeakIdentityHashMap$2_FieldInfo_,
	_WeakIdentityHashMap$2_MethodInfo_,
	"Ljava/util/AbstractSet<Ljava/util/Map$Entry<TK;TV;>;>;",
	&_WeakIdentityHashMap$2_EnclosingMethodInfo_,
	_WeakIdentityHashMap$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.WeakIdentityHashMap"
};

$Object* allocate$WeakIdentityHashMap$2($Class* clazz) {
	return $of($alloc(WeakIdentityHashMap$2));
}

void WeakIdentityHashMap$2::init$($WeakIdentityHashMap* this$0) {
	$set(this, this$0, this$0);
	$AbstractSet::init$();
}

$Iterator* WeakIdentityHashMap$2::iterator() {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, iterator, $nc($($nc($(this->this$0->getMap()))->entrySet()))->iterator());
	return $new($WeakIdentityHashMap$2$1, this, iterator);
}

int32_t WeakIdentityHashMap$2::size() {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc($(this->this$0->getMap()))->entrySet()))->size();
}

WeakIdentityHashMap$2::WeakIdentityHashMap$2() {
}

$Class* WeakIdentityHashMap$2::load$($String* name, bool initialize) {
	$loadClass(WeakIdentityHashMap$2, name, initialize, &_WeakIdentityHashMap$2_ClassInfo_, allocate$WeakIdentityHashMap$2);
	return class$;
}

$Class* WeakIdentityHashMap$2::class$ = nullptr;

	} // awt
} // sun