#include <javax/swing/plaf/nimbus/SliderTrackPainter.h>

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

$FieldInfo _SliderTrackPainter_FieldInfo_[] = {
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(SliderTrackPainter, BACKGROUND_DISABLED)},
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(SliderTrackPainter, BACKGROUND_ENABLED)},
	{"state", "I", nullptr, $PRIVATE, $field(SliderTrackPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(SliderTrackPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(SliderTrackPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(SliderTrackPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(SliderTrackPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(SliderTrackPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderTrackPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderTrackPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderTrackPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderTrackPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderTrackPainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderTrackPainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderTrackPainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderTrackPainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderTrackPainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderTrackPainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderTrackPainter, color11)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(SliderTrackPainter, componentColors)},
	{}
};

$MethodInfo _SliderTrackPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(SliderTrackPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&SliderTrackPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SliderTrackPainter::*)($Shape*)>(&SliderTrackPainter::decodeGradient1))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SliderTrackPainter::*)($Shape*)>(&SliderTrackPainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SliderTrackPainter::*)($Shape*)>(&SliderTrackPainter::decodeGradient3))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SliderTrackPainter::*)($Shape*)>(&SliderTrackPainter::decodeGradient4))},
	{"decodeRoundRect1", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(SliderTrackPainter::*)()>(&SliderTrackPainter::decodeRoundRect1))},
	{"decodeRoundRect2", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(SliderTrackPainter::*)()>(&SliderTrackPainter::decodeRoundRect2))},
	{"decodeRoundRect3", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(SliderTrackPainter::*)()>(&SliderTrackPainter::decodeRoundRect3))},
	{"decodeRoundRect4", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(SliderTrackPainter::*)()>(&SliderTrackPainter::decodeRoundRect4))},
	{"decodeRoundRect5", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(SliderTrackPainter::*)()>(&SliderTrackPainter::decodeRoundRect5))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SliderTrackPainter::*)($Graphics2D*)>(&SliderTrackPainter::paintBackgroundDisabled))},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SliderTrackPainter::*)($Graphics2D*)>(&SliderTrackPainter::paintBackgroundEnabled))},
	{}
};

$ClassInfo _SliderTrackPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.SliderTrackPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_SliderTrackPainter_FieldInfo_,
	_SliderTrackPainter_MethodInfo_
};

$Object* allocate$SliderTrackPainter($Class* clazz) {
	return $of($alloc(SliderTrackPainter));
}

void SliderTrackPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, -245));
	$set(this, color2, decodeColor("nimbusBlueGrey"_s, 0.0055555105f, -0.061265234f, 0.05098039f, 0));
	$set(this, color3, decodeColor("nimbusBlueGrey"_s, 0.01010108f, -0.059835073f, 0.10588235f, 0));
	$set(this, color4, decodeColor("nimbusBlueGrey"_s, -0.01111114f, -0.061982628f, 0.062745094f, 0));
	$set(this, color5, decodeColor("nimbusBlueGrey"_s, -0.00505054f, -0.058639523f, 0.086274505f, 0));
	$set(this, color6, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, -111));
	$set(this, color7, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.034093194f, -0.12941176f, 0));
	$set(this, color8, decodeColor("nimbusBlueGrey"_s, 0.01111114f, -0.023821115f, -0.06666666f, 0));
	$set(this, color9, decodeColor("nimbusBlueGrey"_s, -0.008547008f, -0.03314536f, -0.086274505f, 0));
	$set(this, color10, decodeColor("nimbusBlueGrey"_s, 0.004273474f, -0.040256046f, -0.019607842f, 0));
	$set(this, color11, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.03626889f, 0.04705882f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void SliderTrackPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case SliderTrackPainter::BACKGROUND_DISABLED:
		{
			paintBackgroundDisabled(g);
			break;
		}
	case SliderTrackPainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* SliderTrackPainter::getPaintContext() {
	return this->ctx;
}

void SliderTrackPainter::paintBackgroundDisabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient1(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient2(this->roundRect)));
	g->fill(this->roundRect);
}

void SliderTrackPainter::paintBackgroundEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect4());
	$nc(g)->setPaint(this->color6);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient3(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect5());
	g->setPaint($(decodeGradient4(this->roundRect)));
	g->fill(this->roundRect);
}

$RoundRectangle2D* SliderTrackPainter::decodeRoundRect1() {
	double var$0 = (double)decodeX(0.2f);
	double var$1 = (double)decodeY(1.6f);
	float var$3 = decodeX(2.8f);
	double var$2 = (double)(var$3 - decodeX(0.2f));
	float var$4 = decodeY(2.8333333f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(1.6f), 8.705882f, 8.705882f);
	return this->roundRect;
}

$RoundRectangle2D* SliderTrackPainter::decodeRoundRect2() {
	double var$0 = (double)decodeX(0.0f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(3.0f);
	double var$2 = (double)(var$3 - decodeX(0.0f));
	float var$4 = decodeY(2.0f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(1.0f), 4.9411764f, 4.9411764f);
	return this->roundRect;
}

$RoundRectangle2D* SliderTrackPainter::decodeRoundRect3() {
	double var$0 = (double)decodeX(0.29411763f);
	double var$1 = (double)decodeY(1.2f);
	float var$3 = decodeX(2.7058823f);
	double var$2 = (double)(var$3 - decodeX(0.29411763f));
	float var$4 = decodeY(2.0f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(1.2f), 4.0f, 4.0f);
	return this->roundRect;
}

$RoundRectangle2D* SliderTrackPainter::decodeRoundRect4() {
	double var$0 = (double)decodeX(0.2f);
	double var$1 = (double)decodeY(1.6f);
	float var$3 = decodeX(2.8f);
	double var$2 = (double)(var$3 - decodeX(0.2f));
	float var$4 = decodeY(2.1666667f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(1.6f), 8.705882f, 8.705882f);
	return this->roundRect;
}

$RoundRectangle2D* SliderTrackPainter::decodeRoundRect5() {
	double var$0 = (double)decodeX(0.28823528f);
	double var$1 = (double)decodeY(1.2f);
	float var$3 = decodeX(2.7f);
	double var$2 = (double)(var$3 - decodeX(0.28823528f));
	float var$4 = decodeY(2.0f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(1.2f), 4.0f, 4.0f);
	return this->roundRect;
}

$Paint* SliderTrackPainter::decodeGradient1($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.07647059f * h) + y, (0.25f * w) + x, (0.9117647f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color2,
		$(decodeColor(this->color2, this->color3, 0.5f)),
		this->color3
	}));
}

$Paint* SliderTrackPainter::decodeGradient2($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.13770053f,
		0.27540106f,
		0.63770056f,
		1.0f
	}), $$new($ColorArray, {
		this->color4,
		$(decodeColor(this->color4, this->color5, 0.5f)),
		this->color5,
		$(decodeColor(this->color5, this->color3, 0.5f)),
		this->color3
	}));
}

$Paint* SliderTrackPainter::decodeGradient3($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.07647059f * h) + y, (0.25f * w) + x, (0.9117647f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color7,
		$(decodeColor(this->color7, this->color8, 0.5f)),
		this->color8
	}));
}

$Paint* SliderTrackPainter::decodeGradient4($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.13770053f,
		0.27540106f,
		0.4906417f,
		0.7058824f
	}), $$new($ColorArray, {
		this->color9,
		$(decodeColor(this->color9, this->color10, 0.5f)),
		this->color10,
		$(decodeColor(this->color10, this->color11, 0.5f)),
		this->color11
	}));
}

SliderTrackPainter::SliderTrackPainter() {
}

$Class* SliderTrackPainter::load$($String* name, bool initialize) {
	$loadClass(SliderTrackPainter, name, initialize, &_SliderTrackPainter_ClassInfo_, allocate$SliderTrackPainter);
	return class$;
}

$Class* SliderTrackPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax