#include <javax/swing/plaf/nimbus/OptionPaneMessageAreaOptionPaneLabelPainter.h>

#include <java/awt/Color.h>
#include <java/awt/Graphics2D.h>
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

using $Color = ::java::awt::Color;
using $Graphics2D = ::java::awt::Graphics2D;
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

$FieldInfo _OptionPaneMessageAreaOptionPaneLabelPainter_FieldInfo_[] = {
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(OptionPaneMessageAreaOptionPaneLabelPainter, BACKGROUND_ENABLED)},
	{"state", "I", nullptr, $PRIVATE, $field(OptionPaneMessageAreaOptionPaneLabelPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(OptionPaneMessageAreaOptionPaneLabelPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(OptionPaneMessageAreaOptionPaneLabelPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(OptionPaneMessageAreaOptionPaneLabelPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(OptionPaneMessageAreaOptionPaneLabelPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(OptionPaneMessageAreaOptionPaneLabelPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPaneMessageAreaOptionPaneLabelPainter, color1)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(OptionPaneMessageAreaOptionPaneLabelPainter, componentColors)},
	{}
};

$MethodInfo _OptionPaneMessageAreaOptionPaneLabelPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(OptionPaneMessageAreaOptionPaneLabelPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&OptionPaneMessageAreaOptionPaneLabelPainter::init$))},
	{"decodeRect1", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(OptionPaneMessageAreaOptionPaneLabelPainter::*)()>(&OptionPaneMessageAreaOptionPaneLabelPainter::decodeRect1))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(OptionPaneMessageAreaOptionPaneLabelPainter::*)($Graphics2D*)>(&OptionPaneMessageAreaOptionPaneLabelPainter::paintBackgroundEnabled))},
	{}
};

$ClassInfo _OptionPaneMessageAreaOptionPaneLabelPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.OptionPaneMessageAreaOptionPaneLabelPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_OptionPaneMessageAreaOptionPaneLabelPainter_FieldInfo_,
	_OptionPaneMessageAreaOptionPaneLabelPainter_MethodInfo_
};

$Object* allocate$OptionPaneMessageAreaOptionPaneLabelPainter($Class* clazz) {
	return $of($alloc(OptionPaneMessageAreaOptionPaneLabelPainter));
}

void OptionPaneMessageAreaOptionPaneLabelPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, $new($Color, 0, 0, 255, 255));
	this->state = state;
	$set(this, ctx, ctx);
}

void OptionPaneMessageAreaOptionPaneLabelPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case OptionPaneMessageAreaOptionPaneLabelPainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* OptionPaneMessageAreaOptionPaneLabelPainter::getPaintContext() {
	return this->ctx;
}

void OptionPaneMessageAreaOptionPaneLabelPainter::paintBackgroundEnabled($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
}

$Rectangle2D* OptionPaneMessageAreaOptionPaneLabelPainter::decodeRect1() {
	double var$0 = (double)decodeX(0.0f);
	double var$1 = (double)decodeY(0.0f);
	float var$3 = decodeX(3.0f);
	double var$2 = (double)(var$3 - decodeX(0.0f));
	float var$4 = decodeY(3.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.0f));
	return this->rect;
}

OptionPaneMessageAreaOptionPaneLabelPainter::OptionPaneMessageAreaOptionPaneLabelPainter() {
}

$Class* OptionPaneMessageAreaOptionPaneLabelPainter::load$($String* name, bool initialize) {
	$loadClass(OptionPaneMessageAreaOptionPaneLabelPainter, name, initialize, &_OptionPaneMessageAreaOptionPaneLabelPainter_ClassInfo_, allocate$OptionPaneMessageAreaOptionPaneLabelPainter);
	return class$;
}

$Class* OptionPaneMessageAreaOptionPaneLabelPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax