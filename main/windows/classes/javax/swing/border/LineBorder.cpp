#include <javax/swing/border/LineBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Insets.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/awt/geom/Path2D.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/awt/geom/RoundRectangle2D$Float.h>
#include <java/awt/geom/RoundRectangle2D.h>
#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

#undef WIND_EVEN_ODD

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Insets = ::java::awt::Insets;
using $Shape = ::java::awt::Shape;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $RoundRectangle2D = ::java::awt::geom::RoundRectangle2D;
using $RoundRectangle2D$Float = ::java::awt::geom::RoundRectangle2D$Float;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;

namespace javax {
	namespace swing {
		namespace border {

$Attribute LineBorder_Attribute_var$1[] = {
	{'s', "lineColor"},
	{'s', "thickness"},
	{'s', "roundedCorners"},
	{'-'}
};

$NamedAttribute LineBorder_Attribute_var$0[] = {
	{"value", '[', LineBorder_Attribute_var$1},
	{}
};

$CompoundAttribute _LineBorder_MethodAnnotations_init$2[] = {
	{"Ljava/beans/ConstructorProperties;", LineBorder_Attribute_var$0},
	{}
};

$FieldInfo _LineBorder_FieldInfo_[] = {
	{"blackLine", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC, $staticField(LineBorder, blackLine)},
	{"grayLine", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC, $staticField(LineBorder, grayLine)},
	{"thickness", "I", nullptr, $PROTECTED, $field(LineBorder, thickness)},
	{"lineColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(LineBorder, lineColor)},
	{"roundedCorners", "Z", nullptr, $PROTECTED, $field(LineBorder, roundedCorners)},
	{}
};

$MethodInfo _LineBorder_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(LineBorder::*)($Color*)>(&LineBorder::init$))},
	{"<init>", "(Ljava/awt/Color;I)V", nullptr, $PUBLIC, $method(static_cast<void(LineBorder::*)($Color*,int32_t)>(&LineBorder::init$))},
	{"<init>", "(Ljava/awt/Color;IZ)V", nullptr, $PUBLIC, $method(static_cast<void(LineBorder::*)($Color*,int32_t,bool)>(&LineBorder::init$)), nullptr, nullptr, _LineBorder_MethodAnnotations_init$2},
	{"createBlackLineBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&LineBorder::createBlackLineBorder))},
	{"createGrayLineBorder", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Border*(*)()>(&LineBorder::createGrayLineBorder))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getLineColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getRoundedCorners", "()Z", nullptr, $PUBLIC},
	{"getThickness", "()I", nullptr, $PUBLIC},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LineBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.border.LineBorder",
	"javax.swing.border.AbstractBorder",
	nullptr,
	_LineBorder_FieldInfo_,
	_LineBorder_MethodInfo_
};

$Object* allocate$LineBorder($Class* clazz) {
	return $of($alloc(LineBorder));
}

$Border* LineBorder::blackLine = nullptr;
$Border* LineBorder::grayLine = nullptr;

$Border* LineBorder::createBlackLineBorder() {
	$init(LineBorder);
	if (LineBorder::blackLine == nullptr) {
		$init($Color);
		$assignStatic(LineBorder::blackLine, $new(LineBorder, $Color::black, 1));
	}
	return LineBorder::blackLine;
}

$Border* LineBorder::createGrayLineBorder() {
	$init(LineBorder);
	if (LineBorder::grayLine == nullptr) {
		$init($Color);
		$assignStatic(LineBorder::grayLine, $new(LineBorder, $Color::gray, 1));
	}
	return LineBorder::grayLine;
}

void LineBorder::init$($Color* color) {
	LineBorder::init$(color, 1, false);
}

void LineBorder::init$($Color* color, int32_t thickness) {
	LineBorder::init$(color, thickness, false);
}

void LineBorder::init$($Color* color, int32_t thickness, bool roundedCorners) {
	$AbstractBorder::init$();
	$set(this, lineColor, color);
	this->thickness = thickness;
	this->roundedCorners = roundedCorners;
}

void LineBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	if ((this->thickness > 0) && ($instanceOf($Graphics2D, g))) {
		$var($Graphics2D, g2d, $cast($Graphics2D, g));
		$var($Color, oldColor, $nc(g2d)->getColor());
		g2d->setColor(this->lineColor);
		$var($Shape, outer, nullptr);
		$var($Shape, inner, nullptr);
		int32_t offs = this->thickness;
		int32_t size = offs + offs;
		if (this->roundedCorners) {
			float arc = 0.2f * offs;
			$assign(outer, $new($RoundRectangle2D$Float, (float)x, (float)y, (float)width, (float)height, (float)offs, (float)offs));
			$assign(inner, $new($RoundRectangle2D$Float, (float)(x + offs), (float)(y + offs), (float)(width - size), (float)(height - size), arc, arc));
		} else {
			$assign(outer, $new($Rectangle2D$Float, (float)x, (float)y, (float)width, (float)height));
			$assign(inner, $new($Rectangle2D$Float, (float)(x + offs), (float)(y + offs), (float)(width - size), (float)(height - size)));
		}
		$var($Path2D, path, $new($Path2D$Float, $Path2D::WIND_EVEN_ODD));
		path->append(outer, false);
		path->append(inner, false);
		g2d->fill(path);
		g2d->setColor(oldColor);
	}
}

$Insets* LineBorder::getBorderInsets($Component* c, $Insets* insets) {
	$nc(insets)->set(this->thickness, this->thickness, this->thickness, this->thickness);
	return insets;
}

$Color* LineBorder::getLineColor() {
	return this->lineColor;
}

int32_t LineBorder::getThickness() {
	return this->thickness;
}

bool LineBorder::getRoundedCorners() {
	return this->roundedCorners;
}

bool LineBorder::isBorderOpaque() {
	return !this->roundedCorners;
}

LineBorder::LineBorder() {
}

$Class* LineBorder::load$($String* name, bool initialize) {
	$loadClass(LineBorder, name, initialize, &_LineBorder_ClassInfo_, allocate$LineBorder);
	return class$;
}

$Class* LineBorder::class$ = nullptr;

		} // border
	} // swing
} // javax