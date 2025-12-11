#include <sun/java2d/metal/MTLPaints$LinearGradient.h>

#include <java/awt/LinearGradientPaint.h>
#include <java/awt/MultipleGradientPaint$ColorSpaceType.h>
#include <java/awt/MultipleGradientPaint$CycleMethod.h>
#include <java/awt/Paint.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/metal/MTLPaints$MultiGradient.h>
#include <sun/java2d/metal/MTLPaints.h>
#include <jcpp.h>

#undef LINEAR_RGB
#undef REPEAT

using $LinearGradientPaint = ::java::awt::LinearGradientPaint;
using $MultipleGradientPaint$ColorSpaceType = ::java::awt::MultipleGradientPaint$ColorSpaceType;
using $MultipleGradientPaint$CycleMethod = ::java::awt::MultipleGradientPaint$CycleMethod;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $MTLPaints$MultiGradient = ::sun::java2d::metal::MTLPaints$MultiGradient;

namespace sun {
	namespace java2d {
		namespace metal {

$MethodInfo _MTLPaints$LinearGradient_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MTLPaints$LinearGradient::*)()>(&MTLPaints$LinearGradient::init$))},
	{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _MTLPaints$LinearGradient_InnerClassesInfo_[] = {
	{"sun.java2d.metal.MTLPaints$LinearGradient", "sun.java2d.metal.MTLPaints", "LinearGradient", $PRIVATE | $STATIC},
	{"sun.java2d.metal.MTLPaints$MultiGradient", "sun.java2d.metal.MTLPaints", "MultiGradient", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _MTLPaints$LinearGradient_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.metal.MTLPaints$LinearGradient",
	"sun.java2d.metal.MTLPaints$MultiGradient",
	nullptr,
	nullptr,
	_MTLPaints$LinearGradient_MethodInfo_,
	nullptr,
	nullptr,
	_MTLPaints$LinearGradient_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.metal.MTLPaints"
};

$Object* allocate$MTLPaints$LinearGradient($Class* clazz) {
	return $of($alloc(MTLPaints$LinearGradient));
}

void MTLPaints$LinearGradient::init$() {
	$MTLPaints$MultiGradient::init$();
}

bool MTLPaints$LinearGradient::isPaintValid($SunGraphics2D* sg2d) {
	$useLocalCurrentObjectStackCache();
	$var($LinearGradientPaint, paint, $cast($LinearGradientPaint, $nc(sg2d)->paint));
	bool var$1 = $nc($($nc(paint)->getFractions()))->length == 2;
	$init($MultipleGradientPaint$CycleMethod);
	bool var$0 = var$1 && paint->getCycleMethod() != $MultipleGradientPaint$CycleMethod::REPEAT;
	$init($MultipleGradientPaint$ColorSpaceType);
	if (var$0 && paint->getColorSpace() != $MultipleGradientPaint$ColorSpaceType::LINEAR_RGB) {
		return true;
	}
	return $MTLPaints$MultiGradient::isPaintValid(sg2d);
}

MTLPaints$LinearGradient::MTLPaints$LinearGradient() {
}

$Class* MTLPaints$LinearGradient::load$($String* name, bool initialize) {
	$loadClass(MTLPaints$LinearGradient, name, initialize, &_MTLPaints$LinearGradient_ClassInfo_, allocate$MTLPaints$LinearGradient);
	return class$;
}

$Class* MTLPaints$LinearGradient::class$ = nullptr;

		} // metal
	} // java2d
} // sun