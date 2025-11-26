#include <javax/swing/plaf/nimbus/MenuPainter.h>

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

#undef ARROWICON_DISABLED
#undef ARROWICON_ENABLED
#undef ARROWICON_ENABLED_SELECTED
#undef BACKGROUND_DISABLED
#undef BACKGROUND_ENABLED
#undef BACKGROUND_ENABLED_SELECTED

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

$FieldInfo _MenuPainter_FieldInfo_[] = {
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(MenuPainter, BACKGROUND_DISABLED)},
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(MenuPainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_ENABLED_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(MenuPainter, BACKGROUND_ENABLED_SELECTED)},
	{"ARROWICON_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(MenuPainter, ARROWICON_DISABLED)},
	{"ARROWICON_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(MenuPainter, ARROWICON_ENABLED)},
	{"ARROWICON_ENABLED_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(MenuPainter, ARROWICON_ENABLED_SELECTED)},
	{"state", "I", nullptr, $PRIVATE, $field(MenuPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(MenuPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(MenuPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(MenuPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(MenuPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(MenuPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MenuPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MenuPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MenuPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MenuPainter, color4)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(MenuPainter, componentColors)},
	{}
};

$MethodInfo _MenuPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(MenuPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&MenuPainter::init$))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(MenuPainter::*)()>(&MenuPainter::decodePath1))},
	{"decodePath2", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(MenuPainter::*)()>(&MenuPainter::decodePath2))},
	{"decodeRect1", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(MenuPainter::*)()>(&MenuPainter::decodeRect1))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundEnabledAndSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(MenuPainter::*)($Graphics2D*)>(&MenuPainter::paintBackgroundEnabledAndSelected))},
	{"paintarrowIconDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(MenuPainter::*)($Graphics2D*)>(&MenuPainter::paintarrowIconDisabled))},
	{"paintarrowIconEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(MenuPainter::*)($Graphics2D*)>(&MenuPainter::paintarrowIconEnabled))},
	{"paintarrowIconEnabledAndSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(MenuPainter::*)($Graphics2D*)>(&MenuPainter::paintarrowIconEnabledAndSelected))},
	{}
};

$ClassInfo _MenuPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.MenuPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_MenuPainter_FieldInfo_,
	_MenuPainter_MethodInfo_
};

$Object* allocate$MenuPainter($Class* clazz) {
	return $of($alloc(MenuPainter));
}

void MenuPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusSelection"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color2, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.08983666f, -0.17647058f, 0));
	$set(this, color3, decodeColor("nimbusBlueGrey"_s, 0.055555582f, -0.09663743f, -0.4627451f, 0));
	$set(this, color4, $new($Color, 255, 255, 255, 255));
	this->state = state;
	$set(this, ctx, ctx);
}

void MenuPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case MenuPainter::BACKGROUND_ENABLED_SELECTED:
		{
			paintBackgroundEnabledAndSelected(g);
			break;
		}
	case MenuPainter::ARROWICON_DISABLED:
		{
			paintarrowIconDisabled(g);
			break;
		}
	case MenuPainter::ARROWICON_ENABLED:
		{
			paintarrowIconEnabled(g);
			break;
		}
	case MenuPainter::ARROWICON_ENABLED_SELECTED:
		{
			paintarrowIconEnabledAndSelected(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* MenuPainter::getPaintContext() {
	return this->ctx;
}

void MenuPainter::paintBackgroundEnabledAndSelected($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
}

void MenuPainter::paintarrowIconDisabled($Graphics2D* g) {
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color2);
	g->fill(this->path);
}

void MenuPainter::paintarrowIconEnabled($Graphics2D* g) {
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color3);
	g->fill(this->path);
}

void MenuPainter::paintarrowIconEnabledAndSelected($Graphics2D* g) {
	$set(this, path, decodePath2());
	$nc(g)->setPaint(this->color4);
	g->fill(this->path);
}

$Rectangle2D* MenuPainter::decodeRect1() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(2.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.0f));
	return this->rect;
}

$Path2D* MenuPainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(0.2f));
	double var$1 = (double)decodeX(2.7512195f);
	$nc(this->path)->lineTo(var$1, decodeY(2.102439f));
	double var$2 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$2, decodeY(3.0f));
	double var$3 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$3, decodeY(0.2f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* MenuPainter::decodePath2() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(1.0f));
	double var$1 = (double)decodeX(1.9529617f);
	$nc(this->path)->lineTo(var$1, decodeY(1.5625f));
	double var$2 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$2, decodeY(3.0f));
	double var$3 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$3, decodeY(1.0f));
	$nc(this->path)->closePath();
	return this->path;
}

MenuPainter::MenuPainter() {
}

$Class* MenuPainter::load$($String* name, bool initialize) {
	$loadClass(MenuPainter, name, initialize, &_MenuPainter_ClassInfo_, allocate$MenuPainter);
	return class$;
}

$Class* MenuPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax