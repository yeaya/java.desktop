#include <sun/java2d/metal/MTLPaints$RadialGradient.h>

#include <sun/java2d/metal/MTLPaints$MultiGradient.h>
#include <sun/java2d/metal/MTLPaints.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MTLPaints$MultiGradient = ::sun::java2d::metal::MTLPaints$MultiGradient;

namespace sun {
	namespace java2d {
		namespace metal {

$MethodInfo _MTLPaints$RadialGradient_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MTLPaints$RadialGradient::*)()>(&MTLPaints$RadialGradient::init$))},
	{}
};

$InnerClassInfo _MTLPaints$RadialGradient_InnerClassesInfo_[] = {
	{"sun.java2d.metal.MTLPaints$RadialGradient", "sun.java2d.metal.MTLPaints", "RadialGradient", $PRIVATE | $STATIC},
	{"sun.java2d.metal.MTLPaints$MultiGradient", "sun.java2d.metal.MTLPaints", "MultiGradient", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _MTLPaints$RadialGradient_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.metal.MTLPaints$RadialGradient",
	"sun.java2d.metal.MTLPaints$MultiGradient",
	nullptr,
	nullptr,
	_MTLPaints$RadialGradient_MethodInfo_,
	nullptr,
	nullptr,
	_MTLPaints$RadialGradient_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.metal.MTLPaints"
};

$Object* allocate$MTLPaints$RadialGradient($Class* clazz) {
	return $of($alloc(MTLPaints$RadialGradient));
}

void MTLPaints$RadialGradient::init$() {
	$MTLPaints$MultiGradient::init$();
}

MTLPaints$RadialGradient::MTLPaints$RadialGradient() {
}

$Class* MTLPaints$RadialGradient::load$($String* name, bool initialize) {
	$loadClass(MTLPaints$RadialGradient, name, initialize, &_MTLPaints$RadialGradient_ClassInfo_, allocate$MTLPaints$RadialGradient);
	return class$;
}

$Class* MTLPaints$RadialGradient::class$ = nullptr;

		} // metal
	} // java2d
} // sun