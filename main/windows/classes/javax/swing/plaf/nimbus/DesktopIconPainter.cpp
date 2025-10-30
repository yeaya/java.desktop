#include <javax/swing/plaf/nimbus/DesktopIconPainter.h>

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

$FieldInfo _DesktopIconPainter_FieldInfo_[] = {
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(DesktopIconPainter, BACKGROUND_ENABLED)},
	{"state", "I", nullptr, $PRIVATE, $field(DesktopIconPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(DesktopIconPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(DesktopIconPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(DesktopIconPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(DesktopIconPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(DesktopIconPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(DesktopIconPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(DesktopIconPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(DesktopIconPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(DesktopIconPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(DesktopIconPainter, color5)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(DesktopIconPainter, componentColors)},
	{}
};

$MethodInfo _DesktopIconPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(DesktopIconPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&DesktopIconPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(DesktopIconPainter::*)($Shape*)>(&DesktopIconPainter::decodeGradient1))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(DesktopIconPainter::*)($Shape*)>(&DesktopIconPainter::decodeGradient2))},
	{"decodeRect1", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(DesktopIconPainter::*)()>(&DesktopIconPainter::decodeRect1))},
	{"decodeRoundRect1", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(DesktopIconPainter::*)()>(&DesktopIconPainter::decodeRoundRect1))},
	{"decodeRoundRect2", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(DesktopIconPainter::*)()>(&DesktopIconPainter::decodeRoundRect2))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(DesktopIconPainter::*)($Graphics2D*)>(&DesktopIconPainter::paintBackgroundEnabled))},
	{}
};

$ClassInfo _DesktopIconPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.DesktopIconPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_DesktopIconPainter_FieldInfo_,
	_DesktopIconPainter_MethodInfo_
};

$Object* allocate$DesktopIconPainter($Class* clazz) {
	return $of($alloc(DesktopIconPainter));
}

void DesktopIconPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBase"_s, 0.02551502f, -0.47885156f, -0.34901965f, 0));
	$set(this, color2, decodeColor("nimbusBlueGrey"_s, -0.027777791f, -0.102261856f, 0.20392156f, 0));
	$set(this, color3, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.0682728f, 0.09019607f, 0));
	$set(this, color4, decodeColor("nimbusBlueGrey"_s, -0.01111114f, -0.088974595f, 0.16470587f, 0));
	$set(this, color5, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.029445238f, -0.019607842f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void DesktopIconPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case DesktopIconPainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* DesktopIconPainter::getPaintContext() {
	return this->ctx;
}

void DesktopIconPainter::paintBackgroundEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient1(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, rect, decodeRect1());
	g->setPaint($(decodeGradient2(this->rect)));
	g->fill(this->rect);
}

$RoundRectangle2D* DesktopIconPainter::decodeRoundRect1() {
	double var$0 = (double)decodeX(0.4f);
	double var$1 = (double)decodeY(0.0f);
	float var$3 = decodeX(2.8f);
	double var$2 = (double)(var$3 - decodeX(0.4f));
	float var$4 = decodeY(2.6f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.0f), 4.8333335f, 4.8333335f);
	return this->roundRect;
}

$RoundRectangle2D* DesktopIconPainter::decodeRoundRect2() {
	double var$0 = (double)decodeX(0.6f);
	double var$1 = (double)decodeY(0.2f);
	float var$3 = decodeX(2.8f);
	double var$2 = (double)(var$3 - decodeX(0.6f));
	float var$4 = decodeY(2.4f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.2f), 3.1f, 3.1f);
	return this->roundRect;
}

$Rectangle2D* DesktopIconPainter::decodeRect1() {
	double var$0 = (double)decodeX(0.8f);
	double var$1 = (double)decodeY(0.4f);
	float var$3 = decodeX(2.4f);
	double var$2 = (double)(var$3 - decodeX(0.8f));
	float var$4 = decodeY(2.2f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.4f));
	return this->rect;
}

$Paint* DesktopIconPainter::decodeGradient1($Shape* s) {
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
		this->color2,
		$(decodeColor(this->color2, this->color3, 0.5f)),
		this->color3
	}));
}

$Paint* DesktopIconPainter::decodeGradient2($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.24f,
		1.0f
	}), $$new($ColorArray, {
		this->color4,
		$(decodeColor(this->color4, this->color5, 0.5f)),
		this->color5
	}));
}

DesktopIconPainter::DesktopIconPainter() {
}

$Class* DesktopIconPainter::load$($String* name, bool initialize) {
	$loadClass(DesktopIconPainter, name, initialize, &_DesktopIconPainter_ClassInfo_, allocate$DesktopIconPainter);
	return class$;
}

$Class* DesktopIconPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax