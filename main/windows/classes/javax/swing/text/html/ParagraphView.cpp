#include <javax/swing/text/html/ParagraphView.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SizeRequirements.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/FlowView.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/ParagraphView.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/BlockView.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/CSS$LengthValue.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/StyleSheet$BoxPainter.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

#undef ALIGN_CENTER
#undef ALIGN_JUSTIFIED
#undef ALIGN_LEFT
#undef ALIGN_RIGHT
#undef BOTTOM
#undef HEIGHT
#undef LEFT
#undef RIGHT
#undef TEXT_ALIGN
#undef TOP
#undef WIDTH
#undef X_AXIS

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SizeRequirements = ::javax::swing::SizeRequirements;
using $SwingConstants = ::javax::swing::SwingConstants;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BoxView = ::javax::swing::text::BoxView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $FlowView = ::javax::swing::text::FlowView;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $ParagraphView = ::javax::swing::text::ParagraphView;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;
using $BlockView = ::javax::swing::text::html::BlockView;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;
using $CSS$LengthValue = ::javax::swing::text::html::CSS$LengthValue;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;
using $StyleSheet$BoxPainter = ::javax::swing::text::html::StyleSheet$BoxPainter;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _ParagraphView_FieldInfo_[] = {
	{"attr", "Ljavax/swing/text/AttributeSet;", nullptr, $PRIVATE, $field(ParagraphView, attr)},
	{"painter", "Ljavax/swing/text/html/StyleSheet$BoxPainter;", nullptr, $PRIVATE, $field(ParagraphView, painter)},
	{"cssWidth", "Ljavax/swing/text/html/CSS$LengthValue;", nullptr, $PRIVATE, $field(ParagraphView, cssWidth)},
	{"cssHeight", "Ljavax/swing/text/html/CSS$LengthValue;", nullptr, $PRIVATE, $field(ParagraphView, cssHeight)},
	{}
};

$MethodInfo _ParagraphView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(ParagraphView::*)($Element*)>(&ParagraphView::init$))},
	{"calculateMinorAxisRequirements", "(ILjavax/swing/SizeRequirements;)Ljavax/swing/SizeRequirements;", nullptr, $PROTECTED},
	{"getAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getMaximumSpan", "(I)F", nullptr, $PUBLIC},
	{"getMinimumSpan", "(I)F", nullptr, $PUBLIC},
	{"getPreferredSpan", "(I)F", nullptr, $PUBLIC},
	{"getStyleSheet", "()Ljavax/swing/text/html/StyleSheet;", nullptr, $PROTECTED},
	{"isVisible", "()Z", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"setParent", "(Ljavax/swing/text/View;)V", nullptr, $PUBLIC},
	{"setPropertiesFromAttributes", "()V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _ParagraphView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.ParagraphView",
	"javax.swing.text.ParagraphView",
	nullptr,
	_ParagraphView_FieldInfo_,
	_ParagraphView_MethodInfo_
};

$Object* allocate$ParagraphView($Class* clazz) {
	return $of($alloc(ParagraphView));
}

void ParagraphView::init$($Element* elem) {
	$ParagraphView::init$(elem);
}

void ParagraphView::setParent($View* parent) {
	$ParagraphView::setParent(parent);
	if (parent != nullptr) {
		setPropertiesFromAttributes();
	}
}

$AttributeSet* ParagraphView::getAttributes() {
	if (this->attr == nullptr) {
		$var($StyleSheet, sheet, getStyleSheet());
		$set(this, attr, $nc(sheet)->getViewAttributes(this));
	}
	return this->attr;
}

void ParagraphView::setPropertiesFromAttributes() {
	$var($StyleSheet, sheet, getStyleSheet());
	$set(this, attr, $nc(sheet)->getViewAttributes(this));
	$set(this, painter, sheet->getBoxPainter(this->attr));
	if (this->attr != nullptr) {
		$ParagraphView::setPropertiesFromAttributes();
		int16_t var$0 = $cast(int16_t, $nc(this->painter)->getInset($SwingConstants::TOP, this));
		int16_t var$1 = $cast(int16_t, $nc(this->painter)->getInset($SwingConstants::LEFT, this));
		int16_t var$2 = $cast(int16_t, $nc(this->painter)->getInset($SwingConstants::BOTTOM, this));
		setInsets(var$0, var$1, var$2, $cast(int16_t, $nc(this->painter)->getInset($SwingConstants::RIGHT, this)));
		$init($CSS$Attribute);
		$var($Object, o, $nc(this->attr)->getAttribute($CSS$Attribute::TEXT_ALIGN));
		if (o != nullptr) {
			$var($String, ta, $of(o)->toString());
			if ($nc(ta)->equals("left"_s)) {
				setJustification($StyleConstants::ALIGN_LEFT);
			} else if (ta->equals("center"_s)) {
				setJustification($StyleConstants::ALIGN_CENTER);
			} else if (ta->equals("right"_s)) {
				setJustification($StyleConstants::ALIGN_RIGHT);
			} else if (ta->equals("justify"_s)) {
				setJustification($StyleConstants::ALIGN_JUSTIFIED);
			}
		}
		$set(this, cssWidth, $cast($CSS$LengthValue, $nc(this->attr)->getAttribute($CSS$Attribute::WIDTH)));
		$set(this, cssHeight, $cast($CSS$LengthValue, $nc(this->attr)->getAttribute($CSS$Attribute::HEIGHT)));
	}
}

$StyleSheet* ParagraphView::getStyleSheet() {
	$var($HTMLDocument, doc, $cast($HTMLDocument, getDocument()));
	return $nc(doc)->getStyleSheet();
}

$SizeRequirements* ParagraphView::calculateMinorAxisRequirements(int32_t axis, $SizeRequirements* r$renamed) {
	$var($SizeRequirements, r, r$renamed);
	$assign(r, $ParagraphView::calculateMinorAxisRequirements(axis, r));
	if ($BlockView::spanSetFromAttributes(axis, r, this->cssWidth, this->cssHeight)) {
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
	}
	return r;
}

bool ParagraphView::isVisible() {
	int32_t n = getLayoutViewCount() - 1;
	for (int32_t i = 0; i < n; ++i) {
		$var($View, v, getLayoutView(i));
		if ($nc(v)->isVisible()) {
			return true;
		}
	}
	if (n > 0) {
		$var($View, v, getLayoutView(n));
		int32_t var$0 = $nc(v)->getEndOffset();
		if ((var$0 - v->getStartOffset()) == 1) {
			return false;
		}
	}
	int32_t var$1 = getStartOffset();
	if (var$1 == $nc($(getDocument()))->getLength()) {
		bool editable = false;
		$var($Component, c, getContainer());
		if ($instanceOf($JTextComponent, c)) {
			editable = $nc(($cast($JTextComponent, c)))->isEditable();
		}
		if (!editable) {
			return false;
		}
	}
	return true;
}

void ParagraphView::paint($Graphics* g, $Shape* a) {
	if (a == nullptr) {
		return;
	}
	$var($Rectangle, r, nullptr);
	if ($instanceOf($Rectangle, a)) {
		$assign(r, $cast($Rectangle, a));
	} else {
		$assign(r, $nc(a)->getBounds());
	}
	$nc(this->painter)->paint(g, (float)$nc(r)->x, (float)r->y, (float)r->width, (float)r->height, this);
	$ParagraphView::paint(g, a);
}

float ParagraphView::getPreferredSpan(int32_t axis) {
	if (!isVisible()) {
		return (float)0;
	}
	return $ParagraphView::getPreferredSpan(axis);
}

float ParagraphView::getMinimumSpan(int32_t axis) {
	if (!isVisible()) {
		return (float)0;
	}
	return $ParagraphView::getMinimumSpan(axis);
}

float ParagraphView::getMaximumSpan(int32_t axis) {
	if (!isVisible()) {
		return (float)0;
	}
	return $ParagraphView::getMaximumSpan(axis);
}

ParagraphView::ParagraphView() {
}

$Class* ParagraphView::load$($String* name, bool initialize) {
	$loadClass(ParagraphView, name, initialize, &_ParagraphView_ClassInfo_, allocate$ParagraphView);
	return class$;
}

$Class* ParagraphView::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax