#include <javax/swing/plaf/nimbus/ArrowButtonPainter.h>

#include <java/awt/Color.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Paint.h>
#include <java/awt/Shape.h>
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
#include <java/lang/Float.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>
#include <jcpp.h>

#undef BACKGROUND_ENABLED
#undef FOREGROUND_DISABLED
#undef FOREGROUND_ENABLED

using $Color = ::java::awt::Color;
using $Graphics2D = ::java::awt::Graphics2D;
using $Paint = ::java::awt::Paint;
using $Shape = ::java::awt::Shape;
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
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $AbstractRegionPainter = ::javax::swing::plaf::nimbus::AbstractRegionPainter;
using $AbstractRegionPainter$PaintContext = ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _ArrowButtonPainter_FieldInfo_[] = {
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(ArrowButtonPainter, BACKGROUND_ENABLED)},
	{"FOREGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(ArrowButtonPainter, FOREGROUND_DISABLED)},
	{"FOREGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(ArrowButtonPainter, FOREGROUND_ENABLED)},
	{"state", "I", nullptr, $PRIVATE, $field(ArrowButtonPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(ArrowButtonPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(ArrowButtonPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(ArrowButtonPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(ArrowButtonPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(ArrowButtonPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ArrowButtonPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ArrowButtonPainter, color2)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(ArrowButtonPainter, componentColors)},
	{}
};

$MethodInfo _ArrowButtonPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(ArrowButtonPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&ArrowButtonPainter::init$))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ArrowButtonPainter::*)()>(&ArrowButtonPainter::decodePath1))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintForegroundDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ArrowButtonPainter::*)($Graphics2D*)>(&ArrowButtonPainter::paintForegroundDisabled))},
	{"paintForegroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ArrowButtonPainter::*)($Graphics2D*)>(&ArrowButtonPainter::paintForegroundEnabled))},
	{}
};

$ClassInfo _ArrowButtonPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.ArrowButtonPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_ArrowButtonPainter_FieldInfo_,
	_ArrowButtonPainter_MethodInfo_
};

$Object* allocate$ArrowButtonPainter($Class* clazz) {
	return $of($alloc(ArrowButtonPainter));
}

void ArrowButtonPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBase"_s, 0.027408898f, -0.57391655f, 0.1490196f, 0));
	$set(this, color2, decodeColor("nimbusBase"_s, -0.57865167f, -0.6357143f, -0.37254906f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void ArrowButtonPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case ArrowButtonPainter::FOREGROUND_DISABLED:
		{
			paintForegroundDisabled(g);
			break;
		}
	case ArrowButtonPainter::FOREGROUND_ENABLED:
		{
			paintForegroundEnabled(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* ArrowButtonPainter::getPaintContext() {
	return this->ctx;
}

void ArrowButtonPainter::paintForegroundDisabled($Graphics2D* g) {
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->path);
}

void ArrowButtonPainter::paintForegroundEnabled($Graphics2D* g) {
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color2);
	g->fill(this->path);
}

$Path2D* ArrowButtonPainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.8f);
	$nc(this->path)->moveTo(var$0, decodeY(1.2f));
	double var$1 = (double)decodeX(1.2f);
	$nc(this->path)->lineTo(var$1, decodeY(1.5f));
	double var$2 = (double)decodeX(1.8f);
	$nc(this->path)->lineTo(var$2, decodeY(1.8f));
	double var$3 = (double)decodeX(1.8f);
	$nc(this->path)->lineTo(var$3, decodeY(1.2f));
	$nc(this->path)->closePath();
	return this->path;
}

ArrowButtonPainter::ArrowButtonPainter() {
}

$Class* ArrowButtonPainter::load$($String* name, bool initialize) {
	$loadClass(ArrowButtonPainter, name, initialize, &_ArrowButtonPainter_ClassInfo_, allocate$ArrowButtonPainter);
	return class$;
}

$Class* ArrowButtonPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax