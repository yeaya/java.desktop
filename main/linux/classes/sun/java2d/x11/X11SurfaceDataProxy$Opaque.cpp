#include <sun/java2d/x11/X11SurfaceDataProxy$Opaque.h>

#include <java/awt/Color.h>
#include <java/awt/Transparency.h>
#include <sun/awt/X11GraphicsConfig.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/CompositeType.h>
#include <sun/java2d/x11/X11SurfaceDataProxy.h>
#include <jcpp.h>

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

$MethodInfo _X11SurfaceDataProxy$Opaque_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11GraphicsConfig;)V", nullptr, $PUBLIC, $method(static_cast<void(X11SurfaceDataProxy$Opaque::*)($X11GraphicsConfig*)>(&X11SurfaceDataProxy$Opaque::init$))},
	{"getTransparency", "()I", nullptr, $PUBLIC},
	{"isSupportedOperation", "(Lsun/java2d/SurfaceData;ILsun/java2d/loops/CompositeType;Ljava/awt/Color;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _X11SurfaceDataProxy$Opaque_InnerClassesInfo_[] = {
	{"sun.java2d.x11.X11SurfaceDataProxy$Opaque", "sun.java2d.x11.X11SurfaceDataProxy", "Opaque", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _X11SurfaceDataProxy$Opaque_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.x11.X11SurfaceDataProxy$Opaque",
	"sun.java2d.x11.X11SurfaceDataProxy",
	nullptr,
	nullptr,
	_X11SurfaceDataProxy$Opaque_MethodInfo_,
	nullptr,
	nullptr,
	_X11SurfaceDataProxy$Opaque_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.x11.X11SurfaceDataProxy"
};

$Object* allocate$X11SurfaceDataProxy$Opaque($Class* clazz) {
	return $of($alloc(X11SurfaceDataProxy$Opaque));
}

void X11SurfaceDataProxy$Opaque::init$($X11GraphicsConfig* x11gc) {
	$X11SurfaceDataProxy::init$(x11gc);
}

int32_t X11SurfaceDataProxy$Opaque::getTransparency() {
	return $Transparency::OPAQUE;
}

bool X11SurfaceDataProxy$Opaque::isSupportedOperation($SurfaceData* srcData, int32_t txtype, $CompositeType* comp, $Color* bgColor) {
	bool var$0 = txtype < $SunGraphics2D::TRANSFORM_TRANSLATESCALE;
	if (var$0) {
		$init($CompositeType);
		bool var$1 = $nc($CompositeType::SrcOverNoEa)->equals(comp);
		var$0 = (var$1 || $nc($CompositeType::SrcNoEa)->equals(comp));
	}
	return (var$0);
}

X11SurfaceDataProxy$Opaque::X11SurfaceDataProxy$Opaque() {
}

$Class* X11SurfaceDataProxy$Opaque::load$($String* name, bool initialize) {
	$loadClass(X11SurfaceDataProxy$Opaque, name, initialize, &_X11SurfaceDataProxy$Opaque_ClassInfo_, allocate$X11SurfaceDataProxy$Opaque);
	return class$;
}

$Class* X11SurfaceDataProxy$Opaque::class$ = nullptr;

		} // x11
	} // java2d
} // sun