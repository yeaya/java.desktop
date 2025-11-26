#include <javax/swing/text/ParagraphView.h>

#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/font/TextAttribute.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Math.h>
#include <javax/swing/SizeRequirements.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/FlowView$FlowStrategy.h>
#include <javax/swing/text/FlowView.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/ParagraphView$Row.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/StateInvariantError.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/TabSet.h>
#include <javax/swing/text/TabStop.h>
#include <javax/swing/text/TabableView.h>
#include <javax/swing/text/TextLayoutStrategy.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <jcpp.h>

#undef ALIGN_BAR
#undef ALIGN_CENTER
#undef ALIGN_DECIMAL
#undef ALIGN_LEFT
#undef ALIGN_RIGHT
#undef MAX_VALUE
#undef NORTH
#undef RUN_DIRECTION
#undef RUN_DIRECTION_RTL
#undef TRUE
#undef X_AXIS
#undef Y_AXIS

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SizeRequirements = ::javax::swing::SizeRequirements;
using $SwingConstants = ::javax::swing::SwingConstants;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $TextUI = ::javax::swing::plaf::TextUI;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $BoxView = ::javax::swing::text::BoxView;
using $Caret = ::javax::swing::text::Caret;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $FlowView = ::javax::swing::text::FlowView;
using $FlowView$FlowStrategy = ::javax::swing::text::FlowView$FlowStrategy;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $ParagraphView$Row = ::javax::swing::text::ParagraphView$Row;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $Segment = ::javax::swing::text::Segment;
using $StateInvariantError = ::javax::swing::text::StateInvariantError;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $TabExpander = ::javax::swing::text::TabExpander;
using $TabSet = ::javax::swing::text::TabSet;
using $TabStop = ::javax::swing::text::TabStop;
using $TabableView = ::javax::swing::text::TabableView;
using $TextLayoutStrategy = ::javax::swing::text::TextLayoutStrategy;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _ParagraphView_FieldInfo_[] = {
	{"justification", "I", nullptr, $PRIVATE, $field(ParagraphView, justification)},
	{"lineSpacing", "F", nullptr, $PRIVATE, $field(ParagraphView, lineSpacing)},
	{"firstLineIndent", "I", nullptr, $PROTECTED, $field(ParagraphView, firstLineIndent)},
	{"tabBase", "I", nullptr, $PRIVATE, $field(ParagraphView, tabBase)},
	{"i18nStrategy", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $STATIC, $staticField(ParagraphView, i18nStrategy)},
	{"tabChars", "[C", nullptr, $STATIC, $staticField(ParagraphView, tabChars)},
	{"tabDecimalChars", "[C", nullptr, $STATIC, $staticField(ParagraphView, tabDecimalChars)},
	{}
};

$MethodInfo _ParagraphView_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(ParagraphView::*)($Element*)>(&ParagraphView::init$))},
	{"breakView", "(IFLjava/awt/Shape;)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{"calculateMinorAxisRequirements", "(ILjavax/swing/SizeRequirements;)Ljavax/swing/SizeRequirements;", nullptr, $PROTECTED},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"createRow", "()Ljavax/swing/text/View;", nullptr, $PROTECTED},
	{"findEdgeSpan", "(Ljavax/swing/text/View;IIII)F", nullptr, $PRIVATE, $method(static_cast<float(ParagraphView::*)($View*,int32_t,int32_t,int32_t,int32_t)>(&ParagraphView::findEdgeSpan))},
	{"findOffsetToCharactersInString", "([CI)I", nullptr, $PROTECTED},
	{"flipEastAndWestAtEnds", "(ILjavax/swing/text/Position$Bias;)Z", nullptr, $PROTECTED},
	{"getAlignment", "(I)F", nullptr, $PUBLIC},
	{"getBreakWeight", "(IF)I", nullptr, $PUBLIC},
	{"getClosestPositionTo", "(ILjavax/swing/text/Position$Bias;Ljava/awt/Shape;I[Ljavax/swing/text/Position$Bias;II)I", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException"},
	{"getFlowSpan", "(I)I", nullptr, $PUBLIC},
	{"getFlowStart", "(I)I", nullptr, $PUBLIC},
	{"getLayoutView", "(I)Ljavax/swing/text/View;", nullptr, $PROTECTED},
	{"getLayoutViewCount", "()I", nullptr, $PROTECTED},
	{"getNextNorthSouthVisualPositionFrom", "(ILjavax/swing/text/Position$Bias;Ljava/awt/Shape;I[Ljavax/swing/text/Position$Bias;)I", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException"},
	{"getPartialSize", "(II)F", nullptr, $PROTECTED},
	{"getTabBase", "()F", nullptr, $PROTECTED},
	{"getTabSet", "()Ljavax/swing/text/TabSet;", nullptr, $PROTECTED},
	{"nextTabStop", "(FI)F", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"setFirstLineIndent", "(F)V", nullptr, $PROTECTED},
	{"setJustification", "(I)V", nullptr, $PROTECTED},
	{"setLineSpacing", "(F)V", nullptr, $PROTECTED},
	{"setPropertiesFromAttributes", "()V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ParagraphView_InnerClassesInfo_[] = {
	{"javax.swing.text.ParagraphView$Row", "javax.swing.text.ParagraphView", "Row", 0},
	{}
};

$ClassInfo _ParagraphView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.ParagraphView",
	"javax.swing.text.FlowView",
	"javax.swing.text.TabExpander",
	_ParagraphView_FieldInfo_,
	_ParagraphView_MethodInfo_,
	nullptr,
	nullptr,
	_ParagraphView_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.ParagraphView$Row"
};

$Object* allocate$ParagraphView($Class* clazz) {
	return $of($alloc(ParagraphView));
}

int32_t ParagraphView::hashCode() {
	 return this->$FlowView::hashCode();
}

bool ParagraphView::equals(Object$* arg0) {
	 return this->$FlowView::equals(arg0);
}

$Object* ParagraphView::clone() {
	 return this->$FlowView::clone();
}

$String* ParagraphView::toString() {
	 return this->$FlowView::toString();
}

void ParagraphView::finalize() {
	this->$FlowView::finalize();
}

$Class* ParagraphView::i18nStrategy = nullptr;
$chars* ParagraphView::tabChars = nullptr;
$chars* ParagraphView::tabDecimalChars = nullptr;

void ParagraphView::init$($Element* elem) {
	$useLocalCurrentObjectStackCache();
	$FlowView::init$(elem, $View::Y_AXIS);
	this->firstLineIndent = 0;
	setPropertiesFromAttributes();
	$var($Document, doc, $nc(elem)->getDocument());
	$init($AbstractDocument);
	$var($Object, i18nFlag, $nc(doc)->getProperty($AbstractDocument::I18NProperty));
	$init($Boolean);
	if ((i18nFlag != nullptr) && $of(i18nFlag)->equals($Boolean::TRUE)) {
		try {
			$set(this, strategy, $new($TextLayoutStrategy));
		} catch ($Throwable& e) {
			$throwNew($StateInvariantError, $$str({"ParagraphView: Can\'t create i18n strategy: "_s, $(e->getMessage())}));
		}
	}
}

void ParagraphView::setJustification(int32_t j) {
	this->justification = j;
}

void ParagraphView::setLineSpacing(float ls) {
	this->lineSpacing = ls;
}

void ParagraphView::setFirstLineIndent(float fi) {
	this->firstLineIndent = $cast(int32_t, fi);
}

void ParagraphView::setPropertiesFromAttributes() {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, attr, getAttributes());
	if (attr != nullptr) {
		setParagraphInsets(attr);
		$init($StyleConstants);
		$var($Integer, a, $cast($Integer, attr->getAttribute($StyleConstants::Alignment)));
		int32_t alignment = 0;
		if (a == nullptr) {
			$var($Document, doc, $nc($(getElement()))->getDocument());
			$init($TextAttribute);
			$var($Object, o, $nc(doc)->getProperty($TextAttribute::RUN_DIRECTION));
			if ((o != nullptr) && $of(o)->equals($TextAttribute::RUN_DIRECTION_RTL)) {
				alignment = $StyleConstants::ALIGN_RIGHT;
			} else {
				alignment = $StyleConstants::ALIGN_LEFT;
			}
		} else {
			alignment = $nc(a)->intValue();
		}
		setJustification(alignment);
		setLineSpacing($StyleConstants::getLineSpacing(attr));
		setFirstLineIndent($StyleConstants::getFirstLineIndent(attr));
	}
}

int32_t ParagraphView::getLayoutViewCount() {
	return $nc(this->layoutPool)->getViewCount();
}

$View* ParagraphView::getLayoutView(int32_t index) {
	return $nc(this->layoutPool)->getView(index);
}

int32_t ParagraphView::getNextNorthSouthVisualPositionFrom(int32_t pos, $Position$Bias* b, $Shape* a, int32_t direction, $Position$BiasArray* biasRet) {
	$useLocalCurrentObjectStackCache();
	int32_t vIndex = 0;
	if (pos == -1) {
		vIndex = (direction == $SwingConstants::NORTH) ? getViewCount() - 1 : 0;
	} else {
		$init($Position$Bias);
		if (b == $Position$Bias::Backward && pos > 0) {
			vIndex = getViewIndexAtPosition(pos - 1);
		} else {
			vIndex = getViewIndexAtPosition(pos);
		}
		if (direction == $SwingConstants::NORTH) {
			if (vIndex == 0) {
				return -1;
			}
			--vIndex;
		} else if (++vIndex >= getViewCount()) {
			return -1;
		}
	}
	$var($JTextComponent, text, $cast($JTextComponent, getContainer()));
	$var($Caret, c, $nc(text)->getCaret());
	$var($Point, magicPoint, nullptr);
	$assign(magicPoint, (c != nullptr) ? $nc(c)->getMagicCaretPosition() : ($Point*)nullptr);
	int32_t x = 0;
	if (magicPoint == nullptr) {
		$var($Shape, posBounds, nullptr);
		try {
			$assign(posBounds, $nc($($cast($TextUI, text->getUI())))->modelToView(text, pos, b));
		} catch ($BadLocationException& exc) {
			$assign(posBounds, nullptr);
		}
		if (posBounds == nullptr) {
			x = 0;
		} else {
			x = $nc($($nc(posBounds)->getBounds()))->x;
		}
	} else {
		x = $nc(magicPoint)->x;
	}
	return getClosestPositionTo(pos, b, a, direction, biasRet, vIndex, x);
}

int32_t ParagraphView::getClosestPositionTo(int32_t pos, $Position$Bias* b, $Shape* a, int32_t direction, $Position$BiasArray* biasRet, int32_t rowIndex, int32_t x) {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, text, $cast($JTextComponent, getContainer()));
	$var($Document, doc, getDocument());
	$var($View, row, getView(rowIndex));
	int32_t lastPos = -1;
	$init($Position$Bias);
	$nc(biasRet)->set(0, $Position$Bias::Forward);
	{
		int32_t vc = 0;
		int32_t numViews = $nc(row)->getViewCount();
		for (; vc < numViews; ++vc) {
			$var($View, v, row->getView(vc));
			int32_t start = $nc(v)->getStartOffset();
			bool ltr = $AbstractDocument::isLeftToRight(doc, start, start + 1);
			if (ltr) {
				lastPos = start;
				for (int32_t end = v->getEndOffset(); lastPos < end; ++lastPos) {
					float xx = (float)$nc($($nc($($nc(text)->modelToView(lastPos)))->getBounds()))->x;
					if (xx >= x) {
						while (true) {
							bool var$0 = ++lastPos < end;
							if (!(var$0 && $nc($($nc($(text->modelToView(lastPos)))->getBounds()))->x == xx)) {
								break;
							}
							{
							}
						}
						return --lastPos;
					}
				}
				--lastPos;
			} else {
				for (lastPos = v->getEndOffset() - 1; lastPos >= start; --lastPos) {
					float xx = (float)$nc($($nc($($nc(text)->modelToView(lastPos)))->getBounds()))->x;
					if (xx >= x) {
						while (true) {
							bool var$1 = --lastPos >= start;
							if (!(var$1 && $nc($($nc($(text->modelToView(lastPos)))->getBounds()))->x == xx)) {
								break;
							}
							{
							}
						}
						return ++lastPos;
					}
				}
				++lastPos;
			}
		}
	}
	if (lastPos == -1) {
		return getStartOffset();
	}
	return lastPos;
}

bool ParagraphView::flipEastAndWestAtEnds(int32_t position, $Position$Bias* bias) {
	$var($Document, doc, getDocument());
	position = getStartOffset();
	return !$AbstractDocument::isLeftToRight(doc, position, position + 1);
}

int32_t ParagraphView::getFlowSpan(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($View, child, getView(index));
	int32_t adjust = 0;
	if ($instanceOf($ParagraphView$Row, child)) {
		$var($ParagraphView$Row, row, $cast($ParagraphView$Row, child));
		int16_t var$0 = $nc(row)->getLeftInset();
		adjust = var$0 + row->getRightInset();
	}
	return (this->layoutSpan == $Integer::MAX_VALUE) ? this->layoutSpan : (this->layoutSpan - adjust);
}

int32_t ParagraphView::getFlowStart(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($View, child, getView(index));
	int32_t adjust = 0;
	if ($instanceOf($ParagraphView$Row, child)) {
		$var($ParagraphView$Row, row, $cast($ParagraphView$Row, child));
		adjust = $nc(row)->getLeftInset();
	}
	return this->tabBase + adjust;
}

$View* ParagraphView::createRow() {
	return $new($ParagraphView$Row, this, $(getElement()));
}

float ParagraphView::nextTabStop(float x, int32_t tabOffset) {
	$useLocalCurrentObjectStackCache();
	if (this->justification != $StyleConstants::ALIGN_LEFT) {
		return x + 10.0f;
	}
	x -= this->tabBase;
	$var($TabSet, tabs, getTabSet());
	if (tabs == nullptr) {
		return (float)(this->tabBase + (($cast(int32_t, x) / 72 + 1) * 72));
	}
	$var($TabStop, tab, $nc(tabs)->getTabAfter(x + 0.01f));
	if (tab == nullptr) {
		return this->tabBase + x + 5.0f;
	}
	int32_t alignment = $nc(tab)->getAlignment();
	int32_t offset = 0;
	switch (alignment) {
	default:
		{}
	case $TabStop::ALIGN_LEFT:
		{
			return this->tabBase + tab->getPosition();
		}
	case $TabStop::ALIGN_BAR:
		{
			return this->tabBase + tab->getPosition();
		}
	case $TabStop::ALIGN_RIGHT:
		{}
	case $TabStop::ALIGN_CENTER:
		{
			offset = findOffsetToCharactersInString(ParagraphView::tabChars, tabOffset + 1);
			break;
		}
	case $TabStop::ALIGN_DECIMAL:
		{
			offset = findOffsetToCharactersInString(ParagraphView::tabDecimalChars, tabOffset + 1);
			break;
		}
	}
	if (offset == -1) {
		offset = getEndOffset();
	}
	float charsSize = getPartialSize(tabOffset + 1, offset);
	switch (alignment) {
	case $TabStop::ALIGN_RIGHT:
		{}
	case $TabStop::ALIGN_DECIMAL:
		{
			return this->tabBase + $Math::max(x, tab->getPosition() - charsSize);
		}
	case $TabStop::ALIGN_CENTER:
		{
			return this->tabBase + $Math::max(x, tab->getPosition() - charsSize / 2.0f);
		}
	}
	return x;
}

$TabSet* ParagraphView::getTabSet() {
	$useLocalCurrentObjectStackCache();
	return $StyleConstants::getTabSet($($nc($(getElement()))->getAttributes()));
}

float ParagraphView::getPartialSize(int32_t startOffset, int32_t endOffset) {
	$useLocalCurrentObjectStackCache();
	float size = 0.0f;
	int32_t viewIndex = 0;
	int32_t numViews = getViewCount();
	$var($View, view, nullptr);
	int32_t viewEnd = 0;
	int32_t tempEnd = 0;
	viewIndex = $nc($(getElement()))->getElementIndex(startOffset);
	numViews = $nc(this->layoutPool)->getViewCount();
	while (startOffset < endOffset && viewIndex < numViews) {
		$assign(view, $nc(this->layoutPool)->getView(viewIndex++));
		viewEnd = $nc(view)->getEndOffset();
		tempEnd = $Math::min(endOffset, viewEnd);
		if ($instanceOf($TabableView, view)) {
			size += $nc(($cast($TabableView, view)))->getPartialSpan(startOffset, tempEnd);
		} else {
			bool var$1 = startOffset == view->getStartOffset();
			if (var$1 && tempEnd == view->getEndOffset()) {
				size += view->getPreferredSpan($View::X_AXIS);
			} else {
				return 0.0f;
			}
		}
		startOffset = viewEnd;
	}
	return size;
}

int32_t ParagraphView::findOffsetToCharactersInString($chars* string, int32_t start) {
	$useLocalCurrentObjectStackCache();
	int32_t stringLength = $nc(string)->length;
	int32_t end = getEndOffset();
	$var($Segment, seg, $new($Segment));
	try {
		$nc($(getDocument()))->getText(start, end - start, seg);
	} catch ($BadLocationException& ble) {
		return -1;
	}
	{
		int32_t counter = seg->offset;
		int32_t maxCounter = seg->offset + seg->count;
		for (; counter < maxCounter; ++counter) {
			char16_t currentChar = $nc(seg->array)->get(counter);
			for (int32_t subCounter = 0; subCounter < stringLength; ++subCounter) {
				if (currentChar == string->get(subCounter)) {
					return counter - seg->offset + start;
				}
			}
		}
	}
	return -1;
}

float ParagraphView::getTabBase() {
	return (float)this->tabBase;
}

void ParagraphView::paint($Graphics* g, $Shape* a) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, alloc, ($instanceOf($Rectangle, a)) ? $cast($Rectangle, a) : $nc(a)->getBounds());
	this->tabBase = $nc(alloc)->x + getLeftInset();
	$FlowView::paint(g, a);
	if (this->firstLineIndent < 0) {
		$var($Shape, sh, getChildAllocation(0, a));
		if ((sh != nullptr) && sh->intersects(alloc)) {
			int32_t x = alloc->x + getLeftInset() + this->firstLineIndent;
			int32_t y = alloc->y + getTopInset();
			$var($Rectangle, clip, $nc(g)->getClipBounds());
			$nc(this->tempRect)->x = x + getOffset($View::X_AXIS, 0);
			$nc(this->tempRect)->y = y + getOffset($View::Y_AXIS, 0);
			$nc(this->tempRect)->width = getSpan($View::X_AXIS, 0) - this->firstLineIndent;
			$nc(this->tempRect)->height = getSpan($View::Y_AXIS, 0);
			if ($nc(this->tempRect)->intersects(clip)) {
				$nc(this->tempRect)->x = $nc(this->tempRect)->x - this->firstLineIndent;
				paintChild(g, this->tempRect, 0);
			}
		}
	}
}

float ParagraphView::getAlignment(int32_t axis) {
	$useLocalCurrentObjectStackCache();
	{
		float a = 0;
		switch (axis) {
		case $View::Y_AXIS:
			{
				a = 0.5f;
				if (getViewCount() != 0) {
					int32_t paragraphSpan = $cast(int32_t, getPreferredSpan($View::Y_AXIS));
					$var($View, v, getView(0));
					int32_t rowSpan = $cast(int32_t, $nc(v)->getPreferredSpan($View::Y_AXIS));
					a = (paragraphSpan != 0) ? ((float)(rowSpan / 2)) / paragraphSpan : (float)0;
				}
				return a;
			}
		case $View::X_AXIS:
			{
				return 0.5f;
			}
		default:
			{
				$throwNew($IllegalArgumentException, $$str({"Invalid axis: "_s, $$str(axis)}));
			}
		}
	}
}

$View* ParagraphView::breakView(int32_t axis, float len, $Shape* a) {
	if (axis == $View::Y_AXIS) {
		if (a != nullptr) {
			$var($Rectangle, alloc, a->getBounds());
			setSize((float)$nc(alloc)->width, (float)alloc->height);
		}
		return this;
	}
	return this;
}

int32_t ParagraphView::getBreakWeight(int32_t axis, float len) {
	if (axis == $View::Y_AXIS) {
		return $View::BadBreakWeight;
	}
	return $View::BadBreakWeight;
}

$SizeRequirements* ParagraphView::calculateMinorAxisRequirements(int32_t axis, $SizeRequirements* r$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($SizeRequirements, r, r$renamed);
	$assign(r, $FlowView::calculateMinorAxisRequirements(axis, r));
	float min = (float)0;
	float glue = (float)0;
	int32_t n = getLayoutViewCount();
	for (int32_t i = 0; i < n; ++i) {
		$var($View, v, getLayoutView(i));
		float span = $nc(v)->getMinimumSpan(axis);
		if (v->getBreakWeight(axis, (float)0, v->getMaximumSpan(axis)) > $View::BadBreakWeight) {
			int32_t p0 = v->getStartOffset();
			int32_t p1 = v->getEndOffset();
			float start = findEdgeSpan(v, axis, p0, p0, p1);
			float end = findEdgeSpan(v, axis, p1, p0, p1);
			glue += start;
			min = $Math::max(min, $Math::max(span, glue));
			glue = end;
		} else {
			glue += span;
			min = $Math::max(min, glue);
		}
	}
	$nc(r)->minimum = $Math::max(r->minimum, $cast(int32_t, min));
	r->preferred = $Math::max(r->minimum, r->preferred);
	r->maximum = $Math::max(r->preferred, r->maximum);
	return r;
}

float ParagraphView::findEdgeSpan($View* v, int32_t axis, int32_t fp, int32_t p0, int32_t p1) {
	int32_t len = p1 - p0;
	if (len <= 1) {
		return $nc(v)->getMinimumSpan(axis);
	} else {
		int32_t mid = p0 + len / 2;
		bool startEdge = mid > fp;
		$var($View, f, startEdge ? $nc(v)->createFragment(fp, mid) : v->createFragment(mid, fp));
		bool breakable = $nc(f)->getBreakWeight(axis, (float)0, f->getMaximumSpan(axis)) > $View::BadBreakWeight;
		if (breakable == startEdge) {
			p1 = mid;
		} else {
			p0 = mid;
		}
		return findEdgeSpan(f, axis, fp, p0, p1);
	}
}

void ParagraphView::changedUpdate($DocumentEvent* changes, $Shape* a, $ViewFactory* f) {
	setPropertiesFromAttributes();
	layoutChanged($View::X_AXIS);
	layoutChanged($View::Y_AXIS);
	$FlowView::changedUpdate(changes, a, f);
}

void clinit$ParagraphView($Class* class$) {
	{
		$assignStatic(ParagraphView::tabChars, $new($chars, 1));
		$nc(ParagraphView::tabChars)->set(0, u'\t');
		$assignStatic(ParagraphView::tabDecimalChars, $new($chars, 2));
		$nc(ParagraphView::tabDecimalChars)->set(0, u'\t');
		$nc(ParagraphView::tabDecimalChars)->set(1, u'.');
	}
}

ParagraphView::ParagraphView() {
}

$Class* ParagraphView::load$($String* name, bool initialize) {
	$loadClass(ParagraphView, name, initialize, &_ParagraphView_ClassInfo_, clinit$ParagraphView, allocate$ParagraphView);
	return class$;
}

$Class* ParagraphView::class$ = nullptr;

		} // text
	} // swing
} // javax