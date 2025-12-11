#include <javax/swing/border/StrokeBorder.h>

#include <java/awt/BasicStroke.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Insets.h>
#include <java/awt/Paint.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Shape.h>
#include <java/awt/Stroke.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Math.h>
#include <javax/swing/border/AbstractBorder.h>
#include <jcpp.h>

#undef KEY_ANTIALIASING
#undef VALUE_ANTIALIAS_ON

using $BasicStroke = ::java::awt::BasicStroke;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Insets = ::java::awt::Insets;
using $Paint = ::java::awt::Paint;
using $RenderingHints = ::java::awt::RenderingHints;
using $Shape = ::java::awt::Shape;
using $Stroke = ::java::awt::Stroke;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;

namespace javax {
	namespace swing {
		namespace border {

$Attribute StrokeBorder_Attribute_var$1[] = {
	{'s', "stroke"},
	{'s', "paint"},
	{'-'}
};

$NamedAttribute StrokeBorder_Attribute_var$0[] = {
	{"value", '[', StrokeBorder_Attribute_var$1},
	{}
};

$CompoundAttribute _StrokeBorder_MethodAnnotations_init$1[] = {
	{"Ljava/beans/ConstructorProperties;", StrokeBorder_Attribute_var$0},
	{}
};

$FieldInfo _StrokeBorder_FieldInfo_[] = {
	{"stroke", "Ljava/awt/BasicStroke;", nullptr, $PRIVATE | $FINAL, $field(StrokeBorder, stroke)},
	{"paint", "Ljava/awt/Paint;", nullptr, $PRIVATE | $FINAL, $field(StrokeBorder, paint)},
	{}
};

$MethodInfo _StrokeBorder_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/BasicStroke;)V", nullptr, $PUBLIC, $method(static_cast<void(StrokeBorder::*)($BasicStroke*)>(&StrokeBorder::init$))},
	{"<init>", "(Ljava/awt/BasicStroke;Ljava/awt/Paint;)V", nullptr, $PUBLIC, $method(static_cast<void(StrokeBorder::*)($BasicStroke*,$Paint*)>(&StrokeBorder::init$)), nullptr, nullptr, _StrokeBorder_MethodAnnotations_init$1},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getPaint", "()Ljava/awt/Paint;", nullptr, $PUBLIC},
	{"getStroke", "()Ljava/awt/BasicStroke;", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StrokeBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.border.StrokeBorder",
	"javax.swing.border.AbstractBorder",
	nullptr,
	_StrokeBorder_FieldInfo_,
	_StrokeBorder_MethodInfo_
};

$Object* allocate$StrokeBorder($Class* clazz) {
	return $of($alloc(StrokeBorder));
}

void StrokeBorder::init$($BasicStroke* stroke) {
	StrokeBorder::init$(stroke, nullptr);
}

void StrokeBorder::init$($BasicStroke* stroke, $Paint* paint) {
	$AbstractBorder::init$();
	if (stroke == nullptr) {
		$throwNew($NullPointerException, "border\'s stroke"_s);
	}
	$set(this, stroke, stroke);
	$set(this, paint, paint);
}

void StrokeBorder::paintBorder($Component* c, $Graphics* g$renamed, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, g, g$renamed);
	float size = $nc(this->stroke)->getLineWidth();
	if (size > 0.0f) {
		$assign(g, $nc(g)->create());
		if ($instanceOf($Graphics2D, g)) {
			$var($Graphics2D, g2d, $cast($Graphics2D, g));
			g2d->setStroke(this->stroke);
			g2d->setPaint(this->paint != nullptr ? this->paint : c == nullptr ? ($Paint*)nullptr : $(static_cast<$Paint*>($nc(c)->getForeground())));
			$init($RenderingHints);
			g2d->setRenderingHint($RenderingHints::KEY_ANTIALIASING, $RenderingHints::VALUE_ANTIALIAS_ON);
			g2d->draw($$new($Rectangle2D$Float, x + size / 2, y + size / 2, width - size, height - size));
		}
		g->dispose();
	}
}

$Insets* StrokeBorder::getBorderInsets($Component* c, $Insets* insets) {
	int32_t size = $cast(int32_t, $Math::ceil($nc(this->stroke)->getLineWidth()));
	$nc(insets)->set(size, size, size, size);
	return insets;
}

$BasicStroke* StrokeBorder::getStroke() {
	return this->stroke;
}

$Paint* StrokeBorder::getPaint() {
	return this->paint;
}

StrokeBorder::StrokeBorder() {
}

$Class* StrokeBorder::load$($String* name, bool initialize) {
	$loadClass(StrokeBorder, name, initialize, &_StrokeBorder_ClassInfo_, allocate$StrokeBorder);
	return class$;
}

$Class* StrokeBorder::class$ = nullptr;

		} // border
	} // swing
} // javax