#include <sun/java2d/metal/MTLRenderer$Tracer$1.h>

#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/metal/MTLRenderer$Tracer.h>
#include <sun/java2d/pipe/ParallelogramPipe.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $MTLRenderer$Tracer = ::sun::java2d::metal::MTLRenderer$Tracer;
using $ParallelogramPipe = ::sun::java2d::pipe::ParallelogramPipe;

namespace sun {
	namespace java2d {
		namespace metal {

$FieldInfo _MTLRenderer$Tracer$1_FieldInfo_[] = {
	{"this$1", "Lsun/java2d/metal/MTLRenderer$Tracer;", nullptr, $FINAL | $SYNTHETIC, $field(MTLRenderer$Tracer$1, this$1)},
	{"val$realpipe", "Lsun/java2d/pipe/ParallelogramPipe;", nullptr, $FINAL | $SYNTHETIC, $field(MTLRenderer$Tracer$1, val$realpipe)},
	{}
};

$MethodInfo _MTLRenderer$Tracer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/metal/MTLRenderer$Tracer;Lsun/java2d/pipe/ParallelogramPipe;)V", "()V", 0, $method(static_cast<void(MTLRenderer$Tracer$1::*)($MTLRenderer$Tracer*,$ParallelogramPipe*)>(&MTLRenderer$Tracer$1::init$))},
	{"drawParallelogram", "(Lsun/java2d/SunGraphics2D;DDDDDDDDDDDD)V", nullptr, $PUBLIC},
	{"fillParallelogram", "(Lsun/java2d/SunGraphics2D;DDDDDDDDDD)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MTLRenderer$Tracer$1_EnclosingMethodInfo_ = {
	"sun.java2d.metal.MTLRenderer$Tracer",
	"getAAParallelogramPipe",
	"()Lsun/java2d/pipe/ParallelogramPipe;"
};

$InnerClassInfo _MTLRenderer$Tracer$1_InnerClassesInfo_[] = {
	{"sun.java2d.metal.MTLRenderer$Tracer", "sun.java2d.metal.MTLRenderer", "Tracer", $PRIVATE},
	{"sun.java2d.metal.MTLRenderer$Tracer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MTLRenderer$Tracer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.metal.MTLRenderer$Tracer$1",
	"java.lang.Object",
	"sun.java2d.pipe.ParallelogramPipe",
	_MTLRenderer$Tracer$1_FieldInfo_,
	_MTLRenderer$Tracer$1_MethodInfo_,
	nullptr,
	&_MTLRenderer$Tracer$1_EnclosingMethodInfo_,
	_MTLRenderer$Tracer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.metal.MTLRenderer"
};

$Object* allocate$MTLRenderer$Tracer$1($Class* clazz) {
	return $of($alloc(MTLRenderer$Tracer$1));
}

void MTLRenderer$Tracer$1::init$($MTLRenderer$Tracer* this$1, $ParallelogramPipe* val$realpipe) {
	$set(this, this$1, this$1);
	$set(this, val$realpipe, val$realpipe);
}

void MTLRenderer$Tracer$1::fillParallelogram($SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2) {
	$GraphicsPrimitive::tracePrimitive("MTLFillAAParallelogram"_s);
	$nc(this->val$realpipe)->fillParallelogram(sg2d, ux1, uy1, ux2, uy2, x, y, dx1, dy1, dx2, dy2);
}

void MTLRenderer$Tracer$1::drawParallelogram($SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2) {
	$GraphicsPrimitive::tracePrimitive("MTLDrawAAParallelogram"_s);
	$nc(this->val$realpipe)->drawParallelogram(sg2d, ux1, uy1, ux2, uy2, x, y, dx1, dy1, dx2, dy2, lw1, lw2);
}

MTLRenderer$Tracer$1::MTLRenderer$Tracer$1() {
}

$Class* MTLRenderer$Tracer$1::load$($String* name, bool initialize) {
	$loadClass(MTLRenderer$Tracer$1, name, initialize, &_MTLRenderer$Tracer$1_ClassInfo_, allocate$MTLRenderer$Tracer$1);
	return class$;
}

$Class* MTLRenderer$Tracer$1::class$ = nullptr;

		} // metal
	} // java2d
} // sun