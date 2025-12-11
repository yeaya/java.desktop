#include <javax/swing/plaf/nimbus/SplitPaneDividerPainter.h>

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

#undef BACKGROUND_ENABLED
#undef BACKGROUND_FOCUSED
#undef FOREGROUND_ENABLED
#undef FOREGROUND_ENABLED_VERTICAL

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

$FieldInfo _SplitPaneDividerPainter_FieldInfo_[] = {
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(SplitPaneDividerPainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(SplitPaneDividerPainter, BACKGROUND_FOCUSED)},
	{"FOREGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(SplitPaneDividerPainter, FOREGROUND_ENABLED)},
	{"FOREGROUND_ENABLED_VERTICAL", "I", nullptr, $STATIC | $FINAL, $constField(SplitPaneDividerPainter, FOREGROUND_ENABLED_VERTICAL)},
	{"state", "I", nullptr, $PRIVATE, $field(SplitPaneDividerPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(SplitPaneDividerPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(SplitPaneDividerPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(SplitPaneDividerPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(SplitPaneDividerPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(SplitPaneDividerPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SplitPaneDividerPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SplitPaneDividerPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SplitPaneDividerPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SplitPaneDividerPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SplitPaneDividerPainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SplitPaneDividerPainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SplitPaneDividerPainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SplitPaneDividerPainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SplitPaneDividerPainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SplitPaneDividerPainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SplitPaneDividerPainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SplitPaneDividerPainter, color12)},
	{"color13", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SplitPaneDividerPainter, color13)},
	{"color14", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SplitPaneDividerPainter, color14)},
	{"color15", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SplitPaneDividerPainter, color15)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(SplitPaneDividerPainter, componentColors)},
	{}
};

$MethodInfo _SplitPaneDividerPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(SplitPaneDividerPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&SplitPaneDividerPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SplitPaneDividerPainter::*)($Shape*)>(&SplitPaneDividerPainter::decodeGradient1))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SplitPaneDividerPainter::*)($Shape*)>(&SplitPaneDividerPainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SplitPaneDividerPainter::*)($Shape*)>(&SplitPaneDividerPainter::decodeGradient3))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SplitPaneDividerPainter::*)($Shape*)>(&SplitPaneDividerPainter::decodeGradient4))},
	{"decodeGradient5", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SplitPaneDividerPainter::*)($Shape*)>(&SplitPaneDividerPainter::decodeGradient5))},
	{"decodeGradient6", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SplitPaneDividerPainter::*)($Shape*)>(&SplitPaneDividerPainter::decodeGradient6))},
	{"decodeRect1", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(SplitPaneDividerPainter::*)()>(&SplitPaneDividerPainter::decodeRect1))},
	{"decodeRect2", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(SplitPaneDividerPainter::*)()>(&SplitPaneDividerPainter::decodeRect2))},
	{"decodeRoundRect1", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(SplitPaneDividerPainter::*)()>(&SplitPaneDividerPainter::decodeRoundRect1))},
	{"decodeRoundRect2", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(SplitPaneDividerPainter::*)()>(&SplitPaneDividerPainter::decodeRoundRect2))},
	{"decodeRoundRect3", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(SplitPaneDividerPainter::*)()>(&SplitPaneDividerPainter::decodeRoundRect3))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SplitPaneDividerPainter::*)($Graphics2D*)>(&SplitPaneDividerPainter::paintBackgroundEnabled))},
	{"paintBackgroundFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SplitPaneDividerPainter::*)($Graphics2D*)>(&SplitPaneDividerPainter::paintBackgroundFocused))},
	{"paintForegroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SplitPaneDividerPainter::*)($Graphics2D*)>(&SplitPaneDividerPainter::paintForegroundEnabled))},
	{"paintForegroundEnabledAndVertical", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SplitPaneDividerPainter::*)($Graphics2D*)>(&SplitPaneDividerPainter::paintForegroundEnabledAndVertical))},
	{}
};

$ClassInfo _SplitPaneDividerPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.SplitPaneDividerPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_SplitPaneDividerPainter_FieldInfo_,
	_SplitPaneDividerPainter_MethodInfo_
};

$Object* allocate$SplitPaneDividerPainter($Class* clazz) {
	return $of($alloc(SplitPaneDividerPainter));
}

void SplitPaneDividerPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.017358616f, -0.11372548f, 0));
	$set(this, color2, decodeColor("nimbusBlueGrey"_s, 0.055555582f, -0.102396235f, 0.21960783f, 0));
	$set(this, color3, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.07016757f, 0.12941176f, 0));
	$set(this, color4, decodeColor("nimbusFocus"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color5, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, 0));
	$set(this, color6, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.048026316f, 0.007843137f, 0));
	$set(this, color7, decodeColor("nimbusBlueGrey"_s, 0.0055555105f, -0.06970999f, 0.21568626f, 0));
	$set(this, color8, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.06704806f, 0.06666666f, 0));
	$set(this, color9, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.019617222f, -0.09803921f, 0));
	$set(this, color10, decodeColor("nimbusBlueGrey"_s, 0.004273474f, -0.03790062f, -0.043137252f, 0));
	$set(this, color11, decodeColor("nimbusBlueGrey"_s, -0.111111104f, -0.106573746f, 0.24705881f, 0));
	$set(this, color12, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.049301825f, 0.02352941f, 0));
	$set(this, color13, decodeColor("nimbusBlueGrey"_s, -0.006944418f, -0.07399663f, 0.11372548f, 0));
	$set(this, color14, decodeColor("nimbusBlueGrey"_s, -0.018518567f, -0.06998578f, 0.12549019f, 0));
	$set(this, color15, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.050526317f, 0.039215684f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void SplitPaneDividerPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case SplitPaneDividerPainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	case SplitPaneDividerPainter::BACKGROUND_FOCUSED:
		{
			paintBackgroundFocused(g);
			break;
		}
	case SplitPaneDividerPainter::FOREGROUND_ENABLED:
		{
			paintForegroundEnabled(g);
			break;
		}
	case SplitPaneDividerPainter::FOREGROUND_ENABLED_VERTICAL:
		{
			paintForegroundEnabledAndVertical(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* SplitPaneDividerPainter::getPaintContext() {
	return this->ctx;
}

void SplitPaneDividerPainter::paintBackgroundEnabled($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint($(decodeGradient1(this->rect)));
	g->fill(this->rect);
}

void SplitPaneDividerPainter::paintBackgroundFocused($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint($(decodeGradient2(this->rect)));
	g->fill(this->rect);
}

void SplitPaneDividerPainter::paintForegroundEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint($(decodeGradient3(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient4(this->roundRect)));
	g->fill(this->roundRect);
}

void SplitPaneDividerPainter::paintForegroundEnabledAndVertical($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect3());
	$nc(g)->setPaint($(decodeGradient5(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, rect, decodeRect2());
	g->setPaint($(decodeGradient6(this->rect)));
	g->fill(this->rect);
}

$Rectangle2D* SplitPaneDividerPainter::decodeRect1() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(0.0f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(3.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.0f));
	return this->rect;
}

$RoundRectangle2D* SplitPaneDividerPainter::decodeRoundRect1() {
	double var$0 = (double)decodeX(1.05f);
	double var$1 = (double)decodeY(1.3f);
	float var$3 = decodeX(1.95f);
	double var$2 = (double)(var$3 - decodeX(1.05f));
	float var$4 = decodeY(1.8f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(1.3f), 3.6666667f, 3.6666667f);
	return this->roundRect;
}

$RoundRectangle2D* SplitPaneDividerPainter::decodeRoundRect2() {
	double var$0 = (double)decodeX(1.1f);
	double var$1 = (double)decodeY(1.4f);
	float var$3 = decodeX(1.9f);
	double var$2 = (double)(var$3 - decodeX(1.1f));
	float var$4 = decodeY(1.7f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(1.4f), 4.0f, 4.0f);
	return this->roundRect;
}

$RoundRectangle2D* SplitPaneDividerPainter::decodeRoundRect3() {
	double var$0 = (double)decodeX(1.3f);
	double var$1 = (double)decodeY(1.1428572f);
	float var$3 = decodeX(1.7f);
	double var$2 = (double)(var$3 - decodeX(1.3f));
	float var$4 = decodeY(1.8214285f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(1.1428572f), 4.0f, 4.0f);
	return this->roundRect;
}

$Rectangle2D* SplitPaneDividerPainter::decodeRect2() {
	double var$0 = (double)decodeX(1.4f);
	double var$1 = (double)decodeY(1.1785715f);
	float var$3 = decodeX(1.6f);
	double var$2 = (double)(var$3 - decodeX(1.4f));
	float var$4 = decodeY(1.7678571f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.1785715f));
	return this->rect;
}

$Paint* SplitPaneDividerPainter::decodeGradient1($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.058064517f,
		0.08064516f,
		0.103225805f,
		0.116129026f,
		0.12903225f,
		0.43387097f,
		0.7387097f,
		0.77903223f,
		0.81935483f,
		0.85806453f,
		0.8967742f
	}), $$new($ColorArray, {
		this->color1,
		$(decodeColor(this->color1, this->color2, 0.5f)),
		this->color2,
		$(decodeColor(this->color2, this->color3, 0.5f)),
		this->color3,
		$(decodeColor(this->color3, this->color3, 0.5f)),
		this->color3,
		$(decodeColor(this->color3, this->color2, 0.5f)),
		this->color2,
		$(decodeColor(this->color2, this->color1, 0.5f)),
		this->color1
	}));
}

$Paint* SplitPaneDividerPainter::decodeGradient2($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.058064517f,
		0.08064516f,
		0.103225805f,
		0.1166129f,
		0.13f,
		0.43f,
		0.73f,
		0.7746774f,
		0.81935483f,
		0.85806453f,
		0.8967742f
	}), $$new($ColorArray, {
		this->color1,
		$(decodeColor(this->color1, this->color4, 0.5f)),
		this->color4,
		$(decodeColor(this->color4, this->color3, 0.5f)),
		this->color3,
		$(decodeColor(this->color3, this->color3, 0.5f)),
		this->color3,
		$(decodeColor(this->color3, this->color4, 0.5f)),
		this->color4,
		$(decodeColor(this->color4, this->color1, 0.5f)),
		this->color1
	}));
}

$Paint* SplitPaneDividerPainter::decodeGradient3($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.20645161f,
		0.5f,
		0.7935484f
	}), $$new($ColorArray, {
		this->color1,
		$(decodeColor(this->color1, this->color5, 0.5f)),
		this->color5
	}));
}

$Paint* SplitPaneDividerPainter::decodeGradient4($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.090322584f,
		0.2951613f,
		0.5f,
		0.5822581f,
		0.66451615f
	}), $$new($ColorArray, {
		this->color6,
		$(decodeColor(this->color6, this->color7, 0.5f)),
		this->color7,
		$(decodeColor(this->color7, this->color8, 0.5f)),
		this->color8
	}));
}

$Paint* SplitPaneDividerPainter::decodeGradient5($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.75f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.42096773f,
		0.84193546f,
		0.8951613f,
		0.9483871f
	}), $$new($ColorArray, {
		this->color9,
		$(decodeColor(this->color9, this->color10, 0.5f)),
		this->color10,
		$(decodeColor(this->color10, this->color11, 0.5f)),
		this->color11
	}));
}

$Paint* SplitPaneDividerPainter::decodeGradient6($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.08064516f,
		0.16129032f,
		0.5129032f,
		0.86451614f,
		0.88548386f,
		0.90645164f
	}), $$new($ColorArray, {
		this->color12,
		$(decodeColor(this->color12, this->color13, 0.5f)),
		this->color13,
		$(decodeColor(this->color13, this->color14, 0.5f)),
		this->color14,
		$(decodeColor(this->color14, this->color15, 0.5f)),
		this->color15
	}));
}

SplitPaneDividerPainter::SplitPaneDividerPainter() {
}

$Class* SplitPaneDividerPainter::load$($String* name, bool initialize) {
	$loadClass(SplitPaneDividerPainter, name, initialize, &_SplitPaneDividerPainter_ClassInfo_, allocate$SplitPaneDividerPainter);
	return class$;
}

$Class* SplitPaneDividerPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax