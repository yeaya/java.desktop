#include <sun/java2d/opengl/WGLGraphicsConfig$WGLBufferCaps.h>

#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/ImageCapabilities.h>
#include <sun/java2d/opengl/WGLGraphicsConfig.h>
#include <jcpp.h>

#undef UNDEFINED

using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WGLGraphicsConfig = ::sun::java2d::opengl::WGLGraphicsConfig;

namespace sun {
	namespace java2d {
		namespace opengl {

$MethodInfo _WGLGraphicsConfig$WGLBufferCaps_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(WGLGraphicsConfig$WGLBufferCaps::*)(bool)>(&WGLGraphicsConfig$WGLBufferCaps::init$))},
	{}
};

$InnerClassInfo _WGLGraphicsConfig$WGLBufferCaps_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.WGLGraphicsConfig$WGLBufferCaps", "sun.java2d.opengl.WGLGraphicsConfig", "WGLBufferCaps", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WGLGraphicsConfig$WGLBufferCaps_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.WGLGraphicsConfig$WGLBufferCaps",
	"java.awt.BufferCapabilities",
	nullptr,
	nullptr,
	_WGLGraphicsConfig$WGLBufferCaps_MethodInfo_,
	nullptr,
	nullptr,
	_WGLGraphicsConfig$WGLBufferCaps_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.WGLGraphicsConfig"
};

$Object* allocate$WGLGraphicsConfig$WGLBufferCaps($Class* clazz) {
	return $of($alloc(WGLGraphicsConfig$WGLBufferCaps));
}

void WGLGraphicsConfig$WGLBufferCaps::init$(bool dblBuf) {
	$init($WGLGraphicsConfig);
	$init($BufferCapabilities$FlipContents);
	$BufferCapabilities::init$($WGLGraphicsConfig::imageCaps, $WGLGraphicsConfig::imageCaps, dblBuf ? $BufferCapabilities$FlipContents::UNDEFINED : ($BufferCapabilities$FlipContents*)nullptr);
}

WGLGraphicsConfig$WGLBufferCaps::WGLGraphicsConfig$WGLBufferCaps() {
}

$Class* WGLGraphicsConfig$WGLBufferCaps::load$($String* name, bool initialize) {
	$loadClass(WGLGraphicsConfig$WGLBufferCaps, name, initialize, &_WGLGraphicsConfig$WGLBufferCaps_ClassInfo_, allocate$WGLGraphicsConfig$WGLBufferCaps);
	return class$;
}

$Class* WGLGraphicsConfig$WGLBufferCaps::class$ = nullptr;

		} // opengl
	} // java2d
} // sun