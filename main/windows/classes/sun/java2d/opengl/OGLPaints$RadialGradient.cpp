#include <sun/java2d/opengl/OGLPaints$RadialGradient.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/opengl/OGLPaints$MultiGradient.h>
#include <sun/java2d/opengl/OGLPaints.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OGLPaints = ::sun::java2d::opengl::OGLPaints;
using $OGLPaints$MultiGradient = ::sun::java2d::opengl::OGLPaints$MultiGradient;

namespace sun {
	namespace java2d {
		namespace opengl {

$MethodInfo _OGLPaints$RadialGradient_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(OGLPaints$RadialGradient::*)()>(&OGLPaints$RadialGradient::init$))},
	{}
};

$InnerClassInfo _OGLPaints$RadialGradient_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.OGLPaints$RadialGradient", "sun.java2d.opengl.OGLPaints", "RadialGradient", $PRIVATE | $STATIC},
	{"sun.java2d.opengl.OGLPaints$MultiGradient", "sun.java2d.opengl.OGLPaints", "MultiGradient", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _OGLPaints$RadialGradient_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.OGLPaints$RadialGradient",
	"sun.java2d.opengl.OGLPaints$MultiGradient",
	nullptr,
	nullptr,
	_OGLPaints$RadialGradient_MethodInfo_,
	nullptr,
	nullptr,
	_OGLPaints$RadialGradient_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.OGLPaints"
};

$Object* allocate$OGLPaints$RadialGradient($Class* clazz) {
	return $of($alloc(OGLPaints$RadialGradient));
}

void OGLPaints$RadialGradient::init$() {
	$OGLPaints$MultiGradient::init$();
}

OGLPaints$RadialGradient::OGLPaints$RadialGradient() {
}

$Class* OGLPaints$RadialGradient::load$($String* name, bool initialize) {
	$loadClass(OGLPaints$RadialGradient, name, initialize, &_OGLPaints$RadialGradient_ClassInfo_, allocate$OGLPaints$RadialGradient);
	return class$;
}

$Class* OGLPaints$RadialGradient::class$ = nullptr;

		} // opengl
	} // java2d
} // sun