#include <sun/java2d/xr/XRSurfaceDataProxy.h>

#include <java/awt/Color.h>
#include <java/awt/Image.h>
#include <java/awt/Transparency.h>
#include <java/awt/image/ColorModel.h>
#include <java/lang/OutOfMemoryError.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/SurfaceDataProxy.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/x11/XSurfaceData.h>
#include <sun/java2d/xr/XRGraphicsConfig.h>
#include <sun/java2d/xr/XRSurfaceData$XRPixmapSurfaceData.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <jcpp.h>

#undef TRANSLUCENT
#undef UNCACHED

using $Color = ::java::awt::Color;
using $Image = ::java::awt::Image;
using $Transparency = ::java::awt::Transparency;
using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceDataProxy = ::sun::java2d::SurfaceDataProxy;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $XSurfaceData = ::sun::java2d::x11::XSurfaceData;
using $XRGraphicsConfig = ::sun::java2d::xr::XRGraphicsConfig;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;

namespace sun {
	namespace java2d {
		namespace xr {

$FieldInfo _XRSurfaceDataProxy_FieldInfo_[] = {
	{"xrgc", "Lsun/java2d/xr/XRGraphicsConfig;", nullptr, 0, $field(XRSurfaceDataProxy, xrgc)},
	{"transparency", "I", nullptr, 0, $field(XRSurfaceDataProxy, transparency)},
	{}
};

$MethodInfo _XRSurfaceDataProxy_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/java2d/xr/XRGraphicsConfig;)V", nullptr, $PUBLIC, $method(static_cast<void(XRSurfaceDataProxy::*)($XRGraphicsConfig*)>(&XRSurfaceDataProxy::init$))},
	{"<init>", "(Lsun/java2d/xr/XRGraphicsConfig;I)V", nullptr, $PUBLIC, $method(static_cast<void(XRSurfaceDataProxy::*)($XRGraphicsConfig*,int32_t)>(&XRSurfaceDataProxy::init$))},
	{"createProxy", "(Lsun/java2d/SurfaceData;Lsun/java2d/xr/XRGraphicsConfig;)Lsun/java2d/SurfaceDataProxy;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SurfaceDataProxy*(*)($SurfaceData*,$XRGraphicsConfig*)>(&XRSurfaceDataProxy::createProxy))},
	{"getTransparency", "()I", nullptr, $PUBLIC},
	{"isSupportedOperation", "(Lsun/java2d/SurfaceData;ILsun/java2d/loops/CompositeType;Ljava/awt/Color;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validateSurfaceData", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;II)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XRSurfaceDataProxy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.xr.XRSurfaceDataProxy",
	"sun.java2d.SurfaceDataProxy",
	"java.awt.Transparency",
	_XRSurfaceDataProxy_FieldInfo_,
	_XRSurfaceDataProxy_MethodInfo_
};

$Object* allocate$XRSurfaceDataProxy($Class* clazz) {
	return $of($alloc(XRSurfaceDataProxy));
}

int32_t XRSurfaceDataProxy::hashCode() {
	 return this->$SurfaceDataProxy::hashCode();
}

bool XRSurfaceDataProxy::equals(Object$* arg0) {
	 return this->$SurfaceDataProxy::equals(arg0);
}

$Object* XRSurfaceDataProxy::clone() {
	 return this->$SurfaceDataProxy::clone();
}

$String* XRSurfaceDataProxy::toString() {
	 return this->$SurfaceDataProxy::toString();
}

void XRSurfaceDataProxy::finalize() {
	this->$SurfaceDataProxy::finalize();
}

$SurfaceDataProxy* XRSurfaceDataProxy::createProxy($SurfaceData* srcData, $XRGraphicsConfig* dstConfig) {
	$init(XRSurfaceDataProxy);
	if ($instanceOf($XRSurfaceData, srcData)) {
		$init($SurfaceDataProxy);
		return $SurfaceDataProxy::UNCACHED;
	}
	return $new(XRSurfaceDataProxy, dstConfig, $nc(srcData)->getTransparency());
}

void XRSurfaceDataProxy::init$($XRGraphicsConfig* x11gc) {
	$SurfaceDataProxy::init$();
	$set(this, xrgc, x11gc);
}

$SurfaceData* XRSurfaceDataProxy::validateSurfaceData($SurfaceData* srcData, $SurfaceData* cachedData$renamed, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceData, cachedData, cachedData$renamed);
	if (cachedData == nullptr) {
		try {
			$var($XRGraphicsConfig, var$0, this->xrgc);
			int32_t var$1 = w;
			int32_t var$2 = h;
			$var($ColorModel, var$3, $nc(this->xrgc)->getColorModel());
			$assign(cachedData, $XRSurfaceData::createData(var$0, var$1, var$2, var$3, nullptr, 0, getTransparency(), true));
		} catch ($OutOfMemoryError& oome) {
		}
	}
	return cachedData;
}

void XRSurfaceDataProxy::init$($XRGraphicsConfig* x11gc, int32_t transparency) {
	$SurfaceDataProxy::init$();
	$set(this, xrgc, x11gc);
	this->transparency = transparency;
}

bool XRSurfaceDataProxy::isSupportedOperation($SurfaceData* srcData, int32_t txtype, $CompositeType* comp, $Color* bgColor) {
	return (bgColor == nullptr || this->transparency == $Transparency::TRANSLUCENT);
}

int32_t XRSurfaceDataProxy::getTransparency() {
	return this->transparency;
}

XRSurfaceDataProxy::XRSurfaceDataProxy() {
}

$Class* XRSurfaceDataProxy::load$($String* name, bool initialize) {
	$loadClass(XRSurfaceDataProxy, name, initialize, &_XRSurfaceDataProxy_ClassInfo_, allocate$XRSurfaceDataProxy);
	return class$;
}

$Class* XRSurfaceDataProxy::class$ = nullptr;

		} // xr
	} // java2d
} // sun