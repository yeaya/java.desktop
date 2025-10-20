#include <sun/java2d/opengl/OGLPaints$LinearGradient.h>

#include <java/awt/LinearGradientPaint.h>
#include <java/awt/MultipleGradientPaint$ColorSpaceType.h>
#include <java/awt/MultipleGradientPaint$CycleMethod.h>
#include <java/awt/Paint.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/opengl/OGLPaints$MultiGradient.h>
#include <sun/java2d/opengl/OGLPaints.h>
#include <jcpp.h>

#undef LINEAR_RGB
#undef REPEAT

using $LinearGradientPaint = ::java::awt::LinearGradientPaint;
using $MultipleGradientPaint = ::java::awt::MultipleGradientPaint;
using $MultipleGradientPaint$ColorSpaceType = ::java::awt::MultipleGradientPaint$ColorSpaceType;
using $MultipleGradientPaint$CycleMethod = ::java::awt::MultipleGradientPaint$CycleMethod;
using $Paint = ::java::awt::Paint;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $OGLPaints = ::sun::java2d::opengl::OGLPaints;
using $OGLPaints$MultiGradient = ::sun::java2d::opengl::OGLPaints$MultiGradient;

namespace sun {
	namespace java2d {
		namespace opengl {

$MethodInfo _OGLPaints$LinearGradient_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(OGLPaints$LinearGradient::*)()>(&OGLPaints$LinearGradient::init$))},
	{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _OGLPaints$LinearGradient_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.OGLPaints$LinearGradient", "sun.java2d.opengl.OGLPaints", "LinearGradient", $PRIVATE | $STATIC},
	{"sun.java2d.opengl.OGLPaints$MultiGradient", "sun.java2d.opengl.OGLPaints", "MultiGradient", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _OGLPaints$LinearGradient_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.OGLPaints$LinearGradient",
	"sun.java2d.opengl.OGLPaints$MultiGradient",
	nullptr,
	nullptr,
	_OGLPaints$LinearGradient_MethodInfo_,
	nullptr,
	nullptr,
	_OGLPaints$LinearGradient_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.OGLPaints"
};

$Object* allocate$OGLPaints$LinearGradient($Class* clazz) {
	return $of($alloc(OGLPaints$LinearGradient));
}

void OGLPaints$LinearGradient::init$() {
	$OGLPaints$MultiGradient::init$();
}

bool OGLPaints$LinearGradient::isPaintValid($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	$var($LinearGradientPaint, paint, $cast($LinearGradientPaint, $nc(sg2d)->paint));
	bool var$1 = $nc($($nc(paint)->getFractions()))->length == 2;
	$init($MultipleGradientPaint$CycleMethod);
	bool var$0 = var$1 && paint->getCycleMethod() != $MultipleGradientPaint$CycleMethod::REPEAT;
	$init($MultipleGradientPaint$ColorSpaceType);
	if (var$0 && paint->getColorSpace() != $MultipleGradientPaint$ColorSpaceType::LINEAR_RGB) {
		return true;
	}
	return $OGLPaints$MultiGradient::isPaintValid(sg2d);
}

OGLPaints$LinearGradient::OGLPaints$LinearGradient() {
}

$Class* OGLPaints$LinearGradient::load$($String* name, bool initialize) {
	$loadClass(OGLPaints$LinearGradient, name, initialize, &_OGLPaints$LinearGradient_ClassInfo_, allocate$OGLPaints$LinearGradient);
	return class$;
}

$Class* OGLPaints$LinearGradient::class$ = nullptr;

		} // opengl
	} // java2d
} // sun