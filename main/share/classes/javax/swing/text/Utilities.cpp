#include <javax/swing/text/Utilities.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/font/TextAttribute.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/lang/Math.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/AttributedString.h>
#include <java/text/BreakIterator.h>
#include <java/text/CharacterIterator.h>
#include <java/util/Locale.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/GlyphView$GlyphPainter.h>
#include <javax/swing/text/GlyphView.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/ParagraphView$Row.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/SegmentCache.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/TabExpander.h>
#include <javax/swing/text/View.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef DONE
#undef EAST
#undef END_JUSTIFIABLE
#undef FONT
#undef FOREGROUND
#undef MAX_VALUE
#undef NORTH
#undef POSTURE
#undef POSTURE_OBLIQUE
#undef SPACE_ADDON
#undef SPACE_ADDON_LEFTOVER_END
#undef START_JUSTIFIABLE
#undef STRIKETHROUGH
#undef STRIKETHROUGH_ON
#undef SUPERSCRIPT
#undef SUPERSCRIPT_SUB
#undef SUPERSCRIPT_SUPER
#undef UNDERLINE
#undef UNDERLINE_ON
#undef WEIGHT
#undef WEIGHT_BOLD
#undef WEST

using $AttributedCharacterIterator$AttributeArray = $Array<::java::text::AttributedCharacterIterator$Attribute>;
using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;
using $AttributedString = ::java::text::AttributedString;
using $BreakIterator = ::java::text::BreakIterator;
using $CharacterIterator = ::java::text::CharacterIterator;
using $JComponent = ::javax::swing::JComponent;
using $SwingConstants = ::javax::swing::SwingConstants;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $GlyphView = ::javax::swing::text::GlyphView;
using $GlyphView$GlyphPainter = ::javax::swing::text::GlyphView$GlyphPainter;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $ParagraphView$Row = ::javax::swing::text::ParagraphView$Row;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $Segment = ::javax::swing::text::Segment;
using $SegmentCache = ::javax::swing::text::SegmentCache;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $TabExpander = ::javax::swing::text::TabExpander;
using $View = ::javax::swing::text::View;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace text {

$NamedAttribute Utilities_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _Utilities_MethodAnnotations_drawTabbedText4[] = {
	{"Ljava/lang/Deprecated;", Utilities_Attribute_var$0},
	{}
};

$NamedAttribute Utilities_Attribute_var$1[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _Utilities_MethodAnnotations_getBreakLocation9[] = {
	{"Ljava/lang/Deprecated;", Utilities_Attribute_var$1},
	{}
};

$NamedAttribute Utilities_Attribute_var$2[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _Utilities_MethodAnnotations_getPositionAbove17[] = {
	{"Ljava/lang/Deprecated;", Utilities_Attribute_var$2},
	{}
};

$NamedAttribute Utilities_Attribute_var$3[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _Utilities_MethodAnnotations_getPositionBelow20[] = {
	{"Ljava/lang/Deprecated;", Utilities_Attribute_var$3},
	{}
};

$NamedAttribute Utilities_Attribute_var$4[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _Utilities_MethodAnnotations_getTabbedTextOffset27[] = {
	{"Ljava/lang/Deprecated;", Utilities_Attribute_var$4},
	{}
};

$NamedAttribute Utilities_Attribute_var$5[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _Utilities_MethodAnnotations_getTabbedTextOffset30[] = {
	{"Ljava/lang/Deprecated;", Utilities_Attribute_var$5},
	{}
};

$NamedAttribute Utilities_Attribute_var$6[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _Utilities_MethodAnnotations_getTabbedTextWidth33[] = {
	{"Ljava/lang/Deprecated;", Utilities_Attribute_var$6},
	{}
};

$MethodInfo _Utilities_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Utilities::*)()>(&Utilities::init$))},
	{"drawComposedText", "(Ljavax/swing/text/View;Ljavax/swing/text/AttributeSet;Ljava/awt/Graphics;IIII)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($View*,$AttributeSet*,$Graphics*,int32_t,int32_t,int32_t,int32_t)>(&Utilities::drawComposedText)), "javax.swing.text.BadLocationException"},
	{"drawComposedText", "(Ljavax/swing/text/View;Ljavax/swing/text/AttributeSet;Ljava/awt/Graphics;FFII)F", nullptr, $STATIC, $method(static_cast<float(*)($View*,$AttributeSet*,$Graphics*,float,float,int32_t,int32_t)>(&Utilities::drawComposedText)), "javax.swing.text.BadLocationException"},
	{"drawComposedText", "(Ljavax/swing/text/View;Ljavax/swing/text/AttributeSet;Ljava/awt/Graphics;FFIIZ)F", nullptr, $STATIC, $method(static_cast<float(*)($View*,$AttributeSet*,$Graphics*,float,float,int32_t,int32_t,bool)>(&Utilities::drawComposedText)), "javax.swing.text.BadLocationException"},
	{"drawTabbedText", "(Ljavax/swing/text/Segment;IILjava/awt/Graphics;Ljavax/swing/text/TabExpander;I)I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $method(static_cast<int32_t(*)($Segment*,int32_t,int32_t,$Graphics*,$TabExpander*,int32_t)>(&Utilities::drawTabbedText)), nullptr, nullptr, _Utilities_MethodAnnotations_drawTabbedText4},
	{"drawTabbedText", "(Ljavax/swing/text/Segment;FFLjava/awt/Graphics2D;Ljavax/swing/text/TabExpander;I)F", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<float(*)($Segment*,float,float,$Graphics2D*,$TabExpander*,int32_t)>(&Utilities::drawTabbedText))},
	{"drawTabbedText", "(Ljavax/swing/text/View;Ljavax/swing/text/Segment;IILjava/awt/Graphics;Ljavax/swing/text/TabExpander;I)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)($View*,$Segment*,int32_t,int32_t,$Graphics*,$TabExpander*,int32_t)>(&Utilities::drawTabbedText))},
	{"drawTabbedText", "(Ljavax/swing/text/View;Ljavax/swing/text/Segment;IILjava/awt/Graphics;Ljavax/swing/text/TabExpander;I[I)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)($View*,$Segment*,int32_t,int32_t,$Graphics*,$TabExpander*,int32_t,$ints*)>(&Utilities::drawTabbedText))},
	{"drawTabbedText", "(Ljavax/swing/text/View;Ljavax/swing/text/Segment;FFLjava/awt/Graphics;Ljavax/swing/text/TabExpander;I[IZ)F", nullptr, $STATIC | $FINAL, $method(static_cast<float(*)($View*,$Segment*,float,float,$Graphics*,$TabExpander*,int32_t,$ints*,bool)>(&Utilities::drawTabbedText))},
	{"getBreakLocation", "(Ljavax/swing/text/Segment;Ljava/awt/FontMetrics;IILjavax/swing/text/TabExpander;I)I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $method(static_cast<int32_t(*)($Segment*,$FontMetrics*,int32_t,int32_t,$TabExpander*,int32_t)>(&Utilities::getBreakLocation)), nullptr, nullptr, _Utilities_MethodAnnotations_getBreakLocation9},
	{"getBreakLocation", "(Ljavax/swing/text/Segment;Ljava/awt/FontMetrics;FFLjavax/swing/text/TabExpander;IZ)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)($Segment*,$FontMetrics*,float,float,$TabExpander*,int32_t,bool)>(&Utilities::getBreakLocation))},
	{"getBreakLocation", "(Ljavax/swing/text/Segment;Ljava/awt/FontMetrics;FFLjavax/swing/text/TabExpander;I)I", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int32_t(*)($Segment*,$FontMetrics*,float,float,$TabExpander*,int32_t)>(&Utilities::getBreakLocation))},
	{"getJComponent", "(Ljavax/swing/text/View;)Ljavax/swing/JComponent;", nullptr, $STATIC, $method(static_cast<$JComponent*(*)($View*)>(&Utilities::getJComponent))},
	{"getNextVisualPositionFrom", "(Ljavax/swing/text/View;ILjavax/swing/text/Position$Bias;Ljava/awt/Shape;I[Ljavax/swing/text/Position$Bias;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($View*,int32_t,$Position$Bias*,$Shape*,int32_t,$Position$BiasArray*)>(&Utilities::getNextVisualPositionFrom)), "javax.swing.text.BadLocationException"},
	{"getNextWord", "(Ljavax/swing/text/JTextComponent;I)I", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int32_t(*)($JTextComponent*,int32_t)>(&Utilities::getNextWord)), "javax.swing.text.BadLocationException"},
	{"getNextWordInParagraph", "(Ljavax/swing/text/JTextComponent;Ljavax/swing/text/Element;IZ)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($JTextComponent*,$Element*,int32_t,bool)>(&Utilities::getNextWordInParagraph)), "javax.swing.text.BadLocationException"},
	{"getParagraphElement", "(Ljavax/swing/text/JTextComponent;I)Ljavax/swing/text/Element;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$Element*(*)($JTextComponent*,int32_t)>(&Utilities::getParagraphElement))},
	{"getPositionAbove", "(Ljavax/swing/text/JTextComponent;II)I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $method(static_cast<int32_t(*)($JTextComponent*,int32_t,int32_t)>(&Utilities::getPositionAbove)), "javax.swing.text.BadLocationException", nullptr, _Utilities_MethodAnnotations_getPositionAbove17},
	{"getPositionAbove", "(Ljavax/swing/text/JTextComponent;IFZ)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)($JTextComponent*,int32_t,float,bool)>(&Utilities::getPositionAbove)), "javax.swing.text.BadLocationException"},
	{"getPositionAbove", "(Ljavax/swing/text/JTextComponent;IF)I", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int32_t(*)($JTextComponent*,int32_t,float)>(&Utilities::getPositionAbove)), "javax.swing.text.BadLocationException"},
	{"getPositionBelow", "(Ljavax/swing/text/JTextComponent;II)I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $method(static_cast<int32_t(*)($JTextComponent*,int32_t,int32_t)>(&Utilities::getPositionBelow)), "javax.swing.text.BadLocationException", nullptr, _Utilities_MethodAnnotations_getPositionBelow20},
	{"getPositionBelow", "(Ljavax/swing/text/JTextComponent;IFZ)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)($JTextComponent*,int32_t,float,bool)>(&Utilities::getPositionBelow)), "javax.swing.text.BadLocationException"},
	{"getPositionBelow", "(Ljavax/swing/text/JTextComponent;IF)I", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int32_t(*)($JTextComponent*,int32_t,float)>(&Utilities::getPositionBelow)), "javax.swing.text.BadLocationException"},
	{"getPrevWordInParagraph", "(Ljavax/swing/text/JTextComponent;Ljavax/swing/text/Element;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($JTextComponent*,$Element*,int32_t)>(&Utilities::getPrevWordInParagraph)), "javax.swing.text.BadLocationException"},
	{"getPreviousWord", "(Ljavax/swing/text/JTextComponent;I)I", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int32_t(*)($JTextComponent*,int32_t)>(&Utilities::getPreviousWord)), "javax.swing.text.BadLocationException"},
	{"getRowEnd", "(Ljavax/swing/text/JTextComponent;I)I", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int32_t(*)($JTextComponent*,int32_t)>(&Utilities::getRowEnd)), "javax.swing.text.BadLocationException"},
	{"getRowStart", "(Ljavax/swing/text/JTextComponent;I)I", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int32_t(*)($JTextComponent*,int32_t)>(&Utilities::getRowStart)), "javax.swing.text.BadLocationException"},
	{"getTabbedTextOffset", "(Ljavax/swing/text/Segment;Ljava/awt/FontMetrics;IILjavax/swing/text/TabExpander;I)I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $method(static_cast<int32_t(*)($Segment*,$FontMetrics*,int32_t,int32_t,$TabExpander*,int32_t)>(&Utilities::getTabbedTextOffset)), nullptr, nullptr, _Utilities_MethodAnnotations_getTabbedTextOffset27},
	{"getTabbedTextOffset", "(Ljavax/swing/text/View;Ljavax/swing/text/Segment;Ljava/awt/FontMetrics;IILjavax/swing/text/TabExpander;I[I)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)($View*,$Segment*,$FontMetrics*,int32_t,int32_t,$TabExpander*,int32_t,$ints*)>(&Utilities::getTabbedTextOffset))},
	{"getTabbedTextOffset", "(Ljavax/swing/text/View;Ljavax/swing/text/Segment;Ljava/awt/FontMetrics;FFLjavax/swing/text/TabExpander;I[I)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)($View*,$Segment*,$FontMetrics*,float,float,$TabExpander*,int32_t,$ints*)>(&Utilities::getTabbedTextOffset))},
	{"getTabbedTextOffset", "(Ljavax/swing/text/Segment;Ljava/awt/FontMetrics;IILjavax/swing/text/TabExpander;IZ)I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $method(static_cast<int32_t(*)($Segment*,$FontMetrics*,int32_t,int32_t,$TabExpander*,int32_t,bool)>(&Utilities::getTabbedTextOffset)), nullptr, nullptr, _Utilities_MethodAnnotations_getTabbedTextOffset30},
	{"getTabbedTextOffset", "(Ljavax/swing/text/Segment;Ljava/awt/FontMetrics;FFLjavax/swing/text/TabExpander;IZ)I", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int32_t(*)($Segment*,$FontMetrics*,float,float,$TabExpander*,int32_t,bool)>(&Utilities::getTabbedTextOffset))},
	{"getTabbedTextOffset", "(Ljavax/swing/text/View;Ljavax/swing/text/Segment;Ljava/awt/FontMetrics;FFLjavax/swing/text/TabExpander;IZ[IZ)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)($View*,$Segment*,$FontMetrics*,float,float,$TabExpander*,int32_t,bool,$ints*,bool)>(&Utilities::getTabbedTextOffset))},
	{"getTabbedTextWidth", "(Ljavax/swing/text/Segment;Ljava/awt/FontMetrics;ILjavax/swing/text/TabExpander;I)I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $method(static_cast<int32_t(*)($Segment*,$FontMetrics*,int32_t,$TabExpander*,int32_t)>(&Utilities::getTabbedTextWidth)), nullptr, nullptr, _Utilities_MethodAnnotations_getTabbedTextWidth33},
	{"getTabbedTextWidth", "(Ljavax/swing/text/Segment;Ljava/awt/FontMetrics;FLjavax/swing/text/TabExpander;I)F", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<float(*)($Segment*,$FontMetrics*,float,$TabExpander*,int32_t)>(&Utilities::getTabbedTextWidth))},
	{"getTabbedTextWidth", "(Ljavax/swing/text/View;Ljavax/swing/text/Segment;Ljava/awt/FontMetrics;ILjavax/swing/text/TabExpander;I[I)I", nullptr, $STATIC | $FINAL, $method(static_cast<int32_t(*)($View*,$Segment*,$FontMetrics*,int32_t,$TabExpander*,int32_t,$ints*)>(&Utilities::getTabbedTextWidth))},
	{"getTabbedTextWidth", "(Ljavax/swing/text/View;Ljavax/swing/text/Segment;Ljava/awt/FontMetrics;FLjavax/swing/text/TabExpander;I[I)F", nullptr, $STATIC | $FINAL, $method(static_cast<float(*)($View*,$Segment*,$FontMetrics*,float,$TabExpander*,int32_t,$ints*)>(&Utilities::getTabbedTextWidth))},
	{"getTabbedTextWidth", "(Ljavax/swing/text/View;Ljavax/swing/text/Segment;Ljava/awt/FontMetrics;FLjavax/swing/text/TabExpander;I[IZ)F", nullptr, $STATIC | $FINAL, $method(static_cast<float(*)($View*,$Segment*,$FontMetrics*,float,$TabExpander*,int32_t,$ints*,bool)>(&Utilities::getTabbedTextWidth))},
	{"getWordEnd", "(Ljavax/swing/text/JTextComponent;I)I", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int32_t(*)($JTextComponent*,int32_t)>(&Utilities::getWordEnd)), "javax.swing.text.BadLocationException"},
	{"getWordStart", "(Ljavax/swing/text/JTextComponent;I)I", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<int32_t(*)($JTextComponent*,int32_t)>(&Utilities::getWordStart)), "javax.swing.text.BadLocationException"},
	{"isComposedTextAttributeDefined", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($AttributeSet*)>(&Utilities::isComposedTextAttributeDefined))},
	{"isComposedTextElement", "(Ljavax/swing/text/Document;I)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Document*,int32_t)>(&Utilities::isComposedTextElement))},
	{"isComposedTextElement", "(Ljavax/swing/text/Element;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Element*)>(&Utilities::isComposedTextElement))},
	{"isLeftToRight", "(Ljava/awt/Component;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Component*)>(&Utilities::isLeftToRight))},
	{"paintComposedText", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Ljavax/swing/text/GlyphView;)V", nullptr, $STATIC, $method(static_cast<void(*)($Graphics*,$Rectangle*,$GlyphView*)>(&Utilities::paintComposedText))},
	{}
};

$ClassInfo _Utilities_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.Utilities",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Utilities_MethodInfo_
};

$Object* allocate$Utilities($Class* clazz) {
	return $of($alloc(Utilities));
}

void Utilities::init$() {
}

$JComponent* Utilities::getJComponent($View* view) {
	if (view != nullptr) {
		$var($Component, component, view->getContainer());
		if ($instanceOf($JComponent, component)) {
			return $cast($JComponent, component);
		}
	}
	return nullptr;
}

int32_t Utilities::drawTabbedText($Segment* s, int32_t x, int32_t y, $Graphics* g, $TabExpander* e, int32_t startOffset) {
	return drawTabbedText(nullptr, s, x, y, g, e, startOffset);
}

float Utilities::drawTabbedText($Segment* s, float x, float y, $Graphics2D* g, $TabExpander* e, int32_t startOffset) {
	return drawTabbedText(nullptr, s, x, y, g, e, startOffset, nullptr, true);
}

int32_t Utilities::drawTabbedText($View* view, $Segment* s, int32_t x, int32_t y, $Graphics* g, $TabExpander* e, int32_t startOffset) {
	return drawTabbedText(view, s, x, y, g, e, startOffset, nullptr);
}

int32_t Utilities::drawTabbedText($View* view, $Segment* s, int32_t x, int32_t y, $Graphics* g, $TabExpander* e, int32_t startOffset, $ints* justificationData) {
	return $cast(int32_t, drawTabbedText(view, s, (float)x, (float)y, g, e, startOffset, justificationData, false));
}

float Utilities::drawTabbedText($View* view, $Segment* s, float x, float y, $Graphics* g, $TabExpander* e, int32_t startOffset, $ints* justificationData, bool useFPAPI) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, component, getJComponent(view));
	$var($FontMetrics, metrics, $SwingUtilities2::getFontMetrics(component, g));
	float nextX = x;
	$var($chars, txt, $nc(s)->array);
	int32_t txtOffset = s->offset;
	int32_t flushLen = 0;
	int32_t flushIndex = s->offset;
	int32_t spaceAddon = 0;
	int32_t spaceAddonLeftoverEnd = -1;
	int32_t startJustifiableContent = 0;
	int32_t endJustifiableContent = 0;
	if (justificationData != nullptr) {
		int32_t offset = -startOffset + txtOffset;
		$var($View, parent, nullptr);
		if (view != nullptr && ($assign(parent, view->getParent())) != nullptr) {
			offset += $nc(parent)->getStartOffset();
		}
		spaceAddon = justificationData->get($ParagraphView$Row::SPACE_ADDON);
		spaceAddonLeftoverEnd = justificationData->get($ParagraphView$Row::SPACE_ADDON_LEFTOVER_END) + offset;
		startJustifiableContent = justificationData->get($ParagraphView$Row::START_JUSTIFIABLE) + offset;
		endJustifiableContent = justificationData->get($ParagraphView$Row::END_JUSTIFIABLE) + offset;
	}
	int32_t n = s->offset + s->count;
	for (int32_t i = txtOffset; i < n; ++i) {
		if ($nc(txt)->get(i) == u'\t' || ((spaceAddon != 0 || i <= spaceAddonLeftoverEnd) && ($nc(txt)->get(i) == u' ') && startJustifiableContent <= i && i <= endJustifiableContent)) {
			if (flushLen > 0) {
				nextX = $SwingUtilities2::drawChars(component, g, txt, flushIndex, flushLen, x, y);
				flushLen = 0;
			}
			flushIndex = i + 1;
			if (txt->get(i) == u'\t') {
				if (e != nullptr) {
					nextX = e->nextTabStop(nextX, startOffset + i - txtOffset);
				} else {
					nextX += $SwingUtilities2::getFontCharWidth(u' ', metrics, useFPAPI);
				}
			} else if (txt->get(i) == u' ') {
				float spaceWidth = $SwingUtilities2::getFontCharWidth(u' ', metrics, useFPAPI);
				nextX += spaceWidth + spaceAddon;
				if (i <= spaceAddonLeftoverEnd) {
					++nextX;
				}
			}
			x = nextX;
		} else if ((txt->get(i) == u'\n') || (txt->get(i) == u'\r')) {
			if (flushLen > 0) {
				nextX = $SwingUtilities2::drawChars(component, g, txt, flushIndex, flushLen, x, y, useFPAPI);
				flushLen = 0;
			}
			flushIndex = i + 1;
			x = nextX;
		} else {
			flushLen += 1;
		}
	}
	if (flushLen > 0) {
		nextX = $SwingUtilities2::drawChars(component, g, txt, flushIndex, flushLen, x, y, useFPAPI);
	}
	return nextX;
}

int32_t Utilities::getTabbedTextWidth($Segment* s, $FontMetrics* metrics, int32_t x, $TabExpander* e, int32_t startOffset) {
	return getTabbedTextWidth(($View*)nullptr, s, metrics, x, e, startOffset, ($ints*)nullptr);
}

float Utilities::getTabbedTextWidth($Segment* s, $FontMetrics* metrics, float x, $TabExpander* e, int32_t startOffset) {
	return getTabbedTextWidth(($View*)nullptr, s, metrics, x, e, startOffset, ($ints*)nullptr);
}

int32_t Utilities::getTabbedTextWidth($View* view, $Segment* s, $FontMetrics* metrics, int32_t x, $TabExpander* e, int32_t startOffset, $ints* justificationData) {
	return $cast(int32_t, getTabbedTextWidth(view, s, metrics, (float)x, e, startOffset, justificationData, false));
}

float Utilities::getTabbedTextWidth($View* view, $Segment* s, $FontMetrics* metrics, float x, $TabExpander* e, int32_t startOffset, $ints* justificationData) {
	return getTabbedTextWidth(view, s, metrics, x, e, startOffset, justificationData, true);
}

float Utilities::getTabbedTextWidth($View* view, $Segment* s, $FontMetrics* metrics, float x, $TabExpander* e, int32_t startOffset, $ints* justificationData, bool useFPAPI) {
	$useLocalCurrentObjectStackCache();
	float nextX = x;
	$var($chars, txt, $nc(s)->array);
	int32_t txtOffset = s->offset;
	int32_t n = s->offset + s->count;
	int32_t charCount = 0;
	int32_t spaceAddon = 0;
	int32_t spaceAddonLeftoverEnd = -1;
	int32_t startJustifiableContent = 0;
	int32_t endJustifiableContent = 0;
	if (justificationData != nullptr) {
		int32_t offset = -startOffset + txtOffset;
		$var($View, parent, nullptr);
		if (view != nullptr && ($assign(parent, view->getParent())) != nullptr) {
			offset += $nc(parent)->getStartOffset();
		}
		spaceAddon = justificationData->get($ParagraphView$Row::SPACE_ADDON);
		spaceAddonLeftoverEnd = justificationData->get($ParagraphView$Row::SPACE_ADDON_LEFTOVER_END) + offset;
		startJustifiableContent = justificationData->get($ParagraphView$Row::START_JUSTIFIABLE) + offset;
		endJustifiableContent = justificationData->get($ParagraphView$Row::END_JUSTIFIABLE) + offset;
	}
	for (int32_t i = txtOffset; i < n; ++i) {
		if ($nc(txt)->get(i) == u'\t' || ((spaceAddon != 0 || i <= spaceAddonLeftoverEnd) && ($nc(txt)->get(i) == u' ') && startJustifiableContent <= i && i <= endJustifiableContent)) {
			nextX += $nc(metrics)->charsWidth(txt, i - charCount, charCount);
			charCount = 0;
			if (txt->get(i) == u'\t') {
				if (e != nullptr) {
					nextX = e->nextTabStop(nextX, startOffset + i - txtOffset);
				} else {
					nextX += $SwingUtilities2::getFontCharWidth(u' ', metrics, useFPAPI);
				}
			} else if (txt->get(i) == u' ') {
				float spaceWidth = $SwingUtilities2::getFontCharWidth(u' ', metrics, useFPAPI);
				nextX += spaceWidth + spaceAddon;
				if (i <= spaceAddonLeftoverEnd) {
					++nextX;
				}
			}
		} else if (txt->get(i) == u'\n') {
			nextX += $SwingUtilities2::getFontCharsWidth(txt, i - charCount, charCount, metrics, useFPAPI);
			charCount = 0;
		} else {
			++charCount;
		}
	}
	nextX += $SwingUtilities2::getFontCharsWidth(txt, n - charCount, charCount, metrics, useFPAPI);
	return nextX - x;
}

int32_t Utilities::getTabbedTextOffset($Segment* s, $FontMetrics* metrics, int32_t x0, int32_t x, $TabExpander* e, int32_t startOffset) {
	return getTabbedTextOffset(s, metrics, x0, x, e, startOffset, true);
}

int32_t Utilities::getTabbedTextOffset($View* view, $Segment* s, $FontMetrics* metrics, int32_t x0, int32_t x, $TabExpander* e, int32_t startOffset, $ints* justificationData) {
	return getTabbedTextOffset(view, s, metrics, (float)x0, (float)x, e, startOffset, true, justificationData, false);
}

int32_t Utilities::getTabbedTextOffset($View* view, $Segment* s, $FontMetrics* metrics, float x0, float x, $TabExpander* e, int32_t startOffset, $ints* justificationData) {
	return getTabbedTextOffset(view, s, metrics, x0, x, e, startOffset, true, justificationData, true);
}

int32_t Utilities::getTabbedTextOffset($Segment* s, $FontMetrics* metrics, int32_t x0, int32_t x, $TabExpander* e, int32_t startOffset, bool round) {
	return getTabbedTextOffset(nullptr, s, metrics, (float)x0, (float)x, e, startOffset, round, nullptr, false);
}

int32_t Utilities::getTabbedTextOffset($Segment* s, $FontMetrics* metrics, float x0, float x, $TabExpander* e, int32_t startOffset, bool round) {
	return getTabbedTextOffset(nullptr, s, metrics, x0, x, e, startOffset, round, nullptr, true);
}

int32_t Utilities::getTabbedTextOffset($View* view, $Segment* s, $FontMetrics* metrics, float x0, float x, $TabExpander* e, int32_t startOffset, bool round, $ints* justificationData, bool useFPAPI) {
	$useLocalCurrentObjectStackCache();
	if (x0 >= x) {
		return 0;
	}
	float nextX = x0;
	$var($chars, txt, $nc(s)->array);
	int32_t txtOffset = s->offset;
	int32_t txtCount = s->count;
	int32_t spaceAddon = 0;
	int32_t spaceAddonLeftoverEnd = -1;
	int32_t startJustifiableContent = 0;
	int32_t endJustifiableContent = 0;
	if (justificationData != nullptr) {
		int32_t offset = -startOffset + txtOffset;
		$var($View, parent, nullptr);
		if (view != nullptr && ($assign(parent, view->getParent())) != nullptr) {
			offset += $nc(parent)->getStartOffset();
		}
		spaceAddon = justificationData->get($ParagraphView$Row::SPACE_ADDON);
		spaceAddonLeftoverEnd = justificationData->get($ParagraphView$Row::SPACE_ADDON_LEFTOVER_END) + offset;
		startJustifiableContent = justificationData->get($ParagraphView$Row::START_JUSTIFIABLE) + offset;
		endJustifiableContent = justificationData->get($ParagraphView$Row::END_JUSTIFIABLE) + offset;
	}
	int32_t n = s->offset + s->count;
	for (int32_t i = s->offset; i < n; ++i) {
		if ($nc(txt)->get(i) == u'\t' || ((spaceAddon != 0 || i <= spaceAddonLeftoverEnd) && ($nc(txt)->get(i) == u' ') && startJustifiableContent <= i && i <= endJustifiableContent)) {
			if (txt->get(i) == u'\t') {
				if (e != nullptr) {
					nextX = e->nextTabStop(nextX, startOffset + i - txtOffset);
				} else {
					nextX += $SwingUtilities2::getFontCharWidth(u' ', metrics, useFPAPI);
				}
			} else if (txt->get(i) == u' ') {
				nextX += $SwingUtilities2::getFontCharWidth(u' ', metrics, useFPAPI);
				nextX += spaceAddon;
				if (i <= spaceAddonLeftoverEnd) {
					++nextX;
				}
			}
		} else {
			nextX += $SwingUtilities2::getFontCharWidth(txt->get(i), metrics, useFPAPI);
		}
		if (x < nextX) {
			int32_t offset = 0;
			if (round) {
				offset = i + 1 - txtOffset;
				float width = $SwingUtilities2::getFontCharsWidth(txt, txtOffset, offset, metrics, useFPAPI);
				float span = x - x0;
				if (span < width) {
					while (offset > 0) {
						float charsWidth = $SwingUtilities2::getFontCharsWidth(txt, txtOffset, offset - 1, metrics, useFPAPI);
						float nextWidth = offset > 1 ? charsWidth : (float)0;
						if (span >= nextWidth) {
							if (span - nextWidth < width - span) {
								--offset;
							}
							break;
						}
						width = nextWidth;
						--offset;
					}
				}
			} else {
				offset = i - txtOffset;
				while (offset > 0 && $SwingUtilities2::getFontCharsWidth(txt, txtOffset, offset, metrics, useFPAPI) > (x - x0)) {
					--offset;
				}
			}
			return offset;
		}
	}
	return txtCount;
}

int32_t Utilities::getBreakLocation($Segment* s, $FontMetrics* metrics, int32_t x0, int32_t x, $TabExpander* e, int32_t startOffset) {
	return getBreakLocation(s, metrics, (float)x0, (float)x, e, startOffset, false);
}

int32_t Utilities::getBreakLocation($Segment* s, $FontMetrics* metrics, float x0, float x, $TabExpander* e, int32_t startOffset, bool useFPIAPI) {
	$useLocalCurrentObjectStackCache();
	$var($chars, txt, $nc(s)->array);
	int32_t txtOffset = s->offset;
	int32_t txtCount = s->count;
	int32_t index = getTabbedTextOffset(nullptr, s, metrics, x0, x, e, startOffset, false, nullptr, useFPIAPI);
	if (index >= txtCount - 1) {
		return txtCount;
	}
	for (int32_t i = txtOffset + index; i >= txtOffset; --i) {
		char16_t ch = $nc(txt)->get(i);
		if (ch < 256) {
			if ($Character::isWhitespace(ch)) {
				index = i - txtOffset + 1;
				break;
			}
		} else {
			$var($BreakIterator, bit, $BreakIterator::getLineInstance());
			$nc(bit)->setText(static_cast<$CharacterIterator*>(s));
			int32_t breakPos = bit->preceding(i + 1);
			if (breakPos > txtOffset) {
				index = breakPos - txtOffset;
			}
			break;
		}
	}
	return index;
}

int32_t Utilities::getBreakLocation($Segment* s, $FontMetrics* metrics, float x0, float x, $TabExpander* e, int32_t startOffset) {
	return getBreakLocation(s, metrics, x0, x, e, startOffset, true);
}

int32_t Utilities::getRowStart($JTextComponent* c, int32_t offs) {
	$var($Rectangle, r, $nc(c)->modelToView(offs));
	if (r == nullptr) {
		return -1;
	}
	int32_t lastOffs = offs;
	int32_t y = $nc(r)->y;
	while ((r != nullptr) && (y == r->y)) {
		if (r->height != 0) {
			offs = lastOffs;
		}
		lastOffs -= 1;
		$assign(r, (lastOffs >= 0) ? c->modelToView(lastOffs) : ($Rectangle*)nullptr);
	}
	return offs;
}

int32_t Utilities::getRowEnd($JTextComponent* c, int32_t offs) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, r, $nc(c)->modelToView2D(offs));
	if (r == nullptr) {
		return -1;
	}
	int32_t n = $nc($(c->getDocument()))->getLength();
	int32_t lastOffs = offs;
	double y = $nc(r)->getY();
	while ((r != nullptr) && (y == r->getY())) {
		if (r->getHeight() != 0) {
			offs = lastOffs;
		}
		lastOffs += 1;
		$assign(r, (lastOffs <= n) ? static_cast<$Rectangle2D*>(c->modelToView(lastOffs)) : ($Rectangle2D*)nullptr);
	}
	return offs;
}

int32_t Utilities::getPositionAbove($JTextComponent* c, int32_t offs, int32_t x) {
	return getPositionAbove(c, offs, (float)x, false);
}

int32_t Utilities::getPositionAbove($JTextComponent* c, int32_t offs, float x, bool useFPAPI) {
	int32_t lastOffs = getRowStart(c, offs) - 1;
	if (lastOffs < 0) {
		return -1;
	}
	double bestSpan = (double)$Integer::MAX_VALUE;
	double y = (double)0;
	$var($Rectangle2D, r, nullptr);
	if (lastOffs >= 0) {
		$assign(r, useFPAPI ? $nc(c)->modelToView2D(lastOffs) : static_cast<$Rectangle2D*>(c->modelToView(lastOffs)));
		y = $nc(r)->getY();
	}
	while ((r != nullptr) && (y == r->getY())) {
		double span = $Math::abs(r->getX() - x);
		if (span < bestSpan) {
			offs = lastOffs;
			bestSpan = span;
		}
		lastOffs -= 1;
		if (lastOffs >= 0) {
			$assign(r, useFPAPI ? $nc(c)->modelToView2D(lastOffs) : static_cast<$Rectangle2D*>(c->modelToView(lastOffs)));
		} else {
			$assign(r, nullptr);
		}
	}
	return offs;
}

int32_t Utilities::getPositionAbove($JTextComponent* c, int32_t offs, float x) {
	return getPositionAbove(c, offs, x, true);
}

int32_t Utilities::getPositionBelow($JTextComponent* c, int32_t offs, int32_t x) {
	return getPositionBelow(c, offs, (float)x, false);
}

int32_t Utilities::getPositionBelow($JTextComponent* c, int32_t offs, float x, bool useFPAPI) {
	$useLocalCurrentObjectStackCache();
	int32_t lastOffs = getRowEnd(c, offs) + 1;
	if (lastOffs <= 0) {
		return -1;
	}
	double bestSpan = (double)$Integer::MAX_VALUE;
	int32_t n = $nc($($nc(c)->getDocument()))->getLength();
	double y = (double)0;
	$var($Rectangle2D, r, nullptr);
	if (lastOffs <= n) {
		$assign(r, useFPAPI ? c->modelToView2D(lastOffs) : static_cast<$Rectangle2D*>(c->modelToView(lastOffs)));
		y = $nc(r)->getY();
	}
	while ((r != nullptr) && (y == r->getY())) {
		double span = $Math::abs(x - r->getX());
		if (span < bestSpan) {
			offs = lastOffs;
			bestSpan = span;
		}
		lastOffs += 1;
		if (lastOffs <= n) {
			$assign(r, useFPAPI ? c->modelToView2D(lastOffs) : static_cast<$Rectangle2D*>(c->modelToView(lastOffs)));
		} else {
			$assign(r, nullptr);
		}
	}
	return offs;
}

int32_t Utilities::getPositionBelow($JTextComponent* c, int32_t offs, float x) {
	return getPositionBelow(c, offs, x, true);
}

int32_t Utilities::getWordStart($JTextComponent* c, int32_t offs) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, $nc(c)->getDocument());
	$var($Element, line, getParagraphElement(c, offs));
	if (line == nullptr) {
		$throwNew($BadLocationException, $$str({"No word at "_s, $$str(offs)}), offs);
	}
	int32_t lineStart = $nc(line)->getStartOffset();
	int32_t var$0 = line->getEndOffset();
	int32_t lineEnd = $Math::min(var$0, $nc(doc)->getLength());
	$var($Segment, seg, $SegmentCache::getSharedSegment());
	$nc(doc)->getText(lineStart, lineEnd - lineStart, seg);
	if ($nc(seg)->count > 0) {
		$var($BreakIterator, words, $BreakIterator::getWordInstance($(c->getLocale())));
		$nc(words)->setText(static_cast<$CharacterIterator*>(seg));
		int32_t wordPosition = seg->offset + offs - lineStart;
		if (wordPosition >= words->last()) {
			wordPosition = words->last() - 1;
		}
		words->following(wordPosition);
		offs = lineStart + words->previous() - seg->offset;
	}
	$SegmentCache::releaseSharedSegment(seg);
	return offs;
}

int32_t Utilities::getWordEnd($JTextComponent* c, int32_t offs) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, $nc(c)->getDocument());
	$var($Element, line, getParagraphElement(c, offs));
	if (line == nullptr) {
		$throwNew($BadLocationException, $$str({"No word at "_s, $$str(offs)}), offs);
	}
	int32_t lineStart = $nc(line)->getStartOffset();
	int32_t var$0 = line->getEndOffset();
	int32_t lineEnd = $Math::min(var$0, $nc(doc)->getLength());
	$var($Segment, seg, $SegmentCache::getSharedSegment());
	$nc(doc)->getText(lineStart, lineEnd - lineStart, seg);
	if ($nc(seg)->count > 0) {
		$var($BreakIterator, words, $BreakIterator::getWordInstance($(c->getLocale())));
		$nc(words)->setText(static_cast<$CharacterIterator*>(seg));
		int32_t wordPosition = offs - lineStart + seg->offset;
		if (wordPosition >= words->last()) {
			wordPosition = words->last() - 1;
		}
		offs = lineStart + words->following(wordPosition) - seg->offset;
	}
	$SegmentCache::releaseSharedSegment(seg);
	return offs;
}

int32_t Utilities::getNextWord($JTextComponent* c, int32_t offs) {
	int32_t nextWord = 0;
	$var($Element, line, getParagraphElement(c, offs));
	for (nextWord = getNextWordInParagraph(c, line, offs, false); nextWord == $BreakIterator::DONE; nextWord = getNextWordInParagraph(c, line, offs, true)) {
		offs = $nc(line)->getEndOffset();
		$assign(line, getParagraphElement(c, offs));
	}
	return nextWord;
}

int32_t Utilities::getNextWordInParagraph($JTextComponent* c, $Element* line, int32_t offs, bool first) {
	$useLocalCurrentObjectStackCache();
	if (line == nullptr) {
		$throwNew($BadLocationException, "No more words"_s, offs);
	}
	$var($Document, doc, $nc(line)->getDocument());
	int32_t lineStart = line->getStartOffset();
	int32_t var$0 = line->getEndOffset();
	int32_t lineEnd = $Math::min(var$0, $nc(doc)->getLength());
	if ((offs >= lineEnd) || (offs < lineStart)) {
		$throwNew($BadLocationException, "No more words"_s, offs);
	}
	$var($Segment, seg, $SegmentCache::getSharedSegment());
	$nc(doc)->getText(lineStart, lineEnd - lineStart, seg);
	$var($BreakIterator, words, $BreakIterator::getWordInstance($($nc(c)->getLocale())));
	$nc(words)->setText(static_cast<$CharacterIterator*>(seg));
	bool var$1 = (first && (words->first() == ($nc(seg)->offset + offs - lineStart)));
	if (var$1 && (!$Character::isWhitespace($nc(seg->array)->get(words->first())))) {
		return offs;
	}
	int32_t wordPosition = words->following($nc(seg)->offset + offs - lineStart);
	if ((wordPosition == $BreakIterator::DONE) || (wordPosition >= $nc(seg)->offset + seg->count)) {
		return $BreakIterator::DONE;
	}
	char16_t ch = $nc($nc(seg)->array)->get(wordPosition);
	if (!$Character::isWhitespace(ch)) {
		return lineStart + wordPosition - seg->offset;
	}
	wordPosition = words->next();
	if (wordPosition != $BreakIterator::DONE) {
		offs = lineStart + wordPosition - seg->offset;
		if (offs != lineEnd) {
			return offs;
		}
	}
	$SegmentCache::releaseSharedSegment(seg);
	return $BreakIterator::DONE;
}

int32_t Utilities::getPreviousWord($JTextComponent* c, int32_t offs) {
	int32_t prevWord = 0;
	$var($Element, line, getParagraphElement(c, offs));
	for (prevWord = getPrevWordInParagraph(c, line, offs); prevWord == $BreakIterator::DONE; prevWord = getPrevWordInParagraph(c, line, offs)) {
		offs = $nc(line)->getStartOffset() - 1;
		$assign(line, getParagraphElement(c, offs));
	}
	return prevWord;
}

int32_t Utilities::getPrevWordInParagraph($JTextComponent* c, $Element* line, int32_t offs) {
	$useLocalCurrentObjectStackCache();
	if (line == nullptr) {
		$throwNew($BadLocationException, "No more words"_s, offs);
	}
	$var($Document, doc, $nc(line)->getDocument());
	int32_t lineStart = line->getStartOffset();
	int32_t lineEnd = line->getEndOffset();
	if ((offs > lineEnd) || (offs < lineStart)) {
		$throwNew($BadLocationException, "No more words"_s, offs);
	}
	$var($Segment, seg, $SegmentCache::getSharedSegment());
	$nc(doc)->getText(lineStart, lineEnd - lineStart, seg);
	$var($BreakIterator, words, $BreakIterator::getWordInstance($($nc(c)->getLocale())));
	$nc(words)->setText(static_cast<$CharacterIterator*>(seg));
	if (words->following($nc(seg)->offset + offs - lineStart) == $BreakIterator::DONE) {
		words->last();
	}
	int32_t wordPosition = words->previous();
	if (wordPosition == ($nc(seg)->offset + offs - lineStart)) {
		wordPosition = words->previous();
	}
	if (wordPosition == $BreakIterator::DONE) {
		return $BreakIterator::DONE;
	}
	char16_t ch = $nc($nc(seg)->array)->get(wordPosition);
	if (!$Character::isWhitespace(ch)) {
		return lineStart + wordPosition - seg->offset;
	}
	wordPosition = words->previous();
	if (wordPosition != $BreakIterator::DONE) {
		return lineStart + wordPosition - seg->offset;
	}
	$SegmentCache::releaseSharedSegment(seg);
	return $BreakIterator::DONE;
}

$Element* Utilities::getParagraphElement($JTextComponent* c, int32_t offs) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, $nc(c)->getDocument());
	if ($instanceOf($StyledDocument, doc)) {
		return $nc(($cast($StyledDocument, doc)))->getParagraphElement(offs);
	}
	$var($Element, map, $nc(doc)->getDefaultRootElement());
	int32_t index = $nc(map)->getElementIndex(offs);
	$var($Element, paragraph, map->getElement(index));
	bool var$0 = (offs >= $nc(paragraph)->getStartOffset());
	if (var$0 && (offs < paragraph->getEndOffset())) {
		return paragraph;
	}
	return nullptr;
}

bool Utilities::isComposedTextElement($Document* doc, int32_t offset) {
	$var($Element, elem, $nc(doc)->getDefaultRootElement());
	while (!$nc(elem)->isLeaf()) {
		$assign(elem, elem->getElement(elem->getElementIndex(offset)));
	}
	return isComposedTextElement(elem);
}

bool Utilities::isComposedTextElement($Element* elem) {
	$var($AttributeSet, as, $nc(elem)->getAttributes());
	return isComposedTextAttributeDefined(as);
}

bool Utilities::isComposedTextAttributeDefined($AttributeSet* as) {
	$init($StyleConstants);
	return ((as != nullptr) && (as->isDefined($StyleConstants::ComposedTextAttribute)));
}

int32_t Utilities::drawComposedText($View* view, $AttributeSet* attr, $Graphics* g, int32_t x, int32_t y, int32_t p0, int32_t p1) {
	return $cast(int32_t, drawComposedText(view, attr, g, (float)x, (float)y, p0, p1, false));
}

float Utilities::drawComposedText($View* view, $AttributeSet* attr, $Graphics* g, float x, float y, int32_t p0, int32_t p1) {
	return drawComposedText(view, attr, g, x, y, p0, p1, true);
}

float Utilities::drawComposedText($View* view, $AttributeSet* attr, $Graphics* g, float x, float y, int32_t p0, int32_t p1, bool useFPAPI) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics2D, g2d, $cast($Graphics2D, g));
	$init($StyleConstants);
	$var($AttributedString, as, $cast($AttributedString, $nc(attr)->getAttribute($StyleConstants::ComposedTextAttribute)));
	$init($TextAttribute);
	$nc(as)->addAttribute($TextAttribute::FONT, $($nc(g)->getFont()));
	if (p0 >= p1) {
		return x;
	}
	$var($AttributedCharacterIterator, aci, as->getIterator(nullptr, p0, p1));
	return x + $SwingUtilities2::drawString($(getJComponent(view)), static_cast<$Graphics*>(g2d), aci, x, y);
}

void Utilities::paintComposedText($Graphics* g, $Rectangle* alloc, $GlyphView* v) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Graphics2D, g)) {
		$var($Graphics2D, g2d, $cast($Graphics2D, g));
		int32_t p0 = $nc(v)->getStartOffset();
		int32_t p1 = v->getEndOffset();
		$var($AttributeSet, attrSet, $nc($(v->getElement()))->getAttributes());
		$init($StyleConstants);
		$var($AttributedString, as, $cast($AttributedString, $nc(attrSet)->getAttribute($StyleConstants::ComposedTextAttribute)));
		int32_t start = $nc($(v->getElement()))->getStartOffset();
		int32_t y = $nc(alloc)->y + alloc->height - $cast(int32_t, $nc($(v->getGlyphPainter()))->getDescent(v));
		int32_t x = alloc->x;
		$init($TextAttribute);
		$nc(as)->addAttribute($TextAttribute::FONT, $(v->getFont()));
		as->addAttribute($TextAttribute::FOREGROUND, $(v->getForeground()));
		if ($StyleConstants::isBold($(v->getAttributes()))) {
			as->addAttribute($TextAttribute::WEIGHT, $TextAttribute::WEIGHT_BOLD);
		}
		if ($StyleConstants::isItalic($(v->getAttributes()))) {
			as->addAttribute($TextAttribute::POSTURE, $TextAttribute::POSTURE_OBLIQUE);
		}
		if (v->isUnderline()) {
			as->addAttribute($TextAttribute::UNDERLINE, $TextAttribute::UNDERLINE_ON);
		}
		if (v->isStrikeThrough()) {
			as->addAttribute($TextAttribute::STRIKETHROUGH, $TextAttribute::STRIKETHROUGH_ON);
		}
		if (v->isSuperscript()) {
			as->addAttribute($TextAttribute::SUPERSCRIPT, $TextAttribute::SUPERSCRIPT_SUPER);
		}
		if (v->isSubscript()) {
			as->addAttribute($TextAttribute::SUPERSCRIPT, $TextAttribute::SUPERSCRIPT_SUB);
		}
		$var($AttributedCharacterIterator, aci, as->getIterator(nullptr, p0 - start, p1 - start));
		$SwingUtilities2::drawString($(getJComponent(v)), static_cast<$Graphics*>(g2d), aci, x, y);
	}
}

