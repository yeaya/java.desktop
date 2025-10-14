#include <javax/swing/text/html/StyleSheet$BoxPainter.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/BevelBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/CSS.h>
#include <javax/swing/text/html/CSSBorder.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLEditorKit$HTMLFactory$BodyBlockView.h>
#include <javax/swing/text/html/StyleSheet$1.h>
#include <javax/swing/text/html/StyleSheet$BackgroundImagePainter.h>
#include <javax/swing/text/html/StyleSheet$BoxPainter$HorizontalMargin.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

#undef BORDER_COLOR
#undef BORDER_TOP_WIDTH
#undef BOTTOM
#undef COLOR
#undef DIR
#undef LEFT
#undef MARGIN_BOTTOM
#undef MARGIN_LEFT
#undef MARGIN_LEFT_LTR
#undef MARGIN_LEFT_RTL
#undef MARGIN_RIGHT
#undef MARGIN_RIGHT_LTR
#undef MARGIN_RIGHT_RTL
#undef MARGIN_TOP
#undef MENU
#undef MIN_VALUE
#undef OL
#undef PADDING_BOTTOM
#undef PADDING_LEFT
#undef PADDING_RIGHT
#undef PADDING_TOP
#undef RIGHT
#undef TOP
#undef UL

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageIcon = ::javax::swing::ImageIcon;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $BevelBorder = ::javax::swing::border::BevelBorder;
using $Border = ::javax::swing::border::Border;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Element = ::javax::swing::text::Element;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;
using $CSS = ::javax::swing::text::html::CSS;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;
using $CSSBorder = ::javax::swing::text::html::CSSBorder;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLEditorKit$HTMLFactory$BodyBlockView = ::javax::swing::text::html::HTMLEditorKit$HTMLFactory$BodyBlockView;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;
using $StyleSheet$1 = ::javax::swing::text::html::StyleSheet$1;
using $StyleSheet$BackgroundImagePainter = ::javax::swing::text::html::StyleSheet$BackgroundImagePainter;
using $StyleSheet$BoxPainter$HorizontalMargin = ::javax::swing::text::html::StyleSheet$BoxPainter$HorizontalMargin;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _StyleSheet$BoxPainter_FieldInfo_[] = {
	{"topMargin", "F", nullptr, 0, $field(StyleSheet$BoxPainter, topMargin)},
	{"bottomMargin", "F", nullptr, 0, $field(StyleSheet$BoxPainter, bottomMargin)},
	{"leftMargin", "F", nullptr, 0, $field(StyleSheet$BoxPainter, leftMargin)},
	{"rightMargin", "F", nullptr, 0, $field(StyleSheet$BoxPainter, rightMargin)},
	{"marginFlags", "S", nullptr, 0, $field(StyleSheet$BoxPainter, marginFlags)},
	{"border", "Ljavax/swing/border/Border;", nullptr, 0, $field(StyleSheet$BoxPainter, border)},
	{"binsets", "Ljava/awt/Insets;", nullptr, 0, $field(StyleSheet$BoxPainter, binsets)},
	{"css", "Ljavax/swing/text/html/CSS;", nullptr, 0, $field(StyleSheet$BoxPainter, css)},
	{"ss", "Ljavax/swing/text/html/StyleSheet;", nullptr, 0, $field(StyleSheet$BoxPainter, ss)},
	{"bg", "Ljava/awt/Color;", nullptr, 0, $field(StyleSheet$BoxPainter, bg)},
	{"bgPainter", "Ljavax/swing/text/html/StyleSheet$BackgroundImagePainter;", nullptr, 0, $field(StyleSheet$BoxPainter, bgPainter)},
	{}
};

$MethodInfo _StyleSheet$BoxPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/AttributeSet;Ljavax/swing/text/html/CSS;Ljavax/swing/text/html/StyleSheet;)V", nullptr, 0, $method(static_cast<void(StyleSheet$BoxPainter::*)($AttributeSet*,$CSS*,$StyleSheet*)>(&StyleSheet$BoxPainter::init$))},
	{"getBorder", "(Ljavax/swing/text/AttributeSet;)Ljavax/swing/border/Border;", nullptr, 0},
	{"getBorderColor", "(Ljavax/swing/text/AttributeSet;)Ljava/awt/Color;", nullptr, 0},
	{"getInset", "(ILjavax/swing/text/View;)F", nullptr, $PUBLIC},
	{"getLength", "(Ljavax/swing/text/html/CSS$Attribute;Ljavax/swing/text/AttributeSet;)F", nullptr, 0},
	{"getOrientationMargin", "(Ljavax/swing/text/html/StyleSheet$BoxPainter$HorizontalMargin;FLjavax/swing/text/AttributeSet;Z)F", nullptr, 0},
	{"isLeftToRight", "(Ljavax/swing/text/View;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($View*)>(&StyleSheet$BoxPainter::isLeftToRight))},
	{"isOrientationAware", "(Ljavax/swing/text/View;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($View*)>(&StyleSheet$BoxPainter::isOrientationAware))},
	{"paint", "(Ljava/awt/Graphics;FFFFLjavax/swing/text/View;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StyleSheet$BoxPainter_InnerClassesInfo_[] = {
	{"javax.swing.text.html.StyleSheet$BoxPainter", "javax.swing.text.html.StyleSheet", "BoxPainter", $PUBLIC | $STATIC},
	{"javax.swing.text.html.StyleSheet$BoxPainter$HorizontalMargin", "javax.swing.text.html.StyleSheet$BoxPainter", "HorizontalMargin", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _StyleSheet$BoxPainter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.StyleSheet$BoxPainter",
	"java.lang.Object",
	"java.io.Serializable",
	_StyleSheet$BoxPainter_FieldInfo_,
	_StyleSheet$BoxPainter_MethodInfo_,
	nullptr,
	nullptr,
	_StyleSheet$BoxPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.StyleSheet"
};

$Object* allocate$StyleSheet$BoxPainter($Class* clazz) {
	return $of($alloc(StyleSheet$BoxPainter));
}

void StyleSheet$BoxPainter::init$($AttributeSet* a, $CSS* css, $StyleSheet* ss) {
	$set(this, ss, ss);
	$set(this, css, css);
	$set(this, border, getBorder(a));
	$set(this, binsets, $nc(this->border)->getBorderInsets(nullptr));
	$init($CSS$Attribute);
	this->topMargin = getLength($CSS$Attribute::MARGIN_TOP, a);
	this->bottomMargin = getLength($CSS$Attribute::MARGIN_BOTTOM, a);
	this->leftMargin = getLength($CSS$Attribute::MARGIN_LEFT, a);
	this->rightMargin = getLength($CSS$Attribute::MARGIN_RIGHT, a);
	$set(this, bg, $nc(ss)->getBackground(a));
	if (ss->getBackgroundImage(a) != nullptr) {
		$set(this, bgPainter, $new($StyleSheet$BackgroundImagePainter, a, css, ss));
	}
}

$Border* StyleSheet$BoxPainter::getBorder($AttributeSet* a) {
	return $new($CSSBorder, a);
}

$Color* StyleSheet$BoxPainter::getBorderColor($AttributeSet* a) {
	$init($CSS$Attribute);
	$var($Color, color, $nc(this->css)->getColor(a, $CSS$Attribute::BORDER_COLOR));
	if (color == nullptr) {
		$assign(color, $nc(this->css)->getColor(a, $CSS$Attribute::COLOR));
		if (color == nullptr) {
			$init($Color);
			return $Color::black;
		}
	}
	return color;
}

float StyleSheet$BoxPainter::getInset(int32_t side, $View* v) {
	$var($AttributeSet, a, $nc(v)->getAttributes());
	float inset = (float)0;
	switch (side) {
	case $View::LEFT:
		{
			$init($StyleSheet$BoxPainter$HorizontalMargin);
			inset += getOrientationMargin($StyleSheet$BoxPainter$HorizontalMargin::LEFT, this->leftMargin, a, isLeftToRight(v));
			inset += $nc(this->binsets)->left;
			$init($CSS$Attribute);
			inset += getLength($CSS$Attribute::PADDING_LEFT, a);
			break;
		}
	case $View::RIGHT:
		{
			$init($StyleSheet$BoxPainter$HorizontalMargin);
			inset += getOrientationMargin($StyleSheet$BoxPainter$HorizontalMargin::RIGHT, this->rightMargin, a, isLeftToRight(v));
			inset += $nc(this->binsets)->right;
			$init($CSS$Attribute);
			inset += getLength($CSS$Attribute::PADDING_RIGHT, a);
			break;
		}
	case $View::TOP:
		{
			inset += this->topMargin;
			inset += $nc(this->binsets)->top;
			$init($CSS$Attribute);
			inset += getLength($CSS$Attribute::PADDING_TOP, a);
			break;
		}
	case $View::BOTTOM:
		{
			inset += this->bottomMargin;
			inset += $nc(this->binsets)->bottom;
			$init($CSS$Attribute);
			inset += getLength($CSS$Attribute::PADDING_BOTTOM, a);
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Invalid side: "_s, $$str(side)}));
		}
	}
	return inset;
}

void StyleSheet$BoxPainter::paint($Graphics* g, float x, float y, float w, float h, $View* v) {
	float dx = (float)0;
	float dy = (float)0;
	float dw = (float)0;
	float dh = (float)0;
	$var($AttributeSet, a, $nc(v)->getAttributes());
	bool isLeftToRight = StyleSheet$BoxPainter::isLeftToRight(v);
	$init($StyleSheet$BoxPainter$HorizontalMargin);
	float localLeftMargin = getOrientationMargin($StyleSheet$BoxPainter$HorizontalMargin::LEFT, this->leftMargin, a, isLeftToRight);
	float localRightMargin = getOrientationMargin($StyleSheet$BoxPainter$HorizontalMargin::RIGHT, this->rightMargin, a, isLeftToRight);
	if (!($instanceOf($HTMLEditorKit$HTMLFactory$BodyBlockView, v))) {
		dx = localLeftMargin;
		dy = this->topMargin;
		dw = -(localLeftMargin + localRightMargin);
		dh = -(this->topMargin + this->bottomMargin);
	}
	if (this->bg != nullptr) {
		$nc(g)->setColor(this->bg);
		g->fillRect($cast(int32_t, (x + dx)), $cast(int32_t, (y + dy)), $cast(int32_t, (w + dw)), $cast(int32_t, (h + dh)));
	}
	if (this->bgPainter != nullptr) {
		$nc(this->bgPainter)->paint(g, x + dx, y + dy, w + dw, h + dh, v);
	}
	x += localLeftMargin;
	y += this->topMargin;
	w -= localLeftMargin + localRightMargin;
	h -= this->topMargin + this->bottomMargin;
	if ($instanceOf($BevelBorder, this->border)) {
		$init($CSS$Attribute);
		int32_t bw = $cast(int32_t, getLength($CSS$Attribute::BORDER_TOP_WIDTH, a));
		for (int32_t i = bw - 1; i >= 0; --i) {
			$nc(this->border)->paintBorder(nullptr, g, $cast(int32_t, x) + i, $cast(int32_t, y) + i, $cast(int32_t, w) - 2 * i, $cast(int32_t, h) - 2 * i);
		}
	} else {
		$nc(this->border)->paintBorder(nullptr, g, $cast(int32_t, x), $cast(int32_t, y), $cast(int32_t, w), $cast(int32_t, h));
	}
}

float StyleSheet$BoxPainter::getLength($CSS$Attribute* key, $AttributeSet* a) {
	return $nc(this->css)->getLength(a, key, this->ss);
}

bool StyleSheet$BoxPainter::isLeftToRight($View* v) {
	$init(StyleSheet$BoxPainter);
	bool ret = true;
	if (isOrientationAware(v)) {
		$var($Container, container, nullptr);
		if (v != nullptr && ($assign(container, v->getContainer())) != nullptr) {
			ret = $nc($($nc(container)->getComponentOrientation()))->isLeftToRight();
		}
	}
	return ret;
}

bool StyleSheet$BoxPainter::isOrientationAware($View* v) {
	$init(StyleSheet$BoxPainter);
	bool ret = false;
	$var($AttributeSet, attr, nullptr);
	$var($Object, obj, nullptr);
	bool var$1 = v != nullptr && ($assign(attr, $nc($(v->getElement()))->getAttributes())) != nullptr;
	$init($StyleConstants);
	bool var$0 = var$1 && $instanceOf($HTML$Tag, $assign(obj, $nc(attr)->getAttribute($StyleConstants::NameAttribute)));
	$init($HTML$Tag);
	if (var$0 && ($equals(obj, $HTML$Tag::DIR) || $equals(obj, $HTML$Tag::MENU) || $equals(obj, $HTML$Tag::UL) || $equals(obj, $HTML$Tag::OL))) {
		ret = true;
	}
	return ret;
}

float StyleSheet$BoxPainter::getOrientationMargin($StyleSheet$BoxPainter$HorizontalMargin* side, float cssMargin, $AttributeSet* a, bool isLeftToRight) {
	float margin = cssMargin;
	float orientationMargin = cssMargin;
	$var($Object, cssMarginValue, nullptr);
	$init($StyleSheet$1);
	switch ($nc($StyleSheet$1::$SwitchMap$javax$swing$text$html$StyleSheet$BoxPainter$HorizontalMargin)->get($nc((side))->ordinal())) {
	case 1:
		{
			{
				$init($CSS$Attribute);
				orientationMargin = (isLeftToRight) ? getLength($CSS$Attribute::MARGIN_RIGHT_LTR, a) : getLength($CSS$Attribute::MARGIN_RIGHT_RTL, a);
				$assign(cssMarginValue, $nc(a)->getAttribute($CSS$Attribute::MARGIN_RIGHT));
			}
			break;
		}
	case 2:
		{
			{
				$init($CSS$Attribute);
				orientationMargin = (isLeftToRight) ? getLength($CSS$Attribute::MARGIN_LEFT_LTR, a) : getLength($CSS$Attribute::MARGIN_LEFT_RTL, a);
				$assign(cssMarginValue, $nc(a)->getAttribute($CSS$Attribute::MARGIN_LEFT));
			}
			break;
		}
	}
	if (cssMarginValue == nullptr && orientationMargin != $Integer::MIN_VALUE) {
		margin = orientationMargin;
	}
	return margin;
}

StyleSheet$BoxPainter::StyleSheet$BoxPainter() {
}

$Class* StyleSheet$BoxPainter::load$($String* name, bool initialize) {
	$loadClass(StyleSheet$BoxPainter, name, initialize, &_StyleSheet$BoxPainter_ClassInfo_, allocate$StyleSheet$BoxPainter);
	return class$;
}

$Class* StyleSheet$BoxPainter::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax