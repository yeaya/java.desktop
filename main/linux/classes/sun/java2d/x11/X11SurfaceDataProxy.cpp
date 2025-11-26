#include <sun/java2d/x11/X11SurfaceDataProxy.h>

#include <java/awt/Image.h>
#include <java/awt/Transparency.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/lang/OutOfMemoryError.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/SurfaceDataProxy.h>
#include <sun/java2d/x11/X11SurfaceData$X11PixmapSurfaceData.h>
#include <sun/java2d/x11/X11SurfaceData.h>
#include <sun/java2d/x11/X11SurfaceDataProxy$Bitmask.h>
#include <sun/java2d/x11/X11SurfaceDataProxy$Opaque.h>
#include <sun/java2d/x11/XSurfaceData.h>
#include <jcpp.h>

#undef BITMASK
#undef OPAQUE
#undef UNCACHED

using $Image = ::java::awt::Image;
using $Transparency = ::java::awt::Transparency;
using $ColorModel = ::java::awt::image::ColorModel;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $SurfaceDataProxy = ::sun::java2d::SurfaceDataProxy;
using $X11SurfaceData = ::sun::java2d::x11::X11SurfaceData;
using $X11SurfaceData$X11PixmapSurfaceData = ::sun::java2d::x11::X11SurfaceData$X11PixmapSurfaceData;
using $X11SurfaceDataProxy$Bitmask = ::sun::java2d::x11::X11SurfaceDataProxy$Bitmask;
using $X11SurfaceDataProxy$Opaque = ::sun::java2d::x11::X11SurfaceDataProxy$Opaque;
using $XSurfaceData = ::sun::java2d::x11::XSurfaceData;

namespace sun {
	namespace java2d {
		namespace x11 {

$FieldInfo _X11SurfaceDataProxy_FieldInfo_[] = {
	{"x11gc", "Lsun/awt/X11GraphicsConfig;", nullptr, 0, $field(X11SurfaceDataProxy, x11gc)},
	{}
};

$MethodInfo _X11SurfaceDataProxy_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/awt/X11GraphicsConfig;)V", nullptr, $PUBLIC, $method(static_cast<void(X11SurfaceDataProxy::*)($X11GraphicsConfig*)>(&X11SurfaceDataProxy::init$))},
	{"createProxy", "(Lsun/java2d/SurfaceData;Lsun/awt/X11GraphicsConfig;)Lsun/java2d/SurfaceDataProxy;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SurfaceDataProxy*(*)($SurfaceData*,$X11GraphicsConfig*)>(&X11SurfaceDataProxy::createProxy))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validateSurfaceData", "(Lsun/java2d/SurfaceData;Lsun/java2d/SurfaceData;II)Lsun/java2d/SurfaceData;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _X11SurfaceDataProxy_InnerClassesInfo_[] = {
	{"sun.java2d.x11.X11SurfaceDataProxy$Bitmask", "sun.java2d.x11.X11SurfaceDataProxy", "Bitmask", $PUBLIC | $STATIC},
	{"sun.java2d.x11.X11SurfaceDataProxy$Opaque", "sun.java2d.x11.X11SurfaceDataProxy", "Opaque", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _X11SurfaceDataProxy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.x11.X11SurfaceDataProxy",
	"sun.java2d.SurfaceDataProxy",
	"java.awt.Transparency",
	_X11SurfaceDataProxy_FieldInfo_,
	_X11SurfaceDataProxy_MethodInfo_,
	nullptr,
	nullptr,
	_X11SurfaceDataProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.x11.X11SurfaceDataProxy$Bitmask,sun.java2d.x11.X11SurfaceDataProxy$Opaque"
};

$Object* allocate$X11SurfaceDataProxy($Class* clazz) {
	return $of($alloc(X11SurfaceDataProxy));
}

int32_t X11SurfaceDataProxy::hashCode() {
	 return this->$SurfaceDataProxy::hashCode();
}

bool X11SurfaceDataProxy::equals(Object$* arg0) {
	 return this->$SurfaceDataProxy::equals(arg0);
}

$Object* X11SurfaceDataProxy::clone() {
	 return this->$SurfaceDataProxy::clone();
}

$String* X11SurfaceDataProxy::toString() {
	 return this->$SurfaceDataProxy::toString();
}

void X11SurfaceDataProxy::finalize() {
	this->$SurfaceDataProxy::finalize();
}

$SurfaceDataProxy* X11SurfaceDataProxy::createProxy($SurfaceData* srcData, $X11GraphicsConfig* dstConfig) {
	$init(X11SurfaceDataProxy);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($X11SurfaceData, srcData)) {
		$init($SurfaceDataProxy);
		return $SurfaceDataProxy::UNCACHED;
	}
	$var($ColorModel, cm, $nc(srcData)->getColorModel());
	int32_t transparency = $nc(cm)->getTransparency();
	if (transparency == $Transparency::OPAQUE) {
		return $new($X11SurfaceDataProxy$Opaque, dstConfig);
	} else if (transparency == $Transparency::BITMASK) {
		if (($instanceOf($IndexColorModel, cm)) && cm->getPixelSize() == 8) {
			return $new($X11SurfaceDataProxy$Bitmask, dstConfig);
		}
		if ($instanceOf($DirectColorModel, cm)) {
			$var($DirectColorModel, dcm, $cast($DirectColorModel, cm));
			int32_t var$1 = dcm->getRedMask();
			int32_t var$0 = var$1 | dcm->getGreenMask();
			int32_t colormask = (var$0 | dcm->getBlueMask());
			int32_t alphamask = dcm->getAlphaMask();
			if (((int32_t)(colormask & (uint32_t)(int32_t)0xFF000000)) == 0 && ((int32_t)(alphamask & (uint32_t)(int32_t)0xFF000000)) != 0) {
				return $new($X11SurfaceDataProxy$Bitmask, dstConfig);
			}
		}
	}
	$init($SurfaceDataProxy);
	return $SurfaceDataProxy::UNCACHED;
}

void X11SurfaceDataProxy::init$($X11GraphicsConfig* x11gc) {
	$SurfaceDataProxy::init$();
	$set(this, x11gc, x11gc);
}

$SurfaceData* X11SurfaceDataProxy::validateSurfaceData($SurfaceData* srcData, $SurfaceData* cachedData$renamed, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($SurfaceData, cachedData, cachedData$renamed);
	if (cachedData == nullptr) {
		try {
			$var($X11GraphicsConfig, var$0, this->x11gc);
			int32_t var$1 = w;
			int32_t var$2 = h;
			$var($ColorModel, var$3, $nc(this->x11gc)->getColorModel());
			$assign(cachedData, $X11SurfaceData::createData(var$0, var$1, var$2, var$3, nullptr, 0, getTransparency(), true));
		} catch ($OutOfMemoryError& oome) {
		}
	}
	return cachedData;
}

X11SurfaceDataProxy::X11SurfaceDataProxy() {
}

$Class* X11SurfaceDataProxy::load$($String* name, bool initialize) {
	$loadClass(X11SurfaceDataProxy, name, initialize, &_X11SurfaceDataProxy_ClassInfo_, allocate$X11SurfaceDataProxy);
	return class$;
}

$Class* X11SurfaceDataProxy::class$ = nullptr;

		} // x11
	} // java2d
} // sun