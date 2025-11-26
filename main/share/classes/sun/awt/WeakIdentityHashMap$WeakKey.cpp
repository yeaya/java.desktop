#include <sun/awt/WeakIdentityHashMap$WeakKey.h>

#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <sun/awt/WeakIdentityHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;
using $WeakIdentityHashMap = ::sun::awt::WeakIdentityHashMap;

namespace sun {
	namespace awt {

$FieldInfo _WeakIdentityHashMap$WeakKey_FieldInfo_[] = {
	{"hash", "I", nullptr, $PRIVATE | $FINAL, $field(WeakIdentityHashMap$WeakKey, hash)},
	{}
};

$MethodInfo _WeakIdentityHashMap$WeakKey_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", "(TK;Ljava/lang/ref/ReferenceQueue<TK;>;)V", 0, $method(static_cast<void(WeakIdentityHashMap$WeakKey::*)(Object$*,$ReferenceQueue*)>(&WeakIdentityHashMap$WeakKey::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WeakIdentityHashMap$WeakKey_InnerClassesInfo_[] = {
	{"sun.awt.WeakIdentityHashMap$WeakKey", "sun.awt.WeakIdentityHashMap", "WeakKey", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WeakIdentityHashMap$WeakKey_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.WeakIdentityHashMap$WeakKey",
	"java.lang.ref.WeakReference",
	nullptr,
	_WeakIdentityHashMap$WeakKey_FieldInfo_,
	_WeakIdentityHashMap$WeakKey_MethodInfo_,
	"<K:Ljava/lang/Object;>Ljava/lang/ref/WeakReference<TK;>;",
	nullptr,
	_WeakIdentityHashMap$WeakKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.WeakIdentityHashMap"
};

$Object* allocate$WeakIdentityHashMap$WeakKey($Class* clazz) {
	return $of($alloc(WeakIdentityHashMap$WeakKey));
}

void WeakIdentityHashMap$WeakKey::init$(Object$* key, $ReferenceQueue* q) {
	$WeakReference::init$(key, q);
	this->hash = $System::identityHashCode(key);
}

bool WeakIdentityHashMap$WeakKey::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	} else if ($instanceOf(WeakIdentityHashMap$WeakKey, o)) {
		return $equals(get(), $nc(($cast(WeakIdentityHashMap$WeakKey, o)))->get());
	} else {
		return false;
	}
}

int32_t WeakIdentityHashMap$WeakKey::hashCode() {
	return this->hash;
}

WeakIdentityHashMap$WeakKey::WeakIdentityHashMap$WeakKey() {
}

$Class* WeakIdentityHashMap$WeakKey::load$($String* name, bool initialize) {
	$loadClass(WeakIdentityHashMap$WeakKey, name, initialize, &_WeakIdentityHashMap$WeakKey_ClassInfo_, allocate$WeakIdentityHashMap$WeakKey);
	return class$;
}

$Class* WeakIdentityHashMap$WeakKey::class$ = nullptr;

	} // awt
} // sun