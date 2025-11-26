#include <sun/java2d/opengl/OGLPaints$MultiGradient.h>

#include <java/awt/MultipleGradientPaint.h>
#include <java/awt/Paint.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/opengl/OGLGraphicsConfig.h>
#include <sun/java2d/opengl/OGLPaints.h>
#include <sun/java2d/opengl/OGLSurfaceData.h>
#include <jcpp.h>

using $MultipleGradientPaint = ::java::awt::MultipleGradientPaint;
using $Paint = ::java::awt::Paint;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $OGLGraphicsConfig = ::sun::java2d::opengl::OGLGraphicsConfig;
using $OGLPaints = ::sun::java2d::opengl::OGLPaints;
using $OGLSurfaceData = ::sun::java2d::opengl::OGLSurfaceData;

namespace sun {
	namespace java2d {
		namespace opengl {

$MethodInfo _OGLPaints$MultiGradient_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(OGLPaints$MultiGradient::*)()>(&OGLPaints$MultiGradient::init$))},
	{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _OGLPaints$MultiGradient_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.OGLPaints$MultiGradient", "sun.java2d.opengl.OGLPaints", "MultiGradient", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _OGLPaints$MultiGradient_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.java2d.opengl.OGLPaints$MultiGradient",
	"sun.java2d.opengl.OGLPaints",
	nullptr,
	nullptr,
	_OGLPaints$MultiGradient_MethodInfo_,
	nullptr,
	nullptr,
	_OGLPaints$MultiGradient_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.OGLPaints"
};

$Object* allocate$OGLPaints$MultiGradient($Class* clazz) {
	return $of($alloc(OGLPaints$MultiGradient));
}

void OGLPaints$MultiGradient::init$() {
	$OGLPaints::init$();
}

bool OGLPaints$MultiGradient::isPaintValid($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	$var($MultipleGradientPaint, paint, $cast($MultipleGradientPaint, $nc(sg2d)->paint));
	if ($nc($($nc(paint)->getFractions()))->length > 12) {
		return false;
	}
	$var($OGLSurfaceData, dstData, $cast($OGLSurfaceData, sg2d->surfaceData));
	$var($OGLGraphicsConfig, gc, $nc(dstData)->getOGLGraphicsConfig());
	if (!$nc(gc)->isCapPresent(0x00080000)) {
		return false;
	}
	return true;
}

OGLPaints$MultiGradient::OGLPaints$MultiGradient() {
}

$Class* OGLPaints$MultiGradient::load$($String* name, bool initialize) {
	$loadClass(OGLPaints$MultiGradient, name, initialize, &_OGLPaints$MultiGradient_ClassInfo_, allocate$OGLPaints$MultiGradient);
	return class$;
}

$Class* OGLPaints$MultiGradient::class$ = nullptr;

		} // opengl
	} // java2d
} // sun