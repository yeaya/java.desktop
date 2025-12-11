#include <com/sun/beans/util/Cache$Kind$Weak.h>

#include <com/sun/beans/util/Cache$Kind.h>
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

namespace com {
	namespace sun {
		namespace beans {
			namespace util {

$FieldInfo _Cache$Kind$Weak_FieldInfo_[] = {
	{"owner", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Cache$Kind$Weak, owner)},
	{}
};

$MethodInfo _Cache$Kind$Weak_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", "(Ljava/lang/Object;TT;Ljava/lang/ref/ReferenceQueue<-TT;>;)V", $PRIVATE, $method(static_cast<void(Cache$Kind$Weak::*)(Object$*,Object$*,$ReferenceQueue*)>(&Cache$Kind$Weak::init$))},
	{"getOwner", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getReferent", "()Ljava/lang/Object;", "()TT;", $PUBLIC},
	{"isStale", "()Z", nullptr, $PUBLIC},
	{"removeOwner", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Cache$Kind$Weak_InnerClassesInfo_[] = {
	{"com.sun.beans.util.Cache$Kind", "com.sun.beans.util.Cache", "Kind", $PUBLIC | $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.beans.util.Cache$Kind$Weak", "com.sun.beans.util.Cache$Kind", "Weak", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.beans.util.Cache$Ref", "com.sun.beans.util.Cache", "Ref", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Cache$Kind$Weak_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.util.Cache$Kind$Weak",
	"java.lang.ref.WeakReference",
	"com.sun.beans.util.Cache$Ref",
	_Cache$Kind$Weak_FieldInfo_,
	_Cache$Kind$Weak_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/ref/WeakReference<TT;>;Lcom/sun/beans/util/Cache$Ref<TT;>;",
	nullptr,
	_Cache$Kind$Weak_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.beans.util.Cache"
};

$Object* allocate$Cache$Kind$Weak($Class* clazz) {
	return $of($alloc(Cache$Kind$Weak));
}

$Object* Cache$Kind$Weak::clone() {
	 return this->$WeakReference::clone();
}

int32_t Cache$Kind$Weak::hashCode() {
	 return this->$WeakReference::hashCode();
}

bool Cache$Kind$Weak::equals(Object$* arg0) {
	 return this->$WeakReference::equals(arg0);
}

$String* Cache$Kind$Weak::toString() {
	 return this->$WeakReference::toString();
}

void Cache$Kind$Weak::finalize() {
	this->$WeakReference::finalize();
}

void Cache$Kind$Weak::init$(Object$* owner, Object$* referent, $ReferenceQueue* queue) {
	$WeakReference::init$(referent, queue);
	$set(this, owner, owner);
}

$Object* Cache$Kind$Weak::getOwner() {
	return $of(this->owner);
}

$Object* Cache$Kind$Weak::getReferent() {
	return $of(get());
}

bool Cache$Kind$Weak::isStale() {
	return nullptr == get();
}

void Cache$Kind$Weak::removeOwner() {
	$set(this, owner, nullptr);
}

Cache$Kind$Weak::Cache$Kind$Weak() {
}

$Class* Cache$Kind$Weak::load$($String* name, bool initialize) {
	$loadClass(Cache$Kind$Weak, name, initialize, &_Cache$Kind$Weak_ClassInfo_, allocate$Cache$Kind$Weak);
	return class$;
}

$Class* Cache$Kind$Weak::class$ = nullptr;

			} // util
		} // beans
	} // sun
} // com