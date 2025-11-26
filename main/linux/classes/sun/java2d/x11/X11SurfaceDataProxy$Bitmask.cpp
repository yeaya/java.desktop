#include <sun/java2d/x11/X11SurfaceDataProxy$Bitmask.h>

#include <java/awt/Color.h>
#include <java/awt/Transparency.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/x11/X11SurfaceDataProxy.h>
#include <jcpp.h>

#undef BITMASK
#undef OPAQUE
#undef TRANSFORM_TRANSLATESCALE

using $Color = ::java::awt::Color;
using $Transparency = ::java::awt::Transparency;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $X11GraphicsConfig = ::sun::awt::X11GraphicsConfig;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $CompositeType = ::sun::java2d::loops::CompositeType;
using $X11SurfaceDataProxy = ::sun::java2d::x11::X11SurfaceDataProxy;

namespace sun {
	namespace java2d {
		namespace x11 {

$MethodInfo _X11SurfaceDataProxy$Bitmask_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11GraphicsConfig;)V", nullptr, $PUBLIC, $method(static_cast<void(X11SurfaceDataProxy$Bitmask::*)($X11GraphicsConfig*)>(&X11SurfaceDataProxy$Bitmask::init$))},
	{"getTransparency", "()I", nullptr, $PUBLIC},
	{"isSupportedOperation", "(Lsun/java2d/SurfaceData;ILsun/java2d/loops/CompositeType;Ljava/awt/Color;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _X11SurfaceDataProxy$Bitmask_InnerClassesInfo_[] = {
	{"sun.java2d.x11.X11SurfaceDataProxy$Bitmask", "sun.java2d.x11.X11SurfaceDataProxy", "Bitmask", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _X11SurfaceDataProxy$Bitmask_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.x11.X11SurfaceDataProxy$Bitmask",
	"sun.java2d.x11.X11SurfaceDataProxy",
	nullptr,
	nullptr,
	_X11SurfaceDataProxy$Bitmask_MethodInfo_,
	nullptr,
	nullptr,
	_X11SurfaceDataProxy$Bitmask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.x11.X11SurfaceDataProxy"
};

$Object* allocate$X11SurfaceDataProxy$Bitmask($Class* clazz) {
	return $of($alloc(X11SurfaceDataProxy$Bitmask));
}

void X11SurfaceDataProxy$Bitmask::init$($X11GraphicsConfig* x11gc) {
	$X11SurfaceDataProxy::init$(x11gc);
}

int32_t X11SurfaceDataProxy$Bitmask::getTransparency() {
	return $Transparency::BITMASK;
}

bool X11SurfaceDataProxy$Bitmask::isSupportedOperation($SurfaceData* srcData, int32_t txtype, $CompositeType* comp, $Color* bgColor) {
	if (txtype >= $SunGraphics2D::TRANSFORM_TRANSLATESCALE) {
		return false;
	}
	if (bgColor != nullptr && bgColor->getTransparency() != $Transparency::OPAQUE) {
		return false;
	}
	$init($CompositeType);
	bool var$0 = $nc($CompositeType::SrcOverNoEa)->equals(comp);
	if (var$0 || ($nc($CompositeType::SrcNoEa)->equals(comp) && bgColor != nullptr)) {
		return true;
	}
	return false;
}

X11SurfaceDataProxy$Bitmask::X11SurfaceDataProxy$Bitmask() {
}

$Class* X11SurfaceDataProxy$Bitmask::load$($String* name, bool initialize) {
	$loadClass(X11SurfaceDataProxy$Bitmask, name, initialize, &_X11SurfaceDataProxy$Bitmask_ClassInfo_, allocate$X11SurfaceDataProxy$Bitmask);
	return class$;
}

$Class* X11SurfaceDataProxy$Bitmask::class$ = nullptr;

		} // x11
	} // java2d
} // sun