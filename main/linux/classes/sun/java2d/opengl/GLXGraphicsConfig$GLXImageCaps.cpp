#include <sun/java2d/opengl/GLXGraphicsConfig$GLXImageCaps.h>

#include <java/awt/ImageCapabilities.h>
#include <sun/java2d/opengl/GLXGraphicsConfig.h>
#include <jcpp.h>

using $ImageCapabilities = ::java::awt::ImageCapabilities;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace opengl {

$MethodInfo _GLXGraphicsConfig$GLXImageCaps_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(GLXGraphicsConfig$GLXImageCaps::*)()>(&GLXGraphicsConfig$GLXImageCaps::init$))},
	{"isTrueVolatile", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GLXGraphicsConfig$GLXImageCaps_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.GLXGraphicsConfig$GLXImageCaps", "sun.java2d.opengl.GLXGraphicsConfig", "GLXImageCaps", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _GLXGraphicsConfig$GLXImageCaps_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.GLXGraphicsConfig$GLXImageCaps",
	"java.awt.ImageCapabilities",
	nullptr,
	nullptr,
	_GLXGraphicsConfig$GLXImageCaps_MethodInfo_,
	nullptr,
	nullptr,
	_GLXGraphicsConfig$GLXImageCaps_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.GLXGraphicsConfig"
};

$Object* allocate$GLXGraphicsConfig$GLXImageCaps($Class* clazz) {
	return $of($alloc(GLXGraphicsConfig$GLXImageCaps));
}

void GLXGraphicsConfig$GLXImageCaps::init$() {
	$ImageCapabilities::init$(true);
}

bool GLXGraphicsConfig$GLXImageCaps::isTrueVolatile() {
	return true;
}

GLXGraphicsConfig$GLXImageCaps::GLXGraphicsConfig$GLXImageCaps() {
}

$Class* GLXGraphicsConfig$GLXImageCaps::load$($String* name, bool initialize) {
	$loadClass(GLXGraphicsConfig$GLXImageCaps, name, initialize, &_GLXGraphicsConfig$GLXImageCaps_ClassInfo_, allocate$GLXGraphicsConfig$GLXImageCaps);
	return class$;
}

$Class* GLXGraphicsConfig$GLXImageCaps::class$ = nullptr;

		} // opengl
	} // java2d
} // sun