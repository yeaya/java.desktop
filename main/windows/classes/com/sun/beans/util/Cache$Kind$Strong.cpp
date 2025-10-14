#include <com/sun/beans/util/Cache$Kind$Strong.h>

#include <com/sun/beans/util/Cache$Kind.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Cache$Kind = ::com::sun::beans::util::Cache$Kind;
using $Cache$Ref = ::com::sun::beans::util::Cache$Ref;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace util {

$FieldInfo _Cache$Kind$Strong_FieldInfo_[] = {
	{"owner", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Cache$Kind$Strong, owner)},
	{"referent", "Ljava/lang/Object;", "TT;", $PRIVATE | $FINAL, $field(Cache$Kind$Strong, referent)},
	{}
};

$MethodInfo _Cache$Kind$Strong_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(Ljava/lang/Object;TT;)V", $PRIVATE, $method(static_cast<void(Cache$Kind$Strong::*)(Object$*,Object$*)>(&Cache$Kind$Strong::init$))},
	{"getOwner", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getReferent", "()Ljava/lang/Object;", "()TT;", $PUBLIC},
	{"isStale", "()Z", nullptr, $PUBLIC},
	{"removeOwner", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Cache$Kind$Strong_InnerClassesInfo_[] = {
	{"com.sun.beans.util.Cache$Kind", "com.sun.beans.util.Cache", "Kind", $PUBLIC | $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.beans.util.Cache$Kind$Strong", "com.sun.beans.util.Cache$Kind", "Strong", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.beans.util.Cache$Ref", "com.sun.beans.util.Cache", "Ref", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Cache$Kind$Strong_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.util.Cache$Kind$Strong",
	"java.lang.Object",
	"com.sun.beans.util.Cache$Ref",
	_Cache$Kind$Strong_FieldInfo_,
	_Cache$Kind$Strong_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Lcom/sun/beans/util/Cache$Ref<TT;>;",
	nullptr,
	_Cache$Kind$Strong_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.beans.util.Cache"
};

$Object* allocate$Cache$Kind$Strong($Class* clazz) {
	return $of($alloc(Cache$Kind$Strong));
}

void Cache$Kind$Strong::init$(Object$* owner, Object$* referent) {
	$set(this, owner, owner);
	$set(this, referent, referent);
}

$Object* Cache$Kind$Strong::getOwner() {
	return $of(this->owner);
}

$Object* Cache$Kind$Strong::getReferent() {
	return $of(this->referent);
}

bool Cache$Kind$Strong::isStale() {
	return false;
}

void Cache$Kind$Strong::removeOwner() {
	$set(this, owner, nullptr);
}

Cache$Kind$Strong::Cache$Kind$Strong() {
}

$Class* Cache$Kind$Strong::load$($String* name, bool initialize) {
	$loadClass(Cache$Kind$Strong, name, initialize, &_Cache$Kind$Strong_ClassInfo_, allocate$Cache$Kind$Strong);
	return class$;
}

$Class* Cache$Kind$Strong::class$ = nullptr;

			} // util
		} // beans
	} // sun
} // com