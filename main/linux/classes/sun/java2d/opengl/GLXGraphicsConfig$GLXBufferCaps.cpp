#include <sun/java2d/opengl/GLXGraphicsConfig$GLXBufferCaps.h>

#include <java/awt/BufferCapabilities$FlipContents.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/ImageCapabilities.h>
#include <sun/java2d/opengl/GLXGraphicsConfig.h>
#include <jcpp.h>

#undef UNDEFINED

using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $BufferCapabilities$FlipContents = ::java::awt::BufferCapabilities$FlipContents;
using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GLXGraphicsConfig = ::sun::java2d::opengl::GLXGraphicsConfig;

namespace sun {
	namespace java2d {
		namespace opengl {

$MethodInfo _GLXGraphicsConfig$GLXBufferCaps_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(GLXGraphicsConfig$GLXBufferCaps::*)(bool)>(&GLXGraphicsConfig$GLXBufferCaps::init$))},
	{}
};

$InnerClassInfo _GLXGraphicsConfig$GLXBufferCaps_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.GLXGraphicsConfig$GLXBufferCaps", "sun.java2d.opengl.GLXGraphicsConfig", "GLXBufferCaps", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _GLXGraphicsConfig$GLXBufferCaps_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.GLXGraphicsConfig$GLXBufferCaps",
	"java.awt.BufferCapabilities",
	nullptr,
	nullptr,
	_GLXGraphicsConfig$GLXBufferCaps_MethodInfo_,
	nullptr,
	nullptr,
	_GLXGraphicsConfig$GLXBufferCaps_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.GLXGraphicsConfig"
};

$Object* allocate$GLXGraphicsConfig$GLXBufferCaps($Class* clazz) {
	return $of($alloc(GLXGraphicsConfig$GLXBufferCaps));
}

void GLXGraphicsConfig$GLXBufferCaps::init$(bool dblBuf) {
	$init($GLXGraphicsConfig);
	$init($BufferCapabilities$FlipContents);
	$BufferCapabilities::init$($GLXGraphicsConfig::imageCaps, $GLXGraphicsConfig::imageCaps, dblBuf ? $BufferCapabilities$FlipContents::UNDEFINED : ($BufferCapabilities$FlipContents*)nullptr);
}

GLXGraphicsConfig$GLXBufferCaps::GLXGraphicsConfig$GLXBufferCaps() {
}

$Class* GLXGraphicsConfig$GLXBufferCaps::load$($String* name, bool initialize) {
	$loadClass(GLXGraphicsConfig$GLXBufferCaps, name, initialize, &_GLXGraphicsConfig$GLXBufferCaps_ClassInfo_, allocate$GLXGraphicsConfig$GLXBufferCaps);
	return class$;
}

$Class* GLXGraphicsConfig$GLXBufferCaps::class$ = nullptr;

		} // opengl
	} // java2d
} // sun