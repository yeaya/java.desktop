#include <sun/java2d/metal/MTLSurfaceDataProxy.h>

#include <java/awt/Color.h>
#include <java/awt/Transparency.h>
#include <java/lang/OutOfMemoryError.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/SurfaceDataProxy.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/metal/MTLGraphicsConfig.h>
#include <sun/java2d/metal/MTLSurfaceData.h>
#include <jcpp.h>

#undef OPAQUE
#undef UNCACHED

using $Color = ::java::awt::Color;
using $Transparency = ::java::awt::Transparency;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceDataProxy = ::sun::java2d::SurfaceDataProxy;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $MTLGraphicsConfig = ::sun::java2d::metal::MTLGraphicsConfig;
using $MTLSurfaceData = ::sun::java2d::metal::MTLSurfaceData;

namespace sun {
	namespace java2d {
		namespace metal {

$FieldInfo _MTLSurfaceDataProxy_FieldInfo_[] = {
	{"mtlgc", "Lsun/java2d/metal/MTLGraphicsConfig;", nullptr, 0, $field(MTLSurfaceDataProxy, mtlgc)},
	{"transparency", "I", nullptr, 0, $field(MTLSurfaceDataProxy, transparency)},
	{}
};

$MethodInfo _MTLSurfaceDataProxy_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/metal/MTLGraphicsConfig;I)V", nullptr, $PUBLIC, $method(static_cast<void(MTLSurfaceDataProxy::*)($MTLGraphicsConfig*,int32_t)>(&MTLSurfaceDataProxy::init$))},
	{"createProxy", "(Lsun/java2d/SurfaceData;Lsun/java2d/metal/MTLGraphicsConfig;)Lsun/java2d/SurfaceDataProxy;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SurfaceDataProxy*(*)($SurfaceData*,$MTLGraphicsConfig*)>(&MTLSurfaceDataProxy::createProxy))},
	{"isSupportedOperation", "(Lsun/java2d/SurfaceData;ILsun/java2d/loops/CompositeType;Ljava/awt/Color;)Z", nullptr, $PUBLIC},
	{"validateSurfaceData", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;II)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MTLSurfaceDataProxy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.metal.MTLSurfaceDataProxy",
	"sun.java2d.SurfaceDataProxy",
	nullptr,
	_MTLSurfaceDataProxy_FieldInfo_,
	_MTLSurfaceDataProxy_MethodInfo_
};

$Object* allocate$MTLSurfaceDataProxy($Class* clazz) {
	return $of($alloc(MTLSurfaceDataProxy));
}

$SurfaceDataProxy* MTLSurfaceDataProxy::createProxy($SurfaceData* srcData, $MTLGraphicsConfig* dstConfig) {
	$init(MTLSurfaceDataProxy);
	if ($instanceOf($MTLSurfaceData, srcData)) {
		$init($SurfaceDataProxy);
		return $SurfaceDataProxy::UNCACHED;
	}
	return $new(MTLSurfaceDataProxy, dstConfig, $nc(srcData)->getTransparency());
}

void MTLSurfaceDataProxy::init$($MTLGraphicsConfig* mtlgc, int32_t transparency) {
	$SurfaceDataProxy::init$();
	$set(this, mtlgc, mtlgc);
	this->transparency = transparency;
}

$SurfaceData* MTLSurfaceDataProxy::validateSurfaceData($SurfaceData* srcData, $SurfaceData* cachedData$renamed, int32_t w, int32_t h) {
	$var($SurfaceData, cachedData, cachedData$renamed);
	if (cachedData == nullptr) {
		try {
			$assign(cachedData, $nc(this->mtlgc)->createManagedSurface(w, h, this->transparency));
		} catch ($OutOfMemoryError& er) {
			return nullptr;
		}
	}
	return cachedData;
}

bool MTLSurfaceDataProxy::isSupportedOperation($SurfaceData* srcData, int32_t txtype, $CompositeType* comp, $Color* bgColor) {
	$init($CompositeType);
	return $nc(comp)->isDerivedFrom($CompositeType::AnyAlpha) && (bgColor == nullptr || this->transparency == $Transparency::OPAQUE);
}

MTLSurfaceDataProxy::MTLSurfaceDataProxy() {
}

$Class* MTLSurfaceDataProxy::load$($String* name, bool initialize) {
	$loadClass(MTLSurfaceDataProxy, name, initialize, &_MTLSurfaceDataProxy_ClassInfo_, allocate$MTLSurfaceDataProxy);
	return class$;
}

$Class* MTLSurfaceDataProxy::class$ = nullptr;

		} // metal
	} // java2d
} // sun