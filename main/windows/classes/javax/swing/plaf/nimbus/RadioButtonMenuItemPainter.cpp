#include <javax/swing/plaf/nimbus/RadioButtonMenuItemPainter.h>

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
#undef ICON_DISABLED
#undef ICON_ENABLED
#undef ICON_MOUSEOVER

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

$FieldInfo _RadioButtonMenuItemPainter_FieldInfo_[] = {
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(RadioButtonMenuItemPainter, BACKGROUND_DISABLED)},
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(RadioButtonMenuItemPainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(RadioButtonMenuItemPainter, BACKGROUND_MOUSEOVER)},
	{"BACKGROUND_SELECTED_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(RadioButtonMenuItemPainter, BACKGROUND_SELECTED_MOUSEOVER)},
	{"CHECKICON_DISABLED_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(RadioButtonMenuItemPainter, CHECKICON_DISABLED_SELECTED)},
	{"CHECKICON_ENABLED_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(RadioButtonMenuItemPainter, CHECKICON_ENABLED_SELECTED)},
	{"CHECKICON_SELECTED_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(RadioButtonMenuItemPainter, CHECKICON_SELECTED_MOUSEOVER)},
	{"ICON_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(RadioButtonMenuItemPainter, ICON_DISABLED)},
	{"ICON_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(RadioButtonMenuItemPainter, ICON_ENABLED)},
	{"ICON_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(RadioButtonMenuItemPainter, ICON_MOUSEOVER)},
	{"state", "I", nullptr, $PRIVATE, $field(RadioButtonMenuItemPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(RadioButtonMenuItemPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(RadioButtonMenuItemPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(RadioButtonMenuItemPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(RadioButtonMenuItemPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(RadioButtonMenuItemPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonMenuItemPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonMenuItemPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonMenuItemPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonMenuItemPainter, color4)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(RadioButtonMenuItemPainter, componentColors)},
	{}
};

$MethodInfo _RadioButtonMenuItemPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(RadioButtonMenuItemPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&RadioButtonMenuItemPainter::init$))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(RadioButtonMenuItemPainter::*)()>(&RadioButtonMenuItemPainter::decodePath1))},
	{"decodePath2", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(RadioButtonMenuItemPainter::*)()>(&RadioButtonMenuItemPainter::decodePath2))},
	{"decodeRect1", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(RadioButtonMenuItemPainter::*)()>(&RadioButtonMenuItemPainter::decodeRect1))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(RadioButtonMenuItemPainter::*)($Graphics2D*)>(&RadioButtonMenuItemPainter::paintBackgroundMouseOver))},
	{"paintBackgroundSelectedAndMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(RadioButtonMenuItemPainter::*)($Graphics2D*)>(&RadioButtonMenuItemPainter::paintBackgroundSelectedAndMouseOver))},
	{"paintcheckIconDisabledAndSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(RadioButtonMenuItemPainter::*)($Graphics2D*)>(&RadioButtonMenuItemPainter::paintcheckIconDisabledAndSelected))},
	{"paintcheckIconEnabledAndSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(RadioButtonMenuItemPainter::*)($Graphics2D*)>(&RadioButtonMenuItemPainter::paintcheckIconEnabledAndSelected))},
	{"paintcheckIconSelectedAndMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(RadioButtonMenuItemPainter::*)($Graphics2D*)>(&RadioButtonMenuItemPainter::paintcheckIconSelectedAndMouseOver))},
	{}
};

$ClassInfo _RadioButtonMenuItemPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.RadioButtonMenuItemPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_RadioButtonMenuItemPainter_FieldInfo_,
	_RadioButtonMenuItemPainter_MethodInfo_
};

$Object* allocate$RadioButtonMenuItemPainter($Class* clazz) {
	return $of($alloc(RadioButtonMenuItemPainter));
}

void RadioButtonMenuItemPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusSelection"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color2, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.08983666f, -0.17647058f, 0));
	$set(this, color3, decodeColor("nimbusBlueGrey"_s, 0.055555582f, -0.09663743f, -0.4627451f, 0));
	$set(this, color4, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void RadioButtonMenuItemPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case RadioButtonMenuItemPainter::BACKGROUND_MOUSEOVER:
		{
			paintBackgroundMouseOver(g);
			break;
		}
	case RadioButtonMenuItemPainter::BACKGROUND_SELECTED_MOUSEOVER:
		{
			paintBackgroundSelectedAndMouseOver(g);
			break;
		}
	case RadioButtonMenuItemPainter::CHECKICON_DISABLED_SELECTED:
		{
			paintcheckIconDisabledAndSelected(g);
			break;
		}
	case RadioButtonMenuItemPainter::CHECKICON_ENABLED_SELECTED:
		{
			paintcheckIconEnabledAndSelected(g);
			break;
		}
	case RadioButtonMenuItemPainter::CHECKICON_SELECTED_MOUSEOVER:
		{
			paintcheckIconSelectedAndMouseOver(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* RadioButtonMenuItemPainter::getPaintContext() {
	return this->ctx;
}

void RadioButtonMenuItemPainter::paintBackgroundMouseOver($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
}

void RadioButtonMenuItemPainter::paintBackgroundSelectedAndMouseOver($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
}

void RadioButtonMenuItemPainter::paintcheckIconDisabledAndSelected($Graphics2D* g) {
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color2);
	g->fill(this->path);
}

void RadioButtonMenuItemPainter::paintcheckIconEnabledAndSelected($Graphics2D* g) {
	$set(this, path, decodePath2());
	$nc(g)->setPaint(this->color3);
	g->fill(this->path);
}

void RadioButtonMenuItemPainter::paintcheckIconSelectedAndMouseOver($Graphics2D* g) {
	$set(this, path, decodePath2());
	$nc(g)->setPaint(this->color4);
	g->fill(this->path);
}

$Rectangle2D* RadioButtonMenuItemPainter::decodeRect1() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(2.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.0f));
	return this->rect;
}

$Path2D* RadioButtonMenuItemPainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(2.097561f));
	double var$1 = (double)decodeX(0.90975606f);
	$nc(this->path)->lineTo(var$1, decodeY(0.20243903f));
	double var$2 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$2, decodeY(2.102439f));
	double var$3 = (double)decodeX(0.90731704f);
	$nc(this->path)->lineTo(var$3, decodeY(3.0f));
	double var$4 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$4, decodeY(2.097561f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* RadioButtonMenuItemPainter::decodePath2() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0024390244f);
	$nc(this->path)->moveTo(var$0, decodeY(2.097561f));
	double var$1 = (double)decodeX(0.90975606f);
	$nc(this->path)->lineTo(var$1, decodeY(0.20243903f));
	double var$2 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$2, decodeY(2.102439f));
	double var$3 = (double)decodeX(0.90731704f);
	$nc(this->path)->lineTo(var$3, decodeY(3.0f));
	double var$4 = (double)decodeX(0.0024390244f);
	$nc(this->path)->lineTo(var$4, decodeY(2.097561f));
	$nc(this->path)->closePath();
	return this->path;
}

RadioButtonMenuItemPainter::RadioButtonMenuItemPainter() {
}

$Class* RadioButtonMenuItemPainter::load$($String* name, bool initialize) {
	$loadClass(RadioButtonMenuItemPainter, name, initialize, &_RadioButtonMenuItemPainter_ClassInfo_, allocate$RadioButtonMenuItemPainter);
	return class$;
}

$Class* RadioButtonMenuItemPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax