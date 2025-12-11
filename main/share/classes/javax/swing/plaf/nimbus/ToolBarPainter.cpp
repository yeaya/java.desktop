#include <javax/swing/plaf/nimbus/ToolBarPainter.h>

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

#undef BORDER_EAST
#undef BORDER_NORTH
#undef BORDER_SOUTH
#undef BORDER_WEST
#undef HANDLEICON_ENABLED

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

$FieldInfo _ToolBarPainter_FieldInfo_[] = {
	{"BORDER_NORTH", "I", nullptr, $STATIC | $FINAL, $constField(ToolBarPainter, BORDER_NORTH)},
	{"BORDER_SOUTH", "I", nullptr, $STATIC | $FINAL, $constField(ToolBarPainter, BORDER_SOUTH)},
	{"BORDER_EAST", "I", nullptr, $STATIC | $FINAL, $constField(ToolBarPainter, BORDER_EAST)},
	{"BORDER_WEST", "I", nullptr, $STATIC | $FINAL, $constField(ToolBarPainter, BORDER_WEST)},
	{"HANDLEICON_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(ToolBarPainter, HANDLEICON_ENABLED)},
	{"state", "I", nullptr, $PRIVATE, $field(ToolBarPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(ToolBarPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(ToolBarPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(ToolBarPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(ToolBarPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(ToolBarPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarPainter, color5)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(ToolBarPainter, componentColors)},
	{}
};

$MethodInfo _ToolBarPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(ToolBarPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&ToolBarPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToolBarPainter::*)($Shape*)>(&ToolBarPainter::decodeGradient1))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ToolBarPainter::*)()>(&ToolBarPainter::decodePath1))},
	{"decodePath2", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ToolBarPainter::*)()>(&ToolBarPainter::decodePath2))},
	{"decodeRect1", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ToolBarPainter::*)()>(&ToolBarPainter::decodeRect1))},
	{"decodeRect2", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ToolBarPainter::*)()>(&ToolBarPainter::decodeRect2))},
	{"decodeRect3", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ToolBarPainter::*)()>(&ToolBarPainter::decodeRect3))},
	{"decodeRect4", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ToolBarPainter::*)()>(&ToolBarPainter::decodeRect4))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBorderEast", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolBarPainter::*)($Graphics2D*)>(&ToolBarPainter::paintBorderEast))},
	{"paintBorderNorth", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolBarPainter::*)($Graphics2D*)>(&ToolBarPainter::paintBorderNorth))},
	{"paintBorderSouth", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolBarPainter::*)($Graphics2D*)>(&ToolBarPainter::paintBorderSouth))},
	{"paintBorderWest", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolBarPainter::*)($Graphics2D*)>(&ToolBarPainter::paintBorderWest))},
	{"painthandleIconEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolBarPainter::*)($Graphics2D*)>(&ToolBarPainter::painthandleIconEnabled))},
	{}
};

$ClassInfo _ToolBarPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.ToolBarPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_ToolBarPainter_FieldInfo_,
	_ToolBarPainter_MethodInfo_
};

$Object* allocate$ToolBarPainter($Class* clazz) {
	return $of($alloc(ToolBarPainter));
}

void ToolBarPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBorder"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color2, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, 0));
	$set(this, color3, decodeColor("nimbusBlueGrey"_s, -0.006944418f, -0.07399663f, 0.11372548f, 0));
	$set(this, color4, decodeColor("nimbusBorder"_s, 0.0f, -0.029675633f, 0.109803915f, 0));
	$set(this, color5, decodeColor("nimbusBlueGrey"_s, -0.008547008f, -0.03494492f, -0.07058823f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void ToolBarPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case ToolBarPainter::BORDER_NORTH:
		{
			paintBorderNorth(g);
			break;
		}
	case ToolBarPainter::BORDER_SOUTH:
		{
			paintBorderSouth(g);
			break;
		}
	case ToolBarPainter::BORDER_EAST:
		{
			paintBorderEast(g);
			break;
		}
	case ToolBarPainter::BORDER_WEST:
		{
			paintBorderWest(g);
			break;
		}
	case ToolBarPainter::HANDLEICON_ENABLED:
		{
			painthandleIconEnabled(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* ToolBarPainter::getPaintContext() {
	return this->ctx;
}

void ToolBarPainter::paintBorderNorth($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
}

void ToolBarPainter::paintBorderSouth($Graphics2D* g) {
	$set(this, rect, decodeRect2());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
}

void ToolBarPainter::paintBorderEast($Graphics2D* g) {
	$set(this, rect, decodeRect2());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
}

void ToolBarPainter::paintBorderWest($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
}

void ToolBarPainter::painthandleIconEnabled($Graphics2D* g) {
	$set(this, rect, decodeRect3());
	$nc(g)->setPaint($(decodeGradient1(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect4());
	g->setPaint(this->color4);
	g->fill(this->rect);
	$set(this, path, decodePath1());
	g->setPaint(this->color5);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint(this->color5);
	g->fill(this->path);
}

$Rectangle2D* ToolBarPainter::decodeRect1() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(2.0f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(3.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.0f));
	return this->rect;
}

$Rectangle2D* ToolBarPainter::decodeRect2() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(0.0f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(1.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.0f));
	return this->rect;
}

$Rectangle2D* ToolBarPainter::decodeRect3() {
	double var$0 = (double)decodeX(0.0f);
	double var$1 = (double)decodeY(0.0f);
	float var$3 = decodeX(2.8f);
	double var$2 = (double)(var$3 - decodeX(0.0f));
	float var$4 = decodeY(3.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.0f));
	return this->rect;
}

$Rectangle2D* ToolBarPainter::decodeRect4() {
	double var$0 = (double)decodeX(2.8f);
	double var$1 = (double)decodeY(0.0f);
	float var$3 = decodeX(3.0f);
	double var$2 = (double)(var$3 - decodeX(2.8f));
	float var$4 = decodeY(3.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.0f));
	return this->rect;
}

$Path2D* ToolBarPainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(0.0f));
	double var$1 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$1, decodeY(0.4f));
	double var$2 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$2, decodeY(0.0f));
	double var$3 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$3, decodeY(0.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* ToolBarPainter::decodePath2() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(3.0f));
	double var$1 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$1, decodeY(2.6f));
	double var$2 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$2, decodeY(3.0f));
	double var$3 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$3, decodeY(3.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Paint* ToolBarPainter::decodeGradient1($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.0f * w) + x, (0.5f * h) + y, (1.0f * w) + x, (0.5f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color2,
		$(decodeColor(this->color2, this->color3, 0.5f)),
		this->color3
	}));
}

ToolBarPainter::ToolBarPainter() {
}

$Class* ToolBarPainter::load$($String* name, bool initialize) {
	$loadClass(ToolBarPainter, name, initialize, &_ToolBarPainter_ClassInfo_, allocate$ToolBarPainter);
	return class$;
}

$Class* ToolBarPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax