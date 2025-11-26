#include <javax/swing/text/GlyphView.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Math.h>
#include <java/text/BreakIterator.h>
#include <java/text/CharacterIterator.h>
#include <java/util/BitSet.h>
#include <java/util/Locale.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/AbstractDocument.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/GlyphPainter1.h>
#include <javax/swing/text/GlyphView$GlyphPainter.h>
#include <javax/swing/text/GlyphView$JustificationInfo.h>
#include <javax/swing/text/Highlighter$Highlight.h>
#include <javax/swing/text/Highlighter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/LayeredHighlighter.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/SegmentCache.h>
#include <javax/swing/text/StateInvariantError.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/TabExpander.h>
#include <javax/swing/text/Utilities.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <javax/swing/text/WhitespaceBasedBreakIterator.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef CONTENT
#undef DONE
#undef SPACES
#undef TRAILING
#undef TRUE
#undef X_AXIS
#undef Y_AXIS

using $Highlighter$HighlightArray = $Array<::javax::swing::text::Highlighter$Highlight>;
using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $BreakIterator = ::java::text::BreakIterator;
using $CharacterIterator = ::java::text::CharacterIterator;
using $BitSet = ::java::util::BitSet;
using $Locale = ::java::util::Locale;
using $UIManager = ::javax::swing::UIManager;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $GlyphPainter1 = ::javax::swing::text::GlyphPainter1;
using $GlyphView$GlyphPainter = ::javax::swing::text::GlyphView$GlyphPainter;
using $GlyphView$JustificationInfo = ::javax::swing::text::GlyphView$JustificationInfo;
using $Highlighter = ::javax::swing::text::Highlighter;
using $Highlighter$Highlight = ::javax::swing::text::Highlighter$Highlight;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $LayeredHighlighter = ::javax::swing::text::LayeredHighlighter;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $Segment = ::javax::swing::text::Segment;
using $SegmentCache = ::javax::swing::text::SegmentCache;
using $StateInvariantError = ::javax::swing::text::StateInvariantError;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $TabExpander = ::javax::swing::text::TabExpander;
using $TabableView = ::javax::swing::text::TabableView;
using $Utilities = ::javax::swing::text::Utilities;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;
using $WhitespaceBasedBreakIterator = ::javax::swing::text::WhitespaceBasedBreakIterator;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _GlyphView_FieldInfo_[] = {
	{"selections", "[B", nullptr, $PRIVATE, $field(GlyphView, selections)},
	{"offset", "I", nullptr, 0, $field(GlyphView, offset)},
	{"length", "I", nullptr, 0, $field(GlyphView, length)},
	{"impliedCR", "Z", nullptr, 0, $field(GlyphView, impliedCR)},
	{"skipWidth", "Z", nullptr, 0, $field(GlyphView, skipWidth)},
	{"expander", "Ljavax/swing/text/TabExpander;", nullptr, 0, $field(GlyphView, expander)},
	{"minimumSpan", "F", nullptr, $PRIVATE, $field(GlyphView, minimumSpan)},
	{"breakSpots", "[I", nullptr, $PRIVATE, $field(GlyphView, breakSpots)},
	{"x", "I", nullptr, 0, $field(GlyphView, x)},
	{"painter", "Ljavax/swing/text/GlyphView$GlyphPainter;", nullptr, 0, $field(GlyphView, painter)},
	{"defaultPainter", "Ljavax/swing/text/GlyphView$GlyphPainter;", nullptr, $STATIC, $staticField(GlyphView, defaultPainter)},
	{"justificationInfo", "Ljavax/swing/text/GlyphView$JustificationInfo;", nullptr, $PRIVATE, $field(GlyphView, justificationInfo)},
	{}
};

