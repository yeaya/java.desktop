#include <javax/swing/plaf/nimbus/ScrollBarTrackPainter.h>

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

$FieldInfo _ScrollBarTrackPainter_FieldInfo_[] = {
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(ScrollBarTrackPainter, BACKGROUND_DISABLED)},
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(ScrollBarTrackPainter, BACKGROUND_ENABLED)},
	{"state", "I", nullptr, $PRIVATE, $field(ScrollBarTrackPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(ScrollBarTrackPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(ScrollBarTrackPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(ScrollBarTrackPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(ScrollBarTrackPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(ScrollBarTrackPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarTrackPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarTrackPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarTrackPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarTrackPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarTrackPainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarTrackPainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarTrackPainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarTrackPainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarTrackPainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarTrackPainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarTrackPainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarTrackPainter, color12)},
	{"color13", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarTrackPainter, color13)},
	{"color14", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarTrackPainter, color14)},
	{"color15", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarTrackPainter, color15)},
	{"color16", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarTrackPainter, color16)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(ScrollBarTrackPainter, componentColors)},
	{}
};

$MethodInfo _ScrollBarTrackPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(ScrollBarTrackPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&ScrollBarTrackPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ScrollBarTrackPainter::*)($Shape*)>(&ScrollBarTrackPainter::decodeGradient1))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ScrollBarTrackPainter::*)($Shape*)>(&ScrollBarTrackPainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ScrollBarTrackPainter::*)($Shape*)>(&ScrollBarTrackPainter::decodeGradient3))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ScrollBarTrackPainter::*)($Shape*)>(&ScrollBarTrackPainter::decodeGradient4))},
	{"decodeGradient5", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ScrollBarTrackPainter::*)($Shape*)>(&ScrollBarTrackPainter::decodeGradient5))},
	{"decodeGradient6", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ScrollBarTrackPainter::*)($Shape*)>(&ScrollBarTrackPainter::decodeGradient6))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ScrollBarTrackPainter::*)()>(&ScrollBarTrackPainter::decodePath1))},
	{"decodePath2", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ScrollBarTrackPainter::*)()>(&ScrollBarTrackPainter::decodePath2))},
	{"decodePath3", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ScrollBarTrackPainter::*)()>(&ScrollBarTrackPainter::decodePath3))},
	{"decodePath4", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ScrollBarTrackPainter::*)()>(&ScrollBarTrackPainter::decodePath4))},
	{"decodeRect1", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ScrollBarTrackPainter::*)()>(&ScrollBarTrackPainter::decodeRect1))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ScrollBarTrackPainter::*)($Graphics2D*)>(&ScrollBarTrackPainter::paintBackgroundDisabled))},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ScrollBarTrackPainter::*)($Graphics2D*)>(&ScrollBarTrackPainter::paintBackgroundEnabled))},
	{}
};

$ClassInfo _ScrollBarTrackPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.ScrollBarTrackPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_ScrollBarTrackPainter_FieldInfo_,
	_ScrollBarTrackPainter_MethodInfo_
};

$Object* allocate$ScrollBarTrackPainter($Class* clazz) {
	return $of($alloc(ScrollBarTrackPainter));
}

void ScrollBarTrackPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBlueGrey"_s, -0.027777791f, -0.10016362f, 0.011764705f, 0));
	$set(this, color2, decodeColor("nimbusBlueGrey"_s, -0.027777791f, -0.100476064f, 0.035294116f, 0));
	$set(this, color3, decodeColor("nimbusBlueGrey"_s, 0.055555582f, -0.10606203f, 0.13333333f, 0));
	$set(this, color4, decodeColor("nimbusBlueGrey"_s, -0.6111111f, -0.110526316f, 0.24705881f, 0));
	$set(this, color5, decodeColor("nimbusBlueGrey"_s, 0.02222228f, -0.06465475f, -0.31764707f, 0));
	$set(this, color6, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.06766917f, -0.19607842f, 0));
	$set(this, color7, decodeColor("nimbusBlueGrey"_s, -0.006944418f, -0.0655825f, -0.04705882f, 0));
	$set(this, color8, decodeColor("nimbusBlueGrey"_s, 0.0138888955f, -0.071117446f, 0.05098039f, 0));
	$set(this, color9, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.07016757f, 0.12941176f, 0));
	$set(this, color10, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.05967886f, -0.5137255f, 0));
	$set(this, color11, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.05967886f, -0.5137255f, -255));
	$set(this, color12, decodeColor("nimbusBlueGrey"_s, -0.027777791f, -0.07826825f, -0.5019608f, -255));
	$set(this, color13, decodeColor("nimbusBlueGrey"_s, -0.015872955f, -0.06731644f, -0.109803915f, 0));
	$set(this, color14, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.06924191f, 0.109803915f, 0));
	$set(this, color15, decodeColor("nimbusBlueGrey"_s, -0.015872955f, -0.06861015f, -0.09019607f, 0));
	$set(this, color16, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.06766917f, 0.07843137f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void ScrollBarTrackPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case ScrollBarTrackPainter::BACKGROUND_DISABLED:
		{
			paintBackgroundDisabled(g);
			break;
		}
	case ScrollBarTrackPainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* ScrollBarTrackPainter::getPaintContext() {
	return this->ctx;
}

void ScrollBarTrackPainter::paintBackgroundDisabled($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint($(decodeGradient1(this->rect)));
	g->fill(this->rect);
}

void ScrollBarTrackPainter::paintBackgroundEnabled($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint($(decodeGradient2(this->rect)));
	g->fill(this->rect);
	$set(this, path, decodePath1());
	g->setPaint($(decodeGradient3(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient4(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient5(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint($(decodeGradient6(this->path)));
	g->fill(this->path);
}

$Rectangle2D* ScrollBarTrackPainter::decodeRect1() {
	double var$0 = (double)decodeX(0.0f);
	double var$1 = (double)decodeY(0.0f);
	float var$3 = decodeX(3.0f);
	double var$2 = (double)(var$3 - decodeX(0.0f));
	float var$4 = decodeY(3.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.0f));
	return this->rect;
}

$Path2D* ScrollBarTrackPainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.7f);
	$nc(this->path)->moveTo(var$0, decodeY(0.0f));
	double var$1 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$1, decodeY(0.0f));
	double var$2 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$2, decodeY(1.2f));
	double var$3 = (double)decodeAnchorX(0.0f, 0.0f);
	double var$4 = (double)decodeAnchorY(1.2f, 0.0f);
	double var$5 = (double)decodeAnchorX(0.3f, -1.0f);
	double var$6 = (double)decodeAnchorY(2.2f, -1.0f);
	double var$7 = (double)decodeX(0.3f);
	$nc(this->path)->curveTo(var$3, var$4, var$5, var$6, var$7, decodeY(2.2f));
	double var$8 = (double)decodeAnchorX(0.3f, 1.0f);
	double var$9 = (double)decodeAnchorY(2.2f, 1.0f);
	double var$10 = (double)decodeAnchorX(0.6785714f, 0.0f);
	double var$11 = (double)decodeAnchorY(2.8f, 0.0f);
	double var$12 = (double)decodeX(0.6785714f);
	$nc(this->path)->curveTo(var$8, var$9, var$10, var$11, var$12, decodeY(2.8f));
	double var$13 = (double)decodeX(0.7f);
	$nc(this->path)->lineTo(var$13, decodeY(0.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* ScrollBarTrackPainter::decodePath2() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(3.0f);
	$nc(this->path)->moveTo(var$0, decodeY(0.0f));
	double var$1 = (double)decodeX(2.2222223f);
	$nc(this->path)->lineTo(var$1, decodeY(0.0f));
	double var$2 = (double)decodeX(2.2222223f);
	$nc(this->path)->lineTo(var$2, decodeY(2.8f));
	double var$3 = (double)decodeAnchorX(2.2222223f, 0.0f);
	double var$4 = (double)decodeAnchorY(2.8f, 0.0f);
	double var$5 = (double)decodeAnchorX(2.6746032f, -1.0f);
	double var$6 = (double)decodeAnchorY(2.1857142f, 1.0f);
	double var$7 = (double)decodeX(2.6746032f);
	$nc(this->path)->curveTo(var$3, var$4, var$5, var$6, var$7, decodeY(2.1857142f));
	double var$8 = (double)decodeAnchorX(2.6746032f, 1.0f);
	double var$9 = (double)decodeAnchorY(2.1857142f, -1.0f);
	double var$10 = (double)decodeAnchorX(3.0f, 0.0f);
	double var$11 = (double)decodeAnchorY(1.2f, 0.0f);
	double var$12 = (double)decodeX(3.0f);
	$nc(this->path)->curveTo(var$8, var$9, var$10, var$11, var$12, decodeY(1.2f));
	double var$13 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$13, decodeY(0.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* ScrollBarTrackPainter::decodePath3() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.11428572f);
	$nc(this->path)->moveTo(var$0, decodeY(1.3714286f));
	double var$1 = (double)decodeAnchorX(0.11428572f, 0.78571427f);
	double var$2 = (double)decodeAnchorY(1.3714286f, -0.5714286f);
	double var$3 = (double)decodeAnchorX(0.4642857f, -1.3571428f);
	double var$4 = (double)decodeAnchorY(2.0714285f, -1.5714285f);
	double var$5 = (double)decodeX(0.4642857f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(2.0714285f));
	double var$6 = (double)decodeAnchorX(0.4642857f, 1.3571428f);
	double var$7 = (double)decodeAnchorY(2.0714285f, 1.5714285f);
	double var$8 = (double)decodeAnchorX(0.8714286f, 0.21428572f);
	double var$9 = (double)decodeAnchorY(2.7285714f, -1.0f);
	double var$10 = (double)decodeX(0.8714286f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(2.7285714f));
	double var$11 = (double)decodeAnchorX(0.8714286f, -0.21428572f);
	double var$12 = (double)decodeAnchorY(2.7285714f, 1.0f);
	double var$13 = (double)decodeAnchorX(0.35714287f, 1.5f);
	double var$14 = (double)decodeAnchorY(2.3142858f, 1.6428572f);
	double var$15 = (double)decodeX(0.35714287f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(2.3142858f));
	double var$16 = (double)decodeAnchorX(0.35714287f, -1.5f);
	double var$17 = (double)decodeAnchorY(2.3142858f, -1.6428572f);
	double var$18 = (double)decodeAnchorX(0.11428572f, -0.78571427f);
	double var$19 = (double)decodeAnchorY(1.3714286f, 0.5714286f);
	double var$20 = (double)decodeX(0.11428572f);
	$nc(this->path)->curveTo(var$16, var$17, var$18, var$19, var$20, decodeY(1.3714286f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* ScrollBarTrackPainter::decodePath4() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(2.1111112f);
	$nc(this->path)->moveTo(var$0, decodeY(2.7f));
	double var$1 = (double)decodeAnchorX(2.1111112f, 0.42857143f);
	double var$2 = (double)decodeAnchorY(2.7f, 0.64285713f);
	double var$3 = (double)decodeAnchorX(2.6269841f, -1.5714285f);
	double var$4 = (double)decodeAnchorY(2.2f, 1.6428572f);
	double var$5 = (double)decodeX(2.6269841f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(2.2f));
	double var$6 = (double)decodeAnchorX(2.6269841f, 1.5714285f);
	double var$7 = (double)decodeAnchorY(2.2f, -1.6428572f);
	double var$8 = (double)decodeAnchorX(2.84127f, 0.71428573f);
	double var$9 = (double)decodeAnchorY(1.3857143f, 0.64285713f);
	double var$10 = (double)decodeX(2.84127f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(1.3857143f));
	double var$11 = (double)decodeAnchorX(2.84127f, -0.71428573f);
	double var$12 = (double)decodeAnchorY(1.3857143f, -0.64285713f);
	double var$13 = (double)decodeAnchorX(2.5238094f, 0.71428573f);
	double var$14 = (double)decodeAnchorY(2.0571427f, -0.85714287f);
	double var$15 = (double)decodeX(2.5238094f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(2.0571427f));
	double var$16 = (double)decodeAnchorX(2.5238094f, -0.71428573f);
	double var$17 = (double)decodeAnchorY(2.0571427f, 0.85714287f);
	double var$18 = (double)decodeAnchorX(2.1111112f, -0.42857143f);
	double var$19 = (double)decodeAnchorY(2.7f, -0.64285713f);
	double var$20 = (double)decodeX(2.1111112f);
	$nc(this->path)->curveTo(var$16, var$17, var$18, var$19, var$20, decodeY(2.7f));
	$nc(this->path)->closePath();
	return this->path;
}

$Paint* ScrollBarTrackPainter::decodeGradient1($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.016129032f,
		0.038709678f,
		0.061290324f,
		0.16091082f,
		0.26451612f,
		0.4378071f,
		0.88387096f
	}), $$new($ColorArray, {
		this->color1,
		$(decodeColor(this->color1, this->color2, 0.5f)),
		this->color2,
		$(decodeColor(this->color2, this->color3, 0.5f)),
		this->color3,
		$(decodeColor(this->color3, this->color4, 0.5f)),
		this->color4
	}));
}

$Paint* ScrollBarTrackPainter::decodeGradient2($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.030645162f,
		0.061290324f,
		0.09677419f,
		0.13225806f,
		0.22096774f,
		0.30967742f,
		0.47434634f,
		0.82258064f
	}), $$new($ColorArray, {
		this->color5,
		$(decodeColor(this->color5, this->color6, 0.5f)),
		this->color6,
		$(decodeColor(this->color6, this->color7, 0.5f)),
		this->color7,
		$(decodeColor(this->color7, this->color8, 0.5f)),
		this->color8,
		$(decodeColor(this->color8, this->color9, 0.5f)),
		this->color9
	}));
}

