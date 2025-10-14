#include <javax/swing/plaf/nimbus/SliderPainter.h>

#include <java/awt/Graphics2D.h>
#include <java/awt/geom/Ellipse2D$Float.h>
#include <java/awt/geom/Ellipse2D.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/awt/geom/Path2D.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RoundRectangle2D$Float.h>
#include <java/awt/geom/RoundRectangle2D.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>
#include <jcpp.h>

using $Graphics2D = ::java::awt::Graphics2D;
using $Ellipse2D = ::java::awt::geom::Ellipse2D;
using $Ellipse2D$Float = ::java::awt::geom::Ellipse2D$Float;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $RoundRectangle2D = ::java::awt::geom::RoundRectangle2D;
using $RoundRectangle2D$Float = ::java::awt::geom::RoundRectangle2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $AbstractRegionPainter = ::javax::swing::plaf::nimbus::AbstractRegionPainter;
using $AbstractRegionPainter$PaintContext = ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _SliderPainter_FieldInfo_[] = {
	{"state", "I", nullptr, $PRIVATE, $field(SliderPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(SliderPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(SliderPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(SliderPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(SliderPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(SliderPainter, ellipse)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(SliderPainter, componentColors)},
	{}
};

$MethodInfo _SliderPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(SliderPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&SliderPainter::init$))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _SliderPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.SliderPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_SliderPainter_FieldInfo_,
	_SliderPainter_MethodInfo_
};

$Object* allocate$SliderPainter($Class* clazz) {
	return $of($alloc(SliderPainter));
}

void SliderPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	this->state = state;
	$set(this, ctx, ctx);
}

void SliderPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	}
}

$AbstractRegionPainter$PaintContext* SliderPainter::getPaintContext() {
	return this->ctx;
}

SliderPainter::SliderPainter() {
}

$Class* SliderPainter::load$($String* name, bool initialize) {
	$loadClass(SliderPainter, name, initialize, &_SliderPainter_ClassInfo_, allocate$SliderPainter);
	return class$;
}

$Class* SliderPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax