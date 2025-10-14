#include <sun/java2d/d3d/D3DRenderer$Tracer$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/d3d/D3DRenderer$Tracer.h>
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/pipe/ParallelogramPipe.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $D3DRenderer$Tracer = ::sun::java2d::d3d::D3DRenderer$Tracer;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $ParallelogramPipe = ::sun::java2d::pipe::ParallelogramPipe;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DRenderer$Tracer$1_FieldInfo_[] = {
	{"this$1", "Lsun/java2d/d3d/D3DRenderer$Tracer;", nullptr, $FINAL | $SYNTHETIC, $field(D3DRenderer$Tracer$1, this$1)},
	{"val$realpipe", "Lsun/java2d/pipe/ParallelogramPipe;", nullptr, $FINAL | $SYNTHETIC, $field(D3DRenderer$Tracer$1, val$realpipe)},
	{}
};

$MethodInfo _D3DRenderer$Tracer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/d3d/D3DRenderer$Tracer;Lsun/java2d/pipe/ParallelogramPipe;)V", "()V", 0, $method(static_cast<void(D3DRenderer$Tracer$1::*)($D3DRenderer$Tracer*,$ParallelogramPipe*)>(&D3DRenderer$Tracer$1::init$))},
	{"drawParallelogram", "(Lsun/java2d/SunGraphics2D;DDDDDDDDDDDD)V", nullptr, $PUBLIC},
	{"fillParallelogram", "(Lsun/java2d/SunGraphics2D;DDDDDDDDDD)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _D3DRenderer$Tracer$1_EnclosingMethodInfo_ = {
	"sun.java2d.d3d.D3DRenderer$Tracer",
	"getAAParallelogramPipe",
	"()Lsun/java2d/pipe/ParallelogramPipe;"
};

$InnerClassInfo _D3DRenderer$Tracer$1_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DRenderer$Tracer", "sun.java2d.d3d.D3DRenderer", "Tracer", $PRIVATE},
	{"sun.java2d.d3d.D3DRenderer$Tracer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _D3DRenderer$Tracer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DRenderer$Tracer$1",
	"java.lang.Object",
	"sun.java2d.pipe.ParallelogramPipe",
	_D3DRenderer$Tracer$1_FieldInfo_,
	_D3DRenderer$Tracer$1_MethodInfo_,
	nullptr,
	&_D3DRenderer$Tracer$1_EnclosingMethodInfo_,
	_D3DRenderer$Tracer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DRenderer"
};

$Object* allocate$D3DRenderer$Tracer$1($Class* clazz) {
	return $of($alloc(D3DRenderer$Tracer$1));
}

void D3DRenderer$Tracer$1::init$($D3DRenderer$Tracer* this$1, $ParallelogramPipe* val$realpipe) {
	$set(this, this$1, this$1);
	$set(this, val$realpipe, val$realpipe);
}

void D3DRenderer$Tracer$1::fillParallelogram($SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2) {
	$GraphicsPrimitive::tracePrimitive("D3DFillAAParallelogram"_s);
	$nc(this->val$realpipe)->fillParallelogram(sg2d, ux1, uy1, ux2, uy2, x, y, dx1, dy1, dx2, dy2);
}

void D3DRenderer$Tracer$1::drawParallelogram($SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2) {
	$GraphicsPrimitive::tracePrimitive("D3DDrawAAParallelogram"_s);
	$nc(this->val$realpipe)->drawParallelogram(sg2d, ux1, uy1, ux2, uy2, x, y, dx1, dy1, dx2, dy2, lw1, lw2);
}

D3DRenderer$Tracer$1::D3DRenderer$Tracer$1() {
}

$Class* D3DRenderer$Tracer$1::load$($String* name, bool initialize) {
	$loadClass(D3DRenderer$Tracer$1, name, initialize, &_D3DRenderer$Tracer$1_ClassInfo_, allocate$D3DRenderer$Tracer$1);
	return class$;
}

$Class* D3DRenderer$Tracer$1::class$ = nullptr;

		} // d3d
	} // java2d
} // sun