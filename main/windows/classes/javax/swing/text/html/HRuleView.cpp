#include <javax/swing/text/html/HRuleView.h>

#include <java/awt/Color.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Math.h>
#include <java/lang/NumberFormatException.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/CSS$LengthValue.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

#undef ALIGN_CENTER
#undef ALIGN_LEFT
#undef ALIGN_RIGHT
#undef MARGIN_BOTTOM
#undef MARGIN_LEFT
#undef MARGIN_RIGHT
#undef MARGIN_TOP
#undef NOSHADE
#undef SIZE
#undef SPACE_ABOVE
#undef SPACE_BELOW
#undef WIDTH
#undef X_AXIS
#undef Y_AXIS

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;
using $CSS$LengthValue = ::javax::swing::text::html::CSS$LengthValue;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _HRuleView_FieldInfo_[] = {
	{"topMargin", "F", nullptr, $PRIVATE, $field(HRuleView, topMargin)},
	{"bottomMargin", "F", nullptr, $PRIVATE, $field(HRuleView, bottomMargin)},
	{"leftMargin", "F", nullptr, $PRIVATE, $field(HRuleView, leftMargin)},
	{"rightMargin", "F", nullptr, $PRIVATE, $field(HRuleView, rightMargin)},
	{"alignment", "I", nullptr, $PRIVATE, $field(HRuleView, alignment)},
	{"noshade", "Ljava/lang/String;", nullptr, $PRIVATE, $field(HRuleView, noshade)},
	{"size", "I", nullptr, $PRIVATE, $field(HRuleView, size)},
	{"widthValue", "Ljavax/swing/text/html/CSS$LengthValue;", nullptr, $PRIVATE, $field(HRuleView, widthValue)},
	{"SPACE_ABOVE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HRuleView, SPACE_ABOVE)},
	{"SPACE_BELOW", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HRuleView, SPACE_BELOW)},
	{"attr", "Ljavax/swing/text/AttributeSet;", nullptr, $PRIVATE, $field(HRuleView, attr)},
	{}
};

$MethodInfo _HRuleView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(HRuleView::*)($Element*)>(&HRuleView::init$))},
	{"breakView", "(IIFF)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"getAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getBreakWeight", "(IFF)I", nullptr, $PUBLIC},
	{"getLength", "(Ljavax/swing/text/html/CSS$Attribute;Ljavax/swing/text/AttributeSet;)F", nullptr, $PRIVATE, $method(static_cast<float(HRuleView::*)($CSS$Attribute*,$AttributeSet*)>(&HRuleView::getLength))},
	{"getPreferredSpan", "(I)F", nullptr, $PUBLIC},
	{"getResizeWeight", "(I)I", nullptr, $PUBLIC},
	{"modelToView", "(ILjava/awt/Shape;Ljavax/swing/text/Position$Bias;)Ljava/awt/Shape;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"setPropertiesFromAttributes", "()V", nullptr, $PROTECTED},
	{"viewToModel", "(FFLjava/awt/Shape;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HRuleView_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.HRuleView",
	"javax.swing.text.View",
	nullptr,
	_HRuleView_FieldInfo_,
	_HRuleView_MethodInfo_
};

$Object* allocate$HRuleView($Class* clazz) {
	return $of($alloc(HRuleView));
}

void HRuleView::init$($Element* elem) {
	$View::init$(elem);
	this->alignment = $StyleConstants::ALIGN_CENTER;
	$set(this, noshade, nullptr);
	this->size = 0;
	setPropertiesFromAttributes();
}

void HRuleView::setPropertiesFromAttributes() {
	$useLocalCurrentObjectStackCache();
	$var($StyleSheet, sheet, $nc(($cast($HTMLDocument, $(getDocument()))))->getStyleSheet());
	$var($AttributeSet, eAttr, $nc($(getElement()))->getAttributes());
	$set(this, attr, $nc(sheet)->getViewAttributes(this));
	this->alignment = $StyleConstants::ALIGN_CENTER;
	this->size = 0;
	$set(this, noshade, nullptr);
	$set(this, widthValue, nullptr);
	if (this->attr != nullptr) {
		$init($StyleConstants);
		if ($nc(this->attr)->getAttribute($StyleConstants::Alignment) != nullptr) {
			this->alignment = $StyleConstants::getAlignment(this->attr);
		}
		$init($HTML$Attribute);
		$set(this, noshade, $cast($String, $nc(eAttr)->getAttribute($HTML$Attribute::NOSHADE)));
		$var($Object, value, eAttr->getAttribute($HTML$Attribute::SIZE));
		if (value != nullptr && ($instanceOf($String, value))) {
			try {
				this->size = $Integer::parseInt($cast($String, value));
			} catch ($NumberFormatException& e) {
				this->size = 1;
			}
		}
		$init($CSS$Attribute);
		$assign(value, $nc(this->attr)->getAttribute($CSS$Attribute::WIDTH));
		if (value != nullptr && ($instanceOf($CSS$LengthValue, value))) {
			$set(this, widthValue, $cast($CSS$LengthValue, value));
		}
		this->topMargin = getLength($CSS$Attribute::MARGIN_TOP, this->attr);
		this->bottomMargin = getLength($CSS$Attribute::MARGIN_BOTTOM, this->attr);
		this->leftMargin = getLength($CSS$Attribute::MARGIN_LEFT, this->attr);
		this->rightMargin = getLength($CSS$Attribute::MARGIN_RIGHT, this->attr);
	} else {
		this->topMargin = (this->bottomMargin = (this->leftMargin = (this->rightMargin = (float)0)));
	}
	this->size = $Math::max(2, this->size);
}

float HRuleView::getLength($CSS$Attribute* key, $AttributeSet* a) {
	$var($CSS$LengthValue, lv, $cast($CSS$LengthValue, $nc(a)->getAttribute(key)));
	float len = (lv != nullptr) ? $nc(lv)->getValue() : (float)0;
	return len;
}

void HRuleView::paint($Graphics* g, $Shape* a) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, alloc, ($instanceOf($Rectangle, a)) ? $cast($Rectangle, a) : $nc(a)->getBounds());
	int32_t x = 0;
	int32_t y = $nc(alloc)->y + HRuleView::SPACE_ABOVE + $cast(int32_t, this->topMargin);
	int32_t width = alloc->width - $cast(int32_t, (this->leftMargin + this->rightMargin));
	if (this->widthValue != nullptr) {
		width = $cast(int32_t, $nc(this->widthValue)->getValue((float)width));
	}
	int32_t height = alloc->height - (HRuleView::SPACE_ABOVE + HRuleView::SPACE_BELOW + $cast(int32_t, this->topMargin) + $cast(int32_t, this->bottomMargin));
	if (this->size > 0) {
		height = this->size;
	}
	switch (this->alignment) {
	case $StyleConstants::ALIGN_CENTER:
		{
			x = alloc->x + (alloc->width / 2) - (width / 2);
			break;
		}
	case $StyleConstants::ALIGN_RIGHT:
		{
			x = alloc->x + alloc->width - width - $cast(int32_t, this->rightMargin);
			break;
		}
	case $StyleConstants::ALIGN_LEFT:
		{}
	default:
		{
			x = alloc->x + $cast(int32_t, this->leftMargin);
			break;
		}
	}
	if (this->noshade != nullptr) {
		$init($Color);
		$nc(g)->setColor($Color::black);
		g->fillRect(x, y, width, height);
	} else {
		$var($Color, bg, $nc($(getContainer()))->getBackground());
		$var($Color, bottom, nullptr);
		$var($Color, top, nullptr);
		$init($Color);
		if (bg == nullptr || $nc(bg)->equals($Color::white)) {
			$assign(top, $Color::darkGray);
			$assign(bottom, $Color::lightGray);
		} else {
			$assign(top, $Color::darkGray);
			$assign(bottom, $Color::white);
		}
		$nc(g)->setColor(bottom);
		g->drawLine(x + width - 1, y, x + width - 1, y + height - 1);
		g->drawLine(x, y + height - 1, x + width - 1, y + height - 1);
		g->setColor(top);
		g->drawLine(x, y, x + width - 1, y);
		g->drawLine(x, y, x, y + height - 1);
	}
}

