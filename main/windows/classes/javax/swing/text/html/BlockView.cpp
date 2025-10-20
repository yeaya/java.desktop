#include <javax/swing/text/html/BlockView.h>

#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SizeRequirements.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/CSS$LengthValue.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/StyleSheet$BoxPainter.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

#undef BOTTOM
#undef HEIGHT
#undef LEFT
#undef RIGHT
#undef TEXT_ALIGN
#undef TOP
#undef WIDTH
#undef X_AXIS
#undef Y_AXIS

using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SizeRequirements = ::javax::swing::SizeRequirements;
using $SwingConstants = ::javax::swing::SwingConstants;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BoxView = ::javax::swing::text::BoxView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;
using $CSS$LengthValue = ::javax::swing::text::html::CSS$LengthValue;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;
using $StyleSheet$BoxPainter = ::javax::swing::text::html::StyleSheet$BoxPainter;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _BlockView_FieldInfo_[] = {
	{"attr", "Ljavax/swing/text/AttributeSet;", nullptr, $PRIVATE, $field(BlockView, attr)},
	{"painter", "Ljavax/swing/text/html/StyleSheet$BoxPainter;", nullptr, $PRIVATE, $field(BlockView, painter)},
	{"cssWidth", "Ljavax/swing/text/html/CSS$LengthValue;", nullptr, $PRIVATE, $field(BlockView, cssWidth)},
	{"cssHeight", "Ljavax/swing/text/html/CSS$LengthValue;", nullptr, $PRIVATE, $field(BlockView, cssHeight)},
	{}
};

$MethodInfo _BlockView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;I)V", nullptr, $PUBLIC, $method(static_cast<void(BlockView::*)($Element*,int32_t)>(&BlockView::init$))},
	{"calculateMajorAxisRequirements", "(ILjavax/swing/SizeRequirements;)Ljavax/swing/SizeRequirements;", nullptr, $PROTECTED},
	{"calculateMinorAxisRequirements", "(ILjavax/swing/SizeRequirements;)Ljavax/swing/SizeRequirements;", nullptr, $PROTECTED},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"constrainSize", "(ILjavax/swing/SizeRequirements;Ljavax/swing/SizeRequirements;)V", nullptr, $PRIVATE, $method(static_cast<void(BlockView::*)(int32_t,$SizeRequirements*,$SizeRequirements*)>(&BlockView::constrainSize))},
	{"getAlignment", "(I)F", nullptr, $PUBLIC},
	{"getAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getMaximumSpan", "(I)F", nullptr, $PUBLIC},
	{"getMinimumSpan", "(I)F", nullptr, $PUBLIC},
	{"getPreferredSpan", "(I)F", nullptr, $PUBLIC},
	{"getResizeWeight", "(I)I", nullptr, $PUBLIC},
	{"getStyleSheet", "()Ljavax/swing/text/html/StyleSheet;", nullptr, $PROTECTED},
	{"isPercentage", "(ILjavax/swing/text/AttributeSet;)Z", nullptr, 0},
	{"layoutMinorAxis", "(II[I[I)V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"setParent", "(Ljavax/swing/text/View;)V", nullptr, $PUBLIC},
	{"setPropertiesFromAttributes", "()V", nullptr, $PROTECTED},
	{"spanSetFromAttributes", "(ILjavax/swing/SizeRequirements;Ljavax/swing/text/html/CSS$LengthValue;Ljavax/swing/text/html/CSS$LengthValue;)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t,$SizeRequirements*,$CSS$LengthValue*,$CSS$LengthValue*)>(&BlockView::spanSetFromAttributes))},
	{}
};

$ClassInfo _BlockView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.BlockView",
	"javax.swing.text.BoxView",
	nullptr,
	_BlockView_FieldInfo_,
	_BlockView_MethodInfo_
};

$Object* allocate$BlockView($Class* clazz) {
	return $of($alloc(BlockView));
}

void BlockView::init$($Element* elem, int32_t axis) {
	$BoxView::init$(elem, axis);
}

void BlockView::setParent($View* parent) {
	$BoxView::setParent(parent);
	if (parent != nullptr) {
		setPropertiesFromAttributes();
	}
}

$SizeRequirements* BlockView::calculateMajorAxisRequirements(int32_t axis, $SizeRequirements* r$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($SizeRequirements, r, r$renamed);
	if (r == nullptr) {
		$assign(r, $new($SizeRequirements));
	}
	if (!spanSetFromAttributes(axis, r, this->cssWidth, this->cssHeight)) {
		$assign(r, $BoxView::calculateMajorAxisRequirements(axis, r));
	} else {
		$var($SizeRequirements, parentR, $BoxView::calculateMajorAxisRequirements(axis, nullptr));
		int32_t var$0 = 0;
		if (axis == $View::X_AXIS) {
			int16_t var$1 = getLeftInset();
			var$0 = var$1 + getRightInset();
		} else {
			int16_t var$2 = getTopInset();
			var$0 = var$2 + getBottomInset();
		}
		int32_t margin = var$0;
		$nc(r)->minimum -= margin;
		r->preferred -= margin;
		r->maximum -= margin;
		constrainSize(axis, r, parentR);
	}
	return r;
}

$SizeRequirements* BlockView::calculateMinorAxisRequirements(int32_t axis, $SizeRequirements* r$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($SizeRequirements, r, r$renamed);
	if (r == nullptr) {
		$assign(r, $new($SizeRequirements));
	}
	if (!spanSetFromAttributes(axis, r, this->cssWidth, this->cssHeight)) {
		$assign(r, $BoxView::calculateMinorAxisRequirements(axis, r));
	} else {
		$var($SizeRequirements, parentR, $BoxView::calculateMinorAxisRequirements(axis, nullptr));
		int32_t var$0 = 0;
		if (axis == $View::X_AXIS) {
			int16_t var$1 = getLeftInset();
			var$0 = var$1 + getRightInset();
		} else {
			int16_t var$2 = getTopInset();
			var$0 = var$2 + getBottomInset();
		}
		int32_t margin = var$0;
		$nc(r)->minimum -= margin;
		r->preferred -= margin;
		r->maximum -= margin;
		constrainSize(axis, r, parentR);
	}
	if (axis == $View::X_AXIS) {
		$init($CSS$Attribute);
		$var($Object, o, $nc($(getAttributes()))->getAttribute($CSS$Attribute::TEXT_ALIGN));
		if (o != nullptr) {
			$var($String, align, $of(o)->toString());
			if ($nc(align)->equals("center"_s)) {
				$nc(r)->alignment = 0.5f;
			} else if (align->equals("right"_s)) {
				$nc(r)->alignment = 1.0f;
			} else {
				$nc(r)->alignment = 0.0f;
			}
		}
	}
	return r;
}

bool BlockView::isPercentage(int32_t axis, $AttributeSet* a) {
	if (axis == $View::X_AXIS) {
		if (this->cssWidth != nullptr) {
			return $nc(this->cssWidth)->isPercentage();
		}
	} else if (this->cssHeight != nullptr) {
		return $nc(this->cssHeight)->isPercentage();
	}
	return false;
}

bool BlockView::spanSetFromAttributes(int32_t axis, $SizeRequirements* r, $CSS$LengthValue* cssWidth, $CSS$LengthValue* cssHeight) {
	$init(BlockView);
	if (axis == $View::X_AXIS) {
		if ((cssWidth != nullptr) && (!cssWidth->isPercentage())) {
			$nc(r)->minimum = (r->preferred = (r->maximum = $cast(int32_t, cssWidth->getValue())));
			return true;
		}
	} else if ((cssHeight != nullptr) && (!cssHeight->isPercentage())) {
		$nc(r)->minimum = (r->preferred = (r->maximum = $cast(int32_t, cssHeight->getValue())));
		return true;
	}
	return false;
}

void BlockView::layoutMinorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) {
	$useLocalCurrentObjectStackCache();
	int32_t n = getViewCount();
	$init($CSS$Attribute);
	$var($Object, key, (axis == $View::X_AXIS) ? $of($CSS$Attribute::WIDTH) : $of($CSS$Attribute::HEIGHT));
	for (int32_t i = 0; i < n; ++i) {
		$var($View, v, getView(i));
		int32_t min = $cast(int32_t, $nc(v)->getMinimumSpan(axis));
		int32_t max = 0;
		$var($AttributeSet, a, v->getAttributes());
		$var($CSS$LengthValue, lv, $cast($CSS$LengthValue, $nc(a)->getAttribute(key)));
		if ((lv != nullptr) && lv->isPercentage()) {
			min = $Math::max($cast(int32_t, lv->getValue((float)targetSpan)), min);
			max = min;
		} else {
			max = $cast(int32_t, v->getMaximumSpan(axis));
		}
		if (max < targetSpan) {
			float align = v->getAlignment(axis);
			$nc(offsets)->set(i, $cast(int32_t, ((targetSpan - max) * align)));
			$nc(spans)->set(i, max);
		} else {
			$nc(offsets)->set(i, 0);
			$nc(spans)->set(i, $Math::max(min, targetSpan));
		}
	}
}

void BlockView::paint($Graphics* g, $Shape* allocation) {
	$var($Rectangle, a, $cast($Rectangle, allocation));
	$nc(this->painter)->paint(g, (float)$nc(a)->x, (float)a->y, (float)a->width, (float)a->height, this);
	$BoxView::paint(g, a);
}

$AttributeSet* BlockView::getAttributes() {
	if (this->attr == nullptr) {
		$var($StyleSheet, sheet, getStyleSheet());
		$set(this, attr, $nc(sheet)->getViewAttributes(this));
	}
	return this->attr;
}

int32_t BlockView::getResizeWeight(int32_t axis) {
	$useLocalCurrentObjectStackCache();
	switch (axis) {
	case $View::X_AXIS:
		{
			return 1;
		}
	case $View::Y_AXIS:
		{
			return 0;
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Invalid axis: "_s, $$str(axis)}));
		}
	}
}

float BlockView::getAlignment(int32_t axis) {
	$useLocalCurrentObjectStackCache();
	{
		float span = 0;
		$var($View, v, nullptr)
		float above = 0;
		float a = 0;
		switch (axis) {
		case $View::X_AXIS:
			{
				return (float)0;
			}
		case $View::Y_AXIS:
			{
				if (getViewCount() == 0) {
					return (float)0;
				}
				span = getPreferredSpan($View::Y_AXIS);
				$assign(v, getView(0));
				above = $nc(v)->getPreferredSpan($View::Y_AXIS);
				a = (($cast(int32_t, span)) != 0) ? (above * v->getAlignment($View::Y_AXIS)) / span : (float)0;
				return a;
			}
		default:
			{
				$throwNew($IllegalArgumentException, $$str({"Invalid axis: "_s, $$str(axis)}));
			}
		}
	}
}

void BlockView::changedUpdate($DocumentEvent* changes, $Shape* a, $ViewFactory* f) {
	$BoxView::changedUpdate(changes, a, f);
	int32_t pos = $nc(changes)->getOffset();
	bool var$0 = pos <= getStartOffset();
	if (var$0) {
		int32_t var$1 = (pos + changes->getLength());
		var$0 = var$1 >= getEndOffset();
	}
	if (var$0) {
		setPropertiesFromAttributes();
	}
}

float BlockView::getPreferredSpan(int32_t axis) {
	return $BoxView::getPreferredSpan(axis);
}

float BlockView::getMinimumSpan(int32_t axis) {
	return $BoxView::getMinimumSpan(axis);
}

float BlockView::getMaximumSpan(int32_t axis) {
	return $BoxView::getMaximumSpan(axis);
}

void BlockView::setPropertiesFromAttributes() {
	$var($StyleSheet, sheet, getStyleSheet());
	$set(this, attr, $nc(sheet)->getViewAttributes(this));
	$set(this, painter, sheet->getBoxPainter(this->attr));
	if (this->attr != nullptr) {
		int16_t var$0 = $cast(int16_t, $nc(this->painter)->getInset($SwingConstants::TOP, this));
		int16_t var$1 = $cast(int16_t, $nc(this->painter)->getInset($SwingConstants::LEFT, this));
		int16_t var$2 = $cast(int16_t, $nc(this->painter)->getInset($SwingConstants::BOTTOM, this));
		setInsets(var$0, var$1, var$2, $cast(int16_t, $nc(this->painter)->getInset($SwingConstants::RIGHT, this)));
	}
	$init($CSS$Attribute);
	$set(this, cssWidth, $cast($CSS$LengthValue, $nc(this->attr)->getAttribute($CSS$Attribute::WIDTH)));
	$set(this, cssHeight, $cast($CSS$LengthValue, $nc(this->attr)->getAttribute($CSS$Attribute::HEIGHT)));
}

$StyleSheet* BlockView::getStyleSheet() {
	$var($HTMLDocument, doc, $cast($HTMLDocument, getDocument()));
	return $nc(doc)->getStyleSheet();
}

void BlockView::constrainSize(int32_t axis, $SizeRequirements* want, $SizeRequirements* min) {
	if ($nc(min)->minimum > $nc(want)->minimum) {
		want->minimum = (want->preferred = min->minimum);
		want->maximum = $Math::max(want->maximum, min->maximum);
	}
}

BlockView::BlockView() {
}

$Class* BlockView::load$($String* name, bool initialize) {
	$loadClass(BlockView, name, initialize, &_BlockView_ClassInfo_, allocate$BlockView);
	return class$;
}

$Class* BlockView::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax