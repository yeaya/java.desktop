#include <javax/swing/text/ParagraphView$Row.h>

#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/BitSet.h>
#include <javax/swing/SizeRequirements.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/GlyphView$JustificationInfo.h>
#include <javax/swing/text/GlyphView.h>
#include <javax/swing/text/ParagraphView.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <jcpp.h>

#undef ALIGN_CENTER
#undef ALIGN_JUSTIFIED
#undef ALIGN_LEFT
#undef ALIGN_RIGHT
#undef END_JUSTIFIABLE
#undef MAX_VALUE
#undef SPACE_ADDON
#undef SPACE_ADDON_LEFTOVER_END
#undef START_JUSTIFIABLE
#undef TRUE
#undef X_AXIS

using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $BitSet = ::java::util::BitSet;
using $SizeRequirements = ::javax::swing::SizeRequirements;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BoxView = ::javax::swing::text::BoxView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $GlyphView = ::javax::swing::text::GlyphView;
using $GlyphView$JustificationInfo = ::javax::swing::text::GlyphView$JustificationInfo;
using $ParagraphView = ::javax::swing::text::ParagraphView;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _ParagraphView$Row_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/ParagraphView;", nullptr, $FINAL | $SYNTHETIC, $field(ParagraphView$Row, this$0)},
	{"SPACE_ADDON", "I", nullptr, $STATIC | $FINAL, $constField(ParagraphView$Row, SPACE_ADDON)},
	{"SPACE_ADDON_LEFTOVER_END", "I", nullptr, $STATIC | $FINAL, $constField(ParagraphView$Row, SPACE_ADDON_LEFTOVER_END)},
	{"START_JUSTIFIABLE", "I", nullptr, $STATIC | $FINAL, $constField(ParagraphView$Row, START_JUSTIFIABLE)},
	{"END_JUSTIFIABLE", "I", nullptr, $STATIC | $FINAL, $constField(ParagraphView$Row, END_JUSTIFIABLE)},
	{"justificationData", "[I", nullptr, 0, $field(ParagraphView$Row, justificationData)},
	{}
};

$MethodInfo _ParagraphView$Row_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/ParagraphView;Ljavax/swing/text/Element;)V", nullptr, 0, $method(static_cast<void(ParagraphView$Row::*)($ParagraphView*,$Element*)>(&ParagraphView$Row::init$))},
	{"calculateMajorAxisRequirements", "(ILjavax/swing/SizeRequirements;)Ljavax/swing/SizeRequirements;", nullptr, $PROTECTED},
	{"calculateMinorAxisRequirements", "(ILjavax/swing/SizeRequirements;)Ljavax/swing/SizeRequirements;", nullptr, $PROTECTED},
	{"getAlignment", "(I)F", nullptr, $PUBLIC},
	{"getAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getBottomInset", "()S", nullptr, $PROTECTED},
	{"getEndOffset", "()I", nullptr, $PUBLIC},
	{"getLeftInset", "()S", nullptr, $PROTECTED},
	{"getMaximumSpan", "(I)F", nullptr, $PUBLIC},
	{"getStartOffset", "()I", nullptr, $PUBLIC},
	{"getViewIndexAtPosition", "(I)I", nullptr, $PROTECTED},
	{"isBrokenRow", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(ParagraphView$Row::*)()>(&ParagraphView$Row::isBrokenRow))},
	{"isJustifiableDocument", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(ParagraphView$Row::*)()>(&ParagraphView$Row::isJustifiableDocument))},
	{"isJustifyEnabled", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(ParagraphView$Row::*)()>(&ParagraphView$Row::isJustifyEnabled))},
	{"isLastRow", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(ParagraphView$Row::*)()>(&ParagraphView$Row::isLastRow))},
	{"layoutMajorAxis", "(II[I[I)V", nullptr, $PROTECTED},
	{"layoutMinorAxis", "(II[I[I)V", nullptr, $PROTECTED},
	{"loadChildren", "(Ljavax/swing/text/ViewFactory;)V", nullptr, $PROTECTED},
	{"modelToView", "(ILjava/awt/Shape;Ljavax/swing/text/Position$Bias;)Ljava/awt/Shape;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{}
};

$InnerClassInfo _ParagraphView$Row_InnerClassesInfo_[] = {
	{"javax.swing.text.ParagraphView$Row", "javax.swing.text.ParagraphView", "Row", 0},
	{}
};

$ClassInfo _ParagraphView$Row_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.ParagraphView$Row",
	"javax.swing.text.BoxView",
	nullptr,
	_ParagraphView$Row_FieldInfo_,
	_ParagraphView$Row_MethodInfo_,
	nullptr,
	nullptr,
	_ParagraphView$Row_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.ParagraphView"
};

$Object* allocate$ParagraphView$Row($Class* clazz) {
	return $of($alloc(ParagraphView$Row));
}

void ParagraphView$Row::init$($ParagraphView* this$0, $Element* elem) {
	$set(this, this$0, this$0);
	$BoxView::init$(elem, $View::X_AXIS);
	$set(this, justificationData, nullptr);
}

void ParagraphView$Row::loadChildren($ViewFactory* f) {
}

$AttributeSet* ParagraphView$Row::getAttributes() {
	$var($View, p, getParent());
	return (p != nullptr) ? $nc(p)->getAttributes() : ($AttributeSet*)nullptr;
}

float ParagraphView$Row::getAlignment(int32_t axis) {
	if (axis == $View::X_AXIS) {
		{
			float rv = 0;
			switch (this->this$0->justification) {
			case $StyleConstants::ALIGN_LEFT:
				{
					return (float)0;
				}
			case $StyleConstants::ALIGN_RIGHT:
				{
					return (float)1;
				}
			case $StyleConstants::ALIGN_CENTER:
				{
					return 0.5f;
				}
			case $StyleConstants::ALIGN_JUSTIFIED:
				{
					rv = 0.5f;
					if (isJustifiableDocument()) {
						rv = 0.0f;
					}
					return rv;
				}
			}
		}
	}
	return $BoxView::getAlignment(axis);
}

$Shape* ParagraphView$Row::modelToView(int32_t pos, $Shape* a, $Position$Bias* b) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, r, $nc(a)->getBounds());
	$var($View, v, getViewAtPosition(pos, r));
	if ((v != nullptr) && (!$nc($(v->getElement()))->isLeaf())) {
		return $BoxView::modelToView(pos, a, b);
	}
	$assign(r, a->getBounds());
	int32_t height = $nc(r)->height;
	int32_t y = r->y;
	$var($Shape, loc, $BoxView::modelToView(pos, a, b));
	$var($Rectangle2D, bounds, $nc(loc)->getBounds2D());
	double var$0 = bounds->getX();
	double var$1 = (double)y;
	$nc(bounds)->setRect(var$0, var$1, bounds->getWidth(), (double)height);
	return bounds;
}

int32_t ParagraphView$Row::getStartOffset() {
	$useLocalCurrentObjectStackCache();
	int32_t offs = $Integer::MAX_VALUE;
	int32_t n = getViewCount();
	for (int32_t i = 0; i < n; ++i) {
		$var($View, v, getView(i));
		offs = $Math::min(offs, $nc(v)->getStartOffset());
	}
	return offs;
}

int32_t ParagraphView$Row::getEndOffset() {
	$useLocalCurrentObjectStackCache();
	int32_t offs = 0;
	int32_t n = getViewCount();
	for (int32_t i = 0; i < n; ++i) {
		$var($View, v, getView(i));
		offs = $Math::max(offs, $nc(v)->getEndOffset());
	}
	return offs;
}

void ParagraphView$Row::layoutMinorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) {
	baselineLayout(targetSpan, axis, offsets, spans);
}

$SizeRequirements* ParagraphView$Row::calculateMinorAxisRequirements(int32_t axis, $SizeRequirements* r) {
	return baselineRequirements(axis, r);
}

bool ParagraphView$Row::isLastRow() {
	$var($View, parent, nullptr);
	bool var$0 = ($assign(parent, getParent())) == nullptr;
	return (var$0 || $equals(this, $nc(parent)->getView(parent->getViewCount() - 1)));
}

bool ParagraphView$Row::isBrokenRow() {
	bool rv = false;
	int32_t viewsCount = getViewCount();
	if (viewsCount > 0) {
		$var($View, lastView, getView(viewsCount - 1));
		if ($nc(lastView)->getBreakWeight($View::X_AXIS, (float)0, (float)0) >= $View::ForcedBreakWeight) {
			rv = true;
		}
	}
	return rv;
}

bool ParagraphView$Row::isJustifiableDocument() {
	$useLocalCurrentObjectStackCache();
	$init($Boolean);
	$init($AbstractDocument);
	return (!$nc($Boolean::TRUE)->equals($($nc($(getDocument()))->getProperty($AbstractDocument::I18NProperty))));
}

bool ParagraphView$Row::isJustifyEnabled() {
	bool ret = (this->this$0->justification == $StyleConstants::ALIGN_JUSTIFIED);
	ret = ret && isJustifiableDocument();
	ret = ret && !isLastRow();
	ret = ret && !isBrokenRow();
	return ret;
}

$SizeRequirements* ParagraphView$Row::calculateMajorAxisRequirements(int32_t axis, $SizeRequirements* r) {
	$useLocalCurrentObjectStackCache();
	$var($ints, oldJustficationData, this->justificationData);
	$set(this, justificationData, nullptr);
	$var($SizeRequirements, ret, $BoxView::calculateMajorAxisRequirements(axis, r));
	if (isJustifyEnabled()) {
		$set(this, justificationData, oldJustficationData);
	}
	return ret;
}

void ParagraphView$Row::layoutMajorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) {
	$useLocalCurrentObjectStackCache();
	$var($ints, oldJustficationData, this->justificationData);
	$set(this, justificationData, nullptr);
	$BoxView::layoutMajorAxis(targetSpan, axis, offsets, spans);
	if (!isJustifyEnabled()) {
		return;
	}
	int32_t currentSpan = 0;
	{
		$var($ints, arr$, spans);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t span = arr$->get(i$);
			{
				currentSpan += span;
			}
		}
	}
	if (currentSpan == targetSpan) {
		return;
	}
	int32_t extendableSpaces = 0;
	int32_t startJustifiableContent = -1;
	int32_t endJustifiableContent = -1;
	int32_t lastLeadingSpaces = 0;
	int32_t rowStartOffset = getStartOffset();
	int32_t rowEndOffset = getEndOffset();
	$var($ints, spaceMap, $new($ints, rowEndOffset - rowStartOffset));
	$Arrays::fill(spaceMap, 0);
	for (int32_t i = getViewCount() - 1; i >= 0; --i) {
		$var($View, view, getView(i));
		if ($instanceOf($GlyphView, view)) {
			$var($GlyphView$JustificationInfo, justificationInfo, $nc(($cast($GlyphView, view)))->getJustificationInfo(rowStartOffset));
			int32_t viewStartOffset = $nc(view)->getStartOffset();
			int32_t offset = viewStartOffset - rowStartOffset;
			for (int32_t j = 0; j < $nc($nc(justificationInfo)->spaceMap)->length(); ++j) {
				if ($nc(justificationInfo->spaceMap)->get(j)) {
					spaceMap->set(j + offset, 1);
				}
			}
			if (startJustifiableContent > 0) {
				if ($nc(justificationInfo)->end >= 0) {
					extendableSpaces += justificationInfo->trailingSpaces;
				} else {
					lastLeadingSpaces += justificationInfo->trailingSpaces;
				}
			}
			if ($nc(justificationInfo)->start >= 0) {
				startJustifiableContent = justificationInfo->start + viewStartOffset;
				extendableSpaces += lastLeadingSpaces;
			}
			if ($nc(justificationInfo)->end >= 0 && endJustifiableContent < 0) {
				endJustifiableContent = justificationInfo->end + viewStartOffset;
			}
			extendableSpaces += $nc(justificationInfo)->contentSpaces;
			lastLeadingSpaces = justificationInfo->leadingSpaces;
			if (justificationInfo->hasTab) {
				break;
			}
		}
	}
	if (extendableSpaces <= 0) {
		return;
	}
	int32_t adjustment = (targetSpan - currentSpan);
	int32_t spaceAddon = (extendableSpaces > 0) ? $div(adjustment, extendableSpaces) : 0;
	int32_t spaceAddonLeftoverEnd = -1;
	{
		int32_t i = startJustifiableContent - rowStartOffset;
		int32_t leftover = adjustment - spaceAddon * extendableSpaces;
		for (; leftover > 0; leftover -= spaceMap->get(i), ++i) {
			spaceAddonLeftoverEnd = i;
		}
	}
	if (spaceAddon > 0 || spaceAddonLeftoverEnd >= 0) {
		$set(this, justificationData, (oldJustficationData != nullptr) ? oldJustficationData : $new($ints, ParagraphView$Row::END_JUSTIFIABLE + 1));
		$nc(this->justificationData)->set(ParagraphView$Row::SPACE_ADDON, spaceAddon);
		$nc(this->justificationData)->set(ParagraphView$Row::SPACE_ADDON_LEFTOVER_END, spaceAddonLeftoverEnd);
		$nc(this->justificationData)->set(ParagraphView$Row::START_JUSTIFIABLE, startJustifiableContent - rowStartOffset);
		$nc(this->justificationData)->set(ParagraphView$Row::END_JUSTIFIABLE, endJustifiableContent - rowStartOffset);
		$BoxView::layoutMajorAxis(targetSpan, axis, offsets, spans);
	}
}

float ParagraphView$Row::getMaximumSpan(int32_t axis) {
	float ret = 0.0;
	if ($View::X_AXIS == axis && isJustifyEnabled()) {
		$init($Float);
		ret = $Float::MAX_VALUE;
	} else {
		ret = $BoxView::getMaximumSpan(axis);
	}
	return ret;
}

int32_t ParagraphView$Row::getViewIndexAtPosition(int32_t pos) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = pos < getStartOffset();
	if (var$0 || pos >= getEndOffset()) {
		return -1;
	}
	for (int32_t counter = getViewCount() - 1; counter >= 0; --counter) {
		$var($View, v, getView(counter));
		bool var$1 = pos >= $nc(v)->getStartOffset();
		if (var$1 && pos < v->getEndOffset()) {
			return counter;
		}
	}
	return -1;
}

int16_t ParagraphView$Row::getLeftInset() {
	$var($View, parentView, nullptr);
	int32_t adjustment = 0;
	if (($assign(parentView, getParent())) != nullptr) {
		if ($equals(this, $nc(parentView)->getView(0))) {
			adjustment = this->this$0->firstLineIndent;
		}
	}
	return (int16_t)($BoxView::getLeftInset() + adjustment);
}

int16_t ParagraphView$Row::getBottomInset() {
	return $cast(int16_t, ($BoxView::getBottomInset() + ((this->minorRequest != nullptr) ? $nc(this->minorRequest)->preferred : 0) * this->this$0->lineSpacing));
}

ParagraphView$Row::ParagraphView$Row() {
}

$Class* ParagraphView$Row::load$($String* name, bool initialize) {
	$loadClass(ParagraphView$Row, name, initialize, &_ParagraphView$Row_ClassInfo_, allocate$ParagraphView$Row);
	return class$;
}

$Class* ParagraphView$Row::class$ = nullptr;

		} // text
	} // swing
} // javax