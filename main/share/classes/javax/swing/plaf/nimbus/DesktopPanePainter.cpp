#include <javax/swing/plaf/nimbus/DesktopPanePainter.h>

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

#undef BACKGROUND_ENABLED

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

$FieldInfo _DesktopPanePainter_FieldInfo_[] = {
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(DesktopPanePainter, BACKGROUND_ENABLED)},
	{"state", "I", nullptr, $PRIVATE, $field(DesktopPanePainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(DesktopPanePainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(DesktopPanePainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(DesktopPanePainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(DesktopPanePainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(DesktopPanePainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(DesktopPanePainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(DesktopPanePainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(DesktopPanePainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(DesktopPanePainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(DesktopPanePainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(DesktopPanePainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(DesktopPanePainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(DesktopPanePainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(DesktopPanePainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(DesktopPanePainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(DesktopPanePainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(DesktopPanePainter, color12)},
	{"color13", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(DesktopPanePainter, color13)},
	{"color14", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(DesktopPanePainter, color14)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(DesktopPanePainter, componentColors)},
	{}
};

$MethodInfo _DesktopPanePainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(DesktopPanePainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&DesktopPanePainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(DesktopPanePainter::*)($Shape*)>(&DesktopPanePainter::decodeGradient1))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(DesktopPanePainter::*)($Shape*)>(&DesktopPanePainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(DesktopPanePainter::*)($Shape*)>(&DesktopPanePainter::decodeGradient3))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(DesktopPanePainter::*)($Shape*)>(&DesktopPanePainter::decodeGradient4))},
	{"decodeGradient5", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(DesktopPanePainter::*)($Shape*)>(&DesktopPanePainter::decodeGradient5))},
	{"decodeGradient6", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(DesktopPanePainter::*)($Shape*)>(&DesktopPanePainter::decodeGradient6))},
	{"decodeGradient7", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(DesktopPanePainter::*)($Shape*)>(&DesktopPanePainter::decodeGradient7))},
	{"decodeGradient8", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(DesktopPanePainter::*)($Shape*)>(&DesktopPanePainter::decodeGradient8))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(DesktopPanePainter::*)()>(&DesktopPanePainter::decodePath1))},
	{"decodePath2", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(DesktopPanePainter::*)()>(&DesktopPanePainter::decodePath2))},
	{"decodePath3", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(DesktopPanePainter::*)()>(&DesktopPanePainter::decodePath3))},
	{"decodePath4", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(DesktopPanePainter::*)()>(&DesktopPanePainter::decodePath4))},
	{"decodePath5", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(DesktopPanePainter::*)()>(&DesktopPanePainter::decodePath5))},
	{"decodePath6", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(DesktopPanePainter::*)()>(&DesktopPanePainter::decodePath6))},
	{"decodePath7", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(DesktopPanePainter::*)()>(&DesktopPanePainter::decodePath7))},
	{"decodePath8", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(DesktopPanePainter::*)()>(&DesktopPanePainter::decodePath8))},
	{"decodePath9", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(DesktopPanePainter::*)()>(&DesktopPanePainter::decodePath9))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(DesktopPanePainter::*)($Graphics2D*)>(&DesktopPanePainter::paintBackgroundEnabled))},
	{}
};

$ClassInfo _DesktopPanePainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.DesktopPanePainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_DesktopPanePainter_FieldInfo_,
	_DesktopPanePainter_MethodInfo_
};

$Object* allocate$DesktopPanePainter($Class* clazz) {
	return $of($alloc(DesktopPanePainter));
}

void DesktopPanePainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBase"_s, -0.004577577f, -0.12867206f, 0.007843137f, 0));
	$set(this, color2, decodeColor("nimbusBase"_s, -0.0063245893f, -0.08363098f, -0.17254904f, 0));
	$set(this, color3, decodeColor("nimbusBase"_s, -3.6883354E-4f, -0.056766927f, -0.10196081f, 0));
	$set(this, color4, decodeColor("nimbusBase"_s, -0.008954704f, -0.12645501f, -0.12549022f, 0));
	$set(this, color5, $new($Color, 255, 200, 0, 6));
	$set(this, color6, decodeColor("nimbusBase"_s, -8.028746E-5f, -0.084533215f, -0.05098042f, 0));
	$set(this, color7, decodeColor("nimbusBase"_s, -0.0052053332f, -0.12267083f, -0.09803924f, 0));
	$set(this, color8, decodeColor("nimbusBase"_s, -0.012559712f, -0.13136649f, -0.09803924f, 0));
	$set(this, color9, decodeColor("nimbusBase"_s, -0.009207249f, -0.13984653f, -0.07450983f, 0));
	$set(this, color10, decodeColor("nimbusBase"_s, -0.010750473f, -0.13571429f, -0.12549022f, 0));
	$set(this, color11, decodeColor("nimbusBase"_s, -0.008476257f, -0.1267857f, -0.109803945f, 0));
	$set(this, color12, decodeColor("nimbusBase"_s, -0.0034883022f, -0.042691052f, -0.21176472f, 0));
	$set(this, color13, decodeColor("nimbusBase"_s, -0.012613952f, -0.11610645f, -0.14901963f, 0));
	$set(this, color14, decodeColor("nimbusBase"_s, -0.0038217902f, -0.05238098f, -0.21960786f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void DesktopPanePainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case DesktopPanePainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* DesktopPanePainter::getPaintContext() {
	return this->ctx;
}

void DesktopPanePainter::paintBackgroundEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath1());
	$nc(g)->setPaint($(decodeGradient1(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient2(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint(this->color5);
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint($(decodeGradient3(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath5());
	g->setPaint($(decodeGradient4(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath6());
	g->setPaint($(decodeGradient5(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath7());
	g->setPaint($(decodeGradient6(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath8());
	g->setPaint($(decodeGradient7(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath9());
	g->setPaint($(decodeGradient8(this->path)));
	g->fill(this->path);
}

$Path2D* DesktopPanePainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.2716666f);
	$nc(this->path)->moveTo(var$0, decodeY(2.0f));
	double var$1 = (double)decodeAnchorX(1.2716666f, 0.0f);
	double var$2 = (double)decodeAnchorY(2.0f, 0.5f);
	double var$3 = (double)decodeAnchorX(1.1283333f, 0.0f);
	double var$4 = (double)decodeAnchorY(1.0f, 0.0f);
	double var$5 = (double)decodeX(1.1283333f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(1.0f));
	double var$6 = (double)decodeX(1.3516667f);
	$nc(this->path)->lineTo(var$6, decodeY(1.0f));
	double var$7 = (double)decodeX(1.5866666f);
	$nc(this->path)->lineTo(var$7, decodeY(1.5754311f));
	double var$8 = (double)decodeX(1.5416667f);
	$nc(this->path)->lineTo(var$8, decodeY(2.0f));
	double var$9 = (double)decodeAnchorX(1.5416667f, 0.0f);
	double var$10 = (double)decodeAnchorY(2.0f, 0.0f);
	double var$11 = (double)decodeAnchorX(1.2716666f, 0.0f);
	double var$12 = (double)decodeAnchorY(2.0f, -0.5f);
	double var$13 = (double)decodeX(1.2716666f);
	$nc(this->path)->curveTo(var$9, var$10, var$11, var$12, var$13, decodeY(2.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* DesktopPanePainter::decodePath2() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.7883334f);
	$nc(this->path)->moveTo(var$0, decodeY(2.0f));
	double var$1 = (double)decodeAnchorX(1.7883334f, 0.0f);
	double var$2 = (double)decodeAnchorY(2.0f, 0.5f);
	double var$3 = (double)decodeAnchorX(1.6533333f, 0.0f);
	double var$4 = (double)decodeAnchorY(1.7737069f, 0.0f);
	double var$5 = (double)decodeX(1.6533333f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(1.7737069f));
	double var$6 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$6, decodeY(1.1465517f));
	double var$7 = (double)decodeAnchorX(2.0f, 0.0f);
	double var$8 = (double)decodeAnchorY(1.1465517f, 0.0f);
	double var$9 = (double)decodeAnchorX(2.0f, 0.0f);
	double var$10 = (double)decodeAnchorY(2.0f, -0.5f);
	double var$11 = (double)decodeX(2.0f);
	$nc(this->path)->curveTo(var$7, var$8, var$9, var$10, var$11, decodeY(2.0f));
	double var$12 = (double)decodeAnchorX(2.0f, 0.5f);
	double var$13 = (double)decodeAnchorY(2.0f, 0.5f);
	double var$14 = (double)decodeAnchorX(1.7883334f, 0.0f);
	double var$15 = (double)decodeAnchorY(2.0f, -0.5f);
	double var$16 = (double)decodeX(1.7883334f);
	$nc(this->path)->curveTo(var$12, var$13, var$14, var$15, var$16, decodeY(2.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* DesktopPanePainter::decodePath3() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.5666666f);
	$nc(this->path)->moveTo(var$0, decodeY(1.0f));
	double var$1 = (double)decodeX(1.5666666f);
	$nc(this->path)->lineTo(var$1, decodeY(1.5689654f));
	double var$2 = (double)decodeX(1.675f);
	$nc(this->path)->lineTo(var$2, decodeY(1.7715517f));
	double var$3 = (double)decodeAnchorX(1.675f, 0.0f);
	double var$4 = (double)decodeAnchorY(1.7715517f, 0.0f);
	double var$5 = (double)decodeAnchorX(1.8116667f, -23.5f);
	double var$6 = (double)decodeAnchorY(1.4978448f, 33.5f);
	double var$7 = (double)decodeX(1.8116667f);
	$nc(this->path)->curveTo(var$3, var$4, var$5, var$6, var$7, decodeY(1.4978448f));
	double var$8 = (double)decodeAnchorX(1.8116667f, 23.5f);
	double var$9 = (double)decodeAnchorY(1.4978448f, -33.5f);
	double var$10 = (double)decodeAnchorX(2.0f, 0.0f);
	double var$11 = (double)decodeAnchorY(1.200431f, 0.0f);
	double var$12 = (double)decodeX(2.0f);
	$nc(this->path)->curveTo(var$8, var$9, var$10, var$11, var$12, decodeY(1.200431f));
	double var$13 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$13, decodeY(1.0f));
	double var$14 = (double)decodeX(1.5666666f);
	$nc(this->path)->lineTo(var$14, decodeY(1.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* DesktopPanePainter::decodePath4() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.3383334f);
	$nc(this->path)->moveTo(var$0, decodeY(1.0f));
	double var$1 = (double)decodeAnchorX(1.3383334f, 0.0f);
	double var$2 = (double)decodeAnchorY(1.0f, 0.0f);
	double var$3 = (double)decodeAnchorX(1.4416666f, -21.0f);
	double var$4 = (double)decodeAnchorY(1.3103448f, -37.5f);
	double var$5 = (double)decodeX(1.4416666f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(1.3103448f));
	double var$6 = (double)decodeAnchorX(1.4416666f, 21.0f);
	double var$7 = (double)decodeAnchorY(1.3103448f, 37.5f);
	double var$8 = (double)decodeAnchorX(1.5733333f, 0.0f);
	double var$9 = (double)decodeAnchorY(1.5840517f, 0.0f);
	double var$10 = (double)decodeX(1.5733333f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(1.5840517f));
	double var$11 = (double)decodeAnchorX(1.5733333f, 0.0f);
	double var$12 = (double)decodeAnchorY(1.5840517f, 0.0f);
	double var$13 = (double)decodeAnchorX(1.6066667f, 1.5f);
	double var$14 = (double)decodeAnchorY(1.2413793f, 29.5f);
	double var$15 = (double)decodeX(1.6066667f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(1.2413793f));
	double var$16 = (double)decodeAnchorX(1.6066667f, -1.5f);
	double var$17 = (double)decodeAnchorY(1.2413793f, -29.5f);
	double var$18 = (double)decodeAnchorX(1.605f, 0.0f);
	double var$19 = (double)decodeAnchorY(1.0f, 0.0f);
	double var$20 = (double)decodeX(1.605f);
	$nc(this->path)->curveTo(var$16, var$17, var$18, var$19, var$20, decodeY(1.0f));
	double var$21 = (double)decodeX(1.3383334f);
	$nc(this->path)->lineTo(var$21, decodeY(1.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* DesktopPanePainter::decodePath5() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.5683334f);
	$nc(this->path)->moveTo(var$0, decodeY(1.5797414f));
	double var$1 = (double)decodeAnchorX(1.5683334f, 0.0f);
	double var$2 = (double)decodeAnchorY(1.5797414f, 0.0f);
	double var$3 = (double)decodeAnchorX(1.575f, 0.0f);
	double var$4 = (double)decodeAnchorY(1.2392242f, 33.0f);
	double var$5 = (double)decodeX(1.575f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(1.2392242f));
	double var$6 = (double)decodeAnchorX(1.575f, 0.0f);
	double var$7 = (double)decodeAnchorY(1.2392242f, -33.0f);
	double var$8 = (double)decodeAnchorX(1.5616667f, 0.0f);
	double var$9 = (double)decodeAnchorY(1.0f, 0.0f);
	double var$10 = (double)decodeX(1.5616667f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(1.0f));
	double var$11 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$11, decodeY(1.0f));
	double var$12 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$12, decodeY(1.1982758f));
	double var$13 = (double)decodeAnchorX(2.0f, 0.0f);
	double var$14 = (double)decodeAnchorY(1.1982758f, 0.0f);
	double var$15 = (double)decodeAnchorX(1.8066666f, 27.5f);
	double var$16 = (double)decodeAnchorY(1.5043104f, -38.5f);
	double var$17 = (double)decodeX(1.8066666f);
	$nc(this->path)->curveTo(var$13, var$14, var$15, var$16, var$17, decodeY(1.5043104f));
	double var$18 = (double)decodeAnchorX(1.8066666f, -27.5f);
	double var$19 = (double)decodeAnchorY(1.5043104f, 38.5f);
	double var$20 = (double)decodeAnchorX(1.6766667f, 0.0f);
	double var$21 = (double)decodeAnchorY(1.7780173f, 0.0f);
	double var$22 = (double)decodeX(1.6766667f);
	$nc(this->path)->curveTo(var$18, var$19, var$20, var$21, var$22, decodeY(1.7780173f));
	double var$23 = (double)decodeX(1.5683334f);
	$nc(this->path)->lineTo(var$23, decodeY(1.5797414f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* DesktopPanePainter::decodePath6() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.5216666f);
	$nc(this->path)->moveTo(var$0, decodeY(2.0f));
	double var$1 = (double)decodeAnchorX(1.5216666f, 0.0f);
	double var$2 = (double)decodeAnchorY(2.0f, 0.0f);
	double var$3 = (double)decodeAnchorX(1.5550001f, -2.0f);
	double var$4 = (double)decodeAnchorY(1.7780173f, 22.5f);
	double var$5 = (double)decodeX(1.5550001f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(1.7780173f));
	double var$6 = (double)decodeAnchorX(1.5550001f, 2.0f);
	double var$7 = (double)decodeAnchorY(1.7780173f, -22.5f);
	double var$8 = (double)decodeAnchorX(1.5683334f, 0.0f);
	double var$9 = (double)decodeAnchorY(1.5765086f, 0.0f);
	double var$10 = (double)decodeX(1.5683334f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(1.5765086f));
	double var$11 = (double)decodeX(1.6775f);
	$nc(this->path)->lineTo(var$11, decodeY(1.7747846f));
	double var$12 = (double)decodeAnchorX(1.6775f, 0.0f);
	double var$13 = (double)decodeAnchorY(1.7747846f, 0.0f);
	double var$14 = (double)decodeAnchorX(1.6508334f, 6.0f);
	double var$15 = (double)decodeAnchorY(1.8922414f, -14.0f);
	double var$16 = (double)decodeX(1.6508334f);
	$nc(this->path)->curveTo(var$12, var$13, var$14, var$15, var$16, decodeY(1.8922414f));
	double var$17 = (double)decodeAnchorX(1.6508334f, -6.0f);
	double var$18 = (double)decodeAnchorY(1.8922414f, 14.0f);
	double var$19 = (double)decodeAnchorX(1.6083333f, 0.0f);
	double var$20 = (double)decodeAnchorY(2.0f, 0.0f);
	double var$21 = (double)decodeX(1.6083333f);
	$nc(this->path)->curveTo(var$17, var$18, var$19, var$20, var$21, decodeY(2.0f));
	double var$22 = (double)decodeX(1.5216666f);
	$nc(this->path)->lineTo(var$22, decodeY(2.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* DesktopPanePainter::decodePath7() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.6066667f);
	$nc(this->path)->moveTo(var$0, decodeY(2.0f));
	double var$1 = (double)decodeAnchorX(1.6066667f, 0.0f);
	double var$2 = (double)decodeAnchorY(2.0f, 0.0f);
	double var$3 = (double)decodeAnchorX(1.64f, -7.0f);
	double var$4 = (double)decodeAnchorY(1.8814654f, 17.0f);
	double var$5 = (double)decodeX(1.64f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(1.8814654f));
	double var$6 = (double)decodeAnchorX(1.64f, 7.0f);
	double var$7 = (double)decodeAnchorY(1.8814654f, -17.0f);
	double var$8 = (double)decodeAnchorX(1.6775f, 0.0f);
	double var$9 = (double)decodeAnchorY(1.7747846f, 0.0f);
	double var$10 = (double)decodeX(1.6775f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(1.7747846f));
	double var$11 = (double)decodeAnchorX(1.6775f, 0.0f);
	double var$12 = (double)decodeAnchorY(1.7747846f, 0.0f);
	double var$13 = (double)decodeAnchorX(1.7416667f, -11.0f);
	double var$14 = (double)decodeAnchorY(1.8836207f, -15.0f);
	double var$15 = (double)decodeX(1.7416667f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(1.8836207f));
	double var$16 = (double)decodeAnchorX(1.7416667f, 11.0f);
	double var$17 = (double)decodeAnchorY(1.8836207f, 15.0f);
	double var$18 = (double)decodeAnchorX(1.8133333f, 0.0f);
	double var$19 = (double)decodeAnchorY(2.0f, -0.5f);
	double var$20 = (double)decodeX(1.8133333f);
	$nc(this->path)->curveTo(var$16, var$17, var$18, var$19, var$20, decodeY(2.0f));
	double var$21 = (double)decodeAnchorX(1.8133333f, 0.0f);
	double var$22 = (double)decodeAnchorY(2.0f, 0.5f);
	double var$23 = (double)decodeAnchorX(1.6066667f, 0.0f);
	double var$24 = (double)decodeAnchorY(2.0f, 0.0f);
	double var$25 = (double)decodeX(1.6066667f);
	$nc(this->path)->curveTo(var$21, var$22, var$23, var$24, var$25, decodeY(2.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* DesktopPanePainter::decodePath8() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.2733333f);
	$nc(this->path)->moveTo(var$0, decodeY(2.0f));
	double var$1 = (double)decodeAnchorX(1.2733333f, 0.0f);
	double var$2 = (double)decodeAnchorY(2.0f, 0.0f);
	double var$3 = (double)decodeAnchorX(1.2633333f, 5.0f);
	double var$4 = (double)decodeAnchorY(1.6594827f, 37.0f);
	double var$5 = (double)decodeX(1.2633333f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(1.6594827f));
	double var$6 = (double)decodeAnchorX(1.2633333f, -5.0f);
	double var$7 = (double)decodeAnchorY(1.6594827f, -37.0f);
	double var$8 = (double)decodeAnchorX(1.1933334f, 9.0f);
	double var$9 = (double)decodeAnchorY(1.2241379f, 33.5f);
	double var$10 = (double)decodeX(1.1933334f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(1.2241379f));
	double var$11 = (double)decodeAnchorX(1.1933334f, -9.0f);
	double var$12 = (double)decodeAnchorY(1.2241379f, -33.5f);
	double var$13 = (double)decodeAnchorX(1.1333333f, 0.0f);
	double var$14 = (double)decodeAnchorY(1.0f, 0.0f);
	double var$15 = (double)decodeX(1.1333333f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(1.0f));
	double var$16 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$16, decodeY(1.0f));
	double var$17 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$17, decodeY(1.6120689f));
	double var$18 = (double)decodeAnchorX(1.0f, 0.0f);
	double var$19 = (double)decodeAnchorY(1.6120689f, 0.0f);
	double var$20 = (double)decodeAnchorX(1.15f, 0.0f);
	double var$21 = (double)decodeAnchorY(2.0f, -0.5f);
	double var$22 = (double)decodeX(1.15f);
	$nc(this->path)->curveTo(var$18, var$19, var$20, var$21, var$22, decodeY(2.0f));
	double var$23 = (double)decodeAnchorX(1.15f, 0.0f);
	double var$24 = (double)decodeAnchorY(2.0f, 0.5f);
	double var$25 = (double)decodeAnchorX(1.2733333f, 0.0f);
	double var$26 = (double)decodeAnchorY(2.0f, 0.0f);
	double var$27 = (double)decodeX(1.2733333f);
	$nc(this->path)->curveTo(var$23, var$24, var$25, var$26, var$27, decodeY(2.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* DesktopPanePainter::decodePath9() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.0f);
	$nc(this->path)->moveTo(var$0, decodeY(2.0f));
	double var$1 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$1, decodeY(1.5969827f));
	double var$2 = (double)decodeAnchorX(1.0f, 0.0f);
	double var$3 = (double)decodeAnchorY(1.5969827f, 0.0f);
	double var$4 = (double)decodeAnchorX(1.0733334f, -10.0f);
	double var$5 = (double)decodeAnchorY(1.7974138f, -19.5f);
	double var$6 = (double)decodeX(1.0733334f);
	$nc(this->path)->curveTo(var$2, var$3, var$4, var$5, var$6, decodeY(1.7974138f));
	double var$7 = (double)decodeAnchorX(1.0733334f, 10.0f);
	double var$8 = (double)decodeAnchorY(1.7974138f, 19.5f);
	double var$9 = (double)decodeAnchorX(1.1666666f, 0.0f);
	double var$10 = (double)decodeAnchorY(2.0f, -0.5f);
	double var$11 = (double)decodeX(1.1666666f);
	$nc(this->path)->curveTo(var$7, var$8, var$9, var$10, var$11, decodeY(2.0f));
	double var$12 = (double)decodeAnchorX(1.1666666f, 0.0f);
	double var$13 = (double)decodeAnchorY(2.0f, 0.5f);
	double var$14 = (double)decodeAnchorX(1.0f, 0.0f);
	double var$15 = (double)decodeAnchorY(2.0f, 0.0f);
	double var$16 = (double)decodeX(1.0f);
	$nc(this->path)->curveTo(var$12, var$13, var$14, var$15, var$16, decodeY(2.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Paint* DesktopPanePainter::decodeGradient1($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.75f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color1,
		$(decodeColor(this->color1, this->color2, 0.5f)),
		this->color2
	}));
}

$Paint* DesktopPanePainter::decodeGradient2($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.9567308f * w) + x, (0.06835443f * h) + y, (0.75f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color3,
		$(decodeColor(this->color3, this->color4, 0.5f)),
		this->color4
	}));
}

$Paint* DesktopPanePainter::decodeGradient3($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.83536583f * w) + x, (0.9522059f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color6,
		$(decodeColor(this->color6, this->color7, 0.5f)),
		this->color7
	}));
}

$Paint* DesktopPanePainter::decodeGradient4($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.8659696f * w) + x, (0.011049724f * h) + y, (0.24809887f * w) + x, (0.95027626f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color6,
		$(decodeColor(this->color6, this->color8, 0.5f)),
		this->color8
	}));
}

$Paint* DesktopPanePainter::decodeGradient5($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.3511236f * w) + x, (0.09326425f * h) + y, (0.33426967f * w) + x, (0.9846154f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color9,
		$(decodeColor(this->color9, this->color10, 0.5f)),
		this->color10
	}));
}

$Paint* DesktopPanePainter::decodeGradient6($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.3548387f * w) + x, (0.114285715f * h) + y, (0.48387095f * w) + x, (0.9809524f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color11,
		$(decodeColor(this->color11, this->color4, 0.5f)),
		this->color4
	}));
}

$Paint* DesktopPanePainter::decodeGradient7($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.75f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color1,
		$(decodeColor(this->color1, this->color12, 0.5f)),
		this->color12
	}));
}

$Paint* DesktopPanePainter::decodeGradient8($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.75f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color13,
		$(decodeColor(this->color13, this->color14, 0.5f)),
		this->color14
	}));
}

DesktopPanePainter::DesktopPanePainter() {
}

$Class* DesktopPanePainter::load$($String* name, bool initialize) {
	$loadClass(DesktopPanePainter, name, initialize, &_DesktopPanePainter_ClassInfo_, allocate$DesktopPanePainter);
	return class$;
}

$Class* DesktopPanePainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax