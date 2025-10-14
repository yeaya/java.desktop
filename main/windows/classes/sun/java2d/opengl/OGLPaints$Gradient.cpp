#include <sun/java2d/opengl/OGLPaints$Gradient.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/opengl/OGLPaints.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $OGLPaints = ::sun::java2d::opengl::OGLPaints;

namespace sun {
	namespace java2d {
		namespace opengl {

$MethodInfo _OGLPaints$Gradient_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(OGLPaints$Gradient::*)()>(&OGLPaints$Gradient::init$))},
	{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _OGLPaints$Gradient_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.OGLPaints$Gradient", "sun.java2d.opengl.OGLPaints", "Gradient", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _OGLPaints$Gradient_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.OGLPaints$Gradient",
	"sun.java2d.opengl.OGLPaints",
	nullptr,
	nullptr,
	_OGLPaints$Gradient_MethodInfo_,
	nullptr,
	nullptr,
	_OGLPaints$Gradient_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.OGLPaints"
};

$Object* allocate$OGLPaints$Gradient($Class* clazz) {
	return $of($alloc(OGLPaints$Gradient));
}

void OGLPaints$Gradient::init$() {
	$OGLPaints::init$();
}

bool OGLPaints$Gradient::isPaintValid($SunGraphics2D* sg2d) {
	return true;
}

OGLPaints$Gradient::OGLPaints$Gradient() {
}

$Class* OGLPaints$Gradient::load$($String* name, bool initialize) {
	$loadClass(OGLPaints$Gradient, name, initialize, &_OGLPaints$Gradient_ClassInfo_, allocate$OGLPaints$Gradient);
	return class$;
}

$Class* OGLPaints$Gradient::class$ = nullptr;

		} // opengl
	} // java2d
} // sun