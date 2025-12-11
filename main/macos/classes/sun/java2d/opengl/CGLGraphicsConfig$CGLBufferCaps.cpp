#include <sun/java2d/opengl/CGLGraphicsConfig$CGLBufferCaps.h>

#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/ImageCapabilities.h>
#include <sun/java2d/opengl/CGLGraphicsConfig.h>
#include <jcpp.h>

#undef UNDEFINED

using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CGLGraphicsConfig = ::sun::java2d::opengl::CGLGraphicsConfig;

namespace sun {
	namespace java2d {
		namespace opengl {

$MethodInfo _CGLGraphicsConfig$CGLBufferCaps_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(CGLGraphicsConfig$CGLBufferCaps::*)(bool)>(&CGLGraphicsConfig$CGLBufferCaps::init$))},
	{}
};

$InnerClassInfo _CGLGraphicsConfig$CGLBufferCaps_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.CGLGraphicsConfig$CGLBufferCaps", "sun.java2d.opengl.CGLGraphicsConfig", "CGLBufferCaps", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CGLGraphicsConfig$CGLBufferCaps_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.CGLGraphicsConfig$CGLBufferCaps",
	"java.awt.BufferCapabilities",
	nullptr,
	nullptr,
	_CGLGraphicsConfig$CGLBufferCaps_MethodInfo_,
	nullptr,
	nullptr,
	_CGLGraphicsConfig$CGLBufferCaps_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.CGLGraphicsConfig"
};

$Object* allocate$CGLGraphicsConfig$CGLBufferCaps($Class* clazz) {
	return $of($alloc(CGLGraphicsConfig$CGLBufferCaps));
}

void CGLGraphicsConfig$CGLBufferCaps::init$(bool dblBuf) {
	$init($CGLGraphicsConfig);
	$init($BufferCapabilities$FlipContents);
	$BufferCapabilities::init$($CGLGraphicsConfig::imageCaps, $CGLGraphicsConfig::imageCaps, dblBuf ? $BufferCapabilities$FlipContents::UNDEFINED : ($BufferCapabilities$FlipContents*)nullptr);
}

CGLGraphicsConfig$CGLBufferCaps::CGLGraphicsConfig$CGLBufferCaps() {
}

$Class* CGLGraphicsConfig$CGLBufferCaps::load$($String* name, bool initialize) {
	$loadClass(CGLGraphicsConfig$CGLBufferCaps, name, initialize, &_CGLGraphicsConfig$CGLBufferCaps_ClassInfo_, allocate$CGLGraphicsConfig$CGLBufferCaps);
	return class$;
}

$Class* CGLGraphicsConfig$CGLBufferCaps::class$ = nullptr;

		} // opengl
	} // java2d
} // sun