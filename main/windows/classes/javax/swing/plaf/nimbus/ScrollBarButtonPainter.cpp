#include <javax/swing/plaf/nimbus/ScrollBarButtonPainter.h>

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

#undef FOREGROUND_DISABLED
#undef FOREGROUND_ENABLED
#undef FOREGROUND_MOUSEOVER
#undef FOREGROUND_PRESSED

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

$FieldInfo _ScrollBarButtonPainter_FieldInfo_[] = {
	{"FOREGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(ScrollBarButtonPainter, FOREGROUND_ENABLED)},
	{"FOREGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(ScrollBarButtonPainter, FOREGROUND_DISABLED)},
	{"FOREGROUND_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(ScrollBarButtonPainter, FOREGROUND_MOUSEOVER)},
	{"FOREGROUND_PRESSED", "I", nullptr, $STATIC | $FINAL, $constField(ScrollBarButtonPainter, FOREGROUND_PRESSED)},
	{"state", "I", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color12)},
	{"color13", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color13)},
	{"color14", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color14)},
	{"color15", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color15)},
	{"color16", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color16)},
	{"color17", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color17)},
	{"color18", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color18)},
	{"color19", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color19)},
	{"color20", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color20)},
	{"color21", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color21)},
	{"color22", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color22)},
	{"color23", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color23)},
	{"color24", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color24)},
	{"color25", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color25)},
	{"color26", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color26)},
	{"color27", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color27)},
	{"color28", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color28)},
	{"color29", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color29)},
	{"color30", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color30)},
	{"color31", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, color31)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(ScrollBarButtonPainter, componentColors)},
	{}
};

$MethodInfo _ScrollBarButtonPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(ScrollBarButtonPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&ScrollBarButtonPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ScrollBarButtonPainter::*)($Shape*)>(&ScrollBarButtonPainter::decodeGradient1))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ScrollBarButtonPainter::*)($Shape*)>(&ScrollBarButtonPainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ScrollBarButtonPainter::*)($Shape*)>(&ScrollBarButtonPainter::decodeGradient3))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ScrollBarButtonPainter::*)($Shape*)>(&ScrollBarButtonPainter::decodeGradient4))},
	{"decodeGradient5", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ScrollBarButtonPainter::*)($Shape*)>(&ScrollBarButtonPainter::decodeGradient5))},
	{"decodeGradient6", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ScrollBarButtonPainter::*)($Shape*)>(&ScrollBarButtonPainter::decodeGradient6))},
	{"decodeGradient7", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ScrollBarButtonPainter::*)($Shape*)>(&ScrollBarButtonPainter::decodeGradient7))},
	{"decodeGradient8", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ScrollBarButtonPainter::*)($Shape*)>(&ScrollBarButtonPainter::decodeGradient8))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ScrollBarButtonPainter::*)()>(&ScrollBarButtonPainter::decodePath1))},
	{"decodePath2", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ScrollBarButtonPainter::*)()>(&ScrollBarButtonPainter::decodePath2))},
	{"decodePath3", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ScrollBarButtonPainter::*)()>(&ScrollBarButtonPainter::decodePath3))},
	{"decodePath4", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ScrollBarButtonPainter::*)()>(&ScrollBarButtonPainter::decodePath4))},
	{"decodePath5", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ScrollBarButtonPainter::*)()>(&ScrollBarButtonPainter::decodePath5))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintForegroundDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ScrollBarButtonPainter::*)($Graphics2D*)>(&ScrollBarButtonPainter::paintForegroundDisabled))},
	{"paintForegroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ScrollBarButtonPainter::*)($Graphics2D*)>(&ScrollBarButtonPainter::paintForegroundEnabled))},
	{"paintForegroundMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ScrollBarButtonPainter::*)($Graphics2D*)>(&ScrollBarButtonPainter::paintForegroundMouseOver))},
	{"paintForegroundPressed", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ScrollBarButtonPainter::*)($Graphics2D*)>(&ScrollBarButtonPainter::paintForegroundPressed))},
	{}
};

$ClassInfo _ScrollBarButtonPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.ScrollBarButtonPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_ScrollBarButtonPainter_FieldInfo_,
	_ScrollBarButtonPainter_MethodInfo_
};

