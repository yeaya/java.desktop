#include <javax/swing/plaf/nimbus/ComboBoxTextFieldPainter.h>

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
#undef BACKGROUND_SELECTED

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

$FieldInfo _ComboBoxTextFieldPainter_FieldInfo_[] = {
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxTextFieldPainter, BACKGROUND_DISABLED)},
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxTextFieldPainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxTextFieldPainter, BACKGROUND_SELECTED)},
	{"state", "I", nullptr, $PRIVATE, $field(ComboBoxTextFieldPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(ComboBoxTextFieldPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(ComboBoxTextFieldPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(ComboBoxTextFieldPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(ComboBoxTextFieldPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(ComboBoxTextFieldPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxTextFieldPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxTextFieldPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxTextFieldPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxTextFieldPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxTextFieldPainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxTextFieldPainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxTextFieldPainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxTextFieldPainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxTextFieldPainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxTextFieldPainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxTextFieldPainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxTextFieldPainter, color12)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(ComboBoxTextFieldPainter, componentColors)},
	{}
};

$MethodInfo _ComboBoxTextFieldPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(ComboBoxTextFieldPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&ComboBoxTextFieldPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ComboBoxTextFieldPainter::*)($Shape*)>(&ComboBoxTextFieldPainter::decodeGradient1))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ComboBoxTextFieldPainter::*)($Shape*)>(&ComboBoxTextFieldPainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ComboBoxTextFieldPainter::*)($Shape*)>(&ComboBoxTextFieldPainter::decodeGradient3))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ComboBoxTextFieldPainter::*)($Shape*)>(&ComboBoxTextFieldPainter::decodeGradient4))},
	{"decodeRect1", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ComboBoxTextFieldPainter::*)()>(&ComboBoxTextFieldPainter::decodeRect1))},
	{"decodeRect2", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ComboBoxTextFieldPainter::*)()>(&ComboBoxTextFieldPainter::decodeRect2))},
	{"decodeRect3", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ComboBoxTextFieldPainter::*)()>(&ComboBoxTextFieldPainter::decodeRect3))},
	{"decodeRect4", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ComboBoxTextFieldPainter::*)()>(&ComboBoxTextFieldPainter::decodeRect4))},
	{"decodeRect5", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ComboBoxTextFieldPainter::*)()>(&ComboBoxTextFieldPainter::decodeRect5))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ComboBoxTextFieldPainter::*)($Graphics2D*)>(&ComboBoxTextFieldPainter::paintBackgroundDisabled))},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ComboBoxTextFieldPainter::*)($Graphics2D*)>(&ComboBoxTextFieldPainter::paintBackgroundEnabled))},
	{"paintBackgroundSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ComboBoxTextFieldPainter::*)($Graphics2D*)>(&ComboBoxTextFieldPainter::paintBackgroundSelected))},
	{}
};

$ClassInfo _ComboBoxTextFieldPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.ComboBoxTextFieldPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_ComboBoxTextFieldPainter_FieldInfo_,
	_ComboBoxTextFieldPainter_MethodInfo_
};

$Object* allocate$ComboBoxTextFieldPainter($Class* clazz) {
	return $of($alloc(ComboBoxTextFieldPainter));
}

void ComboBoxTextFieldPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBlueGrey"_s, -0.6111111f, -0.110526316f, -0.74509805f, -237));
	$set(this, color2, decodeColor("nimbusBlueGrey"_s, -0.006944418f, -0.07187897f, 0.06666666f, 0));
	$set(this, color3, decodeColor("nimbusBlueGrey"_s, 0.007936537f, -0.07703349f, 0.0745098f, 0));
	$set(this, color4, decodeColor("nimbusBlueGrey"_s, 0.007936537f, -0.07968931f, 0.14509803f, 0));
	$set(this, color5, decodeColor("nimbusBlueGrey"_s, 0.007936537f, -0.07856284f, 0.11372548f, 0));
	$set(this, color6, decodeColor("nimbusBase"_s, 0.040395975f, -0.60315615f, 0.29411763f, 0));
	$set(this, color7, decodeColor("nimbusBase"_s, 0.016586483f, -0.6051466f, 0.3490196f, 0));
	$set(this, color8, decodeColor("nimbusBlueGrey"_s, -0.027777791f, -0.0965403f, -0.18431371f, 0));
	$set(this, color9, decodeColor("nimbusBlueGrey"_s, 0.055555582f, -0.1048766f, -0.05098039f, 0));
	$set(this, color10, decodeColor("nimbusLightBackground"_s, 0.6666667f, 0.004901961f, -0.19999999f, 0));
	$set(this, color11, decodeColor("nimbusLightBackground"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color12, decodeColor("nimbusBlueGrey"_s, 0.055555582f, -0.105344966f, 0.011764705f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void ComboBoxTextFieldPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case ComboBoxTextFieldPainter::BACKGROUND_DISABLED:
		{
			paintBackgroundDisabled(g);
			break;
		}
	case ComboBoxTextFieldPainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	case ComboBoxTextFieldPainter::BACKGROUND_SELECTED:
		{
			paintBackgroundSelected(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* ComboBoxTextFieldPainter::getPaintContext() {
	return this->ctx;
}

void ComboBoxTextFieldPainter::paintBackgroundDisabled($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint($(decodeGradient1(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint($(decodeGradient2(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect4());
	g->setPaint(this->color6);
	g->fill(this->rect);
	$set(this, rect, decodeRect5());
	g->setPaint(this->color7);
	g->fill(this->rect);
}

void ComboBoxTextFieldPainter::paintBackgroundEnabled($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint($(decodeGradient3(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint($(decodeGradient4(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect4());
	g->setPaint(this->color12);
	g->fill(this->rect);
	$set(this, rect, decodeRect5());
	g->setPaint(this->color11);
	g->fill(this->rect);
}

void ComboBoxTextFieldPainter::paintBackgroundSelected($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint($(decodeGradient3(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint($(decodeGradient4(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect4());
	g->setPaint(this->color12);
	g->fill(this->rect);
	$set(this, rect, decodeRect5());
	g->setPaint(this->color11);
	g->fill(this->rect);
}

$Rectangle2D* ComboBoxTextFieldPainter::decodeRect1() {
	double var$0 = (double)decodeX(0.6666667f);
	double var$1 = (double)decodeY(2.3333333f);
	float var$3 = decodeX(3.0f);
	double var$2 = (double)(var$3 - decodeX(0.6666667f));
	float var$4 = decodeY(2.6666667f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.3333333f));
	return this->rect;
}

$Rectangle2D* ComboBoxTextFieldPainter::decodeRect2() {
	double var$0 = (double)decodeX(0.6666667f);
	double var$1 = (double)decodeY(0.4f);
	float var$3 = decodeX(3.0f);
	double var$2 = (double)(var$3 - decodeX(0.6666667f));
	float var$4 = decodeY(1.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.4f));
	return this->rect;
}

$Rectangle2D* ComboBoxTextFieldPainter::decodeRect3() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(0.6f);
	float var$3 = decodeX(3.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(1.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.6f));
	return this->rect;
}

$Rectangle2D* ComboBoxTextFieldPainter::decodeRect4() {
	double var$0 = (double)decodeX(0.6666667f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(3.0f);
	double var$2 = (double)(var$3 - decodeX(0.6666667f));
	float var$4 = decodeY(2.3333333f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.0f));
	return this->rect;
}

$Rectangle2D* ComboBoxTextFieldPainter::decodeRect5() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(3.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(2.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.0f));
	return this->rect;
}

$Paint* ComboBoxTextFieldPainter::decodeGradient1($Shape* s) {
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
		this->color2,
		$(decodeColor(this->color2, this->color3, 0.5f)),
		this->color3
	}));
}

$Paint* ComboBoxTextFieldPainter::decodeGradient2($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (1.0f * h) + y, (0.5f * w) + x, (0.0f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color4,
		$(decodeColor(this->color4, this->color5, 0.5f)),
		this->color5
	}));
}

$Paint* ComboBoxTextFieldPainter::decodeGradient3($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.49573863f,
		0.99147725f
	}), $$new($ColorArray, {
		this->color8,
		$(decodeColor(this->color8, this->color9, 0.5f)),
		this->color9
	}));
}

$Paint* ComboBoxTextFieldPainter::decodeGradient4($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.1f,
		0.49999997f,
		0.9f
	}), $$new($ColorArray, {
		this->color10,
		$(decodeColor(this->color10, this->color11, 0.5f)),
		this->color11
	}));
}

ComboBoxTextFieldPainter::ComboBoxTextFieldPainter() {
}

$Class* ComboBoxTextFieldPainter::load$($String* name, bool initialize) {
	$loadClass(ComboBoxTextFieldPainter, name, initialize, &_ComboBoxTextFieldPainter_ClassInfo_, allocate$ComboBoxTextFieldPainter);
	return class$;
}

$Class* ComboBoxTextFieldPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax