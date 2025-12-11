#include <sun/java2d/opengl/CGLGraphicsConfig$CGLImageCaps.h>

#include <java/awt/ImageCapabilities.h>
#include <sun/java2d/opengl/CGLGraphicsConfig.h>
#include <jcpp.h>

using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace opengl {

$MethodInfo _CGLGraphicsConfig$CGLImageCaps_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CGLGraphicsConfig$CGLImageCaps::*)()>(&CGLGraphicsConfig$CGLImageCaps::init$))},
	{"isTrueVolatile", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CGLGraphicsConfig$CGLImageCaps_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.CGLGraphicsConfig$CGLImageCaps", "sun.java2d.opengl.CGLGraphicsConfig", "CGLImageCaps", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CGLGraphicsConfig$CGLImageCaps_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.CGLGraphicsConfig$CGLImageCaps",
	"java.awt.ImageCapabilities",
	nullptr,
	nullptr,
	_CGLGraphicsConfig$CGLImageCaps_MethodInfo_,
	nullptr,
	nullptr,
	_CGLGraphicsConfig$CGLImageCaps_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.CGLGraphicsConfig"
};

$Object* allocate$CGLGraphicsConfig$CGLImageCaps($Class* clazz) {
	return $of($alloc(CGLGraphicsConfig$CGLImageCaps));
}

void CGLGraphicsConfig$CGLImageCaps::init$() {
	$ImageCapabilities::init$(true);
}

bool CGLGraphicsConfig$CGLImageCaps::isTrueVolatile() {
	return true;
}

CGLGraphicsConfig$CGLImageCaps::CGLGraphicsConfig$CGLImageCaps() {
}

$Class* CGLGraphicsConfig$CGLImageCaps::load$($String* name, bool initialize) {
	$loadClass(CGLGraphicsConfig$CGLImageCaps, name, initialize, &_CGLGraphicsConfig$CGLImageCaps_ClassInfo_, allocate$CGLGraphicsConfig$CGLImageCaps);
	return class$;
}

$Class* CGLGraphicsConfig$CGLImageCaps::class$ = nullptr;

		} // opengl
	} // java2d
} // sun