$MethodInfo _GlyphView_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(GlyphView::*)($Element*)>(&GlyphView::init$))},
	{"breakView", "(IIFF)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"checkPainter", "()V", nullptr, $PROTECTED},
	{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"createFragment", "(II)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{"getAlignment", "(I)F", nullptr, $PUBLIC},
	{"getBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getBreakSpot", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(GlyphView::*)(int32_t,int32_t)>(&GlyphView::getBreakSpot))},
	{"getBreakWeight", "(IFF)I", nullptr, $PUBLIC},
	{"getBreaker", "()Ljava/text/BreakIterator;", nullptr, $PRIVATE, $method(static_cast<$BreakIterator*(GlyphView::*)()>(&GlyphView::getBreaker))},
	{"getEndOffset", "()I", nullptr, $PUBLIC},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getForeground", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getGlyphPainter", "()Ljavax/swing/text/GlyphView$GlyphPainter;", nullptr, $PUBLIC},
	{"getJustificationInfo", "(I)Ljavax/swing/text/GlyphView$JustificationInfo;", nullptr, 0},
	{"getMinimumSpan", "(I)F", nullptr, $PUBLIC},
	{"getNextVisualPositionFrom", "(ILjavax/swing/text/Position$Bias;Ljava/awt/Shape;I[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"getPartialSpan", "(II)F", nullptr, $PUBLIC},
	{"getPreferredSpan", "(I)F", nullptr, $PUBLIC},
	{"getStartOffset", "()I", nullptr, $PUBLIC},
	{"getTabExpander", "()Ljavax/swing/text/TabExpander;", nullptr, $PUBLIC},
	{"getTabbedSpan", "(FLjavax/swing/text/TabExpander;)F", nullptr, $PUBLIC},
	{"getText", "(II)Ljavax/swing/text/Segment;", nullptr, $PUBLIC},
	{"initSelections", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(GlyphView::*)(int32_t,int32_t)>(&GlyphView::initSelections))},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"isStrikeThrough", "()Z", nullptr, $PUBLIC},
	{"isSubscript", "()Z", nullptr, $PUBLIC},
	{"isSuperscript", "()Z", nullptr, $PUBLIC},
	{"isUnderline", "()Z", nullptr, $PUBLIC},
	{"modelToView", "(ILjava/awt/Shape;Ljavax/swing/text/Position$Bias;)Ljava/awt/Shape;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"paintTextUsingColor", "(Ljava/awt/Graphics;Ljava/awt/Shape;Ljava/awt/Color;II)V", nullptr, $FINAL, $method(static_cast<void(GlyphView::*)($Graphics*,$Shape*,$Color*,int32_t,int32_t)>(&GlyphView::paintTextUsingColor))},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"setGlyphPainter", "(Ljavax/swing/text/GlyphView$GlyphPainter;)V", nullptr, $PUBLIC},
	{"syncCR", "()V", nullptr, $PRIVATE, $method(static_cast<void(GlyphView::*)()>(&GlyphView::syncCR))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateAfterChange", "()V", nullptr, 0},
	{"viewToModel", "(FFLjava/awt/Shape;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GlyphView_InnerClassesInfo_[] = {
	{"javax.swing.text.GlyphView$GlyphPainter", "javax.swing.text.GlyphView", "GlyphPainter", $PUBLIC | $STATIC | $ABSTRACT},
	{"javax.swing.text.GlyphView$JustificationInfo", "javax.swing.text.GlyphView", "JustificationInfo", $STATIC},
	{}
};

$ClassInfo _GlyphView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.GlyphView",
	"javax.swing.text.View",
	"javax.swing.text.TabableView,java.lang.Cloneable",
	_GlyphView_FieldInfo_,
	_GlyphView_MethodInfo_,
	nullptr,
	nullptr,
	_GlyphView_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.GlyphView$GlyphPainter,javax.swing.text.GlyphView$JustificationInfo"
};

$Object* allocate$GlyphView($Class* clazz) {
	return $of($alloc(GlyphView));
}

int32_t GlyphView::hashCode() {
	 return this->$View::hashCode();
}

bool GlyphView::equals(Object$* arg0) {
	 return this->$View::equals(arg0);
}

$String* GlyphView::toString() {
	 return this->$View::toString();
}

void GlyphView::finalize() {
	this->$View::finalize();
}

$GlyphView$GlyphPainter* GlyphView::defaultPainter = nullptr;

void GlyphView::init$($Element* elem) {
	$useLocalCurrentObjectStackCache();
	$View::init$(elem);
	$set(this, selections, nullptr);
	this->minimumSpan = (float)-1;
	$set(this, breakSpots, nullptr);
	$set(this, justificationInfo, nullptr);
	this->offset = 0;
	this->length = 0;
	$var($Element, parent, $nc(elem)->getParentElement());
	$var($AttributeSet, attr, elem->getAttributes());
	bool var$0 = attr != nullptr && attr->getAttribute("CR"_s) != nullptr && parent != nullptr;
	this->impliedCR = (var$0 && parent->getElementCount() > 1);
	this->skipWidth = $nc($(elem->getName()))->equals("br"_s);
}

$Object* GlyphView::clone() {
	$var($Object, o, nullptr);
	try {
		$assign(o, $View::clone());
	} catch ($CloneNotSupportedException& cnse) {
		$assign(o, nullptr);
	}
	return $of(o);
}

$GlyphView$GlyphPainter* GlyphView::getGlyphPainter() {
	return this->painter;
}

void GlyphView::setGlyphPainter($GlyphView$GlyphPainter* p) {
	$set(this, painter, p);
}

$Segment* GlyphView::getText(int32_t p0, int32_t p1) {
	$useLocalCurrentObjectStackCache();
	$var($Segment, text, $SegmentCache::getSharedSegment());
	try {
		$var($Document, doc, getDocument());
		$nc(doc)->getText(p0, p1 - p0, text);
	} catch ($BadLocationException& bl) {
		$throwNew($StateInvariantError, $$str({"GlyphView: Stale view: "_s, bl}));
	}
	return text;
}

$Color* GlyphView::getBackground() {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, getDocument());
	if ($instanceOf($StyledDocument, doc)) {
		$var($AttributeSet, attr, getAttributes());
		$init($StyleConstants);
		if ($nc(attr)->isDefined($StyleConstants::Background)) {
			return $nc(($cast($StyledDocument, doc)))->getBackground(attr);
		}
	}
	return nullptr;
}

$Color* GlyphView::getForeground() {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, getDocument());
	if ($instanceOf($StyledDocument, doc)) {
		$var($AttributeSet, attr, getAttributes());
		return $nc(($cast($StyledDocument, doc)))->getForeground(attr);
	}
	$var($Component, c, getContainer());
	if (c != nullptr) {
		return c->getForeground();
	}
	return nullptr;
}

$Font* GlyphView::getFont() {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, getDocument());
	if ($instanceOf($StyledDocument, doc)) {
		$var($AttributeSet, attr, getAttributes());
		return $nc(($cast($StyledDocument, doc)))->getFont(attr);
	}
	$var($Component, c, getContainer());
	if (c != nullptr) {
		return c->getFont();
	}
	return nullptr;
}

bool GlyphView::isUnderline() {
	$var($AttributeSet, attr, getAttributes());
	return $StyleConstants::isUnderline(attr);
}

bool GlyphView::isStrikeThrough() {
	$var($AttributeSet, attr, getAttributes());
	return $StyleConstants::isStrikeThrough(attr);
}

bool GlyphView::isSubscript() {
	$var($AttributeSet, attr, getAttributes());
	return $StyleConstants::isSubscript(attr);
}

bool GlyphView::isSuperscript() {
	$var($AttributeSet, attr, getAttributes());
	return $StyleConstants::isSuperscript(attr);
}

$TabExpander* GlyphView::getTabExpander() {
	return this->expander;
}

void GlyphView::checkPainter() {
	if (this->painter == nullptr) {
		if (GlyphView::defaultPainter == nullptr) {
			$assignStatic(GlyphView::defaultPainter, $new($GlyphPainter1));
		}
		int32_t var$0 = getStartOffset();
		setGlyphPainter($($nc(GlyphView::defaultPainter)->getPainter(this, var$0, getEndOffset())));
	}
}

float GlyphView::getTabbedSpan(float x, $TabExpander* e) {
	checkPainter();
	$var($TabExpander, old, this->expander);
	$set(this, expander, e);
	if (this->expander != old) {
		preferenceChanged(nullptr, true, false);
	}
	this->x = $cast(int32_t, x);
	int32_t p0 = getStartOffset();
	int32_t p1 = getEndOffset();
	float width = $nc(this->painter)->getSpan(this, p0, p1, this->expander, x);
	return width;
}

float GlyphView::getPartialSpan(int32_t p0, int32_t p1) {
	checkPainter();
	float width = $nc(this->painter)->getSpan(this, p0, p1, this->expander, (float)this->x);
	return width;
}

int32_t GlyphView::getStartOffset() {
	$var($Element, e, getElement());
	return (this->length > 0) ? $nc(e)->getStartOffset() + this->offset : e->getStartOffset();
}

int32_t GlyphView::getEndOffset() {
	$var($Element, e, getElement());
	return (this->length > 0) ? $nc(e)->getStartOffset() + this->offset + this->length : e->getEndOffset();
}

void GlyphView::initSelections(int32_t p0, int32_t p1) {
	int32_t viewPosCount = p1 - p0 + 1;
	if (this->selections == nullptr || viewPosCount > $nc(this->selections)->length) {
		$set(this, selections, $new($bytes, viewPosCount));
		return;
	}
	for (int32_t i = 0; i < viewPosCount; $nc(this->selections)->set(i++, (int8_t)0)) {
	}
}

void GlyphView::paint($Graphics* g, $Shape* a) {
	$useLocalCurrentObjectStackCache();
	checkPainter();
	bool paintedText = false;
	$var($Component, c, getContainer());
	int32_t p0 = getStartOffset();
	int32_t p1 = getEndOffset();
	$var($Rectangle, alloc, ($instanceOf($Rectangle, a)) ? $cast($Rectangle, a) : $nc(a)->getBounds());
	$var($Color, bg, getBackground());
	$var($Color, fg, getForeground());
	if (c != nullptr && !c->isEnabled()) {
		$assign(fg, $instanceOf($JTextComponent, c) ? $nc(($cast($JTextComponent, c)))->getDisabledTextColor() : $UIManager::getColor("textInactiveText"_s));
	}
	if (bg != nullptr) {
		$nc(g)->setColor(bg);
		g->fillRect($nc(alloc)->x, alloc->y, alloc->width, alloc->height);
	}
	if ($instanceOf($JTextComponent, c)) {
		$var($JTextComponent, tc, $cast($JTextComponent, c));
		$var($Highlighter, h, $nc(tc)->getHighlighter());
		if ($instanceOf($LayeredHighlighter, h)) {
			$nc(($cast($LayeredHighlighter, h)))->paintLayeredHighlights(g, p0, p1, a, tc, this);
		}
	}
	if ($Utilities::isComposedTextElement($(getElement()))) {
		$Utilities::paintComposedText(g, $(a->getBounds()), this);
		paintedText = true;
	} else if ($instanceOf($JTextComponent, c)) {
		$var($JTextComponent, tc, $cast($JTextComponent, c));
		$var($Color, selFG, $nc(tc)->getSelectedTextColor());
		bool var$0 = (tc->getHighlighter() != nullptr) && (selFG != nullptr);
		if (var$0 && !selFG->equals(fg)) {
			$var($Highlighter$HighlightArray, h, $nc($(tc->getHighlighter()))->getHighlights());
			if ($nc(h)->length != 0) {
				bool initialized = false;
				int32_t viewSelectionCount = 0;
				for (int32_t i = 0; i < h->length; ++i) {
					$var($Highlighter$Highlight, highlight, h->get(i));
					int32_t hStart = $nc(highlight)->getStartOffset();
					int32_t hEnd = highlight->getEndOffset();
					if (hStart > p1 || hEnd < p0) {
						continue;
					}
					if (!$SwingUtilities2::useSelectedTextColor(highlight, tc)) {
						continue;
					}
					if (hStart <= p0 && hEnd >= p1) {
						paintTextUsingColor(g, a, selFG, p0, p1);
						paintedText = true;
						break;
					}
					if (!initialized) {
						initSelections(p0, p1);
						initialized = true;
					}
					hStart = $Math::max(p0, hStart);
					hEnd = $Math::min(p1, hEnd);
					paintTextUsingColor(g, a, selFG, hStart, hEnd);
					++(*$nc(this->selections))[hStart - p0];
					--(*$nc(this->selections))[hEnd - p0];
					++viewSelectionCount;
				}
				if (!paintedText && viewSelectionCount > 0) {
					int32_t curPos = -1;
					int32_t startPos = 0;
					int32_t viewLen = p1 - p0;
					while (curPos++ < viewLen) {
						while (curPos < viewLen && $nc(this->selections)->get(curPos) == 0) {
							++curPos;
						}
						if (startPos != curPos) {
							paintTextUsingColor(g, a, fg, p0 + startPos, p0 + curPos);
						}
						int32_t checkSum = 0;
						while (curPos < viewLen && (checkSum += $nc(this->selections)->get(curPos)) != 0) {
							++curPos;
						}
						startPos = curPos;
					}
					paintedText = true;
				}
			}
		}
	}
	if (!paintedText) {
		paintTextUsingColor(g, a, fg, p0, p1);
	}
}

void GlyphView::paintTextUsingColor($Graphics* g, $Shape* a, $Color* c, int32_t p0, int32_t p1) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->setColor(c);
	$nc(this->painter)->paint(this, g, a, p0, p1);
	bool underline = isUnderline();
	bool strike = isStrikeThrough();
	if (underline || strike) {
		$var($Rectangle, alloc, ($instanceOf($Rectangle, a)) ? $cast($Rectangle, a) : $nc(a)->getBounds());
		$var($View, parent, getParent());
		if ((parent != nullptr) && (parent->getEndOffset() == p1)) {
			$var($Segment, s, getText(p0, p1));
			while ($Character::isWhitespace($nc(s)->last())) {
				p1 -= 1;
				$nc(s)->count -= 1;
			}
			$SegmentCache::releaseSharedSegment(s);
		}
		int32_t x0 = $nc(alloc)->x;
		int32_t p = getStartOffset();
		if (p != p0) {
			x0 += $cast(int32_t, $nc(this->painter)->getSpan(this, p, p0, $(getTabExpander()), (float)x0));
		}
		int32_t x1 = x0 + $cast(int32_t, $nc(this->painter)->getSpan(this, p0, p1, $(getTabExpander()), (float)x0));
		int32_t var$0 = alloc->y;
		float var$2 = $nc(this->painter)->getHeight(this);
		int32_t var$1 = $cast(int32_t, (var$2 - $nc(this->painter)->getDescent(this)));
		int32_t y = var$0 + var$1;
		if (underline) {
			int32_t yTmp = y + 1;
			g->drawLine(x0, yTmp, x1, yTmp);
		}
		if (strike) {
			int32_t yTmp = y - $cast(int32_t, ($nc(this->painter)->getAscent(this) * 0.3f));
			g->drawLine(x0, yTmp, x1, yTmp);
		}
	}
}

float GlyphView::getMinimumSpan(int32_t axis) {
	$useLocalCurrentObjectStackCache();
	switch (axis) {
	case $View::X_AXIS:
		{
			if (this->minimumSpan < 0) {
				this->minimumSpan = (float)0;
				int32_t p0 = getStartOffset();
				int32_t p1 = getEndOffset();
				while (p1 > p0) {
					int32_t breakSpot = getBreakSpot(p0, p1);
					if (breakSpot == $BreakIterator::DONE) {
						breakSpot = p0;
					}
					this->minimumSpan = $Math::max(this->minimumSpan, getPartialSpan(breakSpot, p1));
					p1 = breakSpot - 1;
				}
			}
			return this->minimumSpan;
		}
	case $View::Y_AXIS:
		{
			return $View::getMinimumSpan(axis);
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Invalid axis: "_s, $$str(axis)}));
		}
	}
}

float GlyphView::getPreferredSpan(int32_t axis) {
	$useLocalCurrentObjectStackCache();
	if (this->impliedCR) {
		return (float)0;
	}
	checkPainter();
	int32_t p0 = getStartOffset();
	int32_t p1 = getEndOffset();
	{
		float h = 0;
		switch (axis) {
		case $View::X_AXIS:
			{
				if (this->skipWidth) {
					return (float)0;
				}
				return $nc(this->painter)->getSpan(this, p0, p1, this->expander, (float)this->x);
			}
		case $View::Y_AXIS:
			{
				h = $nc(this->painter)->getHeight(this);
				if (isSuperscript()) {
					h += h / 3;
				}
				return h;
			}
		default:
			{
				$throwNew($IllegalArgumentException, $$str({"Invalid axis: "_s, $$str(axis)}));
			}
		}
	}
}

float GlyphView::getAlignment(int32_t axis) {
	checkPainter();
	if (axis == $View::Y_AXIS) {
		bool sup = isSuperscript();
		bool sub = isSubscript();
		float h = $nc(this->painter)->getHeight(this);
		float d = $nc(this->painter)->getDescent(this);
		float a = $nc(this->painter)->getAscent(this);
		float align = 0.0;
		if (sup) {
			align = 1.0f;
		} else if (sub) {
			align = (h > 0) ? (h - (d + (a / 2))) / h : (float)0;
		} else {
			align = (h > 0) ? (h - d) / h : (float)0;
		}
		return align;
	}
	return $View::getAlignment(axis);
}

$Shape* GlyphView::modelToView(int32_t pos, $Shape* a, $Position$Bias* b) {
	checkPainter();
	return $nc(this->painter)->modelToView(this, pos, b, a);
}

int32_t GlyphView::viewToModel(float x, float y, $Shape* a, $Position$BiasArray* biasReturn) {
	checkPainter();
	return $nc(this->painter)->viewToModel(this, x, y, a, biasReturn);
}

int32_t GlyphView::getBreakWeight(int32_t axis, float pos, float len) {
	if (axis == $View::X_AXIS) {
		checkPainter();
		int32_t p0 = getStartOffset();
		int32_t p1 = $nc(this->painter)->getBoundedPosition(this, p0, pos, len);
		return p1 == p0 ? $View::BadBreakWeight : getBreakSpot(p0, p1) != $BreakIterator::DONE ? $View::ExcellentBreakWeight : $View::GoodBreakWeight;
	}
	return $View::getBreakWeight(axis, pos, len);
}

$View* GlyphView::breakView(int32_t axis, int32_t p0, float pos, float len) {
	if (axis == $View::X_AXIS) {
		checkPainter();
		int32_t p1 = $nc(this->painter)->getBoundedPosition(this, p0, pos, len);
		int32_t breakSpot = getBreakSpot(p0, p1);
		if (breakSpot != -1) {
			p1 = breakSpot;
		}
		bool var$0 = p0 == getStartOffset();
		if (var$0 && p1 == getEndOffset()) {
			return this;
		}
		$var(GlyphView, v, $cast(GlyphView, createFragment(p0, p1)));
		$nc(v)->x = $cast(int32_t, pos);
		return v;
	}
	return this;
}

int32_t GlyphView::getBreakSpot(int32_t p0, int32_t p1) {
	$useLocalCurrentObjectStackCache();
	if (this->breakSpots == nullptr) {
		int32_t start = getStartOffset();
		int32_t end = getEndOffset();
		$var($ints, bs, $new($ints, end + 1 - start));
		int32_t ix = 0;
		$var($Element, parent, $nc($(getElement()))->getParentElement());
		int32_t pstart = (parent == nullptr ? start : $nc(parent)->getStartOffset());
		int32_t pend = (parent == nullptr ? end : parent->getEndOffset());
		$var($Segment, s, getText(pstart, pend));
		$nc(s)->first();
		$var($BreakIterator, breaker, getBreaker());
		$nc(breaker)->setText(static_cast<$CharacterIterator*>(s));
		int32_t startFrom = end + (pend > end ? 1 : 0);
		for (;;) {
			startFrom = breaker->preceding(s->offset + (startFrom - pstart)) + (pstart - s->offset);
			if (startFrom > start) {
				bs->set(ix++, startFrom);
			} else {
				break;
			}
		}
		$SegmentCache::releaseSharedSegment(s);
		$set(this, breakSpots, $new($ints, ix));
		$System::arraycopy(bs, 0, this->breakSpots, 0, ix);
	}
	int32_t breakSpot = $BreakIterator::DONE;
	for (int32_t i = 0; i < $nc(this->breakSpots)->length; ++i) {
		int32_t bsp = $nc(this->breakSpots)->get(i);
		if (bsp <= p1) {
			if (bsp > p0) {
				breakSpot = bsp;
			}
			break;
		}
	}
	return breakSpot;
}

$BreakIterator* GlyphView::getBreaker() {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, getDocument());
	$init($Boolean);
	$init($AbstractDocument);
	if ((doc != nullptr) && $nc($Boolean::TRUE)->equals($(doc->getProperty($AbstractDocument::MultiByteProperty)))) {
		$var($Container, c, getContainer());
		$var($Locale, locale, c == nullptr ? $Locale::getDefault() : $nc(c)->getLocale());
		return $BreakIterator::getLineInstance(locale);
	} else {
		return $new($WhitespaceBasedBreakIterator);
	}
}

$View* GlyphView::createFragment(int32_t p0, int32_t p1) {
	$useLocalCurrentObjectStackCache();
	checkPainter();
	$var($Element, elem, getElement());
	$var(GlyphView, v, $cast(GlyphView, clone()));
	$nc(v)->offset = p0 - $nc(elem)->getStartOffset();
	v->length = p1 - p0;
	$set(v, painter, $nc(this->painter)->getPainter(v, p0, p1));
	$set(v, justificationInfo, nullptr);
	return v;
}

int32_t GlyphView::getNextVisualPositionFrom(int32_t pos, $Position$Bias* b, $Shape* a, int32_t direction, $Position$BiasArray* biasRet) {
	if (pos < -1 || pos > $nc($(getDocument()))->getLength()) {
		$throwNew($BadLocationException, "invalid position"_s, pos);
	}
	return $nc(this->painter)->getNextVisualPositionFrom(this, pos, b, a, direction, biasRet);
}

void GlyphView::insertUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	$set(this, justificationInfo, nullptr);
	$set(this, breakSpots, nullptr);
	this->minimumSpan = (float)-1;
	syncCR();
	preferenceChanged(nullptr, true, false);
}

void GlyphView::removeUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	$set(this, justificationInfo, nullptr);
	$set(this, breakSpots, nullptr);
	this->minimumSpan = (float)-1;
	syncCR();
	preferenceChanged(nullptr, true, false);
}

void GlyphView::changedUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	this->minimumSpan = (float)-1;
	syncCR();
	preferenceChanged(nullptr, true, true);
}

void GlyphView::syncCR() {
	$useLocalCurrentObjectStackCache();
	if (this->impliedCR) {
		$var($Element, parent, $nc($(getElement()))->getParentElement());
		this->impliedCR = (parent != nullptr && parent->getElementCount() > 1);
	}
}

void GlyphView::updateAfterChange() {
	$set(this, breakSpots, nullptr);
}

$GlyphView$JustificationInfo* GlyphView::getJustificationInfo(int32_t rowStartOffset) {
	$useLocalCurrentObjectStackCache();
	if (this->justificationInfo != nullptr) {
		return this->justificationInfo;
	}
	int32_t TRAILING = 0;
	int32_t CONTENT = 1;
	int32_t SPACES = 2;
	int32_t startOffset = getStartOffset();
	int32_t endOffset = getEndOffset();
	$var($Segment, segment, getText(startOffset, endOffset));
	int32_t txtOffset = $nc(segment)->offset;
	int32_t txtEnd = segment->offset + segment->count - 1;
	int32_t startContentPosition = txtEnd + 1;
	int32_t endContentPosition = txtOffset - 1;
	int32_t lastTabPosition = txtOffset - 1;
	int32_t trailingSpaces = 0;
	int32_t contentSpaces = 0;
	int32_t leadingSpaces = 0;
	bool hasTab = false;
	$var($BitSet, spaceMap, $new($BitSet, endOffset - startOffset + 1));
	{
		int32_t i = txtEnd;
		int32_t state = TRAILING;
		for (; i >= txtOffset; --i) {
			if (u' ' == $nc(segment->array)->get(i)) {
				spaceMap->set(i - txtOffset);
				if (state == TRAILING) {
					++trailingSpaces;
				} else if (state == CONTENT) {
					state = SPACES;
					leadingSpaces = 1;
				} else if (state == SPACES) {
					++leadingSpaces;
				}
			} else if (u'\t' == $nc(segment->array)->get(i)) {
				hasTab = true;
				break;
			} else {
				if (state == TRAILING) {
					if (u'\n' != $nc(segment->array)->get(i) && u'\r' != $nc(segment->array)->get(i)) {
						state = CONTENT;
						endContentPosition = i;
					}
				} else if (state == CONTENT) {
				} else if (state == SPACES) {
					contentSpaces += leadingSpaces;
					leadingSpaces = 0;
				}
				startContentPosition = i;
			}
		}
	}
	$SegmentCache::releaseSharedSegment(segment);
	int32_t startJustifiableContent = -1;
	if (startContentPosition < txtEnd) {
		startJustifiableContent = startContentPosition - txtOffset;
	}
	int32_t endJustifiableContent = -1;
	if (endContentPosition > txtOffset) {
		endJustifiableContent = endContentPosition - txtOffset;
	}
	$set(this, justificationInfo, $new($GlyphView$JustificationInfo, startJustifiableContent, endJustifiableContent, leadingSpaces, contentSpaces, trailingSpaces, hasTab, spaceMap));
	return this->justificationInfo;
}

GlyphView::GlyphView() {
}

$Class* GlyphView::load$($String* name, bool initialize) {
	$loadClass(GlyphView, name, initialize, &_GlyphView_ClassInfo_, allocate$GlyphView);
	return class$;
}

$Class* GlyphView::class$ = nullptr;

		} // text
	} // swing
} // javax