bool Utilities::isLeftToRight($Component* c) {
	return $nc($($nc(c)->getComponentOrientation()))->isLeftToRight();
}

int32_t Utilities::getNextVisualPositionFrom($View* v, int32_t pos, $Position$Bias* b, $Shape* alloc, int32_t direction, $Position$BiasArray* biasRet) {
	$useLocalCurrentObjectStackCache();
	if ($nc(v)->getViewCount() == 0) {
		return pos;
	}
	bool top = (direction == $SwingConstants::NORTH || direction == $SwingConstants::WEST);
	int32_t retValue = 0;
	if (pos == -1) {
		int32_t childIndex = (top) ? $nc(v)->getViewCount() - 1 : 0;
		$var($View, child, v->getView(childIndex));
		$var($Shape, childBounds, v->getChildAllocation(childIndex, alloc));
		retValue = $nc(child)->getNextVisualPositionFrom(pos, b, childBounds, direction, biasRet);
		if (retValue == -1 && !top && v->getViewCount() > 1) {
			$assign(child, v->getView(1));
			$assign(childBounds, v->getChildAllocation(1, alloc));
			retValue = $nc(child)->getNextVisualPositionFrom(-1, $nc(biasRet)->get(0), childBounds, direction, biasRet);
		}
	} else {
		int32_t increment = (top) ? -1 : 1;
		int32_t childIndex = 0;
		$init($Position$Bias);
		if (b == $Position$Bias::Backward && pos > 0) {
			childIndex = $nc(v)->getViewIndex(pos - 1, $Position$Bias::Forward);
		} else {
			childIndex = $nc(v)->getViewIndex(pos, $Position$Bias::Forward);
		}
		$var($View, child, $nc(v)->getView(childIndex));
		$var($Shape, childBounds, v->getChildAllocation(childIndex, alloc));
		retValue = $nc(child)->getNextVisualPositionFrom(pos, b, childBounds, direction, biasRet);
		if ((direction == $SwingConstants::EAST || direction == $SwingConstants::WEST) && ($instanceOf($CompositeView, v)) && $nc(($cast($CompositeView, v)))->flipEastAndWestAtEnds(pos, b)) {
			increment *= -1;
		}
		childIndex += increment;
		if (retValue == -1 && childIndex >= 0 && childIndex < v->getViewCount()) {
			$assign(child, v->getView(childIndex));
			$assign(childBounds, v->getChildAllocation(childIndex, alloc));
			retValue = $nc(child)->getNextVisualPositionFrom(-1, b, childBounds, direction, biasRet);
			if (retValue == pos && $nc(biasRet)->get(0) != b) {
				return getNextVisualPositionFrom(v, pos, biasRet->get(0), alloc, direction, biasRet);
			}
		} else {
			bool var$4 = retValue != -1 && $nc(biasRet)->get(0) != b;
			if (var$4) {
				bool var$5 = (increment == 1 && child->getEndOffset() == retValue);
				var$4 = (var$5 || (increment == -1 && child->getStartOffset() == retValue));
			}
			bool var$3 = var$4 && childIndex >= 0;
			if (var$3 && childIndex < v->getViewCount()) {
				$assign(child, v->getView(childIndex));
				$assign(childBounds, v->getChildAllocation(childIndex, alloc));
				$var($Position$Bias, originalBias, $nc(biasRet)->get(0));
				int32_t nextPos = $nc(child)->getNextVisualPositionFrom(-1, b, childBounds, direction, biasRet);
				if (biasRet->get(0) == b) {
					retValue = nextPos;
				} else {
					biasRet->set(0, originalBias);
				}
			}
		}
	}
	return retValue;
}

Utilities::Utilities() {
}

$Class* Utilities::load$($String* name, bool initialize) {
	$loadClass(Utilities, name, initialize, &_Utilities_ClassInfo_, allocate$Utilities);
	return class$;
}

$Class* Utilities::class$ = nullptr;

		} // text
	} // swing
} // javax