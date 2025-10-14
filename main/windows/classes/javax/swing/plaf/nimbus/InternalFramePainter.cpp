#include <javax/swing/plaf/nimbus/InternalFramePainter.h>

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

#undef BACKGROUND_ENABLED
#undef BACKGROUND_ENABLED_WINDOWFOCUSED

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

$FieldInfo _InternalFramePainter_FieldInfo_[] = {
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFramePainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_ENABLED_WINDOWFOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFramePainter, BACKGROUND_ENABLED_WINDOWFOCUSED)},
	{"state", "I", nullptr, $PRIVATE, $field(InternalFramePainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(InternalFramePainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(InternalFramePainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(InternalFramePainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(InternalFramePainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(InternalFramePainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFramePainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFramePainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFramePainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFramePainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFramePainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFramePainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFramePainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFramePainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFramePainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFramePainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFramePainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFramePainter, color12)},
	{"color13", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFramePainter, color13)},
	{"color14", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFramePainter, color14)},
	{"color15", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFramePainter, color15)},
	{"color16", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFramePainter, color16)},
	{"color17", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFramePainter, color17)},
	{"color18", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFramePainter, color18)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(InternalFramePainter, componentColors)},
	{}
};

$MethodInfo _InternalFramePainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(InternalFramePainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&InternalFramePainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFramePainter::*)($Shape*)>(&InternalFramePainter::decodeGradient1))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFramePainter::*)($Shape*)>(&InternalFramePainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFramePainter::*)($Shape*)>(&InternalFramePainter::decodeGradient3))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(InternalFramePainter::*)()>(&InternalFramePainter::decodePath1))},
	{"decodePath2", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(InternalFramePainter::*)()>(&InternalFramePainter::decodePath2))},
	{"decodePath3", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(InternalFramePainter::*)()>(&InternalFramePainter::decodePath3))},
	{"decodePath4", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(InternalFramePainter::*)()>(&InternalFramePainter::decodePath4))},
	{"decodePath5", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(InternalFramePainter::*)()>(&InternalFramePainter::decodePath5))},
	{"decodePath6", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(InternalFramePainter::*)()>(&InternalFramePainter::decodePath6))},
	{"decodePath7", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(InternalFramePainter::*)()>(&InternalFramePainter::decodePath7))},
	{"decodePath8", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(InternalFramePainter::*)()>(&InternalFramePainter::decodePath8))},
	{"decodePath9", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(InternalFramePainter::*)()>(&InternalFramePainter::decodePath9))},
	{"decodeRect1", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(InternalFramePainter::*)()>(&InternalFramePainter::decodeRect1))},
	{"decodeRect2", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(InternalFramePainter::*)()>(&InternalFramePainter::decodeRect2))},
	{"decodeRect3", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(InternalFramePainter::*)()>(&InternalFramePainter::decodeRect3))},
	{"decodeRect4", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(InternalFramePainter::*)()>(&InternalFramePainter::decodeRect4))},
	{"decodeRoundRect1", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(InternalFramePainter::*)()>(&InternalFramePainter::decodeRoundRect1))},
	{"decodeRoundRect2", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(InternalFramePainter::*)()>(&InternalFramePainter::decodeRoundRect2))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFramePainter::*)($Graphics2D*)>(&InternalFramePainter::paintBackgroundEnabled))},
	{"paintBackgroundEnabledAndWindowFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFramePainter::*)($Graphics2D*)>(&InternalFramePainter::paintBackgroundEnabledAndWindowFocused))},
	{}
};

$ClassInfo _InternalFramePainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.InternalFramePainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_InternalFramePainter_FieldInfo_,
	_InternalFramePainter_MethodInfo_
};

$Object* allocate$InternalFramePainter($Class* clazz) {
	return $of($alloc(InternalFramePainter));
}

void InternalFramePainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBase"_s, 0.032459438f, -0.53637654f, 0.043137252f, 0));
	$set(this, color2, decodeColor("nimbusBlueGrey"_s, 0.004273474f, -0.039488062f, -0.027450979f, 0));
	$set(this, color3, decodeColor("nimbusBlueGrey"_s, -0.00505054f, -0.056339122f, 0.05098039f, 0));
	$set(this, color4, decodeColor("nimbusBlueGrey"_s, -0.01111114f, -0.06357796f, 0.09019607f, 0));
	$set(this, color5, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.023821115f, -0.06666666f, 0));
	$set(this, color6, decodeColor("control"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color7, decodeColor("nimbusBlueGrey"_s, -0.006944418f, -0.07399663f, 0.11372548f, 0));
	$set(this, color8, decodeColor("nimbusBase"_s, 0.02551502f, -0.47885156f, -0.34901965f, 0));
	$set(this, color9, $new($Color, 255, 200, 0, 255));
	$set(this, color10, decodeColor("nimbusBase"_s, 0.004681647f, -0.6274498f, 0.39999998f, 0));
	$set(this, color11, decodeColor("nimbusBase"_s, 0.032459438f, -0.5934608f, 0.2862745f, 0));
	$set(this, color12, $new($Color, 204, 207, 213, 255));
	$set(this, color13, decodeColor("nimbusBase"_s, 0.032459438f, -0.55506915f, 0.18039215f, 0));
	$set(this, color14, decodeColor("nimbusBase"_s, 0.004681647f, -0.52792984f, 0.10588235f, 0));
	$set(this, color15, decodeColor("nimbusBase"_s, 0.03801495f, -0.4794643f, -0.04705882f, 0));
	$set(this, color16, decodeColor("nimbusBase"_s, 0.021348298f, -0.61416256f, 0.3607843f, 0));
	$set(this, color17, decodeColor("nimbusBase"_s, 0.032459438f, -0.5546332f, 0.17647058f, 0));
	$set(this, color18, $new($Color, 235, 236, 238, 255));
	this->state = state;
	$set(this, ctx, ctx);
}

void InternalFramePainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case InternalFramePainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	case InternalFramePainter::BACKGROUND_ENABLED_WINDOWFOCUSED:
		{
			paintBackgroundEnabledAndWindowFocused(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* InternalFramePainter::getPaintContext() {
	return this->ctx;
}

void InternalFramePainter::paintBackgroundEnabled($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->roundRect);
	$set(this, path, decodePath1());
	g->setPaint($(decodeGradient1(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint(this->color3);
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint(this->color4);
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint(this->color5);
	g->fill(this->path);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color6);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint(this->color7);
	g->fill(this->rect);
}

void InternalFramePainter::paintBackgroundEnabledAndWindowFocused($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect2());
	$nc(g)->setPaint(this->color8);
	g->fill(this->roundRect);
	$set(this, path, decodePath5());
	g->setPaint(this->color9);
	g->fill(this->path);
	$set(this, path, decodePath1());
	g->setPaint($(decodeGradient2(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath6());
	g->setPaint(this->color12);
	g->fill(this->path);
	$set(this, path, decodePath7());
	g->setPaint(this->color13);
	g->fill(this->path);
	$set(this, path, decodePath8());
	g->setPaint(this->color14);
	g->fill(this->path);
	$set(this, path, decodePath9());
	g->setPaint(this->color15);
	g->fill(this->path);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color6);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color9);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color9);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color9);
	g->fill(this->rect);
	$set(this, rect, decodeRect4());
	g->setPaint($(decodeGradient3(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint(this->color18);
	g->fill(this->rect);
}

$RoundRectangle2D* InternalFramePainter::decodeRoundRect1() {
	double var$0 = (double)decodeX(0.0f);
	double var$1 = (double)decodeY(0.0f);
	float var$3 = decodeX(3.0f);
	double var$2 = (double)(var$3 - decodeX(0.0f));
	float var$4 = decodeY(3.0f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.0f), 4.6666665f, 4.6666665f);
	return this->roundRect;
}

$Path2D* InternalFramePainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.16666667f);
	$nc(this->path)->moveTo(var$0, decodeY(0.12f));
	double var$1 = (double)decodeAnchorX(0.16666667f, 0.0f);
	double var$2 = (double)decodeAnchorY(0.12f, -1.0f);
	double var$3 = (double)decodeAnchorX(0.5f, -1.0f);
	double var$4 = (double)decodeAnchorY(0.04f, 0.0f);
	double var$5 = (double)decodeX(0.5f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(0.04f));
	double var$6 = (double)decodeAnchorX(0.5f, 1.0f);
	double var$7 = (double)decodeAnchorY(0.04f, 0.0f);
	double var$8 = (double)decodeAnchorX(2.5f, -1.0f);
	double var$9 = (double)decodeAnchorY(0.04f, 0.0f);
	double var$10 = (double)decodeX(2.5f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(0.04f));
	double var$11 = (double)decodeAnchorX(2.5f, 1.0f);
	double var$12 = (double)decodeAnchorY(0.04f, 0.0f);
	double var$13 = (double)decodeAnchorX(2.8333333f, 0.0f);
	double var$14 = (double)decodeAnchorY(0.12f, -1.0f);
	double var$15 = (double)decodeX(2.8333333f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(0.12f));
	double var$16 = (double)decodeAnchorX(2.8333333f, 0.0f);
	double var$17 = (double)decodeAnchorY(0.12f, 1.0f);
	double var$18 = (double)decodeAnchorX(2.8333333f, 0.0f);
	double var$19 = (double)decodeAnchorY(0.96f, 0.0f);
	double var$20 = (double)decodeX(2.8333333f);
	$nc(this->path)->curveTo(var$16, var$17, var$18, var$19, var$20, decodeY(0.96f));
	double var$21 = (double)decodeX(0.16666667f);
	$nc(this->path)->lineTo(var$21, decodeY(0.96f));
	double var$22 = (double)decodeAnchorX(0.16666667f, 0.0f);
	double var$23 = (double)decodeAnchorY(0.96f, 0.0f);
	double var$24 = (double)decodeAnchorX(0.16666667f, 0.0f);
	double var$25 = (double)decodeAnchorY(0.12f, 1.0f);
	double var$26 = (double)decodeX(0.16666667f);
	$nc(this->path)->curveTo(var$22, var$23, var$24, var$25, var$26, decodeY(0.12f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* InternalFramePainter::decodePath2() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.6666667f);
	$nc(this->path)->moveTo(var$0, decodeY(0.96f));
	double var$1 = (double)decodeX(0.16666667f);
	$nc(this->path)->lineTo(var$1, decodeY(0.96f));
	double var$2 = (double)decodeAnchorX(0.16666667f, 0.0f);
	double var$3 = (double)decodeAnchorY(0.96f, 0.0f);
	double var$4 = (double)decodeAnchorX(0.16666667f, 0.0f);
	double var$5 = (double)decodeAnchorY(2.5f, -1.0f);
	double var$6 = (double)decodeX(0.16666667f);
	$nc(this->path)->curveTo(var$2, var$3, var$4, var$5, var$6, decodeY(2.5f));
	double var$7 = (double)decodeAnchorX(0.16666667f, 0.0f);
	double var$8 = (double)decodeAnchorY(2.5f, 1.0f);
	double var$9 = (double)decodeAnchorX(0.5f, -1.0f);
	double var$10 = (double)decodeAnchorY(2.8333333f, 0.0f);
	double var$11 = (double)decodeX(0.5f);
	$nc(this->path)->curveTo(var$7, var$8, var$9, var$10, var$11, decodeY(2.8333333f));
	double var$12 = (double)decodeAnchorX(0.5f, 1.0f);
	double var$13 = (double)decodeAnchorY(2.8333333f, 0.0f);
	double var$14 = (double)decodeAnchorX(2.5f, -1.0f);
	double var$15 = (double)decodeAnchorY(2.8333333f, 0.0f);
	double var$16 = (double)decodeX(2.5f);
	$nc(this->path)->curveTo(var$12, var$13, var$14, var$15, var$16, decodeY(2.8333333f));
	double var$17 = (double)decodeAnchorX(2.5f, 1.0f);
	double var$18 = (double)decodeAnchorY(2.8333333f, 0.0f);
	double var$19 = (double)decodeAnchorX(2.8333333f, 0.0f);
	double var$20 = (double)decodeAnchorY(2.5f, 1.0f);
	double var$21 = (double)decodeX(2.8333333f);
	$nc(this->path)->curveTo(var$17, var$18, var$19, var$20, var$21, decodeY(2.5f));
	double var$22 = (double)decodeAnchorX(2.8333333f, 0.0f);
	double var$23 = (double)decodeAnchorY(2.5f, -1.0f);
	double var$24 = (double)decodeAnchorX(2.8333333f, 0.0f);
	double var$25 = (double)decodeAnchorY(0.96f, 0.0f);
	double var$26 = (double)decodeX(2.8333333f);
	$nc(this->path)->curveTo(var$22, var$23, var$24, var$25, var$26, decodeY(0.96f));
	double var$27 = (double)decodeX(2.3333333f);
	$nc(this->path)->lineTo(var$27, decodeY(0.96f));
	double var$28 = (double)decodeX(2.3333333f);
	$nc(this->path)->lineTo(var$28, decodeY(2.3333333f));
	double var$29 = (double)decodeX(0.6666667f);
	$nc(this->path)->lineTo(var$29, decodeY(2.3333333f));
	double var$30 = (double)decodeX(0.6666667f);
	$nc(this->path)->lineTo(var$30, decodeY(0.96f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* InternalFramePainter::decodePath3() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.8333333f);
	$nc(this->path)->moveTo(var$0, decodeY(0.96f));
	double var$1 = (double)decodeX(0.6666667f);
	$nc(this->path)->lineTo(var$1, decodeY(0.96f));
	double var$2 = (double)decodeX(0.6666667f);
	$nc(this->path)->lineTo(var$2, decodeY(2.3333333f));
	double var$3 = (double)decodeX(2.3333333f);
	$nc(this->path)->lineTo(var$3, decodeY(2.3333333f));
	double var$4 = (double)decodeX(2.3333333f);
	$nc(this->path)->lineTo(var$4, decodeY(0.96f));
	double var$5 = (double)decodeX(2.1666667f);
	$nc(this->path)->lineTo(var$5, decodeY(0.96f));
	double var$6 = (double)decodeX(2.1666667f);
	$nc(this->path)->lineTo(var$6, decodeY(2.1666667f));
	double var$7 = (double)decodeX(0.8333333f);
	$nc(this->path)->lineTo(var$7, decodeY(2.1666667f));
	double var$8 = (double)decodeX(0.8333333f);
	$nc(this->path)->lineTo(var$8, decodeY(0.96f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* InternalFramePainter::decodePath4() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(2.1666667f);
	$nc(this->path)->moveTo(var$0, decodeY(1.0f));
	double var$1 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$1, decodeY(1.0f));
	double var$2 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$2, decodeY(2.0f));
	double var$3 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$3, decodeY(2.0f));
	double var$4 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$4, decodeY(1.0f));
	double var$5 = (double)decodeX(2.1666667f);
	$nc(this->path)->lineTo(var$5, decodeY(1.0f));
	double var$6 = (double)decodeX(2.1666667f);
	$nc(this->path)->lineTo(var$6, decodeY(2.1666667f));
	double var$7 = (double)decodeX(0.8333333f);
	$nc(this->path)->lineTo(var$7, decodeY(2.1666667f));
	double var$8 = (double)decodeX(0.8333333f);
	$nc(this->path)->lineTo(var$8, decodeY(0.96f));
	double var$9 = (double)decodeX(2.1666667f);
	$nc(this->path)->lineTo(var$9, decodeY(0.96f));
	double var$10 = (double)decodeX(2.1666667f);
	$nc(this->path)->lineTo(var$10, decodeY(1.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Rectangle2D* InternalFramePainter::decodeRect1() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(2.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.0f));
	return this->rect;
}

$Rectangle2D* InternalFramePainter::decodeRect2() {
	double var$0 = (double)decodeX(0.33333334f);
	double var$1 = (double)decodeY(2.6666667f);
	float var$3 = decodeX(2.6666667f);
	double var$2 = (double)(var$3 - decodeX(0.33333334f));
	float var$4 = decodeY(2.8333333f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.6666667f));
	return this->rect;
}

