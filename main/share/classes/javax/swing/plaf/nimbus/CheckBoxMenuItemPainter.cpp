#include <javax/swing/plaf/nimbus/CheckBoxMenuItemPainter.h>

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
#undef BACKGROUND_MOUSEOVER
#undef BACKGROUND_SELECTED_MOUSEOVER
#undef CHECKICON_DISABLED_SELECTED
#undef CHECKICON_ENABLED_SELECTED
#undef CHECKICON_SELECTED_MOUSEOVER

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

$FieldInfo _CheckBoxMenuItemPainter_FieldInfo_[] = {
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(CheckBoxMenuItemPainter, BACKGROUND_DISABLED)},
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(CheckBoxMenuItemPainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(CheckBoxMenuItemPainter, BACKGROUND_MOUSEOVER)},
	{"BACKGROUND_SELECTED_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(CheckBoxMenuItemPainter, BACKGROUND_SELECTED_MOUSEOVER)},
	{"CHECKICON_DISABLED_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(CheckBoxMenuItemPainter, CHECKICON_DISABLED_SELECTED)},
	{"CHECKICON_ENABLED_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(CheckBoxMenuItemPainter, CHECKICON_ENABLED_SELECTED)},
	{"CHECKICON_SELECTED_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(CheckBoxMenuItemPainter, CHECKICON_SELECTED_MOUSEOVER)},
	{"state", "I", nullptr, $PRIVATE, $field(CheckBoxMenuItemPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(CheckBoxMenuItemPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(CheckBoxMenuItemPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(CheckBoxMenuItemPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(CheckBoxMenuItemPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(CheckBoxMenuItemPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxMenuItemPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxMenuItemPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxMenuItemPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxMenuItemPainter, color4)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(CheckBoxMenuItemPainter, componentColors)},
	{}
};

$MethodInfo _CheckBoxMenuItemPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(CheckBoxMenuItemPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&CheckBoxMenuItemPainter::init$))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(CheckBoxMenuItemPainter::*)()>(&CheckBoxMenuItemPainter::decodePath1))},
	{"decodeRect1", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(CheckBoxMenuItemPainter::*)()>(&CheckBoxMenuItemPainter::decodeRect1))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(CheckBoxMenuItemPainter::*)($Graphics2D*)>(&CheckBoxMenuItemPainter::paintBackgroundMouseOver))},
	{"paintBackgroundSelectedAndMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(CheckBoxMenuItemPainter::*)($Graphics2D*)>(&CheckBoxMenuItemPainter::paintBackgroundSelectedAndMouseOver))},
	{"paintcheckIconDisabledAndSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(CheckBoxMenuItemPainter::*)($Graphics2D*)>(&CheckBoxMenuItemPainter::paintcheckIconDisabledAndSelected))},
	{"paintcheckIconEnabledAndSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(CheckBoxMenuItemPainter::*)($Graphics2D*)>(&CheckBoxMenuItemPainter::paintcheckIconEnabledAndSelected))},
	{"paintcheckIconSelectedAndMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(CheckBoxMenuItemPainter::*)($Graphics2D*)>(&CheckBoxMenuItemPainter::paintcheckIconSelectedAndMouseOver))},
	{}
};

$ClassInfo _CheckBoxMenuItemPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.CheckBoxMenuItemPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_CheckBoxMenuItemPainter_FieldInfo_,
	_CheckBoxMenuItemPainter_MethodInfo_
};

$Object* allocate$CheckBoxMenuItemPainter($Class* clazz) {
	return $of($alloc(CheckBoxMenuItemPainter));
}

void CheckBoxMenuItemPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusSelection"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color2, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.08983666f, -0.17647058f, 0));
	$set(this, color3, decodeColor("nimbusBlueGrey"_s, 0.055555582f, -0.096827686f, -0.45882353f, 0));
	$set(this, color4, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void CheckBoxMenuItemPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case CheckBoxMenuItemPainter::BACKGROUND_MOUSEOVER:
		{
			paintBackgroundMouseOver(g);
			break;
		}
	case CheckBoxMenuItemPainter::BACKGROUND_SELECTED_MOUSEOVER:
		{
			paintBackgroundSelectedAndMouseOver(g);
			break;
		}
	case CheckBoxMenuItemPainter::CHECKICON_DISABLED_SELECTED:
		{
			paintcheckIconDisabledAndSelected(g);
			break;
		}
	case CheckBoxMenuItemPainter::CHECKICON_ENABLED_SELECTED:
		{
			paintcheckIconEnabledAndSelected(g);
			break;
		}
	case CheckBoxMenuItemPainter::CHECKICON_SELECTED_MOUSEOVER:
		{
			paintcheckIconSelectedAndMouseOver(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* CheckBoxMenuItemPainter::getPaintContext() {
	return this->ctx;
}

void CheckBoxMenuItemPainter::paintBackgroundMouseOver($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
}

void CheckBoxMenuItemPainter::paintBackgroundSelectedAndMouseOver($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
}

void CheckBoxMenuItemPainter::paintcheckIconDisabledAndSelected($Graphics2D* g) {
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color2);
	g->fill(this->path);
}

void CheckBoxMenuItemPainter::paintcheckIconEnabledAndSelected($Graphics2D* g) {
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color3);
	g->fill(this->path);
}

void CheckBoxMenuItemPainter::paintcheckIconSelectedAndMouseOver($Graphics2D* g) {
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color4);
	g->fill(this->path);
}

$Rectangle2D* CheckBoxMenuItemPainter::decodeRect1() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(2.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.0f));
	return this->rect;
}

$Path2D* CheckBoxMenuItemPainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(1.5f));
	double var$1 = (double)decodeX(0.4292683f);
	$nc(this->path)->lineTo(var$1, decodeY(1.5f));
	double var$2 = (double)decodeX(0.7121951f);
	$nc(this->path)->lineTo(var$2, decodeY(2.4780488f));
	double var$3 = (double)decodeX(2.5926828f);
	$nc(this->path)->lineTo(var$3, decodeY(0.0f));
	double var$4 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$4, decodeY(0.0f));
	double var$5 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$5, decodeY(0.2f));
	double var$6 = (double)decodeX(2.8317075f);
	$nc(this->path)->lineTo(var$6, decodeY(0.39512196f));
	double var$7 = (double)decodeX(0.8f);
	$nc(this->path)->lineTo(var$7, decodeY(3.0f));
	double var$8 = (double)decodeX(0.5731707f);
	$nc(this->path)->lineTo(var$8, decodeY(3.0f));
	double var$9 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$9, decodeY(1.5f));
	$nc(this->path)->closePath();
	return this->path;
}

CheckBoxMenuItemPainter::CheckBoxMenuItemPainter() {
}

$Class* CheckBoxMenuItemPainter::load$($String* name, bool initialize) {
	$loadClass(CheckBoxMenuItemPainter, name, initialize, &_CheckBoxMenuItemPainter_ClassInfo_, allocate$CheckBoxMenuItemPainter);
	return class$;
}

$Class* CheckBoxMenuItemPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax