#include <javax/swing/plaf/nimbus/ToolTipPainter.h>

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
#include <java/awt/geom/RectangularShape.h>
#include <java/awt/geom/RoundRectangle2D$Float.h>
#include <java/awt/geom/RoundRectangle2D.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>
#include <jcpp.h>

#undef BACKGROUND_DISABLED
#undef BACKGROUND_ENABLED

using $Graphics2D = ::java::awt::Graphics2D;
using $Paint = ::java::awt::Paint;
using $Shape = ::java::awt::Shape;
using $Ellipse2D = ::java::awt::geom::Ellipse2D;
using $Ellipse2D$Float = ::java::awt::geom::Ellipse2D$Float;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $RectangularShape = ::java::awt::geom::RectangularShape;
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

$FieldInfo _ToolTipPainter_FieldInfo_[] = {
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(ToolTipPainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(ToolTipPainter, BACKGROUND_DISABLED)},
	{"state", "I", nullptr, $PRIVATE, $field(ToolTipPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(ToolTipPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(ToolTipPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(ToolTipPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(ToolTipPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(ToolTipPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolTipPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolTipPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolTipPainter, color3)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(ToolTipPainter, componentColors)},
	{}
};

$MethodInfo _ToolTipPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(ToolTipPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&ToolTipPainter::init$))},
	{"decodeRect1", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ToolTipPainter::*)()>(&ToolTipPainter::decodeRect1))},
	{"decodeRect2", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ToolTipPainter::*)()>(&ToolTipPainter::decodeRect2))},
	{"decodeRect3", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ToolTipPainter::*)()>(&ToolTipPainter::decodeRect3))},
	{"decodeRect4", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ToolTipPainter::*)()>(&ToolTipPainter::decodeRect4))},
	{"decodeRect5", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ToolTipPainter::*)()>(&ToolTipPainter::decodeRect5))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolTipPainter::*)($Graphics2D*)>(&ToolTipPainter::paintBackgroundDisabled))},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolTipPainter::*)($Graphics2D*)>(&ToolTipPainter::paintBackgroundEnabled))},
	{}
};

$ClassInfo _ToolTipPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.ToolTipPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_ToolTipPainter_FieldInfo_,
	_ToolTipPainter_MethodInfo_
};

$Object* allocate$ToolTipPainter($Class* clazz) {
	return $of($alloc(ToolTipPainter));
}

void ToolTipPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBorder"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color2, decodeColor("info"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color3, decodeColor("nimbusBorder"_s, -0.013888836f, 5.823001E-4f, -0.12941176f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void ToolTipPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case ToolTipPainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	case ToolTipPainter::BACKGROUND_DISABLED:
		{
			paintBackgroundDisabled(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* ToolTipPainter::getPaintContext() {
	return this->ctx;
}

void ToolTipPainter::paintBackgroundEnabled($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint(this->color1);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color1);
	g->fill(this->rect);
	$set(this, rect, decodeRect4());
	g->setPaint(this->color1);
	g->fill(this->rect);
	$set(this, rect, decodeRect5());
	g->setPaint(this->color2);
	g->fill(this->rect);
}

void ToolTipPainter::paintBackgroundDisabled($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color3);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint(this->color3);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color3);
	g->fill(this->rect);
	$set(this, rect, decodeRect4());
	g->setPaint(this->color3);
	g->fill(this->rect);
}

$Rectangle2D* ToolTipPainter::decodeRect1() {
	double var$0 = (double)decodeX(2.0f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(3.0f);
	double var$2 = (double)(var$3 - decodeX(2.0f));
	float var$4 = decodeY(2.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.0f));
	return this->rect;
}

$Rectangle2D* ToolTipPainter::decodeRect2() {
	double var$0 = (double)decodeX(0.0f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(1.0f);
	double var$2 = (double)(var$3 - decodeX(0.0f));
	float var$4 = decodeY(2.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.0f));
	return this->rect;
}

$Rectangle2D* ToolTipPainter::decodeRect3() {
	double var$0 = (double)decodeX(0.0f);
	double var$1 = (double)decodeY(2.0f);
	float var$3 = decodeX(3.0f);
	double var$2 = (double)(var$3 - decodeX(0.0f));
	float var$4 = decodeY(3.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.0f));
	return this->rect;
}

$Rectangle2D* ToolTipPainter::decodeRect4() {
	double var$0 = (double)decodeX(0.0f);
	double var$1 = (double)decodeY(0.0f);
	float var$3 = decodeX(3.0f);
	double var$2 = (double)(var$3 - decodeX(0.0f));
	float var$4 = decodeY(1.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.0f));
	return this->rect;
}

$Rectangle2D* ToolTipPainter::decodeRect5() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(2.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.0f));
	return this->rect;
}

ToolTipPainter::ToolTipPainter() {
}

$Class* ToolTipPainter::load$($String* name, bool initialize) {
	$loadClass(ToolTipPainter, name, initialize, &_ToolTipPainter_ClassInfo_, allocate$ToolTipPainter);
	return class$;
}

$Class* ToolTipPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax