#include <javax/swing/plaf/nimbus/NimbusStyle$CacheKey.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/nimbus/NimbusStyle.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NimbusStyle = ::javax::swing::plaf::nimbus::NimbusStyle;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _NimbusStyle$CacheKey_FieldInfo_[] = {
	{"key", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NimbusStyle$CacheKey, key)},
	{"xstate", "I", nullptr, $PRIVATE, $field(NimbusStyle$CacheKey, xstate)},
	{}
};

$MethodInfo _NimbusStyle$CacheKey_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;I)V", nullptr, 0, $method(static_cast<void(NimbusStyle$CacheKey::*)(Object$*,int32_t)>(&NimbusStyle$CacheKey::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"init", "(Ljava/lang/Object;I)V", nullptr, 0, $method(static_cast<void(NimbusStyle$CacheKey::*)(Object$*,int32_t)>(&NimbusStyle$CacheKey::init))},
	{}
};

$InnerClassInfo _NimbusStyle$CacheKey_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.NimbusStyle$CacheKey", "javax.swing.plaf.nimbus.NimbusStyle", "CacheKey", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _NimbusStyle$CacheKey_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.NimbusStyle$CacheKey",
	"java.lang.Object",
	nullptr,
	_NimbusStyle$CacheKey_FieldInfo_,
	_NimbusStyle$CacheKey_MethodInfo_,
	nullptr,
	nullptr,
	_NimbusStyle$CacheKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.NimbusStyle"
};

$Object* allocate$NimbusStyle$CacheKey($Class* clazz) {
	return $of($alloc(NimbusStyle$CacheKey));
}

void NimbusStyle$CacheKey::init$(Object$* key, int32_t xstate) {
	init(key, xstate);
}

void NimbusStyle$CacheKey::init(Object$* key, int32_t xstate) {
	$set(this, key, $nc($of(key))->toString());
	this->xstate = xstate;
}

bool NimbusStyle$CacheKey::equals(Object$* obj) {
	$var(NimbusStyle$CacheKey, other, $cast(NimbusStyle$CacheKey, obj));
	if (obj == nullptr) {
		return false;
	}
	if (this->xstate != $nc(other)->xstate) {
		return false;
	}
	if (!$nc(this->key)->equals($nc(other)->key)) {
		return false;
	}
	return true;
}

int32_t NimbusStyle$CacheKey::hashCode() {
	int32_t hash = 3;
	hash = 29 * hash + $nc(this->key)->hashCode();
	hash = 29 * hash + this->xstate;
	return hash;
}

NimbusStyle$CacheKey::NimbusStyle$CacheKey() {
}

$Class* NimbusStyle$CacheKey::load$($String* name, bool initialize) {
	$loadClass(NimbusStyle$CacheKey, name, initialize, &_NimbusStyle$CacheKey_ClassInfo_, allocate$NimbusStyle$CacheKey);
	return class$;
}

$Class* NimbusStyle$CacheKey::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax