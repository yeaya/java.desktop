#include <sun/java2d/pipe/SpanShapeRenderer$Simple.h>

#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/SurfaceData.h>
#include <sun/java2d/loops/FillRect.h>
#include <sun/java2d/loops/RenderLoops.h>
#include <sun/java2d/pipe/SpanShapeRenderer.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $SurfaceData = ::sun::java2d::SurfaceData;
using $FillRect = ::sun::java2d::loops::FillRect;
using $RenderLoops = ::sun::java2d::loops::RenderLoops;
using $LoopBasedPipe = ::sun::java2d::pipe::LoopBasedPipe;
using $SpanShapeRenderer = ::sun::java2d::pipe::SpanShapeRenderer;

namespace sun {
	namespace java2d {
		namespace pipe {

$MethodInfo _SpanShapeRenderer$Simple_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SpanShapeRenderer$Simple::*)()>(&SpanShapeRenderer$Simple::init$))},
	{"endSequence", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"renderBox", "(Ljava/lang/Object;IIII)V", nullptr, $PUBLIC},
	{"startSequence", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;Ljava/awt/Rectangle;[I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SpanShapeRenderer$Simple_InnerClassesInfo_[] = {
	{"sun.java2d.pipe.SpanShapeRenderer$Simple", "sun.java2d.pipe.SpanShapeRenderer", "Simple", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SpanShapeRenderer$Simple_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.pipe.SpanShapeRenderer$Simple",
	"sun.java2d.pipe.SpanShapeRenderer",
	"sun.java2d.pipe.LoopBasedPipe",
	nullptr,
	_SpanShapeRenderer$Simple_MethodInfo_,
	nullptr,
	nullptr,
	_SpanShapeRenderer$Simple_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.pipe.SpanShapeRenderer"
};

$Object* allocate$SpanShapeRenderer$Simple($Class* clazz) {
	return $of($alloc(SpanShapeRenderer$Simple));
}

int32_t SpanShapeRenderer$Simple::hashCode() {
	 return this->$SpanShapeRenderer::hashCode();
}

bool SpanShapeRenderer$Simple::equals(Object$* arg0) {
	 return this->$SpanShapeRenderer::equals(arg0);
}

$Object* SpanShapeRenderer$Simple::clone() {
	 return this->$SpanShapeRenderer::clone();
}

$String* SpanShapeRenderer$Simple::toString() {
	 return this->$SpanShapeRenderer::toString();
}

void SpanShapeRenderer$Simple::finalize() {
	this->$SpanShapeRenderer::finalize();
}

void SpanShapeRenderer$Simple::init$() {
	$SpanShapeRenderer::init$();
}

$Object* SpanShapeRenderer$Simple::startSequence($SunGraphics2D* sg, $Shape* s, $Rectangle* devR, $ints* bbox) {
	return $of(sg);
}

void SpanShapeRenderer$Simple::renderBox(Object$* ctx, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($SunGraphics2D, sg2d, $cast($SunGraphics2D, ctx));
	$var($SurfaceData, sd, $nc(sg2d)->getSurfaceData());
	$nc($nc(sg2d->loops)->fillRectLoop)->FillRect$(sg2d, sd, x, y, w, h);
}

void SpanShapeRenderer$Simple::endSequence(Object$* ctx) {
}

SpanShapeRenderer$Simple::SpanShapeRenderer$Simple() {
}

$Class* SpanShapeRenderer$Simple::load$($String* name, bool initialize) {
	$loadClass(SpanShapeRenderer$Simple, name, initialize, &_SpanShapeRenderer$Simple_ClassInfo_, allocate$SpanShapeRenderer$Simple);
	return class$;
}

$Class* SpanShapeRenderer$Simple::class$ = nullptr;

		} // pipe
	} // java2d
} // sun