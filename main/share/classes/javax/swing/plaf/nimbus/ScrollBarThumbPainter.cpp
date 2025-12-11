#include <javax/swing/plaf/nimbus/ScrollBarThumbPainter.h>

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
#include <java/awt/geom/RoundRectangle2D$Float.h>
#include <java/awt/geom/RoundRectangle2D.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>
#include <jcpp.h>

#undef BACKGROUND_DISABLED
#undef BACKGROUND_ENABLED
#undef BACKGROUND_FOCUSED
#undef BACKGROUND_MOUSEOVER
#undef BACKGROUND_PRESSED

using $ColorArray = $Array<::java::awt::Color>;
using $Color = ::java::awt::Color;
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

$FieldInfo _ScrollBarThumbPainter_FieldInfo_[] = {
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(ScrollBarThumbPainter, BACKGROUND_DISABLED)},
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(ScrollBarThumbPainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(ScrollBarThumbPainter, BACKGROUND_FOCUSED)},
	{"BACKGROUND_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(ScrollBarThumbPainter, BACKGROUND_MOUSEOVER)},
	{"BACKGROUND_PRESSED", "I", nullptr, $STATIC | $FINAL, $constField(ScrollBarThumbPainter, BACKGROUND_PRESSED)},
	{"state", "I", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, color12)},
	{"color13", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, color13)},
	{"color14", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, color14)},
	{"color15", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, color15)},
	{"color16", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, color16)},
	{"color17", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, color17)},
	{"color18", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, color18)},
	{"color19", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, color19)},
	{"color20", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, color20)},
	{"color21", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, color21)},
	{"color22", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, color22)},
	{"color23", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, color23)},
	{"color24", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, color24)},
	{"color25", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, color25)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(ScrollBarThumbPainter, componentColors)},
	{}
};

$MethodInfo _ScrollBarThumbPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(ScrollBarThumbPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&ScrollBarThumbPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ScrollBarThumbPainter::*)($Shape*)>(&ScrollBarThumbPainter::decodeGradient1))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ScrollBarThumbPainter::*)($Shape*)>(&ScrollBarThumbPainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ScrollBarThumbPainter::*)($Shape*)>(&ScrollBarThumbPainter::decodeGradient3))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ScrollBarThumbPainter::*)($Shape*)>(&ScrollBarThumbPainter::decodeGradient4))},
	{"decodeGradient5", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ScrollBarThumbPainter::*)($Shape*)>(&ScrollBarThumbPainter::decodeGradient5))},
	{"decodeGradient6", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ScrollBarThumbPainter::*)($Shape*)>(&ScrollBarThumbPainter::decodeGradient6))},
	{"decodeGradient7", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ScrollBarThumbPainter::*)($Shape*)>(&ScrollBarThumbPainter::decodeGradient7))},
	{"decodeGradient8", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ScrollBarThumbPainter::*)($Shape*)>(&ScrollBarThumbPainter::decodeGradient8))},
	{"decodeGradient9", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ScrollBarThumbPainter::*)($Shape*)>(&ScrollBarThumbPainter::decodeGradient9))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ScrollBarThumbPainter::*)()>(&ScrollBarThumbPainter::decodePath1))},
	{"decodePath2", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ScrollBarThumbPainter::*)()>(&ScrollBarThumbPainter::decodePath2))},
	{"decodePath3", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ScrollBarThumbPainter::*)()>(&ScrollBarThumbPainter::decodePath3))},
	{"decodePath4", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ScrollBarThumbPainter::*)()>(&ScrollBarThumbPainter::decodePath4))},
	{"decodePath5", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ScrollBarThumbPainter::*)()>(&ScrollBarThumbPainter::decodePath5))},
	{"decodePath6", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ScrollBarThumbPainter::*)()>(&ScrollBarThumbPainter::decodePath6))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ScrollBarThumbPainter::*)($Graphics2D*)>(&ScrollBarThumbPainter::paintBackgroundEnabled))},
	{"paintBackgroundMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ScrollBarThumbPainter::*)($Graphics2D*)>(&ScrollBarThumbPainter::paintBackgroundMouseOver))},
	{"paintBackgroundPressed", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ScrollBarThumbPainter::*)($Graphics2D*)>(&ScrollBarThumbPainter::paintBackgroundPressed))},
	{}
};

$ClassInfo _ScrollBarThumbPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.ScrollBarThumbPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_ScrollBarThumbPainter_FieldInfo_,
	_ScrollBarThumbPainter_MethodInfo_
};

$Object* allocate$ScrollBarThumbPainter($Class* clazz) {
	return $of($alloc(ScrollBarThumbPainter));
}

void ScrollBarThumbPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBase"_s, 5.1498413E-4f, 0.18061227f, -0.35686278f, 0));
	$set(this, color2, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.21018237f, -0.18039218f, 0));
	$set(this, color3, decodeColor("nimbusBase"_s, 7.13408E-4f, -0.53277314f, 0.25098038f, 0));
	$set(this, color4, decodeColor("nimbusBase"_s, -0.07865167f, -0.6317617f, 0.44313723f, 0));
	$set(this, color5, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.44340658f, 0.26666665f, 0));
	$set(this, color6, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.4669379f, 0.38039213f, 0));
	$set(this, color7, decodeColor("nimbusBase"_s, -0.07865167f, -0.56512606f, 0.45098037f, 0));
	$set(this, color8, decodeColor("nimbusBase"_s, -0.0017285943f, -0.362987f, 0.011764705f, 0));
	$set(this, color9, decodeColor("nimbusBase"_s, 5.2034855E-5f, -0.41753247f, 0.09803921f, -222));
	$set(this, color10, $new($Color, 255, 200, 0, 255));
	$set(this, color11, decodeColor("nimbusBase"_s, -0.0017285943f, -0.362987f, 0.011764705f, -255));
	$set(this, color12, decodeColor("nimbusBase"_s, 0.010237217f, -0.5621849f, 0.25098038f, 0));
	$set(this, color13, decodeColor("nimbusBase"_s, 0.08801502f, -0.6317773f, 0.4470588f, 0));
	$set(this, color14, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.45950285f, 0.34117645f, 0));
	$set(this, color15, decodeColor("nimbusBase"_s, -0.0017285943f, -0.48277313f, 0.45098037f, 0));
	$set(this, color16, decodeColor("nimbusBase"_s, 0.0f, -0.6357143f, 0.45098037f, 0));
	$set(this, color17, decodeColor("nimbusBase"_s, -0.57865167f, -0.6357143f, -0.54901963f, 0));
	$set(this, color18, decodeColor("nimbusBase"_s, 0.0013483167f, 0.29021162f, -0.33725494f, 0));
	$set(this, color19, decodeColor("nimbusBase"_s, 0.002908647f, -0.29012606f, -0.015686274f, 0));
	$set(this, color20, decodeColor("nimbusBase"_s, -8.738637E-4f, -0.40612245f, 0.21960783f, 0));
	$set(this, color21, decodeColor("nimbusBase"_s, 0.0f, -0.01765871f, 0.015686274f, 0));
	$set(this, color22, decodeColor("nimbusBase"_s, 0.0f, -0.12714285f, 0.1372549f, 0));
	$set(this, color23, decodeColor("nimbusBase"_s, 0.0018727183f, -0.23116884f, 0.31372547f, 0));
	$set(this, color24, decodeColor("nimbusBase"_s, -8.738637E-4f, -0.3579365f, -0.33725494f, 0));
	$set(this, color25, decodeColor("nimbusBase"_s, 0.004681647f, -0.3857143f, -0.36078435f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void ScrollBarThumbPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case ScrollBarThumbPainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	case ScrollBarThumbPainter::BACKGROUND_MOUSEOVER:
		{
			paintBackgroundMouseOver(g);
			break;
		}
	case ScrollBarThumbPainter::BACKGROUND_PRESSED:
		{
			paintBackgroundPressed(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* ScrollBarThumbPainter::getPaintContext() {
	return this->ctx;
}

void ScrollBarThumbPainter::paintBackgroundEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath1());
	$nc(g)->setPaint($(decodeGradient1(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient2(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient3(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint(this->color10);
	g->fill(this->path);
	$set(this, path, decodePath5());
	g->setPaint($(decodeGradient4(this->path)));
	g->fill(this->path);
}

void ScrollBarThumbPainter::paintBackgroundMouseOver($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath1());
	$nc(g)->setPaint($(decodeGradient1(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient5(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient3(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint(this->color10);
	g->fill(this->path);
	$set(this, path, decodePath5());
	g->setPaint($(decodeGradient4(this->path)));
	g->fill(this->path);
}

void ScrollBarThumbPainter::paintBackgroundPressed($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath1());
	$nc(g)->setPaint($(decodeGradient6(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient7(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient8(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint(this->color10);
	g->fill(this->path);
	$set(this, path, decodePath6());
	g->setPaint($(decodeGradient9(this->path)));
	g->fill(this->path);
}

$Path2D* ScrollBarThumbPainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(1.0f));
	double var$1 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$1, decodeY(1.0666667f));
	double var$2 = (double)decodeAnchorX(0.0f, 0.0f);
	double var$3 = (double)decodeAnchorY(1.0666667f, 6.0f);
	double var$4 = (double)decodeAnchorX(1.0f, -10.0f);
	double var$5 = (double)decodeAnchorY(2.0f, 0.0f);
	double var$6 = (double)decodeX(1.0f);
	$nc(this->path)->curveTo(var$2, var$3, var$4, var$5, var$6, decodeY(2.0f));
	double var$7 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$7, decodeY(2.0f));
	double var$8 = (double)decodeAnchorX(2.0f, 10.0f);
	double var$9 = (double)decodeAnchorY(2.0f, 0.0f);
	double var$10 = (double)decodeAnchorX(3.0f, 0.0f);
	double var$11 = (double)decodeAnchorY(1.0666667f, 6.0f);
	double var$12 = (double)decodeX(3.0f);
	$nc(this->path)->curveTo(var$8, var$9, var$10, var$11, var$12, decodeY(1.0666667f));
	double var$13 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$13, decodeY(1.0f));
	double var$14 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$14, decodeY(1.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* ScrollBarThumbPainter::decodePath2() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.06666667f);
	$nc(this->path)->moveTo(var$0, decodeY(1.0f));
	double var$1 = (double)decodeX(0.06666667f);
	$nc(this->path)->lineTo(var$1, decodeY(1.0666667f));
	double var$2 = (double)decodeAnchorX(0.06666667f, -0.045454547f);
	double var$3 = (double)decodeAnchorY(1.0666667f, 8.454545f);
	double var$4 = (double)decodeAnchorX(1.0f, -5.8636365f);
	double var$5 = (double)decodeAnchorY(1.9333334f, 0.0f);
	double var$6 = (double)decodeX(1.0f);
	$nc(this->path)->curveTo(var$2, var$3, var$4, var$5, var$6, decodeY(1.9333334f));
	double var$7 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$7, decodeY(1.9333334f));
	double var$8 = (double)decodeAnchorX(2.0f, 5.909091f);
	double var$9 = (double)decodeAnchorY(1.9333334f, -3.5527137E-15f);
	double var$10 = (double)decodeAnchorX(2.9333334f, -0.045454547f);
	double var$11 = (double)decodeAnchorY(1.0666667f, 8.363636f);
	double var$12 = (double)decodeX(2.9333334f);
	$nc(this->path)->curveTo(var$8, var$9, var$10, var$11, var$12, decodeY(1.0666667f));
	double var$13 = (double)decodeX(2.9333334f);
	$nc(this->path)->lineTo(var$13, decodeY(1.0f));
	double var$14 = (double)decodeX(0.06666667f);
	$nc(this->path)->lineTo(var$14, decodeY(1.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* ScrollBarThumbPainter::decodePath3() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.4f);
	$nc(this->path)->moveTo(var$0, decodeY(1.0f));
	double var$1 = (double)decodeX(0.06666667f);
	$nc(this->path)->lineTo(var$1, decodeY(1.0f));
	double var$2 = (double)decodeX(0.16060607f);
	$nc(this->path)->lineTo(var$2, decodeY(1.5090909f));
	double var$3 = (double)decodeAnchorX(0.16060607f, 0.0f);
	double var$4 = (double)decodeAnchorY(1.5090909f, 0.0f);
	double var$5 = (double)decodeAnchorX(0.2f, -0.95454544f);
	double var$6 = (double)decodeAnchorY(1.1363636f, 1.5454545f);
	double var$7 = (double)decodeX(0.2f);
	$nc(this->path)->curveTo(var$3, var$4, var$5, var$6, var$7, decodeY(1.1363636f));
	double var$8 = (double)decodeAnchorX(0.2f, 0.95454544f);
	double var$9 = (double)decodeAnchorY(1.1363636f, -1.5454545f);
	double var$10 = (double)decodeAnchorX(0.4f, 0.0f);
	double var$11 = (double)decodeAnchorY(1.0f, 0.0f);
	double var$12 = (double)decodeX(0.4f);
	$nc(this->path)->curveTo(var$8, var$9, var$10, var$11, var$12, decodeY(1.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* ScrollBarThumbPainter::decodePath4() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(2.4242425f);
	$nc(this->path)->moveTo(var$0, decodeY(1.5121212f));
	double var$1 = (double)decodeX(2.4242425f);
	$nc(this->path)->lineTo(var$1, decodeY(1.5121212f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* ScrollBarThumbPainter::decodePath5() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(2.9363637f);
	$nc(this->path)->moveTo(var$0, decodeY(1.0f));
	double var$1 = (double)decodeX(2.6030304f);
	$nc(this->path)->lineTo(var$1, decodeY(1.0f));
	double var$2 = (double)decodeAnchorX(2.6030304f, 0.0f);
	double var$3 = (double)decodeAnchorY(1.0f, 0.0f);
	double var$4 = (double)decodeAnchorX(2.778788f, -0.6818182f);
	double var$5 = (double)decodeAnchorY(1.1333333f, -1.2272727f);
	double var$6 = (double)decodeX(2.778788f);
	$nc(this->path)->curveTo(var$2, var$3, var$4, var$5, var$6, decodeY(1.1333333f));
	double var$7 = (double)decodeAnchorX(2.778788f, 0.6818182f);
	double var$8 = (double)decodeAnchorY(1.1333333f, 1.2272727f);
	double var$9 = (double)decodeAnchorX(2.8393939f, 0.0f);
	double var$10 = (double)decodeAnchorY(1.5060606f, 0.0f);
	double var$11 = (double)decodeX(2.8393939f);
	$nc(this->path)->curveTo(var$7, var$8, var$9, var$10, var$11, decodeY(1.5060606f));
	double var$12 = (double)decodeX(2.9363637f);
	$nc(this->path)->lineTo(var$12, decodeY(1.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* ScrollBarThumbPainter::decodePath6() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(2.9363637f);
	$nc(this->path)->moveTo(var$0, decodeY(1.0f));
	double var$1 = (double)decodeX(2.5563636f);
	$nc(this->path)->lineTo(var$1, decodeY(1.0f));
	double var$2 = (double)decodeAnchorX(2.5563636f, 0.0f);
	double var$3 = (double)decodeAnchorY(1.0f, 0.0f);
	double var$4 = (double)decodeAnchorX(2.7587879f, -0.6818182f);
	double var$5 = (double)decodeAnchorY(1.14f, -1.2272727f);
	double var$6 = (double)decodeX(2.7587879f);
	$nc(this->path)->curveTo(var$2, var$3, var$4, var$5, var$6, decodeY(1.14f));
	double var$7 = (double)decodeAnchorX(2.7587879f, 0.6818182f);
	double var$8 = (double)decodeAnchorY(1.14f, 1.2272727f);
	double var$9 = (double)decodeAnchorX(2.8393939f, 0.0f);
	double var$10 = (double)decodeAnchorY(1.5060606f, 0.0f);
	double var$11 = (double)decodeX(2.8393939f);
	$nc(this->path)->curveTo(var$7, var$8, var$9, var$10, var$11, decodeY(1.5060606f));
	double var$12 = (double)decodeX(2.9363637f);
	$nc(this->path)->lineTo(var$12, decodeY(1.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Paint* ScrollBarThumbPainter::decodeGradient1($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color1,
		$(decodeColor(this->color1, this->color2, 0.5f)),
		this->color2
	}));
}

$Paint* ScrollBarThumbPainter::decodeGradient2($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.038922157f,
		0.0508982f,
		0.06287425f,
		0.19610777f,
		0.32934132f,
		0.48952097f,
		0.6497006f,
		0.8248503f,
		1.0f
	}), $$new($ColorArray, {
		this->color3,
		$(decodeColor(this->color3, this->color4, 0.5f)),
		this->color4,
		$(decodeColor(this->color4, this->color5, 0.5f)),
		this->color5,
		$(decodeColor(this->color5, this->color6, 0.5f)),
		this->color6,
		$(decodeColor(this->color6, this->color7, 0.5f)),
		this->color7
	}));
}

$Paint* ScrollBarThumbPainter::decodeGradient3($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.06818182f * w) + x, (-0.005952381f * h) + y, (0.3689091f * w) + x, (0.23929171f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color8,
		$(decodeColor(this->color8, this->color9, 0.5f)),
		this->color9
	}));
}

$Paint* ScrollBarThumbPainter::decodeGradient4($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.9409091f * w) + x, (0.035928145f * h) + y, (0.5954546f * w) + x, (0.26347303f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color8,
		$(decodeColor(this->color8, this->color11, 0.5f)),
		this->color11
	}));
}

$Paint* ScrollBarThumbPainter::decodeGradient5($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.038922157f,
		0.0508982f,
		0.06287425f,
		0.19610777f,
		0.32934132f,
		0.48952097f,
		0.6497006f,
		0.8248503f,
		1.0f
	}), $$new($ColorArray, {
		this->color12,
		$(decodeColor(this->color12, this->color13, 0.5f)),
		this->color13,
		$(decodeColor(this->color13, this->color14, 0.5f)),
		this->color14,
		$(decodeColor(this->color14, this->color15, 0.5f)),
		this->color15,
		$(decodeColor(this->color15, this->color16, 0.5f)),
		this->color16
	}));
}

$Paint* ScrollBarThumbPainter::decodeGradient6($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color17,
		$(decodeColor(this->color17, this->color18, 0.5f)),
		this->color18
	}));
}

$Paint* ScrollBarThumbPainter::decodeGradient7($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.038922157f,
		0.0508982f,
		0.06287425f,
		0.19610777f,
		0.32934132f,
		0.48952097f,
		0.6497006f,
		0.8248503f,
		1.0f
	}), $$new($ColorArray, {
		this->color19,
		$(decodeColor(this->color19, this->color20, 0.5f)),
		this->color20,
		$(decodeColor(this->color20, this->color21, 0.5f)),
		this->color21,
		$(decodeColor(this->color21, this->color22, 0.5f)),
		this->color22,
		$(decodeColor(this->color22, this->color23, 0.5f)),
		this->color23
	}));
}

$Paint* ScrollBarThumbPainter::decodeGradient8($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.06818182f * w) + x, (-0.005952381f * h) + y, (0.3689091f * w) + x, (0.23929171f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color24,
		$(decodeColor(this->color24, this->color9, 0.5f)),
		this->color9
	}));
}

$Paint* ScrollBarThumbPainter::decodeGradient9($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.9409091f * w) + x, (0.035928145f * h) + y, (0.37615633f * w) + x, (0.34910178f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color25,
		$(decodeColor(this->color25, this->color11, 0.5f)),
		this->color11
	}));
}

ScrollBarThumbPainter::ScrollBarThumbPainter() {
}

$Class* ScrollBarThumbPainter::load$($String* name, bool initialize) {
	$loadClass(ScrollBarThumbPainter, name, initialize, &_ScrollBarThumbPainter_ClassInfo_, allocate$ScrollBarThumbPainter);
	return class$;
}

$Class* ScrollBarThumbPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax