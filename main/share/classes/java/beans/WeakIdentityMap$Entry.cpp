#include <java/beans/WeakIdentityMap$Entry.h>

#include <java/beans/WeakIdentityMap.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;

namespace java {
	namespace beans {

$FieldInfo _WeakIdentityMap$Entry_FieldInfo_[] = {
	{"hash", "I", nullptr, $PRIVATE | $FINAL, $field(WeakIdentityMap$Entry, hash)},
	{"value", "Ljava/lang/Object;", "TT;", $PRIVATE | $VOLATILE, $field(WeakIdentityMap$Entry, value)},
	{"next", "Ljava/beans/WeakIdentityMap$Entry;", "Ljava/beans/WeakIdentityMap$Entry<TT;>;", $PRIVATE | $VOLATILE, $field(WeakIdentityMap$Entry, next)},
	{}
};

$MethodInfo _WeakIdentityMap$Entry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;ILjava/lang/Object;Ljava/lang/ref/ReferenceQueue;Ljava/beans/WeakIdentityMap$Entry;)V", "(Ljava/lang/Object;ITT;Ljava/lang/ref/ReferenceQueue<Ljava/lang/Object;>;Ljava/beans/WeakIdentityMap$Entry<TT;>;)V", 0, $method(static_cast<void(WeakIdentityMap$Entry::*)(Object$*,int32_t,Object$*,$ReferenceQueue*,WeakIdentityMap$Entry*)>(&WeakIdentityMap$Entry::init$))},
	{"isMatched", "(Ljava/lang/Object;I)Z", nullptr, 0},
	{}
};

$InnerClassInfo _WeakIdentityMap$Entry_InnerClassesInfo_[] = {
	{"java.beans.WeakIdentityMap$Entry", "java.beans.WeakIdentityMap", "Entry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WeakIdentityMap$Entry_ClassInfo_ = {
	$ACC_SUPER,
	"java.beans.WeakIdentityMap$Entry",
	"java.lang.ref.WeakReference",
	nullptr,
	_WeakIdentityMap$Entry_FieldInfo_,
	_WeakIdentityMap$Entry_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/ref/WeakReference<Ljava/lang/Object;>;",
	nullptr,
	_WeakIdentityMap$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.WeakIdentityMap"
};

$Object* allocate$WeakIdentityMap$Entry($Class* clazz) {
	return $of($alloc(WeakIdentityMap$Entry));
}

void WeakIdentityMap$Entry::init$(Object$* key, int32_t hash, Object$* value, $ReferenceQueue* queue, WeakIdentityMap$Entry* next) {
	$WeakReference::init$(key, queue);
	this->hash = hash;
	$set(this, value, value);
	$set(this, next, next);
}

bool WeakIdentityMap$Entry::isMatched(Object$* key, int32_t hash) {
	return (this->hash == hash) && ($equals(key, get()));
}

WeakIdentityMap$Entry::WeakIdentityMap$Entry() {
}

$Class* WeakIdentityMap$Entry::load$($String* name, bool initialize) {
	$loadClass(WeakIdentityMap$Entry, name, initialize, &_WeakIdentityMap$Entry_ClassInfo_, allocate$WeakIdentityMap$Entry);
	return class$;
}

$Class* WeakIdentityMap$Entry::class$ = nullptr;

	} // beans
} // java