$Paint* ScrollBarTrackPainter::decodeGradient3($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.0f * w) + x, (0.0f * h) + y, (0.9285714f * w) + x, (0.12244898f * h) + y, $$new($floats, {
		0.0f,
		0.1f,
		1.0f
	}), $$new($ColorArray, {
		this->color10,
		$(decodeColor(this->color10, this->color11, 0.5f)),
		this->color11
	}));
}

$Paint* ScrollBarTrackPainter::decodeGradient4($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((-0.045918368f * w) + x, (0.18336426f * h) + y, (0.872449f * w) + x, (0.04050711f * h) + y, $$new($floats, {
		0.0f,
		0.87096775f,
		1.0f
	}), $$new($ColorArray, {
		this->color12,
		$(decodeColor(this->color12, this->color10, 0.5f)),
		this->color10
	}));
}

$Paint* ScrollBarTrackPainter::decodeGradient5($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.12719299f * w) + x, (0.13157894f * h) + y, (0.90789473f * w) + x, (0.877193f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color13,
		$(decodeColor(this->color13, this->color14, 0.5f)),
		this->color14
	}));
}

$Paint* ScrollBarTrackPainter::decodeGradient6($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.86458343f * w) + x, (0.20952381f * h) + y, (0.020833189f * w) + x, (0.95238096f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color15,
		$(decodeColor(this->color15, this->color16, 0.5f)),
		this->color16
	}));
}

ScrollBarTrackPainter::ScrollBarTrackPainter() {
}

$Class* ScrollBarTrackPainter::load$($String* name, bool initialize) {
	$loadClass(ScrollBarTrackPainter, name, initialize, &_ScrollBarTrackPainter_ClassInfo_, allocate$ScrollBarTrackPainter);
	return class$;
}

$Class* ScrollBarTrackPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax