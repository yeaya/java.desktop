#include <javax/swing/plaf/nimbus/Effect$ArrayCache.h>

#include <java/lang/ref/SoftReference.h>
#include <javax/swing/plaf/nimbus/Effect.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SoftReference = ::java::lang::ref::SoftReference;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _Effect$ArrayCache_FieldInfo_[] = {
	{"tmpIntArray", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<[I>;", $PRIVATE, $field(Effect$ArrayCache, tmpIntArray)},
	{"tmpByteArray1", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<[B>;", $PRIVATE, $field(Effect$ArrayCache, tmpByteArray1)},
	{"tmpByteArray2", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<[B>;", $PRIVATE, $field(Effect$ArrayCache, tmpByteArray2)},
	{"tmpByteArray3", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<[B>;", $PRIVATE, $field(Effect$ArrayCache, tmpByteArray3)},
	{}
};

$MethodInfo _Effect$ArrayCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Effect$ArrayCache::*)()>(&Effect$ArrayCache::init$))},
	{"getTmpByteArray1", "(I)[B", nullptr, $PROTECTED},
	{"getTmpByteArray2", "(I)[B", nullptr, $PROTECTED},
	{"getTmpByteArray3", "(I)[B", nullptr, $PROTECTED},
	{"getTmpIntArray", "(I)[I", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _Effect$ArrayCache_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.Effect$ArrayCache", "javax.swing.plaf.nimbus.Effect", "ArrayCache", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _Effect$ArrayCache_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.nimbus.Effect$ArrayCache",
	"java.lang.Object",
	nullptr,
	_Effect$ArrayCache_FieldInfo_,
	_Effect$ArrayCache_MethodInfo_,
	nullptr,
	nullptr,
	_Effect$ArrayCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.Effect"
};

$Object* allocate$Effect$ArrayCache($Class* clazz) {
	return $of($alloc(Effect$ArrayCache));
}

void Effect$ArrayCache::init$() {
	$set(this, tmpIntArray, nullptr);
	$set(this, tmpByteArray1, nullptr);
	$set(this, tmpByteArray2, nullptr);
	$set(this, tmpByteArray3, nullptr);
}

$ints* Effect$ArrayCache::getTmpIntArray(int32_t size) {
	$var($ints, tmp, nullptr);
	if (this->tmpIntArray == nullptr || ($assign(tmp, $cast($ints, $nc(this->tmpIntArray)->get()))) == nullptr || $nc(tmp)->length < size) {
		$assign(tmp, $new($ints, size));
		$set(this, tmpIntArray, $new($SoftReference, tmp));
	}
	return tmp;
}

$bytes* Effect$ArrayCache::getTmpByteArray1(int32_t size) {
	$var($bytes, tmp, nullptr);
	if (this->tmpByteArray1 == nullptr || ($assign(tmp, $cast($bytes, $nc(this->tmpByteArray1)->get()))) == nullptr || $nc(tmp)->length < size) {
		$assign(tmp, $new($bytes, size));
		$set(this, tmpByteArray1, $new($SoftReference, tmp));
	}
	return tmp;
}

$bytes* Effect$ArrayCache::getTmpByteArray2(int32_t size) {
	$var($bytes, tmp, nullptr);
	if (this->tmpByteArray2 == nullptr || ($assign(tmp, $cast($bytes, $nc(this->tmpByteArray2)->get()))) == nullptr || $nc(tmp)->length < size) {
		$assign(tmp, $new($bytes, size));
		$set(this, tmpByteArray2, $new($SoftReference, tmp));
	}
	return tmp;
}

$bytes* Effect$ArrayCache::getTmpByteArray3(int32_t size) {
	$var($bytes, tmp, nullptr);
	if (this->tmpByteArray3 == nullptr || ($assign(tmp, $cast($bytes, $nc(this->tmpByteArray3)->get()))) == nullptr || $nc(tmp)->length < size) {
		$assign(tmp, $new($bytes, size));
		$set(this, tmpByteArray3, $new($SoftReference, tmp));
	}
	return tmp;
}

Effect$ArrayCache::Effect$ArrayCache() {
}

$Class* Effect$ArrayCache::load$($String* name, bool initialize) {
	$loadClass(Effect$ArrayCache, name, initialize, &_Effect$ArrayCache_ClassInfo_, allocate$Effect$ArrayCache);
	return class$;
}

$Class* Effect$ArrayCache::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax