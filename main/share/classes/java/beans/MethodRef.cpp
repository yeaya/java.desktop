#include <java/beans/MethodRef.h>

#include <java/lang/ref/SoftReference.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Method.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $MethodArray = $Array<::java::lang::reflect::Method>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $SoftReference = ::java::lang::ref::SoftReference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Method = ::java::lang::reflect::Method;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace java {
	namespace beans {

$FieldInfo _MethodRef_FieldInfo_[] = {
	{"signature", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MethodRef, signature)},
	{"methodRef", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<Ljava/lang/reflect/Method;>;", $PRIVATE, $field(MethodRef, methodRef)},
	{"typeRef", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/lang/Class<*>;>;", $PRIVATE, $field(MethodRef, typeRef)},
	{}
};

$MethodInfo _MethodRef_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MethodRef::*)()>(&MethodRef::init$))},
	{"find", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/lang/reflect/Method;", $PRIVATE | $STATIC, $method(static_cast<$Method*(*)($Class*,$String*)>(&MethodRef::find))},
	{"get", "()Ljava/lang/reflect/Method;", nullptr, 0, $method(static_cast<$Method*(MethodRef::*)()>(&MethodRef::get))},
	{"isSet", "()Z", nullptr, 0, $method(static_cast<bool(MethodRef::*)()>(&MethodRef::isSet))},
	{"set", "(Ljava/lang/reflect/Method;)V", nullptr, 0, $method(static_cast<void(MethodRef::*)($Method*)>(&MethodRef::set))},
	{}
};

$ClassInfo _MethodRef_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MethodRef",
	"java.lang.Object",
	nullptr,
	_MethodRef_FieldInfo_,
	_MethodRef_MethodInfo_
};

$Object* allocate$MethodRef($Class* clazz) {
	return $of($alloc(MethodRef));
}

void MethodRef::init$() {
}

void MethodRef::set($Method* method) {
	if (method == nullptr) {
		$set(this, signature, nullptr);
		$set(this, methodRef, nullptr);
		$set(this, typeRef, nullptr);
	} else {
		$set(this, signature, $nc(method)->toGenericString());
		$set(this, methodRef, $new($SoftReference, method));
		$set(this, typeRef, $new($WeakReference, method->getDeclaringClass()));
	}
}

bool MethodRef::isSet() {
	return this->methodRef != nullptr;
}

$Method* MethodRef::get() {
	$useLocalCurrentObjectStackCache();
	if (this->methodRef == nullptr) {
		return nullptr;
	}
	$var($Method, method, $cast($Method, $nc(this->methodRef)->get()));
	if (method == nullptr) {
		$assign(method, find($cast($Class, $($nc(this->typeRef)->get())), this->signature));
		if (method == nullptr) {
			$set(this, signature, nullptr);
			$set(this, methodRef, nullptr);
			$set(this, typeRef, nullptr);
			return nullptr;
		}
		$set(this, methodRef, $new($SoftReference, method));
	}
	return $ReflectUtil::isPackageAccessible($nc(method)->getDeclaringClass()) ? method : ($Method*)nullptr;
}

$Method* MethodRef::find($Class* type, $String* signature) {
	$load(MethodRef);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (type != nullptr) {
		{
			$var($MethodArray, arr$, type->getMethods());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Method, method, arr$->get(i$));
				{
					if ($of(type)->equals($nc(method)->getDeclaringClass())) {
						if ($nc($($nc(method)->toGenericString()))->equals(signature)) {
							return method;
						}
					}
				}
			}
		}
	}
	return nullptr;
}

MethodRef::MethodRef() {
}

$Class* MethodRef::load$($String* name, bool initialize) {
	$loadClass(MethodRef, name, initialize, &_MethodRef_ClassInfo_, allocate$MethodRef);
	return class$;
}

$Class* MethodRef::class$ = nullptr;

	} // beans
} // java