$RoundRectangle2D* InternalFramePainter::decodeRoundRect2() {
	double var$0 = (double)decodeX(0.0f);
	double var$1 = (double)decodeY(0.0f);
	float var$3 = decodeX(3.0f);
	double var$2 = (double)(var$3 - decodeX(0.0f));
	float var$4 = decodeY(3.0f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.0f), 4.8333335f, 4.8333335f);
	return this->roundRect;
}

$Path2D* InternalFramePainter::decodePath5() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.16666667f);
	$nc(this->path)->moveTo(var$0, decodeY(0.08f));
	double var$1 = (double)decodeAnchorX(0.16666667f, 0.0f);
	double var$2 = (double)decodeAnchorY(0.08f, 1.0f);
	double var$3 = (double)decodeAnchorX(0.16666667f, 0.0f);
	double var$4 = (double)decodeAnchorY(0.08f, -1.0f);
	double var$5 = (double)decodeX(0.16666667f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(0.08f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* InternalFramePainter::decodePath6() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.5f);
	$nc(this->path)->moveTo(var$0, decodeY(0.96f));
	double var$1 = (double)decodeX(0.16666667f);
	$nc(this->path)->lineTo(var$1, decodeY(0.96f));
	double var$2 = (double)decodeAnchorX(0.16666667f, 0.0f);
	double var$3 = (double)decodeAnchorY(0.96f, 0.0f);
	double var$4 = (double)decodeAnchorX(0.16666667f, 0.0f);
	double var$5 = (double)decodeAnchorY(2.5f, -1.0f);
	double var$6 = (double)decodeX(0.16666667f);
	$nc(this->path)->curveTo(var$2, var$3, var$4, var$5, var$6, decodeY(2.5f));
	double var$7 = (double)decodeAnchorX(0.16666667f, 0.0f);
	double var$8 = (double)decodeAnchorY(2.5f, 1.0f);
	double var$9 = (double)decodeAnchorX(0.5f, -1.0f);
	double var$10 = (double)decodeAnchorY(2.8333333f, 0.0f);
	double var$11 = (double)decodeX(0.5f);
	$nc(this->path)->curveTo(var$7, var$8, var$9, var$10, var$11, decodeY(2.8333333f));
	double var$12 = (double)decodeAnchorX(0.5f, 1.0f);
	double var$13 = (double)decodeAnchorY(2.8333333f, 0.0f);
	double var$14 = (double)decodeAnchorX(2.5f, -1.0f);
	double var$15 = (double)decodeAnchorY(2.8333333f, 0.0f);
	double var$16 = (double)decodeX(2.5f);
	$nc(this->path)->curveTo(var$12, var$13, var$14, var$15, var$16, decodeY(2.8333333f));
	double var$17 = (double)decodeAnchorX(2.5f, 1.0f);
	double var$18 = (double)decodeAnchorY(2.8333333f, 0.0f);
	double var$19 = (double)decodeAnchorX(2.8333333f, 0.0f);
	double var$20 = (double)decodeAnchorY(2.5f, 1.0f);
	double var$21 = (double)decodeX(2.8333333f);
	$nc(this->path)->curveTo(var$17, var$18, var$19, var$20, var$21, decodeY(2.5f));
	double var$22 = (double)decodeAnchorX(2.8333333f, 0.0f);
	double var$23 = (double)decodeAnchorY(2.5f, -1.0f);
	double var$24 = (double)decodeAnchorX(2.8333333f, 0.0f);
	double var$25 = (double)decodeAnchorY(0.96f, 0.0f);
	double var$26 = (double)decodeX(2.8333333f);
	$nc(this->path)->curveTo(var$22, var$23, var$24, var$25, var$26, decodeY(0.96f));
	double var$27 = (double)decodeX(2.5f);
	$nc(this->path)->lineTo(var$27, decodeY(0.96f));
	double var$28 = (double)decodeX(2.5f);
	$nc(this->path)->lineTo(var$28, decodeY(2.5f));
	double var$29 = (double)decodeX(0.5f);
	$nc(this->path)->lineTo(var$29, decodeY(2.5f));
	double var$30 = (double)decodeX(0.5f);
	$nc(this->path)->lineTo(var$30, decodeY(0.96f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* InternalFramePainter::decodePath7() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.6666667f);
	$nc(this->path)->moveTo(var$0, decodeY(0.96f));
	double var$1 = (double)decodeX(0.33333334f);
	$nc(this->path)->lineTo(var$1, decodeY(0.96f));
	double var$2 = (double)decodeAnchorX(0.33333334f, 0.0f);
	double var$3 = (double)decodeAnchorY(0.96f, 0.0f);
	double var$4 = (double)decodeAnchorX(0.33333334f, 0.0f);
	double var$5 = (double)decodeAnchorY(2.3333333f, -1.0f);
	double var$6 = (double)decodeX(0.33333334f);
	$nc(this->path)->curveTo(var$2, var$3, var$4, var$5, var$6, decodeY(2.3333333f));
	double var$7 = (double)decodeAnchorX(0.33333334f, 0.0f);
	double var$8 = (double)decodeAnchorY(2.3333333f, 1.0f);
	double var$9 = (double)decodeAnchorX(0.6666667f, -1.0f);
	double var$10 = (double)decodeAnchorY(2.6666667f, 0.0f);
	double var$11 = (double)decodeX(0.6666667f);
	$nc(this->path)->curveTo(var$7, var$8, var$9, var$10, var$11, decodeY(2.6666667f));
	double var$12 = (double)decodeAnchorX(0.6666667f, 1.0f);
	double var$13 = (double)decodeAnchorY(2.6666667f, 0.0f);
	double var$14 = (double)decodeAnchorX(2.3333333f, -1.0f);
	double var$15 = (double)decodeAnchorY(2.6666667f, 0.0f);
	double var$16 = (double)decodeX(2.3333333f);
	$nc(this->path)->curveTo(var$12, var$13, var$14, var$15, var$16, decodeY(2.6666667f));
	double var$17 = (double)decodeAnchorX(2.3333333f, 1.0f);
	double var$18 = (double)decodeAnchorY(2.6666667f, 0.0f);
	double var$19 = (double)decodeAnchorX(2.6666667f, 0.0f);
	double var$20 = (double)decodeAnchorY(2.3333333f, 1.0f);
	double var$21 = (double)decodeX(2.6666667f);
	$nc(this->path)->curveTo(var$17, var$18, var$19, var$20, var$21, decodeY(2.3333333f));
	double var$22 = (double)decodeAnchorX(2.6666667f, 0.0f);
	double var$23 = (double)decodeAnchorY(2.3333333f, -1.0f);
	double var$24 = (double)decodeAnchorX(2.6666667f, 0.0f);
	double var$25 = (double)decodeAnchorY(0.96f, 0.0f);
	double var$26 = (double)decodeX(2.6666667f);
	$nc(this->path)->curveTo(var$22, var$23, var$24, var$25, var$26, decodeY(0.96f));
	double var$27 = (double)decodeX(2.3333333f);
	$nc(this->path)->lineTo(var$27, decodeY(0.96f));
	double var$28 = (double)decodeX(2.3333333f);
	$nc(this->path)->lineTo(var$28, decodeY(2.3333333f));
	double var$29 = (double)decodeX(0.6666667f);
	$nc(this->path)->lineTo(var$29, decodeY(2.3333333f));
	double var$30 = (double)decodeX(0.6666667f);
	$nc(this->path)->lineTo(var$30, decodeY(0.96f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* InternalFramePainter::decodePath8() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(2.3333333f);
	$nc(this->path)->moveTo(var$0, decodeY(0.96f));
	double var$1 = (double)decodeX(2.1666667f);
	$nc(this->path)->lineTo(var$1, decodeY(0.96f));
	double var$2 = (double)decodeX(2.1666667f);
	$nc(this->path)->lineTo(var$2, decodeY(2.1666667f));
	double var$3 = (double)decodeX(0.8333333f);
	$nc(this->path)->lineTo(var$3, decodeY(2.1666667f));
	double var$4 = (double)decodeX(0.8333333f);
	$nc(this->path)->lineTo(var$4, decodeY(0.96f));
	double var$5 = (double)decodeX(0.6666667f);
	$nc(this->path)->lineTo(var$5, decodeY(0.96f));
	double var$6 = (double)decodeX(0.6666667f);
	$nc(this->path)->lineTo(var$6, decodeY(2.3333333f));
	double var$7 = (double)decodeX(2.3333333f);
	$nc(this->path)->lineTo(var$7, decodeY(2.3333333f));
	double var$8 = (double)decodeX(2.3333333f);
	$nc(this->path)->lineTo(var$8, decodeY(0.96f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* InternalFramePainter::decodePath9() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.8333333f);
	$nc(this->path)->moveTo(var$0, decodeY(1.0f));
	double var$1 = (double)decodeX(0.8333333f);
	$nc(this->path)->lineTo(var$1, decodeY(2.1666667f));
	double var$2 = (double)decodeX(2.1666667f);
	$nc(this->path)->lineTo(var$2, decodeY(2.1666667f));
	double var$3 = (double)decodeX(2.1666667f);
	$nc(this->path)->lineTo(var$3, decodeY(0.96f));
	double var$4 = (double)decodeX(0.8333333f);
	$nc(this->path)->lineTo(var$4, decodeY(0.96f));
	double var$5 = (double)decodeX(0.8333333f);
	$nc(this->path)->lineTo(var$5, decodeY(1.0f));
	double var$6 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$6, decodeY(1.0f));
	double var$7 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$7, decodeY(2.0f));
	double var$8 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$8, decodeY(2.0f));
	double var$9 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$9, decodeY(1.0f));
	double var$10 = (double)decodeX(0.8333333f);
	$nc(this->path)->lineTo(var$10, decodeY(1.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Rectangle2D* InternalFramePainter::decodeRect3() {
	double var$0 = (double)decodeX(0.0f);
	double var$1 = (double)decodeY(0.0f);
	float var$3 = decodeX(0.0f);
	double var$2 = (double)(var$3 - decodeX(0.0f));
	float var$4 = decodeY(0.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.0f));
	return this->rect;
}

$Rectangle2D* InternalFramePainter::decodeRect4() {
	double var$0 = (double)decodeX(0.33333334f);
	double var$1 = (double)decodeY(0.08f);
	float var$3 = decodeX(2.6666667f);
	double var$2 = (double)(var$3 - decodeX(0.33333334f));
	float var$4 = decodeY(0.96f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.08f));
	return this->rect;
}

$Paint* InternalFramePainter::decodeGradient1($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.3203593f,
		1.0f
	}), $$new($ColorArray, {
		this->color2,
		$(decodeColor(this->color2, this->color3, 0.5f)),
		this->color3
	}));
}

$Paint* InternalFramePainter::decodeGradient2($Shape* s) {
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
		this->color10,
		$(decodeColor(this->color10, this->color11, 0.5f)),
		this->color11
	}));
}

$Paint* InternalFramePainter::decodeGradient3($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.24251497f,
		1.0f
	}), $$new($ColorArray, {
		this->color16,
		$(decodeColor(this->color16, this->color17, 0.5f)),
		this->color17
	}));
}

InternalFramePainter::InternalFramePainter() {
}

$Class* InternalFramePainter::load$($String* name, bool initialize) {
	$loadClass(InternalFramePainter, name, initialize, &_InternalFramePainter_ClassInfo_, allocate$InternalFramePainter);
	return class$;
}

$Class* InternalFramePainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax