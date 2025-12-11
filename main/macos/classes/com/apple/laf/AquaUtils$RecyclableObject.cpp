#include <com/apple/laf/AquaUtils$RecyclableObject.h>

#include <com/apple/laf/AquaUtils.h>
#include <java/lang/ref/SoftReference.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaUtils$RecyclableObject_FieldInfo_[] = {
	{"objectRef", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<TT;>;", $PRIVATE, $field(AquaUtils$RecyclableObject, objectRef)},
	{}
};

$MethodInfo _AquaUtils$RecyclableObject_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaUtils$RecyclableObject::*)()>(&AquaUtils$RecyclableObject::init$))},
	{"create", "()Ljava/lang/Object;", "()TT;", $PROTECTED | $ABSTRACT},
	{"get", "()Ljava/lang/Object;", "()TT;", 0},
	{}
};

$InnerClassInfo _AquaUtils$RecyclableObject_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaUtils$RecyclableObject", "com.apple.laf.AquaUtils", "RecyclableObject", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaUtils$RecyclableObject_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.apple.laf.AquaUtils$RecyclableObject",
	"java.lang.Object",
	nullptr,
	_AquaUtils$RecyclableObject_FieldInfo_,
	_AquaUtils$RecyclableObject_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_AquaUtils$RecyclableObject_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaUtils"
};

$Object* allocate$AquaUtils$RecyclableObject($Class* clazz) {
	return $of($alloc(AquaUtils$RecyclableObject));
}

void AquaUtils$RecyclableObject::init$() {
}

$Object* AquaUtils$RecyclableObject::get() {
	$var($Object, referent, nullptr);
	if (this->objectRef != nullptr && ($assign(referent, $nc(this->objectRef)->get())) != nullptr) {
		return $of(referent);
	}
	$assign(referent, create());
	$set(this, objectRef, $new($SoftReference, referent));
	return $of(referent);
}

AquaUtils$RecyclableObject::AquaUtils$RecyclableObject() {
}

$Class* AquaUtils$RecyclableObject::load$($String* name, bool initialize) {
	$loadClass(AquaUtils$RecyclableObject, name, initialize, &_AquaUtils$RecyclableObject_ClassInfo_, allocate$AquaUtils$RecyclableObject);
	return class$;
}

$Class* AquaUtils$RecyclableObject::class$ = nullptr;

		} // laf
	} // apple
} // com