#include <javax/swing/plaf/nimbus/TabbedPaneTabAreaPainter.h>

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

#undef BACKGROUND_DISABLED
#undef BACKGROUND_ENABLED
#undef BACKGROUND_ENABLED_MOUSEOVER
#undef BACKGROUND_ENABLED_PRESSED

using $ColorArray = $Array<::java::awt::Color>;
using $Color = ::java::awt::Color;
using $Graphics2D = ::java::awt::Graphics2D;
using $LinearGradientPaint = ::java::awt::LinearGradientPaint;
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

$FieldInfo _TabbedPaneTabAreaPainter_FieldInfo_[] = {
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(TabbedPaneTabAreaPainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(TabbedPaneTabAreaPainter, BACKGROUND_DISABLED)},
	{"BACKGROUND_ENABLED_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(TabbedPaneTabAreaPainter, BACKGROUND_ENABLED_MOUSEOVER)},
	{"BACKGROUND_ENABLED_PRESSED", "I", nullptr, $STATIC | $FINAL, $constField(TabbedPaneTabAreaPainter, BACKGROUND_ENABLED_PRESSED)},
	{"state", "I", nullptr, $PRIVATE, $field(TabbedPaneTabAreaPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(TabbedPaneTabAreaPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(TabbedPaneTabAreaPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(TabbedPaneTabAreaPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(TabbedPaneTabAreaPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(TabbedPaneTabAreaPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabAreaPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabAreaPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabAreaPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabAreaPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabAreaPainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabAreaPainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabAreaPainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabAreaPainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabAreaPainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabAreaPainter, color10)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(TabbedPaneTabAreaPainter, componentColors)},
	{}
};

$MethodInfo _TabbedPaneTabAreaPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(TabbedPaneTabAreaPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&TabbedPaneTabAreaPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TabbedPaneTabAreaPainter::*)($Shape*)>(&TabbedPaneTabAreaPainter::decodeGradient1))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TabbedPaneTabAreaPainter::*)($Shape*)>(&TabbedPaneTabAreaPainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TabbedPaneTabAreaPainter::*)($Shape*)>(&TabbedPaneTabAreaPainter::decodeGradient3))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TabbedPaneTabAreaPainter::*)($Shape*)>(&TabbedPaneTabAreaPainter::decodeGradient4))},
	{"decodeRect1", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(TabbedPaneTabAreaPainter::*)()>(&TabbedPaneTabAreaPainter::decodeRect1))},
	{"decodeRect2", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(TabbedPaneTabAreaPainter::*)()>(&TabbedPaneTabAreaPainter::decodeRect2))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TabbedPaneTabAreaPainter::*)($Graphics2D*)>(&TabbedPaneTabAreaPainter::paintBackgroundDisabled))},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TabbedPaneTabAreaPainter::*)($Graphics2D*)>(&TabbedPaneTabAreaPainter::paintBackgroundEnabled))},
	{"paintBackgroundEnabledAndMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TabbedPaneTabAreaPainter::*)($Graphics2D*)>(&TabbedPaneTabAreaPainter::paintBackgroundEnabledAndMouseOver))},
	{"paintBackgroundEnabledAndPressed", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TabbedPaneTabAreaPainter::*)($Graphics2D*)>(&TabbedPaneTabAreaPainter::paintBackgroundEnabledAndPressed))},
	{}
};

$ClassInfo _TabbedPaneTabAreaPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.TabbedPaneTabAreaPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_TabbedPaneTabAreaPainter_FieldInfo_,
	_TabbedPaneTabAreaPainter_MethodInfo_
};

$Object* allocate$TabbedPaneTabAreaPainter($Class* clazz) {
	return $of($alloc(TabbedPaneTabAreaPainter));
}

void TabbedPaneTabAreaPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, $new($Color, 255, 200, 0, 255));
	$set(this, color2, decodeColor("nimbusBase"_s, 0.08801502f, 0.3642857f, -0.4784314f, 0));
	$set(this, color3, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.45471883f, 0.31764704f, 0));
	$set(this, color4, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.4633005f, 0.3607843f, 0));
	$set(this, color5, decodeColor("nimbusBase"_s, 0.05468172f, -0.58308274f, 0.19607842f, 0));
	$set(this, color6, decodeColor("nimbusBase"_s, -0.57865167f, -0.6357143f, -0.54901963f, 0));
	$set(this, color7, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.4690476f, 0.39215684f, 0));
	$set(this, color8, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.47635174f, 0.4352941f, 0));
	$set(this, color9, decodeColor("nimbusBase"_s, 0.0f, -0.05401492f, 0.05098039f, 0));
	$set(this, color10, decodeColor("nimbusBase"_s, 0.0f, -0.09303135f, 0.09411764f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void TabbedPaneTabAreaPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case TabbedPaneTabAreaPainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	case TabbedPaneTabAreaPainter::BACKGROUND_DISABLED:
		{
			paintBackgroundDisabled(g);
			break;
		}
	case TabbedPaneTabAreaPainter::BACKGROUND_ENABLED_MOUSEOVER:
		{
			paintBackgroundEnabledAndMouseOver(g);
			break;
		}
	case TabbedPaneTabAreaPainter::BACKGROUND_ENABLED_PRESSED:
		{
			paintBackgroundEnabledAndPressed(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* TabbedPaneTabAreaPainter::getPaintContext() {
	return this->ctx;
}

void TabbedPaneTabAreaPainter::paintBackgroundEnabled($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint($(decodeGradient1(this->rect)));
	g->fill(this->rect);
}

void TabbedPaneTabAreaPainter::paintBackgroundDisabled($Graphics2D* g) {
	$set(this, rect, decodeRect2());
	$nc(g)->setPaint($(decodeGradient2(this->rect)));
	g->fill(this->rect);
}

void TabbedPaneTabAreaPainter::paintBackgroundEnabledAndMouseOver($Graphics2D* g) {
	$set(this, rect, decodeRect2());
	$nc(g)->setPaint($(decodeGradient3(this->rect)));
	g->fill(this->rect);
}

void TabbedPaneTabAreaPainter::paintBackgroundEnabledAndPressed($Graphics2D* g) {
	$set(this, rect, decodeRect2());
	$nc(g)->setPaint($(decodeGradient4(this->rect)));
	g->fill(this->rect);
}

$Rectangle2D* TabbedPaneTabAreaPainter::decodeRect1() {
	double var$0 = (double)decodeX(0.0f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(0.0f);
	double var$2 = (double)(var$3 - decodeX(0.0f));
	float var$4 = decodeY(1.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.0f));
	return this->rect;
}

$Rectangle2D* TabbedPaneTabAreaPainter::decodeRect2() {
	double var$0 = (double)decodeX(0.0f);
	double var$1 = (double)decodeY(2.1666667f);
	float var$3 = decodeX(3.0f);
	double var$2 = (double)(var$3 - decodeX(0.0f));
	float var$4 = decodeY(3.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.1666667f));
	return this->rect;
}

$Paint* TabbedPaneTabAreaPainter::decodeGradient1($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.08387097f,
		0.09677419f,
		0.10967742f,
		0.43709677f,
		0.7645161f,
		0.7758064f,
		0.7870968f
	}), $$new($ColorArray, {
		this->color2,
		$(decodeColor(this->color2, this->color3, 0.5f)),
		this->color3,
		$(decodeColor(this->color3, this->color4, 0.5f)),
		this->color4,
		$(decodeColor(this->color4, this->color2, 0.5f)),
		this->color2
	}));
}

$Paint* TabbedPaneTabAreaPainter::decodeGradient2($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.08387097f,
		0.09677419f,
		0.10967742f,
		0.43709677f,
		0.7645161f,
		0.7758064f,
		0.7870968f
	}), $$new($ColorArray, {
		this->color5,
		$(decodeColor(this->color5, this->color3, 0.5f)),
		this->color3,
		$(decodeColor(this->color3, this->color4, 0.5f)),
		this->color4,
		$(decodeColor(this->color4, this->color5, 0.5f)),
		this->color5
	}));
}

$Paint* TabbedPaneTabAreaPainter::decodeGradient3($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.08387097f,
		0.09677419f,
		0.10967742f,
		0.43709677f,
		0.7645161f,
		0.7758064f,
		0.7870968f
	}), $$new($ColorArray, {
		this->color6,
		$(decodeColor(this->color6, this->color7, 0.5f)),
		this->color7,
		$(decodeColor(this->color7, this->color8, 0.5f)),
		this->color8,
		$(decodeColor(this->color8, this->color2, 0.5f)),
		this->color2
	}));
}

$Paint* TabbedPaneTabAreaPainter::decodeGradient4($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.08387097f,
		0.09677419f,
		0.10967742f,
		0.43709677f,
		0.7645161f,
		0.7758064f,
		0.7870968f
	}), $$new($ColorArray, {
		this->color2,
		$(decodeColor(this->color2, this->color9, 0.5f)),
		this->color9,
		$(decodeColor(this->color9, this->color10, 0.5f)),
		this->color10,
		$(decodeColor(this->color10, this->color2, 0.5f)),
		this->color2
	}));
}

TabbedPaneTabAreaPainter::TabbedPaneTabAreaPainter() {
}

$Class* TabbedPaneTabAreaPainter::load$($String* name, bool initialize) {
	$loadClass(TabbedPaneTabAreaPainter, name, initialize, &_TabbedPaneTabAreaPainter_ClassInfo_, allocate$TabbedPaneTabAreaPainter);
	return class$;
}

$Class* TabbedPaneTabAreaPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax