#include <sun/java2d/d3d/D3DPaints$RadialGradient.h>

#include <sun/java2d/d3d/D3DPaints$MultiGradient.h>
#include <sun/java2d/d3d/D3DPaints.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $D3DPaints = ::sun::java2d::d3d::D3DPaints;
using $D3DPaints$MultiGradient = ::sun::java2d::d3d::D3DPaints$MultiGradient;

namespace sun {
	namespace java2d {
		namespace d3d {

$MethodInfo _D3DPaints$RadialGradient_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(D3DPaints$RadialGradient::*)()>(&D3DPaints$RadialGradient::init$))},
	{}
};

$InnerClassInfo _D3DPaints$RadialGradient_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DPaints$RadialGradient", "sun.java2d.d3d.D3DPaints", "RadialGradient", $PRIVATE | $STATIC},
	{"sun.java2d.d3d.D3DPaints$MultiGradient", "sun.java2d.d3d.D3DPaints", "MultiGradient", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _D3DPaints$RadialGradient_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DPaints$RadialGradient",
	"sun.java2d.d3d.D3DPaints$MultiGradient",
	nullptr,
	nullptr,
	_D3DPaints$RadialGradient_MethodInfo_,
	nullptr,
	nullptr,
	_D3DPaints$RadialGradient_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DPaints"
};

$Object* allocate$D3DPaints$RadialGradient($Class* clazz) {
	return $of($alloc(D3DPaints$RadialGradient));
}

void D3DPaints$RadialGradient::init$() {
	$D3DPaints$MultiGradient::init$();
}

D3DPaints$RadialGradient::D3DPaints$RadialGradient() {
}

$Class* D3DPaints$RadialGradient::load$($String* name, bool initialize) {
	$loadClass(D3DPaints$RadialGradient, name, initialize, &_D3DPaints$RadialGradient_ClassInfo_, allocate$D3DPaints$RadialGradient);
	return class$;
}

$Class* D3DPaints$RadialGradient::class$ = nullptr;

		} // d3d
	} // java2d
} // sun