#include <sun/awt/SoftCache$EntrySet.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/awt/SoftCache$Entry.h>
#include <sun/awt/SoftCache$EntrySet$1.h>
#include <sun/awt/SoftCache.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $SoftCache = ::sun::awt::SoftCache;
using $SoftCache$Entry = ::sun::awt::SoftCache$Entry;
using $SoftCache$EntrySet$1 = ::sun::awt::SoftCache$EntrySet$1;

namespace sun {
	namespace awt {

$FieldInfo _SoftCache$EntrySet_FieldInfo_[] = {
	{"this$0", "Lsun/awt/SoftCache;", nullptr, $FINAL | $SYNTHETIC, $field(SoftCache$EntrySet, this$0)},
	{"hashEntries", "Ljava/util/Set;", "Ljava/util/Set<Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;>;", 0, $field(SoftCache$EntrySet, hashEntries)},
	{}
};

$MethodInfo _SoftCache$EntrySet_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/SoftCache;)V", nullptr, $PRIVATE, $method(static_cast<void(SoftCache$EntrySet::*)($SoftCache*)>(&SoftCache$EntrySet::init$))},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;>;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SoftCache$EntrySet_InnerClassesInfo_[] = {
	{"sun.awt.SoftCache$EntrySet", "sun.awt.SoftCache", "EntrySet", $PRIVATE},
	{"sun.awt.SoftCache$EntrySet$1", nullptr, nullptr, 0},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SoftCache$EntrySet_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.SoftCache$EntrySet",
	"java.util.AbstractSet",
	nullptr,
	_SoftCache$EntrySet_FieldInfo_,
	_SoftCache$EntrySet_MethodInfo_,
	"Ljava/util/AbstractSet<Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;>;",
	nullptr,
	_SoftCache$EntrySet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.SoftCache"
};

$Object* allocate$SoftCache$EntrySet($Class* clazz) {
	return $of($alloc(SoftCache$EntrySet));
}

void SoftCache$EntrySet::init$($SoftCache* this$0) {
	$set(this, this$0, this$0);
	$AbstractSet::init$();
	$set(this, hashEntries, $nc(this->this$0->hash)->entrySet());
}

$Iterator* SoftCache$EntrySet::iterator() {
	return $new($SoftCache$EntrySet$1, this);
}

bool SoftCache$EntrySet::isEmpty() {
	return !($nc($(iterator()))->hasNext());
}

int32_t SoftCache$EntrySet::size() {
	int32_t j = 0;
	{
		$var($Iterator, i, iterator());
		for (; $nc(i)->hasNext(); $nc(i)->next()) {
			++j;
		}
	}
	return j;
}

bool SoftCache$EntrySet::remove(Object$* o) {
	this->this$0->processQueue();
	if ($instanceOf($SoftCache$Entry, o)) {
		return $nc(this->hashEntries)->remove($nc(($cast($SoftCache$Entry, o)))->ent);
	} else {
		return false;
	}
}

SoftCache$EntrySet::SoftCache$EntrySet() {
}

$Class* SoftCache$EntrySet::load$($String* name, bool initialize) {
	$loadClass(SoftCache$EntrySet, name, initialize, &_SoftCache$EntrySet_ClassInfo_, allocate$SoftCache$EntrySet);
	return class$;
}

$Class* SoftCache$EntrySet::class$ = nullptr;

	} // awt
} // sun