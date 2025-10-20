#include <javax/swing/text/WrappedPlainView.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/DocumentEvent$ElementChange.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/Highlighter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/PlainDocument.h>
#include <javax/swing/text/PlainView$FPMethodArgs.h>
#include <javax/swing/text/PlainView.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/SegmentCache.h>
#include <javax/swing/text/StateInvariantError.h>
#include <javax/swing/text/TabExpander.h>
#include <javax/swing/text/Utilities.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <javax/swing/text/WrappedPlainView$WrappedLine.h>
#include <jcpp.h>

#undef GNNII
#undef IIGNN
#undef Y_AXIS

using $ElementArray = $Array<::javax::swing::text::Element>;
using $ViewArray = $Array<::javax::swing::text::View>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentEvent$ElementChange = ::javax::swing::event::DocumentEvent$ElementChange;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $BoxView = ::javax::swing::text::BoxView;
using $Caret = ::javax::swing::text::Caret;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $Highlighter = ::javax::swing::text::Highlighter;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $PlainDocument = ::javax::swing::text::PlainDocument;
using $PlainView = ::javax::swing::text::PlainView;
using $PlainView$FPMethodArgs = ::javax::swing::text::PlainView$FPMethodArgs;
using $Segment = ::javax::swing::text::Segment;
using $SegmentCache = ::javax::swing::text::SegmentCache;
using $StateInvariantError = ::javax::swing::text::StateInvariantError;
using $TabExpander = ::javax::swing::text::TabExpander;
using $Utilities = ::javax::swing::text::Utilities;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;
using $WrappedPlainView$WrappedLine = ::javax::swing::text::WrappedPlainView$WrappedLine;

namespace javax {
	namespace swing {
		namespace text {

$NamedAttribute WrappedPlainView_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _WrappedPlainView_MethodAnnotations_drawLine6[] = {
	{"Ljava/lang/Deprecated;", WrappedPlainView_Attribute_var$0},
	{}
};

$NamedAttribute WrappedPlainView_Attribute_var$1[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _WrappedPlainView_MethodAnnotations_drawSelectedText9[] = {
	{"Ljava/lang/Deprecated;", WrappedPlainView_Attribute_var$1},
	{}
};

$NamedAttribute WrappedPlainView_Attribute_var$2[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _WrappedPlainView_MethodAnnotations_drawUnselectedText13[] = {
	{"Ljava/lang/Deprecated;", WrappedPlainView_Attribute_var$2},
	{}
};

$FieldInfo _WrappedPlainView_FieldInfo_[] = {
	{"metrics", "Ljava/awt/FontMetrics;", nullptr, 0, $field(WrappedPlainView, metrics)},
	{"lineBuffer", "Ljavax/swing/text/Segment;", nullptr, 0, $field(WrappedPlainView, lineBuffer)},
	{"widthChanging", "Z", nullptr, 0, $field(WrappedPlainView, widthChanging)},
	{"tabBase", "I", nullptr, 0, $field(WrappedPlainView, tabBase)},
	{"tabSize", "F", nullptr, 0, $field(WrappedPlainView, tabSize)},
	{"wordWrap", "Z", nullptr, 0, $field(WrappedPlainView, wordWrap)},
	{"sel0", "I", nullptr, 0, $field(WrappedPlainView, sel0)},
	{"sel1", "I", nullptr, 0, $field(WrappedPlainView, sel1)},
	{"unselected", "Ljava/awt/Color;", nullptr, 0, $field(WrappedPlainView, unselected)},
	{"selected", "Ljava/awt/Color;", nullptr, 0, $field(WrappedPlainView, selected)},
	{"drawLineOverridden", "Z", nullptr, $PRIVATE | $FINAL, $field(WrappedPlainView, drawLineOverridden)},
	{"drawSelectedTextOverridden", "Z", nullptr, $PRIVATE | $FINAL, $field(WrappedPlainView, drawSelectedTextOverridden)},
	{"drawUnselectedTextOverridden", "Z", nullptr, $PRIVATE | $FINAL, $field(WrappedPlainView, drawUnselectedTextOverridden)},
	{"useFloatingPointAPI", "Z", nullptr, $PRIVATE | $FINAL, $field(WrappedPlainView, useFloatingPointAPI)},
	{}
};

$MethodInfo _WrappedPlainView_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(WrappedPlainView::*)($Element*)>(&WrappedPlainView::init$))},
	{"<init>", "(Ljavax/swing/text/Element;Z)V", nullptr, $PUBLIC, $method(static_cast<void(WrappedPlainView::*)($Element*,bool)>(&WrappedPlainView::init$))},
	{"calculateBreakPosition", "(II)I", nullptr, $PROTECTED},
	{"callDrawSelectedText", "(Ljava/awt/Graphics;FFII)F", nullptr, $PRIVATE, $method(static_cast<float(WrappedPlainView::*)($Graphics*,float,float,int32_t,int32_t)>(&WrappedPlainView::callDrawSelectedText)), "javax.swing.text.BadLocationException"},
	{"callDrawUnselectedText", "(Ljava/awt/Graphics;FFII)F", nullptr, $PRIVATE, $method(static_cast<float(WrappedPlainView::*)($Graphics*,float,float,int32_t,int32_t)>(&WrappedPlainView::callDrawUnselectedText)), "javax.swing.text.BadLocationException"},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"drawLine", "(IILjava/awt/Graphics;II)V", nullptr, $PROTECTED | $DEPRECATED, nullptr, nullptr, nullptr, _WrappedPlainView_MethodAnnotations_drawLine6},
	{"drawLine", "(IILjava/awt/Graphics2D;FF)V", nullptr, $PROTECTED},
	{"drawLineImpl", "(IILjava/awt/Graphics;FFZ)V", nullptr, $PRIVATE, $method(static_cast<void(WrappedPlainView::*)(int32_t,int32_t,$Graphics*,float,float,bool)>(&WrappedPlainView::drawLineImpl))},
	{"drawSelectedText", "(Ljava/awt/Graphics;IIII)I", nullptr, $PROTECTED | $DEPRECATED, nullptr, "javax.swing.text.BadLocationException", nullptr, _WrappedPlainView_MethodAnnotations_drawSelectedText9},
	{"drawSelectedText", "(Ljava/awt/Graphics2D;FFII)F", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException"},
	{"drawSelectedTextImpl", "(Ljava/awt/Graphics;FFIIZ)F", nullptr, $PRIVATE, $method(static_cast<float(WrappedPlainView::*)($Graphics*,float,float,int32_t,int32_t,bool)>(&WrappedPlainView::drawSelectedTextImpl)), "javax.swing.text.BadLocationException"},
	{"drawText", "(Ljavax/swing/text/Element;IILjava/awt/Graphics;FF)F", nullptr, $PRIVATE, $method(static_cast<float(WrappedPlainView::*)($Element*,int32_t,int32_t,$Graphics*,float,float)>(&WrappedPlainView::drawText)), "javax.swing.text.BadLocationException"},
	{"drawUnselectedText", "(Ljava/awt/Graphics;IIII)I", nullptr, $PROTECTED | $DEPRECATED, nullptr, "javax.swing.text.BadLocationException", nullptr, _WrappedPlainView_MethodAnnotations_drawUnselectedText13},
	{"drawUnselectedText", "(Ljava/awt/Graphics2D;FFII)F", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException"},
	{"drawUnselectedTextImpl", "(Ljava/awt/Graphics;FFIIZ)F", nullptr, $PRIVATE, $method(static_cast<float(WrappedPlainView::*)($Graphics*,float,float,int32_t,int32_t,bool)>(&WrappedPlainView::drawUnselectedTextImpl)), "javax.swing.text.BadLocationException"},
	{"getLineBuffer", "()Ljavax/swing/text/Segment;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$Segment*(WrappedPlainView::*)()>(&WrappedPlainView::getLineBuffer))},
	{"getMaximumSpan", "(I)F", nullptr, $PUBLIC},
	{"getMinimumSpan", "(I)F", nullptr, $PUBLIC},
	{"getPreferredSpan", "(I)F", nullptr, $PUBLIC},
	{"getTabSize", "()I", nullptr, $PROTECTED},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"loadChildren", "(Ljavax/swing/text/ViewFactory;)V", nullptr, $PROTECTED},
	{"loadText", "(Ljavax/swing/text/Segment;II)V", nullptr, $FINAL, $method(static_cast<void(WrappedPlainView::*)($Segment*,int32_t,int32_t)>(&WrappedPlainView::loadText))},
	{"nextTabStop", "(FI)F", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"setSize", "(FF)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateChildren", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;)V", nullptr, 0},
	{"updateMetrics", "()V", nullptr, $FINAL, $method(static_cast<void(WrappedPlainView::*)()>(&WrappedPlainView::updateMetrics))},
	{}
};

$InnerClassInfo _WrappedPlainView_InnerClassesInfo_[] = {
	{"javax.swing.text.WrappedPlainView$WrappedLine", "javax.swing.text.WrappedPlainView", "WrappedLine", 0},
	{}
};

$ClassInfo _WrappedPlainView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.WrappedPlainView",
	"javax.swing.text.BoxView",
	"javax.swing.text.TabExpander",
	_WrappedPlainView_FieldInfo_,
	_WrappedPlainView_MethodInfo_,
	nullptr,
	nullptr,
	_WrappedPlainView_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.WrappedPlainView$WrappedLine"
};

$Object* allocate$WrappedPlainView($Class* clazz) {
	return $of($alloc(WrappedPlainView));
}

int32_t WrappedPlainView::hashCode() {
	 return this->$BoxView::hashCode();
}

bool WrappedPlainView::equals(Object$* arg0) {
	 return this->$BoxView::equals(arg0);
}

$Object* WrappedPlainView::clone() {
	 return this->$BoxView::clone();
}

$String* WrappedPlainView::toString() {
	 return this->$BoxView::toString();
}

void WrappedPlainView::finalize() {
	this->$BoxView::finalize();
}

void WrappedPlainView::init$($Element* elem) {
	WrappedPlainView::init$(elem, false);
}

void WrappedPlainView::init$($Element* elem, bool wordWrap) {
	$BoxView::init$(elem, $View::Y_AXIS);
	$init($PlainView$FPMethodArgs);
	this->drawLineOverridden = $PlainView::getFPMethodOverridden($of(this)->getClass(), "drawLine"_s, $PlainView$FPMethodArgs::IIGNN);
	this->drawSelectedTextOverridden = $PlainView::getFPMethodOverridden($of(this)->getClass(), "drawSelectedText"_s, $PlainView$FPMethodArgs::GNNII);
	this->drawUnselectedTextOverridden = $PlainView::getFPMethodOverridden($of(this)->getClass(), "drawUnselectedText"_s, $PlainView$FPMethodArgs::GNNII);
	this->useFloatingPointAPI = this->drawUnselectedTextOverridden || this->drawSelectedTextOverridden;
	this->wordWrap = wordWrap;
}

int32_t WrappedPlainView::getTabSize() {
	$useLocalCurrentObjectStackCache();
	$init($PlainDocument);
	$var($Integer, i, $cast($Integer, $nc($(getDocument()))->getProperty($PlainDocument::tabSizeAttribute)));
	int32_t size = (i != nullptr) ? $nc(i)->intValue() : 8;
	return size;
}

void WrappedPlainView::drawLine(int32_t p0, int32_t p1, $Graphics* g, int32_t x, int32_t y) {
	drawLineImpl(p0, p1, g, (float)x, (float)y, false);
}

void WrappedPlainView::drawLineImpl(int32_t p0, int32_t p1, $Graphics* g, float x, float y, bool useFPAPI) {
	$useLocalCurrentObjectStackCache();
	$var($Element, lineMap, getElement());
	$var($Element, line, $nc(lineMap)->getElement(lineMap->getElementIndex(p0)));
	$var($Element, elem, nullptr);
	try {
		if ($nc(line)->isLeaf()) {
			drawText(line, p0, p1, g, x, y);
		} else {
			int32_t idx = line->getElementIndex(p0);
			int32_t lastIdx = line->getElementIndex(p1);
			for (; idx <= lastIdx; ++idx) {
				$assign(elem, line->getElement(idx));
				int32_t start = $Math::max($nc(elem)->getStartOffset(), p0);
				int32_t end = $Math::min($nc(elem)->getEndOffset(), p1);
				x = drawText(elem, start, end, g, x, y);
			}
		}
	} catch ($BadLocationException&) {
		$var($BadLocationException, e, $catch());
		$throwNew($StateInvariantError, $$str({"Can\'t render: "_s, $$str(p0), ","_s, $$str(p1)}));
	}
}

void WrappedPlainView::drawLine(int32_t p0, int32_t p1, $Graphics2D* g, float x, float y) {
	drawLineImpl(p0, p1, g, x, y, true);
}

float WrappedPlainView::drawText($Element* elem, int32_t p0, int32_t p1, $Graphics* g, float x, float y) {
	$useLocalCurrentObjectStackCache();
	p1 = $Math::min($nc($(getDocument()))->getLength(), p1);
	$var($AttributeSet, attr, $nc(elem)->getAttributes());
	if ($Utilities::isComposedTextAttributeDefined(attr)) {
		$nc(g)->setColor(this->unselected);
		$var($AttributeSet, var$0, attr);
		$var($Graphics, var$1, g);
		float var$2 = x;
		float var$3 = y;
		int32_t var$4 = p0 - elem->getStartOffset();
		x = $Utilities::drawComposedText(static_cast<$View*>(this), var$0, var$1, var$2, var$3, var$4, p1 - elem->getStartOffset());
	} else if (this->sel0 == this->sel1 || this->selected == this->unselected) {
		x = callDrawUnselectedText(g, x, y, p0, p1);
	} else if ((p0 >= this->sel0 && p0 <= this->sel1) && (p1 >= this->sel0 && p1 <= this->sel1)) {
		x = callDrawSelectedText(g, x, y, p0, p1);
	} else if (this->sel0 >= p0 && this->sel0 <= p1) {
		if (this->sel1 >= p0 && this->sel1 <= p1) {
			x = callDrawUnselectedText(g, x, y, p0, this->sel0);
			x = callDrawSelectedText(g, x, y, this->sel0, this->sel1);
			x = callDrawUnselectedText(g, x, y, this->sel1, p1);
		} else {
			x = callDrawUnselectedText(g, x, y, p0, this->sel0);
			x = callDrawSelectedText(g, x, y, this->sel0, p1);
		}
	} else if (this->sel1 >= p0 && this->sel1 <= p1) {
		x = callDrawSelectedText(g, x, y, p0, this->sel1);
		x = callDrawUnselectedText(g, x, y, this->sel1, p1);
	} else {
		x = callDrawUnselectedText(g, x, y, p0, p1);
	}
	return x;
}

int32_t WrappedPlainView::drawUnselectedText($Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1) {
	return $cast(int32_t, drawUnselectedTextImpl(g, (float)x, (float)y, p0, p1, false));
}

float WrappedPlainView::callDrawUnselectedText($Graphics* g, float x, float y, int32_t p0, int32_t p1) {
	return this->drawUnselectedTextOverridden && $instanceOf($Graphics2D, g) ? drawUnselectedText($cast($Graphics2D, g), x, y, p0, p1) : (float)drawUnselectedText(g, $cast(int32_t, x), $cast(int32_t, y), p0, p1);
}

float WrappedPlainView::drawUnselectedTextImpl($Graphics* g, float x, float y, int32_t p0, int32_t p1, bool useFPAPI) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->setColor(this->unselected);
	$var($Document, doc, getDocument());
	$var($Segment, segment, $SegmentCache::getSharedSegment());
	$nc(doc)->getText(p0, p1 - p0, segment);
	float ret = $Utilities::drawTabbedText(this, segment, x, y, g, this, p0, nullptr, useFPAPI);
	$SegmentCache::releaseSharedSegment(segment);
	return ret;
}

float WrappedPlainView::drawUnselectedText($Graphics2D* g, float x, float y, int32_t p0, int32_t p1) {
	return drawUnselectedTextImpl(g, x, y, p0, p1, true);
}

int32_t WrappedPlainView::drawSelectedText($Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1) {
	return $cast(int32_t, drawSelectedTextImpl(g, (float)x, (float)y, p0, p1, false));
}

float WrappedPlainView::callDrawSelectedText($Graphics* g, float x, float y, int32_t p0, int32_t p1) {
	return this->drawSelectedTextOverridden && $instanceOf($Graphics2D, g) ? drawSelectedText($cast($Graphics2D, g), x, y, p0, p1) : (float)drawSelectedText(g, $cast(int32_t, x), $cast(int32_t, y), p0, p1);
}

float WrappedPlainView::drawSelectedTextImpl($Graphics* g, float x, float y, int32_t p0, int32_t p1, bool useFPAPI) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->setColor(this->selected);
	$var($Document, doc, getDocument());
	$var($Segment, segment, $SegmentCache::getSharedSegment());
	$nc(doc)->getText(p0, p1 - p0, segment);
	float ret = $Utilities::drawTabbedText(this, segment, x, y, g, this, p0, nullptr, useFPAPI);
	$SegmentCache::releaseSharedSegment(segment);
	return ret;
}

float WrappedPlainView::drawSelectedText($Graphics2D* g, float x, float y, int32_t p0, int32_t p1) {
	return drawSelectedTextImpl(g, x, y, p0, p1, true);
}

$Segment* WrappedPlainView::getLineBuffer() {
	if (this->lineBuffer == nullptr) {
		$set(this, lineBuffer, $new($Segment));
	}
	return this->lineBuffer;
}

int32_t WrappedPlainView::calculateBreakPosition(int32_t p0, int32_t p1) {
	int32_t p = 0;
	$var($Segment, segment, $SegmentCache::getSharedSegment());
	loadText(segment, p0, p1);
	int32_t currentWidth = getWidth();
	if (this->wordWrap) {
		p = p0 + $Utilities::getBreakLocation(segment, this->metrics, (float)this->tabBase, (float)(this->tabBase + currentWidth), static_cast<$TabExpander*>(this), p0);
	} else {
		p = p0 + $Utilities::getTabbedTextOffset(segment, this->metrics, (float)this->tabBase, (float)(this->tabBase + currentWidth), static_cast<$TabExpander*>(this), p0, false);
	}
	$SegmentCache::releaseSharedSegment(segment);
	return p;
}

void WrappedPlainView::loadChildren($ViewFactory* f) {
	$useLocalCurrentObjectStackCache();
	$var($Element, e, getElement());
	int32_t n = $nc(e)->getElementCount();
	if (n > 0) {
		$var($ViewArray, added, $new($ViewArray, n));
		for (int32_t i = 0; i < n; ++i) {
			added->set(i, $$new($WrappedPlainView$WrappedLine, this, $(e->getElement(i))));
		}
		replace(0, 0, added);
	}
}

void WrappedPlainView::updateChildren($DocumentEvent* e, $Shape* a) {
	$useLocalCurrentObjectStackCache();
	$var($Element, elem, getElement());
	$var($DocumentEvent$ElementChange, ec, $nc(e)->getChange(elem));
	if (ec != nullptr) {
		$var($ElementArray, removedElems, ec->getChildrenRemoved());
		$var($ElementArray, addedElems, ec->getChildrenAdded());
		$var($ViewArray, added, $new($ViewArray, $nc(addedElems)->length));
		for (int32_t i = 0; i < addedElems->length; ++i) {
			added->set(i, $$new($WrappedPlainView$WrappedLine, this, addedElems->get(i)));
		}
		replace(ec->getIndex(), $nc(removedElems)->length, added);
		if (a != nullptr) {
			preferenceChanged(nullptr, true, true);
			$nc($(getContainer()))->repaint();
		}
	}
	updateMetrics();
}

void WrappedPlainView::loadText($Segment* segment, int32_t p0, int32_t p1) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($Document, doc, getDocument());
		$nc(doc)->getText(p0, p1 - p0, segment);
	} catch ($BadLocationException&) {
		$var($BadLocationException, bl, $catch());
		$throwNew($StateInvariantError, "Can\'t get line text"_s);
	}
}

void WrappedPlainView::updateMetrics() {
	$useLocalCurrentObjectStackCache();
	$var($Component, host, getContainer());
	$var($Font, f, $nc(host)->getFont());
	$set(this, metrics, host->getFontMetrics(f));
	if (this->useFloatingPointAPI) {
		$var($FontRenderContext, frc, $nc(this->metrics)->getFontRenderContext());
		float tabWidth = (float)$nc($($nc(f)->getStringBounds("m"_s, frc)))->getWidth();
		this->tabSize = getTabSize() * tabWidth;
	} else {
		int32_t var$0 = getTabSize();
		this->tabSize = (float)(var$0 * $nc(this->metrics)->charWidth(u'm'));
	}
}

float WrappedPlainView::nextTabStop(float x, int32_t tabOffset) {
	if (this->tabSize == 0) {
		return x;
	}
	int32_t ntabs = $cast(int32_t, ((x - this->tabBase) / this->tabSize));
	return this->tabBase + ((ntabs + 1) * this->tabSize);
}

void WrappedPlainView::paint($Graphics* g, $Shape* a) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, alloc, $cast($Rectangle, a));
	this->tabBase = $nc(alloc)->x;
	$var($JTextComponent, host, $cast($JTextComponent, getContainer()));
	this->sel0 = $nc(host)->getSelectionStart();
	this->sel1 = host->getSelectionEnd();
	$set(this, unselected, (host->isEnabled()) ? host->getForeground() : host->getDisabledTextColor());
	$var($Caret, c, host->getCaret());
	bool var$0 = $nc(c)->isSelectionVisible();
	$set(this, selected, var$0 && host->getHighlighter() != nullptr ? host->getSelectedTextColor() : this->unselected);
	$nc(g)->setFont($(host->getFont()));
	$BoxView::paint(g, a);
}

void WrappedPlainView::setSize(float width, float height) {
	updateMetrics();
	if ($cast(int32_t, width) != getWidth()) {
		preferenceChanged(nullptr, true, true);
		this->widthChanging = true;
	}
	$BoxView::setSize(width, height);
	this->widthChanging = false;
}

float WrappedPlainView::getPreferredSpan(int32_t axis) {
	updateMetrics();
	return $BoxView::getPreferredSpan(axis);
}

float WrappedPlainView::getMinimumSpan(int32_t axis) {
	updateMetrics();
	return $BoxView::getMinimumSpan(axis);
}

float WrappedPlainView::getMaximumSpan(int32_t axis) {
	updateMetrics();
	return $BoxView::getMaximumSpan(axis);
}

void WrappedPlainView::insertUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	$useLocalCurrentObjectStackCache();
	updateChildren(e, a);
	$var($Rectangle, alloc, ((a != nullptr) && isAllocationValid()) ? getInsideAllocation(a) : ($Rectangle*)nullptr);
	int32_t pos = $nc(e)->getOffset();
	$var($View, v, getViewAtPosition(pos, alloc));
	if (v != nullptr) {
		v->insertUpdate(e, alloc, f);
	}
}

void WrappedPlainView::removeUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	$useLocalCurrentObjectStackCache();
	updateChildren(e, a);
	$var($Rectangle, alloc, ((a != nullptr) && isAllocationValid()) ? getInsideAllocation(a) : ($Rectangle*)nullptr);
	int32_t pos = $nc(e)->getOffset();
	$var($View, v, getViewAtPosition(pos, alloc));
	if (v != nullptr) {
		v->removeUpdate(e, alloc, f);
	}
}

void WrappedPlainView::changedUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	updateChildren(e, a);
}

WrappedPlainView::WrappedPlainView() {
}

$Class* WrappedPlainView::load$($String* name, bool initialize) {
	$loadClass(WrappedPlainView, name, initialize, &_WrappedPlainView_ClassInfo_, allocate$WrappedPlainView);
	return class$;
}

$Class* WrappedPlainView::class$ = nullptr;

		} // text
	} // swing
} // javax