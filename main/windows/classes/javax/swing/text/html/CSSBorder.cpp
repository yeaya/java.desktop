#include <javax/swing/text/html/CSSBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Insets.h>
#include <java/awt/Polygon.h>
#include <java/awt/Shape.h>
#include <java/lang/Math.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/CSS$BorderStyle.h>
#include <javax/swing/text/html/CSS$BorderWidthValue.h>
#include <javax/swing/text/html/CSS$ColorValue.h>
#include <javax/swing/text/html/CSS$CssValue.h>
#include <javax/swing/text/html/CSS$LengthValue.h>
#include <javax/swing/text/html/CSS$Value.h>
#include <javax/swing/text/html/CSSBorder$BorderPainter.h>
#include <javax/swing/text/html/CSSBorder$DottedDashedPainter.h>
#include <javax/swing/text/html/CSSBorder$DoublePainter.h>
#include <javax/swing/text/html/CSSBorder$GrooveRidgePainter.h>
#include <javax/swing/text/html/CSSBorder$InsetOutsetPainter.h>
#include <javax/swing/text/html/CSSBorder$NullPainter.h>
#include <javax/swing/text/html/CSSBorder$ShadowLightPainter.h>
#include <javax/swing/text/html/CSSBorder$SolidPainter.h>
#include <javax/swing/text/html/CSSBorder$StrokePainter.h>
#include <jcpp.h>

#undef ATTRIBUTES
#undef BORDER_BOTTOM_COLOR
#undef BORDER_BOTTOM_STYLE
#undef BORDER_BOTTOM_WIDTH
#undef BORDER_COLOR
#undef BORDER_LEFT_COLOR
#undef BORDER_LEFT_STYLE
#undef BORDER_LEFT_WIDTH
#undef BORDER_RIGHT_COLOR
#undef BORDER_RIGHT_STYLE
#undef BORDER_RIGHT_WIDTH
#undef BORDER_STYLE
#undef BORDER_TOP_COLOR
#undef BORDER_TOP_STYLE
#undef BORDER_TOP_WIDTH
#undef BORDER_WIDTH
#undef BOTTOM
#undef COLOR
#undef DASHED
#undef DEFAULTS
#undef DOTTED
#undef DOUBLE
#undef GROOVE
#undef HIDDEN
#undef INSET
#undef LEFT
#undef NONE
#undef OUTSET
#undef PARSERS
#undef PI
#undef RIDGE
#undef RIGHT
#undef SOLID
#undef STYLE
#undef TOP
#undef WIDTH

