#include <javax/swing/plaf/nimbus/ScrollPanePainter.h>

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

#undef BACKGROUND_ENABLED
#undef BORDER_ENABLED
#undef BORDER_ENABLED_FOCUSED

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

$FieldInfo _ScrollPanePainter_FieldInfo_[] = {
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(ScrollPanePainter, BACKGROUND_ENABLED)},
	{"BORDER_ENABLED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(ScrollPanePainter, BORDER_ENABLED_FOCUSED)},
	{"BORDER_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(ScrollPanePainter, BORDER_ENABLED)},
	{"state", "I", nullptr, $PRIVATE, $field(ScrollPanePainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(ScrollPanePainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(ScrollPanePainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(ScrollPanePainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(ScrollPanePainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(ScrollPanePainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollPanePainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollPanePainter, color2)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(ScrollPanePainter, componentColors)},
	{}
};

$MethodInfo _ScrollPanePainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(ScrollPanePainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&ScrollPanePainter::init$))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ScrollPanePainter::*)()>(&ScrollPanePainter::decodePath1))},
	{"decodeRect1", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ScrollPanePainter::*)()>(&ScrollPanePainter::decodeRect1))},
	{"decodeRect2", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ScrollPanePainter::*)()>(&ScrollPanePainter::decodeRect2))},
	{"decodeRect3", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ScrollPanePainter::*)()>(&ScrollPanePainter::decodeRect3))},
	{"decodeRect4", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ScrollPanePainter::*)()>(&ScrollPanePainter::decodeRect4))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBorderEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ScrollPanePainter::*)($Graphics2D*)>(&ScrollPanePainter::paintBorderEnabled))},
	{"paintBorderEnabledAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ScrollPanePainter::*)($Graphics2D*)>(&ScrollPanePainter::paintBorderEnabledAndFocused))},
	{}
};

$ClassInfo _ScrollPanePainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.ScrollPanePainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_ScrollPanePainter_FieldInfo_,
	_ScrollPanePainter_MethodInfo_
};

$Object* allocate$ScrollPanePainter($Class* clazz) {
	return $of($alloc(ScrollPanePainter));
}

void ScrollPanePainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBorder"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color2, decodeColor("nimbusFocus"_s, 0.0f, 0.0f, 0.0f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void ScrollPanePainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case ScrollPanePainter::BORDER_ENABLED_FOCUSED:
		{
			paintBorderEnabledAndFocused(g);
			break;
		}
	case ScrollPanePainter::BORDER_ENABLED:
		{
			paintBorderEnabled(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* ScrollPanePainter::getPaintContext() {
	return this->ctx;
}

void ScrollPanePainter::paintBorderEnabledAndFocused($Graphics2D* g) {
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
	$set(this, path, decodePath1());
	g->setPaint(this->color2);
	g->fill(this->path);
}

void ScrollPanePainter::paintBorderEnabled($Graphics2D* g) {
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
}

$Rectangle2D* ScrollPanePainter::decodeRect1() {
	double var$0 = (double)decodeX(0.6f);
	double var$1 = (double)decodeY(0.4f);
	float var$3 = decodeX(2.4f);
	double var$2 = (double)(var$3 - decodeX(0.6f));
	float var$4 = decodeY(0.6f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.4f));
	return this->rect;
}

$Rectangle2D* ScrollPanePainter::decodeRect2() {
	double var$0 = (double)decodeX(0.4f);
	double var$1 = (double)decodeY(0.4f);
	float var$3 = decodeX(0.6f);
	double var$2 = (double)(var$3 - decodeX(0.4f));
	float var$4 = decodeY(2.6f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.4f));
	return this->rect;
}

$Rectangle2D* ScrollPanePainter::decodeRect3() {
	double var$0 = (double)decodeX(2.4f);
	double var$1 = (double)decodeY(0.4f);
	float var$3 = decodeX(2.6f);
	double var$2 = (double)(var$3 - decodeX(2.4f));
	float var$4 = decodeY(2.6f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.4f));
	return this->rect;
}

$Rectangle2D* ScrollPanePainter::decodeRect4() {
	double var$0 = (double)decodeX(0.6f);
	double var$1 = (double)decodeY(2.4f);
	float var$3 = decodeX(2.4f);
	double var$2 = (double)(var$3 - decodeX(0.6f));
	float var$4 = decodeY(2.6f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.4f));
	return this->rect;
}

$Path2D* ScrollPanePainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.4f);
	$nc(this->path)->moveTo(var$0, decodeY(0.4f));
	double var$1 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$1, decodeY(2.6f));
	double var$2 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$2, decodeY(2.6f));
	double var$3 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$3, decodeY(0.4f));
	double var$4 = (double)decodeAnchorX(2.6f, 0.0f);
	double var$5 = (double)decodeAnchorY(0.4f, 0.0f);
	double var$6 = (double)decodeAnchorX(2.8800004f, 0.1f);
	double var$7 = (double)decodeAnchorY(0.4f, 0.0f);
	double var$8 = (double)decodeX(2.8800004f);
	$nc(this->path)->curveTo(var$4, var$5, var$6, var$7, var$8, decodeY(0.4f));
	double var$9 = (double)decodeAnchorX(2.8800004f, 0.1f);
	double var$10 = (double)decodeAnchorY(0.4f, 0.0f);
	double var$11 = (double)decodeAnchorX(2.8800004f, 0.0f);
	double var$12 = (double)decodeAnchorY(2.8799999f, 0.0f);
	double var$13 = (double)decodeX(2.8800004f);
	$nc(this->path)->curveTo(var$9, var$10, var$11, var$12, var$13, decodeY(2.8799999f));
	double var$14 = (double)decodeX(0.120000005f);
	$nc(this->path)->lineTo(var$14, decodeY(2.8799999f));
	double var$15 = (double)decodeX(0.120000005f);
	$nc(this->path)->lineTo(var$15, decodeY(0.120000005f));
	double var$16 = (double)decodeX(2.8800004f);
	$nc(this->path)->lineTo(var$16, decodeY(0.120000005f));
	double var$17 = (double)decodeX(2.8800004f);
	$nc(this->path)->lineTo(var$17, decodeY(0.4f));
	double var$18 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$18, decodeY(0.4f));
	$nc(this->path)->closePath();
	return this->path;
}

ScrollPanePainter::ScrollPanePainter() {
}

$Class* ScrollPanePainter::load$($String* name, bool initialize) {
	$loadClass(ScrollPanePainter, name, initialize, &_ScrollPanePainter_ClassInfo_, allocate$ScrollPanePainter);
	return class$;
}

$Class* ScrollPanePainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax