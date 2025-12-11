#include <sun/java2d/opengl/WGLGraphicsConfig$WGLImageCaps.h>

#include <java/awt/ImageCapabilities.h>
#include <sun/java2d/opengl/WGLGraphicsConfig.h>
#include <jcpp.h>

using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace opengl {

$MethodInfo _WGLGraphicsConfig$WGLImageCaps_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WGLGraphicsConfig$WGLImageCaps::*)()>(&WGLGraphicsConfig$WGLImageCaps::init$))},
	{"isTrueVolatile", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WGLGraphicsConfig$WGLImageCaps_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.WGLGraphicsConfig$WGLImageCaps", "sun.java2d.opengl.WGLGraphicsConfig", "WGLImageCaps", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WGLGraphicsConfig$WGLImageCaps_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.WGLGraphicsConfig$WGLImageCaps",
	"java.awt.ImageCapabilities",
	nullptr,
	nullptr,
	_WGLGraphicsConfig$WGLImageCaps_MethodInfo_,
	nullptr,
	nullptr,
	_WGLGraphicsConfig$WGLImageCaps_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.WGLGraphicsConfig"
};

$Object* allocate$WGLGraphicsConfig$WGLImageCaps($Class* clazz) {
	return $of($alloc(WGLGraphicsConfig$WGLImageCaps));
}

void WGLGraphicsConfig$WGLImageCaps::init$() {
	$ImageCapabilities::init$(true);
}

bool WGLGraphicsConfig$WGLImageCaps::isTrueVolatile() {
	return true;
}

WGLGraphicsConfig$WGLImageCaps::WGLGraphicsConfig$WGLImageCaps() {
}

$Class* WGLGraphicsConfig$WGLImageCaps::load$($String* name, bool initialize) {
	$loadClass(WGLGraphicsConfig$WGLImageCaps, name, initialize, &_WGLGraphicsConfig$WGLImageCaps_ClassInfo_, allocate$WGLGraphicsConfig$WGLImageCaps);
	return class$;
}

$Class* WGLGraphicsConfig$WGLImageCaps::class$ = nullptr;

		} // opengl
	} // java2d
} // sun