using $CSS$AttributeArray = $Array<::javax::swing::text::html::CSS$Attribute>;
using $CSS$CssValueArray = $Array<::javax::swing::text::html::CSS$CssValue>;
using $intArray2 = $Array<int32_t, 2>;
using $CSS$AttributeArray2 = $Array<::javax::swing::text::html::CSS$Attribute, 2>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Insets = ::java::awt::Insets;
using $Polygon = ::java::awt::Polygon;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;
using $CSS$BorderStyle = ::javax::swing::text::html::CSS$BorderStyle;
using $CSS$BorderWidthValue = ::javax::swing::text::html::CSS$BorderWidthValue;
using $CSS$ColorValue = ::javax::swing::text::html::CSS$ColorValue;
using $CSS$CssValue = ::javax::swing::text::html::CSS$CssValue;
using $CSS$LengthValue = ::javax::swing::text::html::CSS$LengthValue;
using $CSS$Value = ::javax::swing::text::html::CSS$Value;
using $CSSBorder$BorderPainter = ::javax::swing::text::html::CSSBorder$BorderPainter;
using $CSSBorder$DottedDashedPainter = ::javax::swing::text::html::CSSBorder$DottedDashedPainter;
using $CSSBorder$DoublePainter = ::javax::swing::text::html::CSSBorder$DoublePainter;
using $CSSBorder$GrooveRidgePainter = ::javax::swing::text::html::CSSBorder$GrooveRidgePainter;
using $CSSBorder$InsetOutsetPainter = ::javax::swing::text::html::CSSBorder$InsetOutsetPainter;
using $CSSBorder$NullPainter = ::javax::swing::text::html::CSSBorder$NullPainter;
using $CSSBorder$ShadowLightPainter = ::javax::swing::text::html::CSSBorder$ShadowLightPainter;
using $CSSBorder$SolidPainter = ::javax::swing::text::html::CSSBorder$SolidPainter;
using $CSSBorder$StrokePainter = ::javax::swing::text::html::CSSBorder$StrokePainter;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _CSSBorder_FieldInfo_[] = {
	{"COLOR", "I", nullptr, $STATIC | $FINAL, $constField(CSSBorder, COLOR)},
	{"STYLE", "I", nullptr, $STATIC | $FINAL, $constField(CSSBorder, STYLE)},
	{"WIDTH", "I", nullptr, $STATIC | $FINAL, $constField(CSSBorder, WIDTH)},
	{"TOP", "I", nullptr, $STATIC | $FINAL, $constField(CSSBorder, TOP)},
	{"RIGHT", "I", nullptr, $STATIC | $FINAL, $constField(CSSBorder, RIGHT)},
	{"BOTTOM", "I", nullptr, $STATIC | $FINAL, $constField(CSSBorder, BOTTOM)},
	{"LEFT", "I", nullptr, $STATIC | $FINAL, $constField(CSSBorder, LEFT)},
	{"ATTRIBUTES", "[[Ljavax/swing/text/html/CSS$Attribute;", nullptr, $STATIC | $FINAL, $staticField(CSSBorder, ATTRIBUTES)},
	{"PARSERS", "[Ljavax/swing/text/html/CSS$CssValue;", nullptr, $STATIC | $FINAL, $staticField(CSSBorder, PARSERS)},
	{"DEFAULTS", "[Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(CSSBorder, DEFAULTS)},
	{"attrs", "Ljavax/swing/text/AttributeSet;", nullptr, $FINAL, $field(CSSBorder, attrs)},
	{"borderPainters", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/swing/text/html/CSS$Value;Ljavax/swing/text/html/CSSBorder$BorderPainter;>;", $STATIC, $staticField(CSSBorder, borderPainters)},
	{}
};

$MethodInfo _CSSBorder_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/AttributeSet;)V", nullptr, 0, $method(static_cast<void(CSSBorder::*)($AttributeSet*)>(&CSSBorder::init$))},
	{"getAdjustedColor", "(Ljava/awt/Color;D)Ljava/awt/Color;", nullptr, $STATIC, $method(static_cast<$Color*(*)($Color*,double)>(&CSSBorder::getAdjustedColor))},
	{"getBorderColor", "(I)Ljava/awt/Color;", nullptr, $PRIVATE, $method(static_cast<$Color*(CSSBorder::*)(int32_t)>(&CSSBorder::getBorderColor))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getBorderPainter", "(I)Ljavax/swing/text/html/CSSBorder$BorderPainter;", nullptr, $PRIVATE, $method(static_cast<$CSSBorder$BorderPainter*(CSSBorder::*)(int32_t)>(&CSSBorder::getBorderPainter))},
	{"getBorderShape", "(I)Ljava/awt/Polygon;", nullptr, $PRIVATE, $method(static_cast<$Polygon*(CSSBorder::*)(int32_t)>(&CSSBorder::getBorderShape))},
	{"getBorderStyle", "(I)Ljavax/swing/text/html/CSS$Value;", nullptr, $PRIVATE, $method(static_cast<$CSS$Value*(CSSBorder::*)(int32_t)>(&CSSBorder::getBorderStyle))},
	{"getBorderWidth", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(CSSBorder::*)(int32_t)>(&CSSBorder::getBorderWidth))},
	{"getWidths", "()[I", nullptr, $PRIVATE, $method(static_cast<$ints*(CSSBorder::*)()>(&CSSBorder::getWidths))},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"registerBorderPainter", "(Ljavax/swing/text/html/CSS$Value;Ljavax/swing/text/html/CSSBorder$BorderPainter;)V", nullptr, $STATIC, $method(static_cast<void(*)($CSS$Value*,$CSSBorder$BorderPainter*)>(&CSSBorder::registerBorderPainter))},
	{}
};

$InnerClassInfo _CSSBorder_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSSBorder$InsetOutsetPainter", "javax.swing.text.html.CSSBorder", "InsetOutsetPainter", $STATIC},
	{"javax.swing.text.html.CSSBorder$GrooveRidgePainter", "javax.swing.text.html.CSSBorder", "GrooveRidgePainter", $STATIC},
	{"javax.swing.text.html.CSSBorder$ShadowLightPainter", "javax.swing.text.html.CSSBorder", "ShadowLightPainter", $STATIC | $ABSTRACT},
	{"javax.swing.text.html.CSSBorder$DottedDashedPainter", "javax.swing.text.html.CSSBorder", "DottedDashedPainter", $STATIC},
	{"javax.swing.text.html.CSSBorder$DoublePainter", "javax.swing.text.html.CSSBorder", "DoublePainter", $STATIC},
	{"javax.swing.text.html.CSSBorder$StrokePainter", "javax.swing.text.html.CSSBorder", "StrokePainter", $STATIC | $ABSTRACT},
	{"javax.swing.text.html.CSSBorder$SolidPainter", "javax.swing.text.html.CSSBorder", "SolidPainter", $STATIC},
	{"javax.swing.text.html.CSSBorder$NullPainter", "javax.swing.text.html.CSSBorder", "NullPainter", $STATIC},
	{"javax.swing.text.html.CSSBorder$BorderPainter", "javax.swing.text.html.CSSBorder", "BorderPainter", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CSSBorder_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.CSSBorder",
	"javax.swing.border.AbstractBorder",
	nullptr,
	_CSSBorder_FieldInfo_,
	_CSSBorder_MethodInfo_,
	nullptr,
	nullptr,
	_CSSBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSSBorder$InsetOutsetPainter,javax.swing.text.html.CSSBorder$GrooveRidgePainter,javax.swing.text.html.CSSBorder$ShadowLightPainter,javax.swing.text.html.CSSBorder$DottedDashedPainter,javax.swing.text.html.CSSBorder$DoublePainter,javax.swing.text.html.CSSBorder$StrokePainter,javax.swing.text.html.CSSBorder$SolidPainter,javax.swing.text.html.CSSBorder$NullPainter,javax.swing.text.html.CSSBorder$BorderPainter"
};

$Object* allocate$CSSBorder($Class* clazz) {
	return $of($alloc(CSSBorder));
}

$CSS$AttributeArray2* CSSBorder::ATTRIBUTES = nullptr;
$CSS$CssValueArray* CSSBorder::PARSERS = nullptr;
$ObjectArray* CSSBorder::DEFAULTS = nullptr;
$Map* CSSBorder::borderPainters = nullptr;

void CSSBorder::init$($AttributeSet* attrs) {
	$AbstractBorder::init$();
	$set(this, attrs, attrs);
}

$Color* CSSBorder::getBorderColor(int32_t side) {
	$useLocalCurrentObjectStackCache();
	$var($Object, o, $nc(this->attrs)->getAttribute($nc($nc(CSSBorder::ATTRIBUTES)->get(CSSBorder::COLOR))->get(side)));
	$var($CSS$ColorValue, cv, nullptr);
	if ($instanceOf($CSS$ColorValue, o)) {
		$assign(cv, $cast($CSS$ColorValue, o));
	} else {
		$init($CSS$Attribute);
		$assign(cv, $cast($CSS$ColorValue, $nc(this->attrs)->getAttribute($CSS$Attribute::COLOR)));
		if (cv == nullptr) {
			$assign(cv, $cast($CSS$ColorValue, $nc($nc(CSSBorder::PARSERS)->get(CSSBorder::COLOR))->parseCssValue($($nc($CSS$Attribute::COLOR)->getDefaultValue()))));
		}
	}
	return $nc(cv)->getValue();
}

int32_t CSSBorder::getBorderWidth(int32_t side) {
	$useLocalCurrentObjectStackCache();
	int32_t width = 0;
	$var($CSS$BorderStyle, bs, $cast($CSS$BorderStyle, $nc(this->attrs)->getAttribute($nc($nc(CSSBorder::ATTRIBUTES)->get(CSSBorder::STYLE))->get(side))));
	$init($CSS$Value);
	if ((bs != nullptr) && (bs->getValue() != $CSS$Value::NONE)) {
		$var($CSS$LengthValue, bw, $cast($CSS$LengthValue, $nc(this->attrs)->getAttribute($nc($nc(CSSBorder::ATTRIBUTES)->get(CSSBorder::WIDTH))->get(side))));
		if (bw == nullptr) {
			$assign(bw, $cast($CSS$LengthValue, $nc(CSSBorder::DEFAULTS)->get(CSSBorder::WIDTH)));
		}
		width = $cast(int32_t, $nc(bw)->getValue(true));
	}
	return width;
}

