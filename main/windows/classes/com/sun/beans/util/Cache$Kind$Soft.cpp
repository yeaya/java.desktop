#include <com/sun/beans/util/Cache$Kind$Soft.h>

#include <com/sun/beans/util/Cache$Kind.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/SoftReference.h>
#include <jcpp.h>

using $Cache$Kind = ::com::sun::beans::util::Cache$Kind;
using $Cache$Ref = ::com::sun::beans::util::Cache$Ref;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $SoftReference = ::java::lang::ref::SoftReference;

namespace com {
	namespace sun {
		namespace beans {
			namespace util {

$FieldInfo _Cache$Kind$Soft_FieldInfo_[] = {
	{"owner", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Cache$Kind$Soft, owner)},
	{}
};

$MethodInfo _Cache$Kind$Soft_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", "(Ljava/lang/Object;TT;Ljava/lang/ref/ReferenceQueue<-TT;>;)V", $PRIVATE, $method(static_cast<void(Cache$Kind$Soft::*)(Object$*,Object$*,$ReferenceQueue*)>(&Cache$Kind$Soft::init$))},
	{"getOwner", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getReferent", "()Ljava/lang/Object;", "()TT;", $PUBLIC},
	{"isStale", "()Z", nullptr, $PUBLIC},
	{"removeOwner", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Cache$Kind$Soft_InnerClassesInfo_[] = {
	{"com.sun.beans.util.Cache$Kind", "com.sun.beans.util.Cache", "Kind", $PUBLIC | $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.beans.util.Cache$Kind$Soft", "com.sun.beans.util.Cache$Kind", "Soft", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.beans.util.Cache$Ref", "com.sun.beans.util.Cache", "Ref", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Cache$Kind$Soft_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.util.Cache$Kind$Soft",
	"java.lang.ref.SoftReference",
	"com.sun.beans.util.Cache$Ref",
	_Cache$Kind$Soft_FieldInfo_,
	_Cache$Kind$Soft_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/ref/SoftReference<TT;>;Lcom/sun/beans/util/Cache$Ref<TT;>;",
	nullptr,
	_Cache$Kind$Soft_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.beans.util.Cache"
};

$Object* allocate$Cache$Kind$Soft($Class* clazz) {
	return $of($alloc(Cache$Kind$Soft));
}

$Object* Cache$Kind$Soft::clone() {
	 return this->$SoftReference::clone();
}

int32_t Cache$Kind$Soft::hashCode() {
	 return this->$SoftReference::hashCode();
}

bool Cache$Kind$Soft::equals(Object$* arg0) {
	 return this->$SoftReference::equals(arg0);
}

$String* Cache$Kind$Soft::toString() {
	 return this->$SoftReference::toString();
}

void Cache$Kind$Soft::finalize() {
	this->$SoftReference::finalize();
}

void Cache$Kind$Soft::init$(Object$* owner, Object$* referent, $ReferenceQueue* queue) {
	$SoftReference::init$(referent, queue);
	$set(this, owner, owner);
}

$Object* Cache$Kind$Soft::getOwner() {
	return $of(this->owner);
}

$Object* Cache$Kind$Soft::getReferent() {
	return $of(get());
}

bool Cache$Kind$Soft::isStale() {
	return nullptr == get();
}

void Cache$Kind$Soft::removeOwner() {
	$set(this, owner, nullptr);
}

Cache$Kind$Soft::Cache$Kind$Soft() {
}

$Class* Cache$Kind$Soft::load$($String* name, bool initialize) {
	$loadClass(Cache$Kind$Soft, name, initialize, &_Cache$Kind$Soft_ClassInfo_, allocate$Cache$Kind$Soft);
	return class$;
}

$Class* Cache$Kind$Soft::class$ = nullptr;

			} // util
		} // beans
	} // sun
} // com