float HRuleView::getPreferredSpan(int32_t axis) {
	$useLocalCurrentObjectStackCache();
	switch (axis) {
	case $View::X_AXIS:
		{
			return (float)1;
		}
	case $View::Y_AXIS:
		{
			if (this->size > 0) {
				return this->size + HRuleView::SPACE_ABOVE + HRuleView::SPACE_BELOW + this->topMargin + this->bottomMargin;
			} else if (this->noshade != nullptr) {
				return 2 + HRuleView::SPACE_ABOVE + HRuleView::SPACE_BELOW + this->topMargin + this->bottomMargin;
			} else {
				return HRuleView::SPACE_ABOVE + HRuleView::SPACE_BELOW + this->topMargin + this->bottomMargin;
			}
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Invalid axis: "_s, $$str(axis)}));
		}
	}
}

int32_t HRuleView::getResizeWeight(int32_t axis) {
	if (axis == $View::X_AXIS) {
		return 1;
	} else if (axis == $View::Y_AXIS) {
		return 0;
	} else {
		return 0;
	}
}

int32_t HRuleView::getBreakWeight(int32_t axis, float pos, float len) {
	if (axis == $View::X_AXIS) {
		return $View::ForcedBreakWeight;
	}
	return $View::BadBreakWeight;
}

$View* HRuleView::breakView(int32_t axis, int32_t offset, float pos, float len) {
	return nullptr;
}

$Shape* HRuleView::modelToView(int32_t pos, $Shape* a, $Position$Bias* b) {
	int32_t p0 = getStartOffset();
	int32_t p1 = getEndOffset();
	if ((pos >= p0) && (pos <= p1)) {
		$var($Rectangle, r, $nc(a)->getBounds());
		if (pos == p1) {
			$nc(r)->x += r->width;
		}
		$nc(r)->width = 0;
		return r;
	}
	return nullptr;
}

int32_t HRuleView::viewToModel(float x, float y, $Shape* a, $Position$BiasArray* bias) {
	$var($Rectangle, alloc, $cast($Rectangle, a));
	if (x < $nc(alloc)->x + (alloc->width / 2)) {
		$init($Position$Bias);
		$nc(bias)->set(0, $Position$Bias::Forward);
		return getStartOffset();
	}
	$init($Position$Bias);
	$nc(bias)->set(0, $Position$Bias::Backward);
	return getEndOffset();
}

$AttributeSet* HRuleView::getAttributes() {
	return this->attr;
}

void HRuleView::changedUpdate($DocumentEvent* changes, $Shape* a, $ViewFactory* f) {
	$View::changedUpdate(changes, a, f);
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

HRuleView::HRuleView() {
}

$Class* HRuleView::load$($String* name, bool initialize) {
	$loadClass(HRuleView, name, initialize, &_HRuleView_ClassInfo_, allocate$HRuleView);
	return class$;
}

$Class* HRuleView::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax