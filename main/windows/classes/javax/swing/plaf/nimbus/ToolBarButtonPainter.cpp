#include <javax/swing/plaf/nimbus/ToolBarButtonPainter.h>

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
#undef BACKGROUND_MOUSEOVER
#undef BACKGROUND_MOUSEOVER_FOCUSED
#undef BACKGROUND_PRESSED
#undef BACKGROUND_PRESSED_FOCUSED

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

$FieldInfo _ToolBarButtonPainter_FieldInfo_[] = {
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(ToolBarButtonPainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(ToolBarButtonPainter, BACKGROUND_FOCUSED)},
	{"BACKGROUND_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(ToolBarButtonPainter, BACKGROUND_MOUSEOVER)},
	{"BACKGROUND_MOUSEOVER_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(ToolBarButtonPainter, BACKGROUND_MOUSEOVER_FOCUSED)},
	{"BACKGROUND_PRESSED", "I", nullptr, $STATIC | $FINAL, $constField(ToolBarButtonPainter, BACKGROUND_PRESSED)},
	{"BACKGROUND_PRESSED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(ToolBarButtonPainter, BACKGROUND_PRESSED_FOCUSED)},
	{"state", "I", nullptr, $PRIVATE, $field(ToolBarButtonPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(ToolBarButtonPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(ToolBarButtonPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(ToolBarButtonPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(ToolBarButtonPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(ToolBarButtonPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarButtonPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarButtonPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarButtonPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarButtonPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarButtonPainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarButtonPainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarButtonPainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarButtonPainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarButtonPainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarButtonPainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarButtonPainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarButtonPainter, color12)},
	{"color13", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarButtonPainter, color13)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(ToolBarButtonPainter, componentColors)},
	{}
};

$MethodInfo _ToolBarButtonPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(ToolBarButtonPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&ToolBarButtonPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToolBarButtonPainter::*)($Shape*)>(&ToolBarButtonPainter::decodeGradient1))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToolBarButtonPainter::*)($Shape*)>(&ToolBarButtonPainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToolBarButtonPainter::*)($Shape*)>(&ToolBarButtonPainter::decodeGradient3))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ToolBarButtonPainter::*)()>(&ToolBarButtonPainter::decodePath1))},
	{"decodeRoundRect1", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(ToolBarButtonPainter::*)()>(&ToolBarButtonPainter::decodeRoundRect1))},
	{"decodeRoundRect2", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(ToolBarButtonPainter::*)()>(&ToolBarButtonPainter::decodeRoundRect2))},
	{"decodeRoundRect3", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(ToolBarButtonPainter::*)()>(&ToolBarButtonPainter::decodeRoundRect3))},
	{"decodeRoundRect4", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(ToolBarButtonPainter::*)()>(&ToolBarButtonPainter::decodeRoundRect4))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolBarButtonPainter::*)($Graphics2D*)>(&ToolBarButtonPainter::paintBackgroundFocused))},
	{"paintBackgroundMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolBarButtonPainter::*)($Graphics2D*)>(&ToolBarButtonPainter::paintBackgroundMouseOver))},
	{"paintBackgroundMouseOverAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolBarButtonPainter::*)($Graphics2D*)>(&ToolBarButtonPainter::paintBackgroundMouseOverAndFocused))},
	{"paintBackgroundPressed", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolBarButtonPainter::*)($Graphics2D*)>(&ToolBarButtonPainter::paintBackgroundPressed))},
	{"paintBackgroundPressedAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolBarButtonPainter::*)($Graphics2D*)>(&ToolBarButtonPainter::paintBackgroundPressedAndFocused))},
	{}
};

$ClassInfo _ToolBarButtonPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.ToolBarButtonPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_ToolBarButtonPainter_FieldInfo_,
	_ToolBarButtonPainter_MethodInfo_
};

$Object* allocate$ToolBarButtonPainter($Class* clazz) {
	return $of($alloc(ToolBarButtonPainter));
}

void ToolBarButtonPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusFocus"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color2, decodeColor("nimbusBlueGrey"_s, -0.027777791f, -0.06885965f, -0.36862746f, -153));
	$set(this, color3, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.020974077f, -0.21960783f, 0));
	$set(this, color4, decodeColor("nimbusBlueGrey"_s, 0.0f, 0.11169591f, -0.53333336f, 0));
	$set(this, color5, decodeColor("nimbusBlueGrey"_s, 0.055555582f, -0.10658931f, 0.25098038f, 0));
	$set(this, color6, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.098526314f, 0.2352941f, 0));
	$set(this, color7, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.07333623f, 0.20392156f, 0));
	$set(this, color8, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, 0));
	$set(this, color9, decodeColor("nimbusBlueGrey"_s, -0.00505054f, -0.05960039f, 0.10196078f, 0));
	$set(this, color10, decodeColor("nimbusBlueGrey"_s, -0.008547008f, -0.04772438f, 0.06666666f, 0));
	$set(this, color11, decodeColor("nimbusBlueGrey"_s, -0.0027777553f, -0.0018306673f, -0.02352941f, 0));
	$set(this, color12, decodeColor("nimbusBlueGrey"_s, -0.0027777553f, -0.0212406f, 0.13333333f, 0));
	$set(this, color13, decodeColor("nimbusBlueGrey"_s, 0.0055555105f, -0.030845039f, 0.23921567f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void ToolBarButtonPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case ToolBarButtonPainter::BACKGROUND_FOCUSED:
		{
			paintBackgroundFocused(g);
			break;
		}
	case ToolBarButtonPainter::BACKGROUND_MOUSEOVER:
		{
			paintBackgroundMouseOver(g);
			break;
		}
	case ToolBarButtonPainter::BACKGROUND_MOUSEOVER_FOCUSED:
		{
			paintBackgroundMouseOverAndFocused(g);
			break;
		}
	case ToolBarButtonPainter::BACKGROUND_PRESSED:
		{
			paintBackgroundPressed(g);
			break;
		}
	case ToolBarButtonPainter::BACKGROUND_PRESSED_FOCUSED:
		{
			paintBackgroundPressedAndFocused(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* ToolBarButtonPainter::getPaintContext() {
	return this->ctx;
}

void ToolBarButtonPainter::paintBackgroundFocused($Graphics2D* g) {
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->path);
}

void ToolBarButtonPainter::paintBackgroundMouseOver($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color2);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient1(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient2(this->roundRect)));
	g->fill(this->roundRect);
}

void ToolBarButtonPainter::paintBackgroundMouseOverAndFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect4());
	$nc(g)->setPaint(this->color1);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient1(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient2(this->roundRect)));
	g->fill(this->roundRect);
}

void ToolBarButtonPainter::paintBackgroundPressed($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color2);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient1(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient3(this->roundRect)));
	g->fill(this->roundRect);
}

void ToolBarButtonPainter::paintBackgroundPressedAndFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect4());
	$nc(g)->setPaint(this->color1);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient1(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient3(this->roundRect)));
	g->fill(this->roundRect);
}

$Path2D* ToolBarButtonPainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.4133738f);
	$nc(this->path)->moveTo(var$0, decodeY(0.120000005f));
	double var$1 = (double)decodeX(1.9893618f);
	$nc(this->path)->lineTo(var$1, decodeY(0.120000005f));
	double var$2 = (double)decodeAnchorX(1.9893618f, 3.0f);
	double var$3 = (double)decodeAnchorY(0.120000005f, 0.0f);
	double var$4 = (double)decodeAnchorX(2.8857148f, 0.0f);
	double var$5 = (double)decodeAnchorY(1.0434783f, -3.0f);
	double var$6 = (double)decodeX(2.8857148f);
	$nc(this->path)->curveTo(var$2, var$3, var$4, var$5, var$6, decodeY(1.0434783f));
	double var$7 = (double)decodeX(2.9f);
	$nc(this->path)->lineTo(var$7, decodeY(1.9565217f));
	double var$8 = (double)decodeAnchorX(2.9f, 0.0f);
	double var$9 = (double)decodeAnchorY(1.9565217f, 3.0f);
	double var$10 = (double)decodeAnchorX(1.9893618f, 3.0f);
	double var$11 = (double)decodeAnchorY(2.8714287f, 0.0f);
	double var$12 = (double)decodeX(1.9893618f);
	$nc(this->path)->curveTo(var$8, var$9, var$10, var$11, var$12, decodeY(2.8714287f));
	double var$13 = (double)decodeX(1.0106384f);
	$nc(this->path)->lineTo(var$13, decodeY(2.8714287f));
	double var$14 = (double)decodeAnchorX(1.0106384f, -3.0f);
	double var$15 = (double)decodeAnchorY(2.8714287f, 0.0f);
	double var$16 = (double)decodeAnchorX(0.120000005f, 0.0f);
	double var$17 = (double)decodeAnchorY(1.9565217f, 3.0f);
	double var$18 = (double)decodeX(0.120000005f);
	$nc(this->path)->curveTo(var$14, var$15, var$16, var$17, var$18, decodeY(1.9565217f));
	double var$19 = (double)decodeX(0.120000005f);
	$nc(this->path)->lineTo(var$19, decodeY(1.0465839f));
	double var$20 = (double)decodeAnchorX(0.120000005f, 0.0f);
	double var$21 = (double)decodeAnchorY(1.0465839f, -3.0f);
	double var$22 = (double)decodeAnchorX(1.0106384f, -3.0f);
	double var$23 = (double)decodeAnchorY(0.120000005f, 0.0f);
	double var$24 = (double)decodeX(1.0106384f);
	$nc(this->path)->curveTo(var$20, var$21, var$22, var$23, var$24, decodeY(0.120000005f));
	double var$25 = (double)decodeX(1.4148936f);
	$nc(this->path)->lineTo(var$25, decodeY(0.120000005f));
	double var$26 = (double)decodeX(1.4148936f);
	$nc(this->path)->lineTo(var$26, decodeY(0.4857143f));
	double var$27 = (double)decodeX(1.0106384f);
	$nc(this->path)->lineTo(var$27, decodeY(0.4857143f));
	double var$28 = (double)decodeAnchorX(1.0106384f, -1.9285715f);
	double var$29 = (double)decodeAnchorY(0.4857143f, 0.0f);
	double var$30 = (double)decodeAnchorX(0.47142857f, -0.044279482f);
	double var$31 = (double)decodeAnchorY(1.0403726f, -2.429218f);
	double var$32 = (double)decodeX(0.47142857f);
	$nc(this->path)->curveTo(var$28, var$29, var$30, var$31, var$32, decodeY(1.0403726f));
	double var$33 = (double)decodeX(0.47142857f);
	$nc(this->path)->lineTo(var$33, decodeY(1.9565217f));
	double var$34 = (double)decodeAnchorX(0.47142857f, 0.0f);
	double var$35 = (double)decodeAnchorY(1.9565217f, 2.2142856f);
	double var$36 = (double)decodeAnchorX(1.0106384f, -1.7857143f);
	double var$37 = (double)decodeAnchorY(2.5142856f, 0.0f);
	double var$38 = (double)decodeX(1.0106384f);
	$nc(this->path)->curveTo(var$34, var$35, var$36, var$37, var$38, decodeY(2.5142856f));
	double var$39 = (double)decodeX(1.9893618f);
	$nc(this->path)->lineTo(var$39, decodeY(2.5142856f));
	double var$40 = (double)decodeAnchorX(1.9893618f, 2.0714285f);
	double var$41 = (double)decodeAnchorY(2.5142856f, 0.0f);
	double var$42 = (double)decodeAnchorX(2.5f, 0.0f);
	double var$43 = (double)decodeAnchorY(1.9565217f, 2.2142856f);
	double var$44 = (double)decodeX(2.5f);
	$nc(this->path)->curveTo(var$40, var$41, var$42, var$43, var$44, decodeY(1.9565217f));
	double var$45 = (double)decodeX(2.5142853f);
	$nc(this->path)->lineTo(var$45, decodeY(1.0434783f));
	double var$46 = (double)decodeAnchorX(2.5142853f, 0.0f);
	double var$47 = (double)decodeAnchorY(1.0434783f, -2.142857f);
	double var$48 = (double)decodeAnchorX(1.9901216f, 2.142857f);
	double var$49 = (double)decodeAnchorY(0.47142857f, 0.0f);
	double var$50 = (double)decodeX(1.9901216f);
	$nc(this->path)->curveTo(var$46, var$47, var$48, var$49, var$50, decodeY(0.47142857f));
	double var$51 = (double)decodeX(1.4148936f);
	$nc(this->path)->lineTo(var$51, decodeY(0.4857143f));
	double var$52 = (double)decodeX(1.4133738f);
	$nc(this->path)->lineTo(var$52, decodeY(0.120000005f));
	$nc(this->path)->closePath();
	return this->path;
}

$RoundRectangle2D* ToolBarButtonPainter::decodeRoundRect1() {
	double var$0 = (double)decodeX(0.4f);
	double var$1 = (double)decodeY(0.6f);
	float var$3 = decodeX(2.6f);
	double var$2 = (double)(var$3 - decodeX(0.4f));
	float var$4 = decodeY(2.8f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.6f), 12.0f, 12.0f);
	return this->roundRect;
}

$RoundRectangle2D* ToolBarButtonPainter::decodeRoundRect2() {
	double var$0 = (double)decodeX(0.4f);
	double var$1 = (double)decodeY(0.4f);
	float var$3 = decodeX(2.6f);
	double var$2 = (double)(var$3 - decodeX(0.4f));
	float var$4 = decodeY(2.6f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.4f), 12.0f, 12.0f);
	return this->roundRect;
}

$RoundRectangle2D* ToolBarButtonPainter::decodeRoundRect3() {
	double var$0 = (double)decodeX(0.6f);
	double var$1 = (double)decodeY(0.6f);
	float var$3 = decodeX(2.4f);
	double var$2 = (double)(var$3 - decodeX(0.6f));
	float var$4 = decodeY(2.4f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.6f), 9.0f, 9.0f);
	return this->roundRect;
}

$RoundRectangle2D* ToolBarButtonPainter::decodeRoundRect4() {
	double var$0 = (double)decodeX(0.120000005f);
	double var$1 = (double)decodeY(0.120000005f);
	float var$3 = decodeX(2.8800004f);
	double var$2 = (double)(var$3 - decodeX(0.120000005f));
	float var$4 = decodeY(2.8800004f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.120000005f), 13.0f, 13.0f);
	return this->roundRect;
}

$Paint* ToolBarButtonPainter::decodeGradient1($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.09f,
		0.52f,
		0.95f
	}), $$new($ColorArray, {
		this->color3,
		$(decodeColor(this->color3, this->color4, 0.5f)),
		this->color4
	}));
}

$Paint* ToolBarButtonPainter::decodeGradient2($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.03f,
		0.06f,
		0.33f,
		0.6f,
		0.65f,
		0.7f,
		0.825f,
		0.95f,
		0.975f,
		1.0f
	}), $$new($ColorArray, {
		this->color5,
		$(decodeColor(this->color5, this->color6, 0.5f)),
		this->color6,
		$(decodeColor(this->color6, this->color7, 0.5f)),
		this->color7,
		$(decodeColor(this->color7, this->color7, 0.5f)),
		this->color7,
		$(decodeColor(this->color7, this->color8, 0.5f)),
		this->color8,
		$(decodeColor(this->color8, this->color8, 0.5f)),
		this->color8
	}));
}

$Paint* ToolBarButtonPainter::decodeGradient3($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.03f,
		0.06f,
		0.33f,
		0.6f,
		0.65f,
		0.7f,
		0.825f,
		0.95f,
		0.975f,
		1.0f
	}), $$new($ColorArray, {
		this->color9,
		$(decodeColor(this->color9, this->color10, 0.5f)),
		this->color10,
		$(decodeColor(this->color10, this->color11, 0.5f)),
		this->color11,
		$(decodeColor(this->color11, this->color11, 0.5f)),
		this->color11,
		$(decodeColor(this->color11, this->color12, 0.5f)),
		this->color12,
		$(decodeColor(this->color12, this->color13, 0.5f)),
		this->color13
	}));
}

ToolBarButtonPainter::ToolBarButtonPainter() {
}

$Class* ToolBarButtonPainter::load$($String* name, bool initialize) {
	$loadClass(ToolBarButtonPainter, name, initialize, &_ToolBarButtonPainter_ClassInfo_, allocate$ToolBarButtonPainter);
	return class$;
}

$Class* ToolBarButtonPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax