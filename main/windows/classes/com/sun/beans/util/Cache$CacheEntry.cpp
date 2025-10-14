#include <com/sun/beans/util/Cache$CacheEntry.h>

#include <com/sun/beans/util/Cache$Kind.h>
#include <com/sun/beans/util/Cache$Ref.h>
#include <com/sun/beans/util/Cache.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Cache = ::com::sun::beans::util::Cache;
using $Cache$Kind = ::com::sun::beans::util::Cache$Kind;
using $Cache$Ref = ::com::sun::beans::util::Cache$Ref;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;

namespace com {
	namespace sun {
		namespace beans {
			namespace util {

$FieldInfo _Cache$CacheEntry_FieldInfo_[] = {
	{"this$0", "Lcom/sun/beans/util/Cache;", nullptr, $FINAL | $SYNTHETIC, $field(Cache$CacheEntry, this$0)},
	{"hash", "I", nullptr, $PRIVATE | $FINAL, $field(Cache$CacheEntry, hash)},
	{"key", "Lcom/sun/beans/util/Cache$Ref;", "Lcom/sun/beans/util/Cache$Ref<TK;>;", $PRIVATE | $FINAL, $field(Cache$CacheEntry, key)},
	{"value", "Lcom/sun/beans/util/Cache$Ref;", "Lcom/sun/beans/util/Cache$Ref<TV;>;", $PRIVATE | $FINAL, $field(Cache$CacheEntry, value)},
	{"next", "Lcom/sun/beans/util/Cache$CacheEntry;", "Lcom/sun/beans/util/Cache<TK;TV;>.CacheEntry<TK;TV;>;", $PRIVATE | $VOLATILE, $field(Cache$CacheEntry, next)},
	{}
};

$MethodInfo _Cache$CacheEntry_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/beans/util/Cache;ILjava/lang/Object;Ljava/lang/Object;Lcom/sun/beans/util/Cache$CacheEntry;)V", "(ITK;TV;Lcom/sun/beans/util/Cache<TK;TV;>.CacheEntry<TK;TV;>;)V", $PRIVATE, $method(static_cast<void(Cache$CacheEntry::*)($Cache*,int32_t,Object$*,Object$*,Cache$CacheEntry*)>(&Cache$CacheEntry::init$))},
	{"matches", "(ILjava/lang/Object;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Cache$CacheEntry::*)(int32_t,Object$*)>(&Cache$CacheEntry::matches))},
	{"unlink", "()V", nullptr, $PRIVATE, $method(static_cast<void(Cache$CacheEntry::*)()>(&Cache$CacheEntry::unlink))},
	{}
};

$InnerClassInfo _Cache$CacheEntry_InnerClassesInfo_[] = {
	{"com.sun.beans.util.Cache$CacheEntry", "com.sun.beans.util.Cache", "CacheEntry", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _Cache$CacheEntry_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.util.Cache$CacheEntry",
	"java.lang.Object",
	nullptr,
	_Cache$CacheEntry_FieldInfo_,
	_Cache$CacheEntry_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_Cache$CacheEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.beans.util.Cache"
};

$Object* allocate$Cache$CacheEntry($Class* clazz) {
	return $of($alloc(Cache$CacheEntry));
}

void Cache$CacheEntry::init$($Cache* this$0, int32_t hash, Object$* key, Object$* value, Cache$CacheEntry* next) {
	$set(this, this$0, this$0);
	this->hash = hash;
	$set(this, key, this$0->keyKind->create(this, key, this$0->queue));
	$set(this, value, this$0->valueKind->create(this, value, this$0->queue));
	$set(this, next, next);
}

bool Cache$CacheEntry::matches(int32_t hash, Object$* object) {
	if (this->hash != hash) {
		return false;
	}
	$var($Object, key, $nc(this->key)->getReferent());
	return ($equals(key, object)) || !this->this$0->identity && (key != nullptr) && $of(key)->equals(object);
}

void Cache$CacheEntry::unlink() {
	$set(this, next, nullptr);
	$nc(this->key)->removeOwner();
	$nc(this->value)->removeOwner();
	--this->this$0->size;
}

Cache$CacheEntry::Cache$CacheEntry() {
}

$Class* Cache$CacheEntry::load$($String* name, bool initialize) {
	$loadClass(Cache$CacheEntry, name, initialize, &_Cache$CacheEntry_ClassInfo_, allocate$Cache$CacheEntry);
	return class$;
}

$Class* Cache$CacheEntry::class$ = nullptr;

			} // util
		} // beans
	} // sun
} // com