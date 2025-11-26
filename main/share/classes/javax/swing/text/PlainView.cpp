#include <javax/swing/text/PlainView.h>

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
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Math.h>
#include <java/lang/Module.h>
#include <java/lang/ref/SoftReference.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/HashMap.h>
#include <java/util/Objects.h>
#include <javax/swing/event/DocumentEvent$ElementChange.h>
#include <javax/swing/event/DocumentEvent$EventType.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/Highlighter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/LayeredHighlighter.h>
#include <javax/swing/text/PlainDocument.h>
#include <javax/swing/text/PlainView$1.h>
#include <javax/swing/text/PlainView$FPMethodArgs.h>
#include <javax/swing/text/PlainView$FPMethodItem.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/SegmentCache.h>
#include <javax/swing/text/StateInvariantError.h>
#include <javax/swing/text/TabExpander.h>
#include <javax/swing/text/Utilities.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <jcpp.h>

#undef GNNII
#undef IGNN
#undef INSERT
#undef REMOVE
#undef X_AXIS
#undef Y_AXIS

using $ElementArray = $Array<::javax::swing::text::Element>;
using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
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
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $SoftReference = ::java::lang::ref::SoftReference;
using $Method = ::java::lang::reflect::Method;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $HashMap = ::java::util::HashMap;
using $Objects = ::java::util::Objects;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentEvent$ElementChange = ::javax::swing::event::DocumentEvent$ElementChange;
using $DocumentEvent$EventType = ::javax::swing::event::DocumentEvent$EventType;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Caret = ::javax::swing::text::Caret;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $Highlighter = ::javax::swing::text::Highlighter;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $LayeredHighlighter = ::javax::swing::text::LayeredHighlighter;
using $PlainDocument = ::javax::swing::text::PlainDocument;
using $PlainView$1 = ::javax::swing::text::PlainView$1;
using $PlainView$FPMethodArgs = ::javax::swing::text::PlainView$FPMethodArgs;
using $PlainView$FPMethodItem = ::javax::swing::text::PlainView$FPMethodItem;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $Segment = ::javax::swing::text::Segment;
using $SegmentCache = ::javax::swing::text::SegmentCache;
using $StateInvariantError = ::javax::swing::text::StateInvariantError;
using $TabExpander = ::javax::swing::text::TabExpander;
using $Utilities = ::javax::swing::text::Utilities;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;

