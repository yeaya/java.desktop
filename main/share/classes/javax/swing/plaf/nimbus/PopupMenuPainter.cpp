#include <javax/swing/plaf/nimbus/PopupMenuPainter.h>

#include <java/awt/Color.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/LinearGradientPaint.h>
#include <java/awt/MultipleGradientPaint.h>
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

using $ColorArray = $Array<::java::awt::Color>;
using $Graphics2D = ::java::awt::Graphics2D;
using $MultipleGradientPaint = ::java::awt::MultipleGradientPaint;
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

$FieldInfo _PopupMenuPainter_FieldInfo_[] = {
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(PopupMenuPainter, BACKGROUND_DISABLED)},
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(PopupMenuPainter, BACKGROUND_ENABLED)},
	{"state", "I", nullptr, $PRIVATE, $field(PopupMenuPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(PopupMenuPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(PopupMenuPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(PopupMenuPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(PopupMenuPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(PopupMenuPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(PopupMenuPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(PopupMenuPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(PopupMenuPainter, color3)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(PopupMenuPainter, componentColors)},
	{}
};

$MethodInfo _PopupMenuPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(PopupMenuPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&PopupMenuPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(PopupMenuPainter::*)($Shape*)>(&PopupMenuPainter::decodeGradient1))},
	{"decodeRect1", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(PopupMenuPainter::*)()>(&PopupMenuPainter::decodeRect1))},
	{"decodeRect2", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(PopupMenuPainter::*)()>(&PopupMenuPainter::decodeRect2))},
	{"decodeRect3", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(PopupMenuPainter::*)()>(&PopupMenuPainter::decodeRect3))},
	{"decodeRect4", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(PopupMenuPainter::*)()>(&PopupMenuPainter::decodeRect4))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(PopupMenuPainter::*)($Graphics2D*)>(&PopupMenuPainter::paintBackgroundDisabled))},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(PopupMenuPainter::*)($Graphics2D*)>(&PopupMenuPainter::paintBackgroundEnabled))},
	{}
};

$ClassInfo _PopupMenuPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.PopupMenuPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_PopupMenuPainter_FieldInfo_,
	_PopupMenuPainter_MethodInfo_
};

$Object* allocate$PopupMenuPainter($Class* clazz) {
	return $of($alloc(PopupMenuPainter));
}

void PopupMenuPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBlueGrey"_s, -0.6111111f, -0.110526316f, -0.39607844f, 0));
	$set(this, color2, decodeColor("nimbusBase"_s, 0.0f, -0.6357143f, 0.45098037f, 0));
	$set(this, color3, decodeColor("nimbusBase"_s, 0.021348298f, -0.6150531f, 0.39999998f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void PopupMenuPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case PopupMenuPainter::BACKGROUND_DISABLED:
		{
			paintBackgroundDisabled(g);
			break;
		}
	case PopupMenuPainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* PopupMenuPainter::getPaintContext() {
	return this->ctx;
}

void PopupMenuPainter::paintBackgroundDisabled($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint($(decodeGradient1(this->rect)));
	g->fill(this->rect);
}

void PopupMenuPainter::paintBackgroundEnabled($Graphics2D* g) {
	$set(this, rect, decodeRect3());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
	$set(this, rect, decodeRect4());
	g->setPaint($(decodeGradient1(this->rect)));
	g->fill(this->rect);
}

$Rectangle2D* PopupMenuPainter::decodeRect1() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(0.0f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(3.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.0f));
	return this->rect;
}

$Rectangle2D* PopupMenuPainter::decodeRect2() {
	double var$0 = (double)decodeX(1.0045455f);
	double var$1 = (double)decodeY(0.11111111f);
	float var$3 = decodeX(1.9954545f);
	double var$2 = (double)(var$3 - decodeX(1.0045455f));
	float var$4 = decodeY(2.909091f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.11111111f));
	return this->rect;
}

$Rectangle2D* PopupMenuPainter::decodeRect3() {
	double var$0 = (double)decodeX(0.0f);
	double var$1 = (double)decodeY(0.0f);
	float var$3 = decodeX(3.0f);
	double var$2 = (double)(var$3 - decodeX(0.0f));
	float var$4 = decodeY(3.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.0f));
	return this->rect;
}

$Rectangle2D* PopupMenuPainter::decodeRect4() {
	double var$0 = (double)decodeX(0.5f);
	double var$1 = (double)decodeY(0.09090909f);
	float var$3 = decodeX(2.5f);
	double var$2 = (double)(var$3 - decodeX(0.5f));
	float var$4 = decodeY(2.909091f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.09090909f));
	return this->rect;
}

$Paint* PopupMenuPainter::decodeGradient1($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.003f,
		0.02f,
		0.5f,
		0.98f,
		0.996f,
		1.0f
	}), $$new($ColorArray, {
		this->color2,
		$(decodeColor(this->color2, this->color3, 0.5f)),
		this->color3,
		$(decodeColor(this->color3, this->color3, 0.5f)),
		this->color3,
		$(decodeColor(this->color3, this->color2, 0.5f)),
		this->color2
	}));
}

PopupMenuPainter::PopupMenuPainter() {
}

$Class* PopupMenuPainter::load$($String* name, bool initialize) {
	$loadClass(PopupMenuPainter, name, initialize, &_PopupMenuPainter_ClassInfo_, allocate$PopupMenuPainter);
	return class$;
}

$Class* PopupMenuPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax