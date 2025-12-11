#include <javax/swing/plaf/nimbus/TreeCellPainter.h>

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

#undef BACKGROUND_ENABLED
#undef BACKGROUND_ENABLED_FOCUSED
#undef BACKGROUND_ENABLED_SELECTED
#undef BACKGROUND_SELECTED_FOCUSED

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

$FieldInfo _TreeCellPainter_FieldInfo_[] = {
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(TreeCellPainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_ENABLED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(TreeCellPainter, BACKGROUND_ENABLED_FOCUSED)},
	{"BACKGROUND_ENABLED_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(TreeCellPainter, BACKGROUND_ENABLED_SELECTED)},
	{"BACKGROUND_SELECTED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(TreeCellPainter, BACKGROUND_SELECTED_FOCUSED)},
	{"state", "I", nullptr, $PRIVATE, $field(TreeCellPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(TreeCellPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(TreeCellPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(TreeCellPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(TreeCellPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(TreeCellPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreeCellPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreeCellPainter, color2)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(TreeCellPainter, componentColors)},
	{}
};

$MethodInfo _TreeCellPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(TreeCellPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&TreeCellPainter::init$))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TreeCellPainter::*)()>(&TreeCellPainter::decodePath1))},
	{"decodeRect1", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(TreeCellPainter::*)()>(&TreeCellPainter::decodeRect1))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundEnabledAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TreeCellPainter::*)($Graphics2D*)>(&TreeCellPainter::paintBackgroundEnabledAndFocused))},
	{"paintBackgroundEnabledAndSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TreeCellPainter::*)($Graphics2D*)>(&TreeCellPainter::paintBackgroundEnabledAndSelected))},
	{"paintBackgroundSelectedAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TreeCellPainter::*)($Graphics2D*)>(&TreeCellPainter::paintBackgroundSelectedAndFocused))},
	{}
};

$ClassInfo _TreeCellPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.TreeCellPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_TreeCellPainter_FieldInfo_,
	_TreeCellPainter_MethodInfo_
};

$Object* allocate$TreeCellPainter($Class* clazz) {
	return $of($alloc(TreeCellPainter));
}

void TreeCellPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusFocus"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color2, decodeColor("nimbusSelectionBackground"_s, 0.0f, 0.0f, 0.0f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void TreeCellPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case TreeCellPainter::BACKGROUND_ENABLED_FOCUSED:
		{
			paintBackgroundEnabledAndFocused(g);
			break;
		}
	case TreeCellPainter::BACKGROUND_ENABLED_SELECTED:
		{
			paintBackgroundEnabledAndSelected(g);
			break;
		}
	case TreeCellPainter::BACKGROUND_SELECTED_FOCUSED:
		{
			paintBackgroundSelectedAndFocused(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* TreeCellPainter::getPaintContext() {
	return this->ctx;
}

void TreeCellPainter::paintBackgroundEnabledAndFocused($Graphics2D* g) {
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->path);
}

void TreeCellPainter::paintBackgroundEnabledAndSelected($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color2);
	g->fill(this->rect);
}

void TreeCellPainter::paintBackgroundSelectedAndFocused($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color2);
	g->fill(this->rect);
	$set(this, path, decodePath1());
	g->setPaint(this->color1);
	g->fill(this->path);
}

$Path2D* TreeCellPainter::decodePath1() {
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

$Rectangle2D* TreeCellPainter::decodeRect1() {
	double var$0 = (double)decodeX(0.0f);
	double var$1 = (double)decodeY(0.0f);
	float var$3 = decodeX(3.0f);
	double var$2 = (double)(var$3 - decodeX(0.0f));
	float var$4 = decodeY(3.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.0f));
	return this->rect;
}

TreeCellPainter::TreeCellPainter() {
}

$Class* TreeCellPainter::load$($String* name, bool initialize) {
	$loadClass(TreeCellPainter, name, initialize, &_TreeCellPainter_ClassInfo_, allocate$TreeCellPainter);
	return class$;
}

$Class* TreeCellPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax