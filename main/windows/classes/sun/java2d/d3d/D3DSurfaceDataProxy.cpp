#include <sun/java2d/d3d/D3DSurfaceDataProxy.h>

#include <java/awt/Color.h>
#include <java/awt/Transparency.h>
#include <sun/java2d/InvalidPipeException.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/SurfaceDataProxy.h>
#include <sun/java2d/d3d/D3DGraphicsConfig.h>
#include <sun/java2d/d3d/D3DGraphicsDevice.h>
#include <sun/java2d/d3d/D3DSurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <jcpp.h>

#undef OPAQUE
#undef UNCACHED

using $Color = ::java::awt::Color;
using $Transparency = ::java::awt::Transparency;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidPipeException = ::sun::java2d::InvalidPipeException;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceDataProxy = ::sun::java2d::SurfaceDataProxy;
using $D3DGraphicsConfig = ::sun::java2d::d3d::D3DGraphicsConfig;
using $D3DGraphicsDevice = ::sun::java2d::d3d::D3DGraphicsDevice;
using $D3DSurfaceData = ::sun::java2d::d3d::D3DSurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DSurfaceDataProxy_FieldInfo_[] = {
	{"d3dgc", "Lsun/java2d/d3d/D3DGraphicsConfig;", nullptr, 0, $field(D3DSurfaceDataProxy, d3dgc)},
	{"transparency", "I", nullptr, 0, $field(D3DSurfaceDataProxy, transparency)},
	{}
};

$MethodInfo _D3DSurfaceDataProxy_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/d3d/D3DGraphicsConfig;I)V", nullptr, $PUBLIC, $method(static_cast<void(D3DSurfaceDataProxy::*)($D3DGraphicsConfig*,int32_t)>(&D3DSurfaceDataProxy::init$))},
	{"createProxy", "(Lsun/java2d/SurfaceData;Lsun/java2d/d3d/D3DGraphicsConfig;)Lsun/java2d/SurfaceDataProxy;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SurfaceDataProxy*(*)($SurfaceData*,$D3DGraphicsConfig*)>(&D3DSurfaceDataProxy::createProxy))},
	{"isSupportedOperation", "(Lsun/java2d/SurfaceData;ILsun/java2d/loops/CompositeType;Ljava/awt/Color;)Z", nullptr, $PUBLIC},
	{"validateSurfaceData", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;II)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _D3DSurfaceDataProxy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.d3d.D3DSurfaceDataProxy",
	"sun.java2d.SurfaceDataProxy",
	nullptr,
	_D3DSurfaceDataProxy_FieldInfo_,
	_D3DSurfaceDataProxy_MethodInfo_
};

$Object* allocate$D3DSurfaceDataProxy($Class* clazz) {
	return $of($alloc(D3DSurfaceDataProxy));
}

$SurfaceDataProxy* D3DSurfaceDataProxy::createProxy($SurfaceData* srcData, $D3DGraphicsConfig* dstConfig) {
	$init(D3DSurfaceDataProxy);
	if ($instanceOf($D3DSurfaceData, srcData)) {
		$init($SurfaceDataProxy);
		return $SurfaceDataProxy::UNCACHED;
	}
	return $new(D3DSurfaceDataProxy, dstConfig, $nc(srcData)->getTransparency());
}

void D3DSurfaceDataProxy::init$($D3DGraphicsConfig* d3dgc, int32_t transparency) {
	$SurfaceDataProxy::init$();
	$set(this, d3dgc, d3dgc);
	this->transparency = transparency;
	activateDisplayListener();
}

$SurfaceData* D3DSurfaceDataProxy::validateSurfaceData($SurfaceData* srcData, $SurfaceData* cachedData$renamed, int32_t w, int32_t h) {
	$var($SurfaceData, cachedData, cachedData$renamed);
	if (cachedData == nullptr || $nc(cachedData)->isSurfaceLost()) {
		try {
			$assign(cachedData, $nc(this->d3dgc)->createManagedSurface(w, h, this->transparency));
		} catch ($InvalidPipeException& e) {
			if (!$D3DGraphicsDevice::isD3DAvailable()) {
				invalidate();
				flush();
				return nullptr;
			}
		}
	}
	return cachedData;
}

bool D3DSurfaceDataProxy::isSupportedOperation($SurfaceData* srcData, int32_t txtype, $CompositeType* comp, $Color* bgColor) {
	return (bgColor == nullptr || this->transparency == $Transparency::OPAQUE);
}

D3DSurfaceDataProxy::D3DSurfaceDataProxy() {
}

$Class* D3DSurfaceDataProxy::load$($String* name, bool initialize) {
	$loadClass(D3DSurfaceDataProxy, name, initialize, &_D3DSurfaceDataProxy_ClassInfo_, allocate$D3DSurfaceDataProxy);
	return class$;
}

$Class* D3DSurfaceDataProxy::class$ = nullptr;

		} // d3d
	} // java2d
} // sun