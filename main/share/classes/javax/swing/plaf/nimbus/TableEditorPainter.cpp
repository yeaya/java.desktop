#include <javax/swing/plaf/nimbus/TableEditorPainter.h>

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
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>
#include <jcpp.h>

#undef BACKGROUND_DISABLED
#undef BACKGROUND_ENABLED
#undef BACKGROUND_ENABLED_FOCUSED
#undef BACKGROUND_SELECTED

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

$FieldInfo _TableEditorPainter_FieldInfo_[] = {
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(TableEditorPainter, BACKGROUND_DISABLED)},
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(TableEditorPainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_ENABLED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(TableEditorPainter, BACKGROUND_ENABLED_FOCUSED)},
	{"BACKGROUND_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(TableEditorPainter, BACKGROUND_SELECTED)},
	{"state", "I", nullptr, $PRIVATE, $field(TableEditorPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(TableEditorPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(TableEditorPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(TableEditorPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(TableEditorPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(TableEditorPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableEditorPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableEditorPainter, color2)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(TableEditorPainter, componentColors)},
	{}
};

$MethodInfo _TableEditorPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(TableEditorPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&TableEditorPainter::init$))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TableEditorPainter::*)()>(&TableEditorPainter::decodePath1))},
	{"decodeRect1", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(TableEditorPainter::*)()>(&TableEditorPainter::decodeRect1))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TableEditorPainter::*)($Graphics2D*)>(&TableEditorPainter::paintBackgroundEnabled))},
	{"paintBackgroundEnabledAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TableEditorPainter::*)($Graphics2D*)>(&TableEditorPainter::paintBackgroundEnabledAndFocused))},
	{}
};

$ClassInfo _TableEditorPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.TableEditorPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_TableEditorPainter_FieldInfo_,
	_TableEditorPainter_MethodInfo_
};

$Object* allocate$TableEditorPainter($Class* clazz) {
	return $of($alloc(TableEditorPainter));
}

void TableEditorPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusLightBackground"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color2, decodeColor("nimbusFocus"_s, 0.0f, 0.0f, 0.0f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void TableEditorPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case TableEditorPainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	case TableEditorPainter::BACKGROUND_ENABLED_FOCUSED:
		{
			paintBackgroundEnabledAndFocused(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* TableEditorPainter::getPaintContext() {
	return this->ctx;
}

void TableEditorPainter::paintBackgroundEnabled($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
}

void TableEditorPainter::paintBackgroundEnabledAndFocused($Graphics2D* g) {
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color2);
	g->fill(this->path);
}

$Rectangle2D* TableEditorPainter::decodeRect1() {
	double var$0 = (double)decodeX(0.0f);
	double var$1 = (double)decodeY(0.0f);
	float var$3 = decodeX(3.0f);
	double var$2 = (double)(var$3 - decodeX(0.0f));
	float var$4 = decodeY(3.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.0f));
	return this->rect;
}

$Path2D* TableEditorPainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(0.0f));
	double var$1 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$1, decodeY(3.0f));
	double var$2 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$2, decodeY(3.0f));
	double var$3 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$3, decodeY(0.0f));
	double var$4 = (double)decodeX(0.24000001f);
	$nc(this->path)->lineTo(var$4, decodeY(0.0f));
	double var$5 = (double)decodeX(0.24000001f);
	$nc(this->path)->lineTo(var$5, decodeY(0.24000001f));
	double var$6 = (double)decodeX(2.7600007f);
	$nc(this->path)->lineTo(var$6, decodeY(0.24000001f));
	double var$7 = (double)decodeX(2.7600007f);
	$nc(this->path)->lineTo(var$7, decodeY(2.7599998f));
	double var$8 = (double)decodeX(0.24000001f);
	$nc(this->path)->lineTo(var$8, decodeY(2.7599998f));
	double var$9 = (double)decodeX(0.24000001f);
	$nc(this->path)->lineTo(var$9, decodeY(0.0f));
	double var$10 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$10, decodeY(0.0f));
	$nc(this->path)->closePath();
	return this->path;
}

TableEditorPainter::TableEditorPainter() {
}

$Class* TableEditorPainter::load$($String* name, bool initialize) {
	$loadClass(TableEditorPainter, name, initialize, &_TableEditorPainter_ClassInfo_, allocate$TableEditorPainter);
	return class$;
}

$Class* TableEditorPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax