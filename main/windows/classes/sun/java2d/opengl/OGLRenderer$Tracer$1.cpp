#include <sun/java2d/opengl/OGLRenderer$Tracer$1.h>

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
#include <sun/java2d/loops/GraphicsPrimitive.h>
#include <sun/java2d/opengl/OGLRenderer$Tracer.h>
#include <sun/java2d/pipe/ParallelogramPipe.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $GraphicsPrimitive = ::sun::java2d::loops::GraphicsPrimitive;
using $OGLRenderer$Tracer = ::sun::java2d::opengl::OGLRenderer$Tracer;
using $ParallelogramPipe = ::sun::java2d::pipe::ParallelogramPipe;

namespace sun {
	namespace java2d {
		namespace opengl {

$FieldInfo _OGLRenderer$Tracer$1_FieldInfo_[] = {
	{"this$1", "Lsun/java2d/opengl/OGLRenderer$Tracer;", nullptr, $FINAL | $SYNTHETIC, $field(OGLRenderer$Tracer$1, this$1)},
	{"val$realpipe", "Lsun/java2d/pipe/ParallelogramPipe;", nullptr, $FINAL | $SYNTHETIC, $field(OGLRenderer$Tracer$1, val$realpipe)},
	{}
};

$MethodInfo _OGLRenderer$Tracer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/opengl/OGLRenderer$Tracer;Lsun/java2d/pipe/ParallelogramPipe;)V", "()V", 0, $method(static_cast<void(OGLRenderer$Tracer$1::*)($OGLRenderer$Tracer*,$ParallelogramPipe*)>(&OGLRenderer$Tracer$1::init$))},
	{"drawParallelogram", "(Lsun/java2d/SunGraphics2D;DDDDDDDDDDDD)V", nullptr, $PUBLIC},
	{"fillParallelogram", "(Lsun/java2d/SunGraphics2D;DDDDDDDDDD)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _OGLRenderer$Tracer$1_EnclosingMethodInfo_ = {
	"sun.java2d.opengl.OGLRenderer$Tracer",
	"getAAParallelogramPipe",
	"()Lsun/java2d/pipe/ParallelogramPipe;"
};

$InnerClassInfo _OGLRenderer$Tracer$1_InnerClassesInfo_[] = {
	{"sun.java2d.opengl.OGLRenderer$Tracer", "sun.java2d.opengl.OGLRenderer", "Tracer", $PRIVATE},
	{"sun.java2d.opengl.OGLRenderer$Tracer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _OGLRenderer$Tracer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.opengl.OGLRenderer$Tracer$1",
	"java.lang.Object",
	"sun.java2d.pipe.ParallelogramPipe",
	_OGLRenderer$Tracer$1_FieldInfo_,
	_OGLRenderer$Tracer$1_MethodInfo_,
	nullptr,
	&_OGLRenderer$Tracer$1_EnclosingMethodInfo_,
	_OGLRenderer$Tracer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.opengl.OGLRenderer"
};

$Object* allocate$OGLRenderer$Tracer$1($Class* clazz) {
	return $of($alloc(OGLRenderer$Tracer$1));
}

void OGLRenderer$Tracer$1::init$($OGLRenderer$Tracer* this$1, $ParallelogramPipe* val$realpipe) {
	$set(this, this$1, this$1);
	$set(this, val$realpipe, val$realpipe);
}

void OGLRenderer$Tracer$1::fillParallelogram($SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2) {
	$GraphicsPrimitive::tracePrimitive("OGLFillAAParallelogram"_s);
	$nc(this->val$realpipe)->fillParallelogram(sg2d, ux1, uy1, ux2, uy2, x, y, dx1, dy1, dx2, dy2);
}

void OGLRenderer$Tracer$1::drawParallelogram($SunGraphics2D* sg2d, double ux1, double uy1, double ux2, double uy2, double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2) {
	$GraphicsPrimitive::tracePrimitive("OGLDrawAAParallelogram"_s);
	$nc(this->val$realpipe)->drawParallelogram(sg2d, ux1, uy1, ux2, uy2, x, y, dx1, dy1, dx2, dy2, lw1, lw2);
}

OGLRenderer$Tracer$1::OGLRenderer$Tracer$1() {
}

$Class* OGLRenderer$Tracer$1::load$($String* name, bool initialize) {
	$loadClass(OGLRenderer$Tracer$1, name, initialize, &_OGLRenderer$Tracer$1_ClassInfo_, allocate$OGLRenderer$Tracer$1);
	return class$;
}

$Class* OGLRenderer$Tracer$1::class$ = nullptr;

		} // opengl
	} // java2d
} // sun