namespace javax {
	namespace swing {
		namespace text {

$NamedAttribute PlainView_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _PlainView_MethodAnnotations_drawLine9[] = {
	{"Ljava/lang/Deprecated;", PlainView_Attribute_var$0},
	{}
};

$NamedAttribute PlainView_Attribute_var$1[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _PlainView_MethodAnnotations_drawSelectedText12[] = {
	{"Ljava/lang/Deprecated;", PlainView_Attribute_var$1},
	{}
};

$NamedAttribute PlainView_Attribute_var$2[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _PlainView_MethodAnnotations_drawUnselectedText15[] = {
	{"Ljava/lang/Deprecated;", PlainView_Attribute_var$2},
	{}
};

$FieldInfo _PlainView_FieldInfo_[] = {
	{"metrics", "Ljava/awt/FontMetrics;", nullptr, $PROTECTED, $field(PlainView, metrics)},
	{"longLine", "Ljavax/swing/text/Element;", nullptr, 0, $field(PlainView, longLine)},
	{"font", "Ljava/awt/Font;", nullptr, 0, $field(PlainView, font)},
	{"lineBuffer", "Ljavax/swing/text/Segment;", nullptr, 0, $field(PlainView, lineBuffer)},
	{"tabSize", "F", nullptr, 0, $field(PlainView, tabSize)},
	{"tabBase", "I", nullptr, 0, $field(PlainView, tabBase)},
	{"sel0", "I", nullptr, 0, $field(PlainView, sel0)},
	{"sel1", "I", nullptr, 0, $field(PlainView, sel1)},
	{"unselected", "Ljava/awt/Color;", nullptr, 0, $field(PlainView, unselected)},
	{"selected", "Ljava/awt/Color;", nullptr, 0, $field(PlainView, selected)},
	{"firstLineOffset", "I", nullptr, 0, $field(PlainView, firstLineOffset)},
	{"methodsOverriddenMapRef", "Ljava/lang/ref/SoftReference;", "Ljava/lang/ref/SoftReference<Ljava/util/HashMap<Ljavax/swing/text/PlainView$FPMethodItem;Ljava/lang/Boolean;>;>;", $PRIVATE | $STATIC, $staticField(PlainView, methodsOverriddenMapRef)},
	{"drawLineOverridden", "Z", nullptr, $FINAL, $field(PlainView, drawLineOverridden)},
	{"drawSelectedTextOverridden", "Z", nullptr, $FINAL, $field(PlainView, drawSelectedTextOverridden)},
	{"drawUnselectedTextOverridden", "Z", nullptr, $FINAL, $field(PlainView, drawUnselectedTextOverridden)},
	{"useFloatingPointAPI", "Z", nullptr, $FINAL, $field(PlainView, useFloatingPointAPI)},
	{}
};

$MethodInfo _PlainView_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(PlainView::*)($Element*)>(&PlainView::init$))},
	{"adjustPaintRegion", "(Ljava/awt/Shape;)Ljava/awt/Shape;", nullptr, 0},
	{"calculateLongestLine", "()V", nullptr, $PRIVATE, $method(static_cast<void(PlainView::*)()>(&PlainView::calculateLongestLine))},
	{"callDrawSelectedText", "(Ljava/awt/Graphics;FFII)F", nullptr, 0, nullptr, "javax.swing.text.BadLocationException"},
	{"callDrawUnselectedText", "(Ljava/awt/Graphics;FFII)F", nullptr, $PRIVATE, $method(static_cast<float(PlainView::*)($Graphics*,float,float,int32_t,int32_t)>(&PlainView::callDrawUnselectedText)), "javax.swing.text.BadLocationException"},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"checkFPMethodOverridden", "(Ljava/lang/Class;Ljava/lang/String;Ljavax/swing/text/PlainView$FPMethodArgs;)Z", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljavax/swing/text/PlainView$FPMethodArgs;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($Class*,$String*,$PlainView$FPMethodArgs*)>(&PlainView::checkFPMethodOverridden))},
	{"damageLineRange", "(IILjava/awt/Shape;Ljava/awt/Component;)V", nullptr, $PROTECTED},
	{"drawElement", "(ILjavax/swing/text/Element;Ljava/awt/Graphics;FF)F", nullptr, $PRIVATE, $method(static_cast<float(PlainView::*)(int32_t,$Element*,$Graphics*,float,float)>(&PlainView::drawElement)), "javax.swing.text.BadLocationException"},
	{"drawLine", "(ILjava/awt/Graphics;II)V", nullptr, $PROTECTED | $DEPRECATED, nullptr, nullptr, nullptr, _PlainView_MethodAnnotations_drawLine9},
	{"drawLine", "(ILjava/awt/Graphics2D;FF)V", nullptr, $PROTECTED},
	{"drawLineImpl", "(ILjava/awt/Graphics;FF)V", nullptr, $PRIVATE, $method(static_cast<void(PlainView::*)(int32_t,$Graphics*,float,float)>(&PlainView::drawLineImpl))},
	{"drawSelectedText", "(Ljava/awt/Graphics;IIII)I", nullptr, $PROTECTED | $DEPRECATED, nullptr, "javax.swing.text.BadLocationException", nullptr, _PlainView_MethodAnnotations_drawSelectedText12},
	{"drawSelectedText", "(Ljava/awt/Graphics2D;FFII)F", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException"},
	{"drawSelectedTextImpl", "(Ljava/awt/Graphics;FFIIZ)F", nullptr, $PRIVATE, $method(static_cast<float(PlainView::*)($Graphics*,float,float,int32_t,int32_t,bool)>(&PlainView::drawSelectedTextImpl)), "javax.swing.text.BadLocationException"},
	{"drawUnselectedText", "(Ljava/awt/Graphics;IIII)I", nullptr, $PROTECTED | $DEPRECATED, nullptr, "javax.swing.text.BadLocationException", nullptr, _PlainView_MethodAnnotations_drawUnselectedText15},
	{"drawUnselectedText", "(Ljava/awt/Graphics2D;FFII)F", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException"},
	{"drawUnselectedTextImpl", "(Ljava/awt/Graphics;FFIIZ)F", nullptr, $PRIVATE, $method(static_cast<float(PlainView::*)($Graphics*,float,float,int32_t,int32_t,bool)>(&PlainView::drawUnselectedTextImpl)), "javax.swing.text.BadLocationException"},
	{"getFPMethodOverridden", "(Ljava/lang/Class;Ljava/lang/String;Ljavax/swing/text/PlainView$FPMethodArgs;)Z", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljavax/swing/text/PlainView$FPMethodArgs;)Z", $STATIC, $method(static_cast<bool(*)($Class*,$String*,$PlainView$FPMethodArgs*)>(&PlainView::getFPMethodOverridden))},
	{"getLineBuffer", "()Ljavax/swing/text/Segment;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$Segment*(PlainView::*)()>(&PlainView::getLineBuffer))},
	{"getLineWidth", "(Ljavax/swing/text/Element;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(PlainView::*)($Element*)>(&PlainView::getLineWidth))},
	{"getPreferredSpan", "(I)F", nullptr, $PUBLIC},
	{"getTabSize", "()I", nullptr, $PROTECTED},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"isFPMethodOverridden", "(Ljava/lang/String;Ljava/lang/Class;[Ljava/lang/Class;[Ljava/lang/Class;)Z", "(Ljava/lang/String;Ljava/lang/Class<*>;[Ljava/lang/Class<*>;[Ljava/lang/Class<*>;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,$Class*,$ClassArray*,$ClassArray*)>(&PlainView::isFPMethodOverridden))},
	{"lineToRect", "(Ljava/awt/Shape;I)Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"modelToView", "(ILjava/awt/Shape;Ljavax/swing/text/Position$Bias;)Ljava/awt/Shape;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"nextTabStop", "(FI)F", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"setSize", "(FF)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateDamage", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PROTECTED},
	{"updateMetrics", "()V", nullptr, $PROTECTED},
	{"viewToModel", "(FFLjava/awt/Shape;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PlainView_InnerClassesInfo_[] = {
	{"javax.swing.text.PlainView$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"javax.swing.text.PlainView$FPMethodItem", "javax.swing.text.PlainView", "FPMethodItem", $PRIVATE | $STATIC},
	{"javax.swing.text.PlainView$FPMethodArgs", "javax.swing.text.PlainView", "FPMethodArgs", $STATIC | $FINAL | $ENUM},
	{"javax.swing.text.PlainView$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PlainView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.PlainView",
	"javax.swing.text.View",
	"javax.swing.text.TabExpander",
	_PlainView_FieldInfo_,
	_PlainView_MethodInfo_,
	nullptr,
	nullptr,
	_PlainView_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.PlainView$2,javax.swing.text.PlainView$FPMethodItem,javax.swing.text.PlainView$FPMethodArgs,javax.swing.text.PlainView$1"
};

$Object* allocate$PlainView($Class* clazz) {
	return $of($alloc(PlainView));
}

int32_t PlainView::hashCode() {
	 return this->$View::hashCode();
}

bool PlainView::equals(Object$* arg0) {
	 return this->$View::equals(arg0);
}

$Object* PlainView::clone() {
	 return this->$View::clone();
}

$String* PlainView::toString() {
	 return this->$View::toString();
}

void PlainView::finalize() {
	this->$View::finalize();
}

$SoftReference* PlainView::methodsOverriddenMapRef = nullptr;

void PlainView::init$($Element* elem) {
	$View::init$(elem);
	$init($PlainView$FPMethodArgs);
	this->drawLineOverridden = getFPMethodOverridden($of(this)->getClass(), "drawLine"_s, $PlainView$FPMethodArgs::IGNN);
	this->drawSelectedTextOverridden = getFPMethodOverridden($of(this)->getClass(), "drawSelectedText"_s, $PlainView$FPMethodArgs::GNNII);
	this->drawUnselectedTextOverridden = getFPMethodOverridden($of(this)->getClass(), "drawUnselectedText"_s, $PlainView$FPMethodArgs::GNNII);
	this->useFloatingPointAPI = this->drawUnselectedTextOverridden || this->drawSelectedTextOverridden;
}

int32_t PlainView::getTabSize() {
	$useLocalCurrentObjectStackCache();
	$init($PlainDocument);
	$var($Integer, i, $cast($Integer, $nc($(getDocument()))->getProperty($PlainDocument::tabSizeAttribute)));
	int32_t size = (i != nullptr) ? $nc(i)->intValue() : 8;
	return size;
}

void PlainView::drawLine(int32_t lineIndex, $Graphics* g, int32_t x, int32_t y) {
	drawLineImpl(lineIndex, g, (float)x, (float)y);
}

void PlainView::drawLineImpl(int32_t lineIndex, $Graphics* g, float x, float y) {
	$useLocalCurrentObjectStackCache();
	$var($Element, line, $nc($(getElement()))->getElement(lineIndex));
	$var($Element, elem, nullptr);
	try {
		if ($nc(line)->isLeaf()) {
			drawElement(lineIndex, line, g, x, y);
		} else {
			int32_t count = line->getElementCount();
			for (int32_t i = 0; i < count; ++i) {
				$assign(elem, line->getElement(i));
				x = drawElement(lineIndex, elem, g, x, y);
			}
		}
	} catch ($BadLocationException& e) {
		$throwNew($StateInvariantError, $$str({"Can\'t render line: "_s, $$str(lineIndex)}));
	}
}

void PlainView::drawLine(int32_t lineIndex, $Graphics2D* g, float x, float y) {
	drawLineImpl(lineIndex, g, x, y);
}

float PlainView::drawElement(int32_t lineIndex, $Element* elem, $Graphics* g, float x, float y) {
	$useLocalCurrentObjectStackCache();
	int32_t p0 = $nc(elem)->getStartOffset();
	int32_t p1 = elem->getEndOffset();
	p1 = $Math::min($nc($(getDocument()))->getLength(), p1);
	if (lineIndex == 0) {
		x += this->firstLineOffset;
	}
	$var($AttributeSet, attr, elem->getAttributes());
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

int32_t PlainView::drawUnselectedText($Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1) {
	return $cast(int32_t, drawUnselectedTextImpl(g, (float)x, (float)y, p0, p1, false));
}

float PlainView::callDrawUnselectedText($Graphics* g, float x, float y, int32_t p0, int32_t p1) {
	return this->drawUnselectedTextOverridden && ($instanceOf($Graphics2D, g)) ? drawUnselectedText($cast($Graphics2D, g), x, y, p0, p1) : (float)drawUnselectedText(g, $cast(int32_t, x), $cast(int32_t, y), p0, p1);
}

float PlainView::drawUnselectedTextImpl($Graphics* g, float x, float y, int32_t p0, int32_t p1, bool useFPAPI) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->setColor(this->unselected);
	$var($Document, doc, getDocument());
	$var($Segment, s, $SegmentCache::getSharedSegment());
	$nc(doc)->getText(p0, p1 - p0, s);
	float ret = $Utilities::drawTabbedText(this, s, x, y, g, this, p0, nullptr, useFPAPI);
	$SegmentCache::releaseSharedSegment(s);
	return ret;
}

float PlainView::drawUnselectedText($Graphics2D* g, float x, float y, int32_t p0, int32_t p1) {
	return drawUnselectedTextImpl(g, x, y, p0, p1, true);
}

int32_t PlainView::drawSelectedText($Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1) {
	return $cast(int32_t, drawSelectedTextImpl(g, (float)x, (float)y, p0, p1, false));
}

float PlainView::callDrawSelectedText($Graphics* g, float x, float y, int32_t p0, int32_t p1) {
	return this->drawSelectedTextOverridden && $instanceOf($Graphics2D, g) ? drawSelectedText($cast($Graphics2D, g), x, y, p0, p1) : (float)drawSelectedText(g, $cast(int32_t, x), $cast(int32_t, y), p0, p1);
}

float PlainView::drawSelectedTextImpl($Graphics* g, float x, float y, int32_t p0, int32_t p1, bool useFPAPI) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->setColor(this->selected);
	$var($Document, doc, getDocument());
	$var($Segment, s, $SegmentCache::getSharedSegment());
	$nc(doc)->getText(p0, p1 - p0, s);
	float ret = $Utilities::drawTabbedText(this, s, x, y, g, this, p0, nullptr, useFPAPI);
	$SegmentCache::releaseSharedSegment(s);
	return ret;
}

float PlainView::drawSelectedText($Graphics2D* g, float x, float y, int32_t p0, int32_t p1) {
	return drawSelectedTextImpl(g, x, y, p0, p1, true);
}

$Segment* PlainView::getLineBuffer() {
	if (this->lineBuffer == nullptr) {
		$set(this, lineBuffer, $new($Segment));
	}
	return this->lineBuffer;
}

void PlainView::updateMetrics() {
	$useLocalCurrentObjectStackCache();
	$var($Component, host, getContainer());
	$var($Font, f, $nc(host)->getFont());
	$var($FontMetrics, fm, (this->font == nullptr) ? ($FontMetrics*)nullptr : host->getFontMetrics(this->font));
	if (this->font != f || !$Objects::equals(this->metrics, fm)) {
		calculateLongestLine();
		if (this->useFloatingPointAPI) {
			$var($FontRenderContext, frc, $nc(this->metrics)->getFontRenderContext());
			float tabWidth = (float)$nc($($nc(this->font)->getStringBounds("m"_s, frc)))->getWidth();
			this->tabSize = getTabSize() * tabWidth;
		} else {
			int32_t var$0 = getTabSize();
			this->tabSize = (float)(var$0 * $nc(this->metrics)->charWidth(u'm'));
		}
	}
}

float PlainView::getPreferredSpan(int32_t axis) {
	$useLocalCurrentObjectStackCache();
	updateMetrics();
	switch (axis) {
	case $View::X_AXIS:
		{
			return (float)getLineWidth(this->longLine);
		}
	case $View::Y_AXIS:
		{
			int32_t var$0 = $nc($(getElement()))->getElementCount();
			return (float)(var$0 * $nc(this->metrics)->getHeight());
		}
	default:
		{
			$throwNew($IllegalArgumentException, $$str({"Invalid axis: "_s, $$str(axis)}));
		}
	}
}

void PlainView::paint($Graphics* g, $Shape* a$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Shape, a, a$renamed);
	$var($Shape, originalA, a);
	$assign(a, adjustPaintRegion(a));
	$var($Rectangle, alloc, $cast($Rectangle, a));
	this->tabBase = $nc(alloc)->x;
	$var($JTextComponent, host, $cast($JTextComponent, getContainer()));
	$var($Highlighter, h, $nc(host)->getHighlighter());
	$nc(g)->setFont($(host->getFont()));
	this->sel0 = host->getSelectionStart();
	this->sel1 = host->getSelectionEnd();
	$set(this, unselected, (host->isEnabled()) ? host->getForeground() : host->getDisabledTextColor());
	$var($Caret, c, host->getCaret());
	$set(this, selected, $nc(c)->isSelectionVisible() && h != nullptr ? host->getSelectedTextColor() : this->unselected);
	updateMetrics();
	$var($Rectangle, clip, g->getClipBounds());
	int32_t fontHeight = $nc(this->metrics)->getHeight();
	int32_t heightBelow = (alloc->y + alloc->height) - ($nc(clip)->y + clip->height);
	int32_t heightAbove = clip->y - alloc->y;
	int32_t linesBelow = 0;
	int32_t linesAbove = 0;
	int32_t linesTotal = 0;
	if (fontHeight > 0) {
		linesBelow = $Math::max(0, $div(heightBelow, fontHeight));
		linesAbove = $Math::max(0, $div(heightAbove, fontHeight));
		linesTotal = $div(alloc->height, fontHeight);
		if ($mod(alloc->height, fontHeight) != 0) {
			++linesTotal;
		}
	} else {
		linesBelow = (linesAbove = (linesTotal = 0));
	}
	$var($Rectangle, lineArea, lineToRect(a, linesAbove));
	int32_t y = $nc(lineArea)->y + $nc(this->metrics)->getAscent();
	int32_t x = lineArea->x;
	$var($Element, map, getElement());
	int32_t lineCount = $nc(map)->getElementCount();
	int32_t endLine = $Math::min(lineCount, linesTotal - linesBelow);
	--lineCount;
	$var($LayeredHighlighter, dh, ($instanceOf($LayeredHighlighter, h)) ? $cast($LayeredHighlighter, h) : ($LayeredHighlighter*)nullptr);
	for (int32_t line = linesAbove; line < endLine; ++line) {
		if (dh != nullptr) {
			$var($Element, lineElement, map->getElement(line));
			if (line == lineCount) {
				$var($Graphics, var$0, g);
				int32_t var$1 = $nc(lineElement)->getStartOffset();
				dh->paintLayeredHighlights(var$0, var$1, lineElement->getEndOffset(), originalA, host, this);
			} else {
				$var($Graphics, var$2, g);
				int32_t var$3 = $nc(lineElement)->getStartOffset();
				dh->paintLayeredHighlights(var$2, var$3, lineElement->getEndOffset() - 1, originalA, host, this);
			}
		}
		if (this->drawLineOverridden && ($instanceOf($Graphics2D, g))) {
			drawLine(line, $cast($Graphics2D, g), (float)x, (float)y);
		} else {
			drawLine(line, g, x, y);
		}
		y += fontHeight;
		if (line == 0) {
			x -= this->firstLineOffset;
		}
	}
}

$Shape* PlainView::adjustPaintRegion($Shape* a) {
	return a;
}

$Shape* PlainView::modelToView(int32_t pos, $Shape* a, $Position$Bias* b) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, getDocument());
	$var($Element, map, getElement());
	int32_t lineIndex = $nc(map)->getElementIndex(pos);
	if (lineIndex < 0) {
		return lineToRect(a, 0);
	}
	$var($Rectangle, lineArea, lineToRect(a, lineIndex));
	this->tabBase = $nc(lineArea)->x;
	$var($Element, line, map->getElement(lineIndex));
	int32_t p0 = $nc(line)->getStartOffset();
	$var($Segment, s, $SegmentCache::getSharedSegment());
	$nc(doc)->getText(p0, pos - p0, s);
	if (this->useFloatingPointAPI) {
		float xOffs = $Utilities::getTabbedTextWidth(s, this->metrics, (float)this->tabBase, static_cast<$TabExpander*>(this), p0);
		$SegmentCache::releaseSharedSegment(s);
		return $new($Rectangle2D$Float, lineArea->x + xOffs, (float)lineArea->y, (float)1, (float)$nc(this->metrics)->getHeight());
	}
	int32_t xOffs = $Utilities::getTabbedTextWidth(s, this->metrics, this->tabBase, static_cast<$TabExpander*>(this), p0);
	$SegmentCache::releaseSharedSegment(s);
	lineArea->x += xOffs;
	lineArea->width = 1;
	lineArea->height = $nc(this->metrics)->getHeight();
	return lineArea;
}

int32_t PlainView::viewToModel(float x, float y, $Shape* a, $Position$BiasArray* bias) {
	$useLocalCurrentObjectStackCache();
	$init($Position$Bias);
	$nc(bias)->set(0, $Position$Bias::Forward);
	$var($Rectangle, alloc, $nc(a)->getBounds());
	$var($Document, doc, getDocument());
	if (y < $nc(alloc)->y) {
		return getStartOffset();
	} else if (y > alloc->y + alloc->height) {
		return getEndOffset() - 1;
	} else {
		$var($Element, map, $nc(doc)->getDefaultRootElement());
		int32_t fontHeight = $nc(this->metrics)->getHeight();
		int32_t lineIndex = (fontHeight > 0 ? $cast(int32_t, $Math::abs((y - alloc->y) / fontHeight)) : $nc(map)->getElementCount() - 1);
		if (lineIndex >= map->getElementCount()) {
			return getEndOffset() - 1;
		}
		$var($Element, line, map->getElement(lineIndex));
		int32_t dx = 0;
		if (lineIndex == 0) {
			alloc->x += this->firstLineOffset;
			alloc->width -= this->firstLineOffset;
		}
		if (x < alloc->x) {
			return $nc(line)->getStartOffset();
		} else if (x > alloc->x + alloc->width) {
			return $nc(line)->getEndOffset() - 1;
		} else {
			try {
				int32_t p0 = $nc(line)->getStartOffset();
				int32_t p1 = line->getEndOffset() - 1;
				$var($Segment, s, $SegmentCache::getSharedSegment());
				doc->getText(p0, p1 - p0, s);
				this->tabBase = alloc->x;
				int32_t offs = p0 + $Utilities::getTabbedTextOffset(s, this->metrics, (float)this->tabBase, x, static_cast<$TabExpander*>(this), p0, true);
				$SegmentCache::releaseSharedSegment(s);
				return offs;
			} catch ($BadLocationException& e) {
				return -1;
			}
		}
	}
	$shouldNotReachHere();
}

void PlainView::insertUpdate($DocumentEvent* changes, $Shape* a, $ViewFactory* f) {
	updateDamage(changes, a, f);
}

void PlainView::removeUpdate($DocumentEvent* changes, $Shape* a, $ViewFactory* f) {
	updateDamage(changes, a, f);
}

void PlainView::changedUpdate($DocumentEvent* changes, $Shape* a, $ViewFactory* f) {
	updateDamage(changes, a, f);
}

void PlainView::setSize(float width, float height) {
	$View::setSize(width, height);
	updateMetrics();
}

float PlainView::nextTabStop(float x, int32_t tabOffset) {
	if (this->tabSize == 0) {
		return x;
	}
	int32_t ntabs = $cast(int32_t, ((x - this->tabBase) / this->tabSize));
	return this->tabBase + ((ntabs + 1) * this->tabSize);
}

void PlainView::updateDamage($DocumentEvent* changes, $Shape* a, $ViewFactory* f) {
	$useLocalCurrentObjectStackCache();
	$var($Component, host, getContainer());
	updateMetrics();
	$var($Element, elem, getElement());
	$var($DocumentEvent$ElementChange, ec, $nc(changes)->getChange(elem));
	$var($ElementArray, added, (ec != nullptr) ? $nc(ec)->getChildrenAdded() : ($ElementArray*)nullptr);
	$var($ElementArray, removed, (ec != nullptr) ? ec->getChildrenRemoved() : ($ElementArray*)nullptr);
	if (((added != nullptr) && (added->length > 0)) || ((removed != nullptr) && (removed->length > 0))) {
		if (added != nullptr) {
			int32_t currWide = getLineWidth(this->longLine);
			for (int32_t i = 0; i < added->length; ++i) {
				int32_t w = getLineWidth(added->get(i));
				if (w > currWide) {
					currWide = w;
					$set(this, longLine, added->get(i));
				}
			}
		}
		if (removed != nullptr) {
			for (int32_t i = 0; i < removed->length; ++i) {
				if (removed->get(i) == this->longLine) {
					calculateLongestLine();
					break;
				}
			}
		}
		preferenceChanged(nullptr, true, true);
		$nc(host)->repaint();
	} else {
		$var($Element, map, getElement());
		int32_t line = $nc(map)->getElementIndex(changes->getOffset());
		damageLineRange(line, line, a, host);
		$init($DocumentEvent$EventType);
		if (changes->getType() == $DocumentEvent$EventType::INSERT) {
			int32_t w = getLineWidth(this->longLine);
			$var($Element, e, map->getElement(line));
			if (e == this->longLine) {
				preferenceChanged(nullptr, true, false);
			} else if (getLineWidth(e) > w) {
				$set(this, longLine, e);
				preferenceChanged(nullptr, true, false);
			}
		} else {
			if (changes->getType() == $DocumentEvent$EventType::REMOVE) {
				if (map->getElement(line) == this->longLine) {
					calculateLongestLine();
					preferenceChanged(nullptr, true, false);
				}
			}
		}
	}
}

void PlainView::damageLineRange(int32_t line0, int32_t line1, $Shape* a, $Component* host) {
	$useLocalCurrentObjectStackCache();
	if (a != nullptr) {
		$var($Rectangle, area0, lineToRect(a, line0));
		$var($Rectangle, area1, lineToRect(a, line1));
		if ((area0 != nullptr) && (area1 != nullptr)) {
			$var($Rectangle, damage, area0->union$(area1));
			$nc(host)->repaint($nc(damage)->x, damage->y, damage->width, damage->height);
		} else {
			$nc(host)->repaint();
		}
	}
}

$Rectangle* PlainView::lineToRect($Shape* a, int32_t line) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, r, nullptr);
	updateMetrics();
	if (this->metrics != nullptr) {
		$var($Rectangle, alloc, $nc(a)->getBounds());
		if (line == 0) {
			$nc(alloc)->x += this->firstLineOffset;
			alloc->width -= this->firstLineOffset;
		}
		int32_t var$0 = $nc(alloc)->x;
		int32_t var$1 = alloc->y + (line * $nc(this->metrics)->getHeight());
		int32_t var$2 = alloc->width;
		$assign(r, $new($Rectangle, var$0, var$1, var$2, $nc(this->metrics)->getHeight()));
	}
	return r;
}

void PlainView::calculateLongestLine() {
	$useLocalCurrentObjectStackCache();
	$var($Component, c, getContainer());
	$set(this, font, $nc(c)->getFont());
	$set(this, metrics, c->getFontMetrics(this->font));
	$var($Document, doc, getDocument());
	$var($Element, lines, getElement());
	int32_t n = $nc(lines)->getElementCount();
	int32_t maxWidth = -1;
	for (int32_t i = 0; i < n; ++i) {
		$var($Element, line, lines->getElement(i));
		int32_t w = getLineWidth(line);
		if (w > maxWidth) {
			maxWidth = w;
			$set(this, longLine, line);
		}
	}
}

int32_t PlainView::getLineWidth($Element* line) {
	$useLocalCurrentObjectStackCache();
	if (line == nullptr) {
		return 0;
	}
	int32_t p0 = $nc(line)->getStartOffset();
	int32_t p1 = line->getEndOffset();
	int32_t w = 0;
	$var($Segment, s, $SegmentCache::getSharedSegment());
	try {
		$nc($(line->getDocument()))->getText(p0, p1 - p0, s);
		w = $Utilities::getTabbedTextWidth(s, this->metrics, this->tabBase, static_cast<$TabExpander*>(this), p0);
	} catch ($BadLocationException& ble) {
		w = 0;
	}
	$SegmentCache::releaseSharedSegment(s);
	return w;
}

bool PlainView::getFPMethodOverridden($Class* cls, $String* method, $PlainView$FPMethodArgs* methodArgs) {
	$init(PlainView);
	$useLocalCurrentObjectStackCache();
	$var($HashMap, map, nullptr);
	bool initialized = PlainView::methodsOverriddenMapRef != nullptr && ($assign(map, $cast($HashMap, $nc(PlainView::methodsOverriddenMapRef)->get()))) != nullptr;
	if (!initialized) {
		$assign(map, $new($HashMap));
		$assignStatic(PlainView::methodsOverriddenMapRef, $new($SoftReference, map));
	}
	$var($PlainView$FPMethodItem, key, $new($PlainView$FPMethodItem, cls, method));
	$var($Boolean, isFPMethodOverridden, $cast($Boolean, $nc(map)->get(key)));
	if (isFPMethodOverridden == nullptr) {
		$assign(isFPMethodOverridden, $Boolean::valueOf(checkFPMethodOverridden(cls, method, methodArgs)));
		map->put(key, isFPMethodOverridden);
	}
	return $nc(isFPMethodOverridden)->booleanValue();
}

bool PlainView::checkFPMethodOverridden($Class* className, $String* methodName, $PlainView$FPMethodArgs* methodArgs) {
	$init(PlainView);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	return $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($PlainView$1, methodName, className, methodArgs)))))))->booleanValue();
}

bool PlainView::isFPMethodOverridden($String* method, $Class* cls, $ClassArray* intTypes, $ClassArray* fpTypes) {
	$init(PlainView);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Module, thisModule, PlainView::class$->getModule());
	while (!$nc($of(thisModule))->equals($($nc(cls)->getModule()))) {
		try {
			$nc(cls)->getDeclaredMethod(method, fpTypes);
			return true;
		} catch ($Exception& e1) {
			try {
				$nc(cls)->getDeclaredMethod(method, intTypes);
				return false;
			} catch ($Exception& e2) {
				cls = $nc(cls)->getSuperclass();
			}
		}
	}
	return true;
}

PlainView::PlainView() {
}

$Class* PlainView::load$($String* name, bool initialize) {
	$loadClass(PlainView, name, initialize, &_PlainView_ClassInfo_, allocate$PlainView);
	return class$;
}

$Class* PlainView::class$ = nullptr;

		} // text
	} // swing
} // javax