$Object* allocate$ScrollBarButtonPainter($Class* clazz) {
	return $of($alloc(ScrollBarButtonPainter));
}

void ScrollBarButtonPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, $new($Color, 255, 200, 0, 255));
	$set(this, color2, decodeColor("nimbusBlueGrey"_s, -0.01111114f, -0.07763158f, -0.1490196f, 0));
	$set(this, color3, decodeColor("nimbusBlueGrey"_s, -0.111111104f, -0.10580933f, 0.086274505f, 0));
	$set(this, color4, decodeColor("nimbusBlueGrey"_s, -0.027777791f, -0.102261856f, 0.20392156f, 0));
	$set(this, color5, decodeColor("nimbusBlueGrey"_s, -0.039682567f, -0.079276316f, 0.13333333f, 0));
	$set(this, color6, decodeColor("nimbusBlueGrey"_s, -0.027777791f, -0.07382907f, 0.109803915f, 0));
	$set(this, color7, decodeColor("nimbusBlueGrey"_s, -0.039682567f, -0.08241387f, 0.23137254f, 0));
	$set(this, color8, decodeColor("nimbusBlueGrey"_s, -0.055555522f, -0.08443936f, -0.29411766f, -136));
	$set(this, color9, decodeColor("nimbusBlueGrey"_s, -0.055555522f, -0.09876161f, 0.25490195f, -178));
	$set(this, color10, decodeColor("nimbusBlueGrey"_s, 0.055555582f, -0.08878718f, -0.5647059f, 0));
	$set(this, color11, decodeColor("nimbusBlueGrey"_s, -0.027777791f, -0.080223285f, -0.4862745f, 0));
	$set(this, color12, decodeColor("nimbusBlueGrey"_s, -0.111111104f, -0.09525914f, -0.23137254f, 0));
	$set(this, color13, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, -165));
	$set(this, color14, decodeColor("nimbusBlueGrey"_s, -0.04444444f, -0.080223285f, -0.09803921f, 0));
	$set(this, color15, decodeColor("nimbusBlueGrey"_s, -0.6111111f, -0.110526316f, 0.10588235f, 0));
	$set(this, color16, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, 0));
	$set(this, color17, decodeColor("nimbusBlueGrey"_s, -0.039682567f, -0.081719734f, 0.20784312f, 0));
	$set(this, color18, decodeColor("nimbusBlueGrey"_s, -0.027777791f, -0.07677104f, 0.18431371f, 0));
	$set(this, color19, decodeColor("nimbusBlueGrey"_s, -0.04444444f, -0.080223285f, -0.09803921f, -69));
	$set(this, color20, decodeColor("nimbusBlueGrey"_s, -0.055555522f, -0.09876161f, 0.25490195f, -39));
	$set(this, color21, decodeColor("nimbusBlueGrey"_s, 0.055555582f, -0.0951417f, -0.49019608f, 0));
	$set(this, color22, decodeColor("nimbusBlueGrey"_s, -0.027777791f, -0.086996906f, -0.4117647f, 0));
	$set(this, color23, decodeColor("nimbusBlueGrey"_s, -0.111111104f, -0.09719298f, -0.15686274f, 0));
	$set(this, color24, decodeColor("nimbusBlueGrey"_s, -0.037037015f, -0.043859646f, -0.21568626f, 0));
	$set(this, color25, decodeColor("nimbusBlueGrey"_s, -0.06349206f, -0.07309316f, -0.011764705f, 0));
	$set(this, color26, decodeColor("nimbusBlueGrey"_s, -0.048611104f, -0.07296763f, 0.09019607f, 0));
	$set(this, color27, decodeColor("nimbusBlueGrey"_s, -0.03535354f, -0.05497076f, 0.031372547f, 0));
	$set(this, color28, decodeColor("nimbusBlueGrey"_s, -0.034188032f, -0.043168806f, 0.011764705f, 0));
	$set(this, color29, decodeColor("nimbusBlueGrey"_s, -0.03535354f, -0.0600676f, 0.109803915f, 0));
	$set(this, color30, decodeColor("nimbusBlueGrey"_s, -0.037037015f, -0.043859646f, -0.21568626f, -44));
	$set(this, color31, decodeColor("nimbusBlueGrey"_s, -0.6111111f, -0.110526316f, -0.74509805f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void ScrollBarButtonPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case ScrollBarButtonPainter::FOREGROUND_ENABLED:
		{
			paintForegroundEnabled(g);
			break;
		}
	case ScrollBarButtonPainter::FOREGROUND_DISABLED:
		{
			paintForegroundDisabled(g);
			break;
		}
	case ScrollBarButtonPainter::FOREGROUND_MOUSEOVER:
		{
			paintForegroundMouseOver(g);
			break;
		}
	case ScrollBarButtonPainter::FOREGROUND_PRESSED:
		{
			paintForegroundPressed(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* ScrollBarButtonPainter::getPaintContext() {
	return this->ctx;
}

void ScrollBarButtonPainter::paintForegroundEnabled($Graphics2D* g) {
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient1(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient2(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint($(decodeGradient3(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath5());
	g->setPaint(this->color13);
	g->fill(this->path);
}

void ScrollBarButtonPainter::paintForegroundDisabled($Graphics2D* g) {
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->path);
}

void ScrollBarButtonPainter::paintForegroundMouseOver($Graphics2D* g) {
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color1);
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
	$set(this, path, decodePath5());
	g->setPaint(this->color13);
	g->fill(this->path);
}

void ScrollBarButtonPainter::paintForegroundPressed($Graphics2D* g) {
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient7(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient8(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint(this->color31);
	g->fill(this->path);
	$set(this, path, decodePath5());
	g->setPaint(this->color13);
	g->fill(this->path);
}

$Path2D* ScrollBarButtonPainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(3.0f);
	$nc(this->path)->moveTo(var$0, decodeY(3.0f));
	double var$1 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$1, decodeY(3.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* ScrollBarButtonPainter::decodePath2() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(0.0f));
	double var$1 = (double)decodeX(1.6956522f);
	$nc(this->path)->lineTo(var$1, decodeY(0.0f));
	double var$2 = (double)decodeAnchorX(1.6956522f, 0.0f);
	double var$3 = (double)decodeAnchorY(0.0f, 0.0f);
	double var$4 = (double)decodeAnchorX(1.6956522f, -0.7058824f);
	double var$5 = (double)decodeAnchorY(1.3076923f, -3.0294118f);
	double var$6 = (double)decodeX(1.6956522f);
	$nc(this->path)->curveTo(var$2, var$3, var$4, var$5, var$6, decodeY(1.3076923f));
	double var$7 = (double)decodeAnchorX(1.6956522f, 0.7058824f);
	double var$8 = (double)decodeAnchorY(1.3076923f, 3.0294118f);
	double var$9 = (double)decodeAnchorX(1.826087f, -2.0f);
	double var$10 = (double)decodeAnchorY(1.7692308f, -1.9411764f);
	double var$11 = (double)decodeX(1.826087f);
	$nc(this->path)->curveTo(var$7, var$8, var$9, var$10, var$11, decodeY(1.7692308f));
	double var$12 = (double)decodeAnchorX(1.826087f, 2.0f);
	double var$13 = (double)decodeAnchorY(1.7692308f, 1.9411764f);
	double var$14 = (double)decodeAnchorX(3.0f, 0.0f);
	double var$15 = (double)decodeAnchorY(2.0f, 0.0f);
	double var$16 = (double)decodeX(3.0f);
	$nc(this->path)->curveTo(var$12, var$13, var$14, var$15, var$16, decodeY(2.0f));
	double var$17 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$17, decodeY(3.0f));
	double var$18 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$18, decodeY(3.0f));
	double var$19 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$19, decodeY(0.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* ScrollBarButtonPainter::decodePath3() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(1.0022625f));
	double var$1 = (double)decodeX(0.9705882f);
	$nc(this->path)->lineTo(var$1, decodeY(1.0384616f));
	double var$2 = (double)decodeX(1.0409207f);
	$nc(this->path)->lineTo(var$2, decodeY(1.0791855f));
	double var$3 = (double)decodeX(1.0409207f);
	$nc(this->path)->lineTo(var$3, decodeY(3.0f));
	double var$4 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$4, decodeY(3.0f));
	double var$5 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$5, decodeY(1.0022625f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* ScrollBarButtonPainter::decodePath4() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.4782609f);
	$nc(this->path)->moveTo(var$0, decodeY(1.2307693f));
	double var$1 = (double)decodeX(1.4782609f);
	$nc(this->path)->lineTo(var$1, decodeY(1.7692308f));
	double var$2 = (double)decodeX(1.1713555f);
	$nc(this->path)->lineTo(var$2, decodeY(1.5f));
	double var$3 = (double)decodeX(1.4782609f);
	$nc(this->path)->lineTo(var$3, decodeY(1.2307693f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* ScrollBarButtonPainter::decodePath5() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.6713555f);
	$nc(this->path)->moveTo(var$0, decodeY(1.0769231f));
	double var$1 = (double)decodeAnchorX(1.6713555f, 0.7352941f);
	double var$2 = (double)decodeAnchorY(1.0769231f, 0.0f);
	double var$3 = (double)decodeAnchorX(1.7186701f, -0.9117647f);
	double var$4 = (double)decodeAnchorY(1.4095023f, -2.2058823f);
	double var$5 = (double)decodeX(1.7186701f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(1.4095023f));
	double var$6 = (double)decodeAnchorX(1.7186701f, 0.9117647f);
	double var$7 = (double)decodeAnchorY(1.4095023f, 2.2058823f);
	double var$8 = (double)decodeAnchorX(1.8439897f, -2.3529413f);
	double var$9 = (double)decodeAnchorY(1.7941177f, -1.8529412f);
	double var$10 = (double)decodeX(1.8439897f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(1.7941177f));
	double var$11 = (double)decodeAnchorX(1.8439897f, 2.3529413f);
	double var$12 = (double)decodeAnchorY(1.7941177f, 1.8529412f);
	double var$13 = (double)decodeAnchorX(2.5f, 0.0f);
	double var$14 = (double)decodeAnchorY(2.2352943f, 0.0f);
	double var$15 = (double)decodeX(2.5f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(2.2352943f));
	double var$16 = (double)decodeX(2.3529415f);
	$nc(this->path)->lineTo(var$16, decodeY(2.8235292f));
	double var$17 = (double)decodeAnchorX(2.3529415f, 0.0f);
	double var$18 = (double)decodeAnchorY(2.8235292f, 0.0f);
	double var$19 = (double)decodeAnchorX(1.8184143f, 1.5588236f);
	double var$20 = (double)decodeAnchorY(1.8438914f, 1.382353f);
	double var$21 = (double)decodeX(1.8184143f);
	$nc(this->path)->curveTo(var$17, var$18, var$19, var$20, var$21, decodeY(1.8438914f));
	double var$22 = (double)decodeAnchorX(1.8184143f, -1.5588236f);
	double var$23 = (double)decodeAnchorY(1.8438914f, -1.382353f);
	double var$24 = (double)decodeAnchorX(1.6943734f, 0.7941176f);
	double var$25 = (double)decodeAnchorY(1.4841628f, 2.0f);
	double var$26 = (double)decodeX(1.6943734f);
	$nc(this->path)->curveTo(var$22, var$23, var$24, var$25, var$26, decodeY(1.4841628f));
	double var$27 = (double)decodeAnchorX(1.6943734f, -0.7941176f);
	double var$28 = (double)decodeAnchorY(1.4841628f, -2.0f);
	double var$29 = (double)decodeAnchorX(1.6713555f, -0.7352941f);
	double var$30 = (double)decodeAnchorY(1.0769231f, 0.0f);
	double var$31 = (double)decodeX(1.6713555f);
	$nc(this->path)->curveTo(var$27, var$28, var$29, var$30, var$31, decodeY(1.0769231f));
	$nc(this->path)->closePath();
	return this->path;
}

$Paint* ScrollBarButtonPainter::decodeGradient1($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.032934133f,
		0.065868266f,
		0.089820355f,
		0.11377245f,
		0.23053892f,
		0.3473054f,
		0.494012f,
		0.6407186f,
		0.78443116f,
		0.92814374f
	}), $$new($ColorArray, {
		this->color2,
		$(decodeColor(this->color2, this->color3, 0.5f)),
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

$Paint* ScrollBarButtonPainter::decodeGradient2($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.0f * w) + x, (0.5f * h) + y, (0.5735294f * w) + x, (0.5f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color8,
		$(decodeColor(this->color8, this->color9, 0.5f)),
		this->color9
	}));
}

$Paint* ScrollBarButtonPainter::decodeGradient3($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.925f * w) + x, (0.9285714f * h) + y, (0.925f * w) + x, (0.004201681f * h) + y, $$new($floats, {
		0.0f,
		0.2964072f,
		0.5928144f,
		0.79341316f,
		0.994012f
	}), $$new($ColorArray, {
		this->color10,
		$(decodeColor(this->color10, this->color11, 0.5f)),
		this->color11,
		$(decodeColor(this->color11, this->color12, 0.5f)),
		this->color12
	}));
}

$Paint* ScrollBarButtonPainter::decodeGradient4($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.032934133f,
		0.065868266f,
		0.089820355f,
		0.11377245f,
		0.23053892f,
		0.3473054f,
		0.494012f,
		0.6407186f,
		0.78443116f,
		0.92814374f
	}), $$new($ColorArray, {
		this->color14,
		$(decodeColor(this->color14, this->color15, 0.5f)),
		this->color15,
		$(decodeColor(this->color15, this->color16, 0.5f)),
		this->color16,
		$(decodeColor(this->color16, this->color17, 0.5f)),
		this->color17,
		$(decodeColor(this->color17, this->color18, 0.5f)),
		this->color18,
		$(decodeColor(this->color18, this->color16, 0.5f)),
		this->color16
	}));
}

$Paint* ScrollBarButtonPainter::decodeGradient5($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.0f * w) + x, (0.5f * h) + y, (0.5735294f * w) + x, (0.5f * h) + y, $$new($floats, {
		0.19518717f,
		0.5975936f,
		1.0f
	}), $$new($ColorArray, {
		this->color19,
		$(decodeColor(this->color19, this->color20, 0.5f)),
		this->color20
	}));
}

$Paint* ScrollBarButtonPainter::decodeGradient6($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.925f * w) + x, (0.9285714f * h) + y, (0.925f * w) + x, (0.004201681f * h) + y, $$new($floats, {
		0.0f,
		0.2964072f,
		0.5928144f,
		0.79341316f,
		0.994012f
	}), $$new($ColorArray, {
		this->color21,
		$(decodeColor(this->color21, this->color22, 0.5f)),
		this->color22,
		$(decodeColor(this->color22, this->color23, 0.5f)),
		this->color23
	}));
}

$Paint* ScrollBarButtonPainter::decodeGradient7($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.032934133f,
		0.065868266f,
		0.089820355f,
		0.11377245f,
		0.23053892f,
		0.3473054f,
		0.494012f,
		0.6407186f,
		0.78443116f,
		0.92814374f
	}), $$new($ColorArray, {
		this->color24,
		$(decodeColor(this->color24, this->color25, 0.5f)),
		this->color25,
		$(decodeColor(this->color25, this->color26, 0.5f)),
		this->color26,
		$(decodeColor(this->color26, this->color27, 0.5f)),
		this->color27,
		$(decodeColor(this->color27, this->color28, 0.5f)),
		this->color28,
		$(decodeColor(this->color28, this->color29, 0.5f)),
		this->color29
	}));
}

$Paint* ScrollBarButtonPainter::decodeGradient8($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.0f * w) + x, (0.5f * h) + y, (0.5735294f * w) + x, (0.5f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color30,
		$(decodeColor(this->color30, this->color9, 0.5f)),
		this->color9
	}));
}

ScrollBarButtonPainter::ScrollBarButtonPainter() {
}

$Class* ScrollBarButtonPainter::load$($String* name, bool initialize) {
	$loadClass(ScrollBarButtonPainter, name, initialize, &_ScrollBarButtonPainter_ClassInfo_, allocate$ScrollBarButtonPainter);
	return class$;
}

$Class* ScrollBarButtonPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax