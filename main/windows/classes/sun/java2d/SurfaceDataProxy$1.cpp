#include <sun/java2d/SurfaceDataProxy$1.h>

#include <java/awt/Color.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/SurfaceDataProxy.h>
#include <sun/java2d/loops/CompositeType.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceDataProxy = ::sun::java2d::SurfaceDataProxy;
using $CompositeType = ::sun::java2d::loops::CompositeType;

namespace sun {
	namespace java2d {

$MethodInfo _SurfaceDataProxy$1_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(SurfaceDataProxy$1::*)(int32_t)>(&SurfaceDataProxy$1::init$))},
	{"isAccelerated", "()Z", nullptr, $PUBLIC},
	{"isSupportedOperation", "(Lsun/java2d/SurfaceData;ILsun/java2d/loops/CompositeType;Ljava/awt/Color;)Z", nullptr, $PUBLIC},
	{"replaceData", "(Lsun/java2d/SurfaceData;ILsun/java2d/loops/CompositeType;Ljava/awt/Color;)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{"validateSurfaceData", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;II)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SurfaceDataProxy$1_EnclosingMethodInfo_ = {
	"sun.java2d.SurfaceDataProxy",
	nullptr,
	nullptr
};

$InnerClassInfo _SurfaceDataProxy$1_InnerClassesInfo_[] = {
	{"sun.java2d.SurfaceDataProxy$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SurfaceDataProxy$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.SurfaceDataProxy$1",
	"sun.java2d.SurfaceDataProxy",
	nullptr,
	nullptr,
	_SurfaceDataProxy$1_MethodInfo_,
	nullptr,
	&_SurfaceDataProxy$1_EnclosingMethodInfo_,
	_SurfaceDataProxy$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.SurfaceDataProxy"
};

$Object* allocate$SurfaceDataProxy$1($Class* clazz) {
	return $of($alloc(SurfaceDataProxy$1));
}

void SurfaceDataProxy$1::init$(int32_t threshold) {
	$SurfaceDataProxy::init$(threshold);
}

bool SurfaceDataProxy$1::isAccelerated() {
	return false;
}

bool SurfaceDataProxy$1::isSupportedOperation($SurfaceData* srcData, int32_t txtype, $CompositeType* comp, $Color* bgColor) {
	return false;
}

$SurfaceData* SurfaceDataProxy$1::validateSurfaceData($SurfaceData* srcData, $SurfaceData* cachedData, int32_t w, int32_t h) {
	$throwNew($InternalError, "UNCACHED should never validate SDs"_s);
	$shouldNotReachHere();
}

$SurfaceData* SurfaceDataProxy$1::replaceData($SurfaceData* srcData, int32_t txtype, $CompositeType* comp, $Color* bgColor) {
	return srcData;
}

SurfaceDataProxy$1::SurfaceDataProxy$1() {
}

$Class* SurfaceDataProxy$1::load$($String* name, bool initialize) {
	$loadClass(SurfaceDataProxy$1, name, initialize, &_SurfaceDataProxy$1_ClassInfo_, allocate$SurfaceDataProxy$1);
	return class$;
}

$Class* SurfaceDataProxy$1::class$ = nullptr;

	} // java2d
} // sun