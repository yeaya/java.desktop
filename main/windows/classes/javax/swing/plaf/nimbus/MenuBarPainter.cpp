#include <javax/swing/plaf/nimbus/MenuBarPainter.h>

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
#undef BORDER_ENABLED

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

$FieldInfo _MenuBarPainter_FieldInfo_[] = {
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(MenuBarPainter, BACKGROUND_ENABLED)},
	{"BORDER_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(MenuBarPainter, BORDER_ENABLED)},
	{"state", "I", nullptr, $PRIVATE, $field(MenuBarPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(MenuBarPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(MenuBarPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(MenuBarPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(MenuBarPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(MenuBarPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MenuBarPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MenuBarPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MenuBarPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MenuBarPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MenuBarPainter, color5)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(MenuBarPainter, componentColors)},
	{}
};

$MethodInfo _MenuBarPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(MenuBarPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&MenuBarPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(MenuBarPainter::*)($Shape*)>(&MenuBarPainter::decodeGradient1))},
	{"decodeRect1", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(MenuBarPainter::*)()>(&MenuBarPainter::decodeRect1))},
	{"decodeRect2", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(MenuBarPainter::*)()>(&MenuBarPainter::decodeRect2))},
	{"decodeRect3", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(MenuBarPainter::*)()>(&MenuBarPainter::decodeRect3))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(MenuBarPainter::*)($Graphics2D*)>(&MenuBarPainter::paintBackgroundEnabled))},
	{"paintBorderEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(MenuBarPainter::*)($Graphics2D*)>(&MenuBarPainter::paintBorderEnabled))},
	{}
};

$ClassInfo _MenuBarPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.MenuBarPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_MenuBarPainter_FieldInfo_,
	_MenuBarPainter_MethodInfo_
};

$Object* allocate$MenuBarPainter($Class* clazz) {
	return $of($alloc(MenuBarPainter));
}

void MenuBarPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.07016757f, 0.12941176f, 0));
	$set(this, color2, decodeColor("nimbusBlueGrey"_s, -0.027777791f, -0.10255819f, 0.23921567f, 0));
	$set(this, color3, decodeColor("nimbusBlueGrey"_s, -0.111111104f, -0.10654225f, 0.23921567f, -29));
	$set(this, color4, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, -255));
	$set(this, color5, decodeColor("nimbusBorder"_s, 0.0f, 0.0f, 0.0f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void MenuBarPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case MenuBarPainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	case MenuBarPainter::BORDER_ENABLED:
		{
			paintBorderEnabled(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* MenuBarPainter::getPaintContext() {
	return this->ctx;
}

void MenuBarPainter::paintBackgroundEnabled($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint($(decodeGradient1(this->rect)));
	g->fill(this->rect);
}

void MenuBarPainter::paintBorderEnabled($Graphics2D* g) {
	$set(this, rect, decodeRect3());
	$nc(g)->setPaint(this->color5);
	g->fill(this->rect);
}

$Rectangle2D* MenuBarPainter::decodeRect1() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(0.0f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(1.9523809f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.0f));
	return this->rect;
}

$Rectangle2D* MenuBarPainter::decodeRect2() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(0.0f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(2.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.0f));
	return this->rect;
}

$Rectangle2D* MenuBarPainter::decodeRect3() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(2.0f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(3.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.0f));
	return this->rect;
}

$Paint* MenuBarPainter::decodeGradient1($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((1.0f * w) + x, (0.0f * h) + y, (1.0f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.015f,
		0.03f,
		0.23354445f,
		0.7569444f
	}), $$new($ColorArray, {
		this->color2,
		$(decodeColor(this->color2, this->color3, 0.5f)),
		this->color3,
		$(decodeColor(this->color3, this->color4, 0.5f)),
		this->color4
	}));
}

MenuBarPainter::MenuBarPainter() {
}

$Class* MenuBarPainter::load$($String* name, bool initialize) {
	$loadClass(MenuBarPainter, name, initialize, &_MenuBarPainter_ClassInfo_, allocate$MenuBarPainter);
	return class$;
}

$Class* MenuBarPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax