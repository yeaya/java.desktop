#include <sun/java2d/metal/MTLPaints$Gradient.h>

#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/metal/MTLPaints.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $MTLPaints = ::sun::java2d::metal::MTLPaints;

namespace sun {
	namespace java2d {
		namespace metal {

$MethodInfo _MTLPaints$Gradient_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MTLPaints$Gradient::*)()>(&MTLPaints$Gradient::init$))},
	{"isPaintValid", "(Lsun/java2d/SunGraphics2D;)Z", nullptr, 0},
	{}
};

$InnerClassInfo _MTLPaints$Gradient_InnerClassesInfo_[] = {
	{"sun.java2d.metal.MTLPaints$Gradient", "sun.java2d.metal.MTLPaints", "Gradient", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MTLPaints$Gradient_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.metal.MTLPaints$Gradient",
	"sun.java2d.metal.MTLPaints",
	nullptr,
	nullptr,
	_MTLPaints$Gradient_MethodInfo_,
	nullptr,
	nullptr,
	_MTLPaints$Gradient_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.metal.MTLPaints"
};

$Object* allocate$MTLPaints$Gradient($Class* clazz) {
	return $of($alloc(MTLPaints$Gradient));
}

void MTLPaints$Gradient::init$() {
	$MTLPaints::init$();
}

bool MTLPaints$Gradient::isPaintValid($SunGraphics2D* sg2d) {
	return true;
}

MTLPaints$Gradient::MTLPaints$Gradient() {
}

$Class* MTLPaints$Gradient::load$($String* name, bool initialize) {
	$loadClass(MTLPaints$Gradient, name, initialize, &_MTLPaints$Gradient_ClassInfo_, allocate$MTLPaints$Gradient);
	return class$;
}

$Class* MTLPaints$Gradient::class$ = nullptr;

		} // metal
	} // java2d
} // sun