$ints* CSSBorder::getWidths() {
	$var($ints, widths, $new($ints, 4));
	for (int32_t i = 0; i < widths->length; ++i) {
		widths->set(i, getBorderWidth(i));
	}
	return widths;
}

$CSS$Value* CSSBorder::getBorderStyle(int32_t side) {
	$var($CSS$BorderStyle, style, $cast($CSS$BorderStyle, $nc(this->attrs)->getAttribute($nc($nc(CSSBorder::ATTRIBUTES)->get(CSSBorder::STYLE))->get(side))));
	if (style == nullptr) {
		$assign(style, $cast($CSS$BorderStyle, $nc(CSSBorder::DEFAULTS)->get(CSSBorder::STYLE)));
	}
	return $nc(style)->getValue();
}

$Polygon* CSSBorder::getBorderShape(int32_t side) {
	$useLocalCurrentObjectStackCache();
	$var($Polygon, shape, nullptr);
	$var($ints, widths, getWidths());
	if ($nc(widths)->get(side) != 0) {
		$assign(shape, $new($Polygon, $$new($ints, 4), $$new($ints, 4), 0));
		shape->addPoint(0, 0);
		shape->addPoint(-widths->get((side + 3) % 4), -widths->get(side));
		shape->addPoint(widths->get((side + 1) % 4), -widths->get(side));
		shape->addPoint(0, 0);
	}
	return shape;
}

$CSSBorder$BorderPainter* CSSBorder::getBorderPainter(int32_t side) {
	$var($CSS$Value, style, getBorderStyle(side));
	return $cast($CSSBorder$BorderPainter, $nc(CSSBorder::borderPainters)->get(style));
}

$Color* CSSBorder::getAdjustedColor($Color* c, double factor) {
	$init(CSSBorder);
	double f = 1 - $Math::min($Math::abs(factor), (double)1);
	double inc = (factor > 0 ? 255 * (1 - f) : (double)0);
	int32_t var$0 = $cast(int32_t, ($nc(c)->getRed() * f + inc));
	int32_t var$1 = $cast(int32_t, (c->getGreen() * f + inc));
	return $new($Color, var$0, var$1, $cast(int32_t, (c->getBlue() * f + inc)));
}

$Insets* CSSBorder::getBorderInsets($Component* c, $Insets* insets) {
	$var($ints, widths, getWidths());
	$nc(insets)->set($nc(widths)->get(CSSBorder::TOP), widths->get(CSSBorder::LEFT), widths->get(CSSBorder::BOTTOM), widths->get(CSSBorder::RIGHT));
	return insets;
}

void CSSBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($Graphics2D, g))) {
		return;
	}
	$var($Graphics2D, g2, $cast($Graphics2D, $nc(g)->create()));
	$var($ints, widths, getWidths());
	int32_t intX = x + $nc(widths)->get(CSSBorder::LEFT);
	int32_t intY = y + widths->get(CSSBorder::TOP);
	int32_t intWidth = width - (widths->get(CSSBorder::RIGHT) + widths->get(CSSBorder::LEFT));
	int32_t intHeight = height - (widths->get(CSSBorder::TOP) + widths->get(CSSBorder::BOTTOM));
	$var($intArray2, intCorners, $new($intArray2, {
		$$new($ints, {
			intX,
			intY
		}),
		$$new($ints, {
			intX + intWidth,
			intY
		}),
		$$new($ints, {
			intX + intWidth,
			intY + intHeight
		}),
		$$new($ints, {
			intX,
			intY + intHeight
		})
	}));
	for (int32_t i = 0; i < 4; ++i) {
		$var($CSS$Value, style, getBorderStyle(i));
		$var($Polygon, shape, getBorderShape(i));
		$init($CSS$Value);
		if ((style != $CSS$Value::NONE) && (shape != nullptr)) {
			int32_t sideLength = (i % 2 == 0 ? intWidth : intHeight);
			(*$nc(shape->xpoints))[2] += sideLength;
			(*$nc(shape->xpoints))[3] += sideLength;
			$var($Color, color, getBorderColor(i));
			$var($CSSBorder$BorderPainter, painter, getBorderPainter(i));
			$init($Math);
			double angle = i * $Math::PI / 2;
			$nc(g2)->setClip($(g->getClip()));
			g2->translate($nc(intCorners->get(i))->get(0), $nc(intCorners->get(i))->get(1));
			g2->rotate(angle);
			g2->clip(shape);
			$nc(painter)->paint(shape, g2, color, i);
			g2->rotate(-angle);
			g2->translate(-$nc(intCorners->get(i))->get(0), -$nc(intCorners->get(i))->get(1));
		}
	}
	$nc(g2)->dispose();
}

