#include <sun/java2d/pipe/SpanShapeRenderer$Composite.h>

#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <sun/java2d/SunGraphics2D.h>
#include <sun/java2d/pipe/CompositePipe.h>
#include <sun/java2d/pipe/SpanShapeRenderer.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunGraphics2D = ::sun::java2d::SunGraphics2D;
using $CompositePipe = ::sun::java2d::pipe::CompositePipe;
using $SpanShapeRenderer = ::sun::java2d::pipe::SpanShapeRenderer;

namespace sun {
	namespace java2d {
		namespace pipe {

$FieldInfo _SpanShapeRenderer$Composite_FieldInfo_[] = {
	{"comppipe", "Lsun/java2d/pipe/CompositePipe;", nullptr, 0, $field(SpanShapeRenderer$Composite, comppipe)},
	{}
};

$MethodInfo _SpanShapeRenderer$Composite_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/pipe/CompositePipe;)V", nullptr, $PUBLIC, $method(static_cast<void(SpanShapeRenderer$Composite::*)($CompositePipe*)>(&SpanShapeRenderer$Composite::init$))},
	{"endSequence", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"renderBox", "(Ljava/lang/Object;IIII)V", nullptr, $PUBLIC},
	{"startSequence", "(Lsun/java2d/SunGraphics2D;Ljava/awt/Shape;Ljava/awt/Rectangle;[I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SpanShapeRenderer$Composite_InnerClassesInfo_[] = {
	{"sun.java2d.pipe.SpanShapeRenderer$Composite", "sun.java2d.pipe.SpanShapeRenderer", "Composite", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SpanShapeRenderer$Composite_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.pipe.SpanShapeRenderer$Composite",
	"sun.java2d.pipe.SpanShapeRenderer",
	nullptr,
	_SpanShapeRenderer$Composite_FieldInfo_,
	_SpanShapeRenderer$Composite_MethodInfo_,
	nullptr,
	nullptr,
	_SpanShapeRenderer$Composite_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.pipe.SpanShapeRenderer"
};

$Object* allocate$SpanShapeRenderer$Composite($Class* clazz) {
	return $of($alloc(SpanShapeRenderer$Composite));
}

void SpanShapeRenderer$Composite::init$($CompositePipe* pipe) {
	$SpanShapeRenderer::init$();
	$set(this, comppipe, pipe);
}

$Object* SpanShapeRenderer$Composite::startSequence($SunGraphics2D* sg, $Shape* s, $Rectangle* devR, $ints* bbox) {
	return $of($nc(this->comppipe)->startSequence(sg, s, devR, bbox));
}

void SpanShapeRenderer$Composite::renderBox(Object$* ctx, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc(this->comppipe)->renderPathTile(ctx, nullptr, 0, w, x, y, w, h);
}

void SpanShapeRenderer$Composite::endSequence(Object$* ctx) {
	$nc(this->comppipe)->endSequence(ctx);
}

SpanShapeRenderer$Composite::SpanShapeRenderer$Composite() {
}

$Class* SpanShapeRenderer$Composite::load$($String* name, bool initialize) {
	$loadClass(SpanShapeRenderer$Composite, name, initialize, &_SpanShapeRenderer$Composite_ClassInfo_, allocate$SpanShapeRenderer$Composite);
	return class$;
}

$Class* SpanShapeRenderer$Composite::class$ = nullptr;

		} // pipe
	} // java2d
} // sun