void CSSBorder::registerBorderPainter($CSS$Value* style, $CSSBorder$BorderPainter* painter) {
	$init(CSSBorder);
	$nc(CSSBorder::borderPainters)->put(style, painter);
}

void clinit$CSSBorder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$init($CSS$Attribute);
	$assignStatic(CSSBorder::ATTRIBUTES, $new($CSS$AttributeArray2, {
		$$new($CSS$AttributeArray, {
			$CSS$Attribute::BORDER_TOP_COLOR,
			$CSS$Attribute::BORDER_RIGHT_COLOR,
			$CSS$Attribute::BORDER_BOTTOM_COLOR,
			$CSS$Attribute::BORDER_LEFT_COLOR
		}),
		$$new($CSS$AttributeArray, {
			$CSS$Attribute::BORDER_TOP_STYLE,
			$CSS$Attribute::BORDER_RIGHT_STYLE,
			$CSS$Attribute::BORDER_BOTTOM_STYLE,
			$CSS$Attribute::BORDER_LEFT_STYLE
		}),
		$$new($CSS$AttributeArray, {
			$CSS$Attribute::BORDER_TOP_WIDTH,
			$CSS$Attribute::BORDER_RIGHT_WIDTH,
			$CSS$Attribute::BORDER_BOTTOM_WIDTH,
			$CSS$Attribute::BORDER_LEFT_WIDTH
		})
	}));
	$assignStatic(CSSBorder::PARSERS, $new($CSS$CssValueArray, {
		static_cast<$CSS$CssValue*>($$new($CSS$ColorValue)),
		static_cast<$CSS$CssValue*>($$new($CSS$BorderStyle)),
		static_cast<$CSS$CssValue*>($$new($CSS$BorderWidthValue, nullptr, 0))
	}));
	$assignStatic(CSSBorder::DEFAULTS, $new($ObjectArray, {
		$of($CSS$Attribute::BORDER_COLOR),
		$($nc($nc(CSSBorder::PARSERS)->get(1))->parseCssValue($($nc($CSS$Attribute::BORDER_STYLE)->getDefaultValue()))),
		$($nc($nc(CSSBorder::PARSERS)->get(2))->parseCssValue($($nc($CSS$Attribute::BORDER_WIDTH)->getDefaultValue())))
	}));
	$assignStatic(CSSBorder::borderPainters, $new($HashMap));
	{
		$init($CSS$Value);
		CSSBorder::registerBorderPainter($CSS$Value::NONE, $$new($CSSBorder$NullPainter));
		CSSBorder::registerBorderPainter($CSS$Value::HIDDEN, $$new($CSSBorder$NullPainter));
		CSSBorder::registerBorderPainter($CSS$Value::SOLID, $$new($CSSBorder$SolidPainter));
		CSSBorder::registerBorderPainter($CSS$Value::DOUBLE, $$new($CSSBorder$DoublePainter));
		CSSBorder::registerBorderPainter($CSS$Value::DOTTED, $$new($CSSBorder$DottedDashedPainter, 1));
		CSSBorder::registerBorderPainter($CSS$Value::DASHED, $$new($CSSBorder$DottedDashedPainter, 3));
		CSSBorder::registerBorderPainter($CSS$Value::GROOVE, $$new($CSSBorder$GrooveRidgePainter, $CSS$Value::GROOVE));
		CSSBorder::registerBorderPainter($CSS$Value::RIDGE, $$new($CSSBorder$GrooveRidgePainter, $CSS$Value::RIDGE));
		CSSBorder::registerBorderPainter($CSS$Value::INSET, $$new($CSSBorder$InsetOutsetPainter, $CSS$Value::INSET));
		CSSBorder::registerBorderPainter($CSS$Value::OUTSET, $$new($CSSBorder$InsetOutsetPainter, $CSS$Value::OUTSET));
	}
}

CSSBorder::CSSBorder() {
}

$Class* CSSBorder::load$($String* name, bool initialize) {
	$loadClass(CSSBorder, name, initialize, &_CSSBorder_ClassInfo_, clinit$CSSBorder, allocate$CSSBorder);
	return class$;
}

$Class* CSSBorder::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax