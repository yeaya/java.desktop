#include <java/awt/font/TextMeasurer.h>

#include <java/awt/Font.h>
#include <java/awt/font/CharArrayIterator.h>
#include <java/awt/font/FontRenderContext.h>
#include <java/awt/font/GraphicAttribute.h>
#include <java/awt/font/LineMetrics.h>
#include <java/awt/font/NumericShaper.h>
#include <java/awt/font/StyledParagraph.h>
#include <java/awt/font/TextAttribute.h>
#include <java/awt/font/TextLayout.h>
#include <java/awt/font/TextLine$TextLineMetrics.h>
#include <java/awt/font/TextLine.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/Error.h>
#include <java/lang/Math.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/text/AttributedCharacterIterator.h>
#include <java/text/Bidi.h>
#include <java/text/BreakIterator.h>
#include <java/text/CharacterIterator.h>
#include <java/util/Hashtable.h>
#include <java/util/Map.h>
#include <sun/font/AttributeValues.h>
#include <sun/font/BidiUtils.h>
#include <sun/font/TextLabelFactory.h>
#include <sun/font/TextLineComponent.h>
#include <jcpp.h>

#undef BIDI_EMBEDDING
#undef CHAR_REPLACEMENT
#undef DIRECTIONALITY_WHITESPACE
#undef DONE
#undef EST_LINES
#undef LEFT_TO_RIGHT
#undef RIGHT_TO_LEFT
#undef UNCHANGED

using $TextLineComponentArray = $Array<::sun::font::TextLineComponent>;
using $Font = ::java::awt::Font;
using $CharArrayIterator = ::java::awt::font::CharArrayIterator;
using $FontRenderContext = ::java::awt::font::FontRenderContext;
using $GraphicAttribute = ::java::awt::font::GraphicAttribute;
using $LineMetrics = ::java::awt::font::LineMetrics;
using $NumericShaper = ::java::awt::font::NumericShaper;
using $StyledParagraph = ::java::awt::font::StyledParagraph;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $TextLayout = ::java::awt::font::TextLayout;
using $TextLine = ::java::awt::font::TextLine;
using $TextLine$TextLineMetrics = ::java::awt::font::TextLine$TextLineMetrics;
using $PrintStream = ::java::io::PrintStream;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Double = ::java::lang::Double;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AttributedCharacterIterator = ::java::text::AttributedCharacterIterator;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;
using $Bidi = ::java::text::Bidi;
using $BreakIterator = ::java::text::BreakIterator;
using $CharacterIterator = ::java::text::CharacterIterator;
using $Hashtable = ::java::util::Hashtable;
using $Map = ::java::util::Map;
using $AttributeValues = ::sun::font::AttributeValues;
using $BidiUtils = ::sun::font::BidiUtils;
using $TextLabelFactory = ::sun::font::TextLabelFactory;
using $TextLineComponent = ::sun::font::TextLineComponent;

namespace java {
	namespace awt {
		namespace font {

$FieldInfo _TextMeasurer_FieldInfo_[] = {
	{"EST_LINES", "F", nullptr, $PRIVATE | $STATIC, $staticField(TextMeasurer, EST_LINES)},
	{"fFrc", "Ljava/awt/font/FontRenderContext;", nullptr, $PRIVATE, $field(TextMeasurer, fFrc)},
	{"fStart", "I", nullptr, $PRIVATE, $field(TextMeasurer, fStart)},
	{"fChars", "[C", nullptr, $PRIVATE, $field(TextMeasurer, fChars)},
	{"fBidi", "Ljava/text/Bidi;", nullptr, $PRIVATE, $field(TextMeasurer, fBidi)},
	{"fLevels", "[B", nullptr, $PRIVATE, $field(TextMeasurer, fLevels)},
	{"fComponents", "[Lsun/font/TextLineComponent;", nullptr, $PRIVATE, $field(TextMeasurer, fComponents)},
	{"fComponentStart", "I", nullptr, $PRIVATE, $field(TextMeasurer, fComponentStart)},
	{"fComponentLimit", "I", nullptr, $PRIVATE, $field(TextMeasurer, fComponentLimit)},
	{"haveLayoutWindow", "Z", nullptr, $PRIVATE, $field(TextMeasurer, haveLayoutWindow)},
	{"fLineBreak", "Ljava/text/BreakIterator;", nullptr, $PRIVATE, $field(TextMeasurer, fLineBreak)},
	{"charIter", "Ljava/awt/font/CharArrayIterator;", nullptr, $PRIVATE, $field(TextMeasurer, charIter)},
	{"layoutCount", "I", nullptr, 0, $field(TextMeasurer, layoutCount)},
	{"layoutCharCount", "I", nullptr, 0, $field(TextMeasurer, layoutCharCount)},
	{"fParagraph", "Ljava/awt/font/StyledParagraph;", nullptr, $PRIVATE, $field(TextMeasurer, fParagraph)},
	{"fIsDirectionLTR", "Z", nullptr, $PRIVATE, $field(TextMeasurer, fIsDirectionLTR)},
	{"fBaseline", "B", nullptr, $PRIVATE, $field(TextMeasurer, fBaseline)},
	{"fBaselineOffsets", "[F", nullptr, $PRIVATE, $field(TextMeasurer, fBaselineOffsets)},
	{"fJustifyRatio", "F", nullptr, $PRIVATE, $field(TextMeasurer, fJustifyRatio)},
	{"formattedChars", "I", nullptr, $PRIVATE, $field(TextMeasurer, formattedChars)},
	{"wantStats", "Z", nullptr, $PRIVATE | $STATIC, $staticField(TextMeasurer, wantStats)},
	{"collectStats", "Z", nullptr, $PRIVATE, $field(TextMeasurer, collectStats)},
	{}
};

$MethodInfo _TextMeasurer_MethodInfo_[] = {
	{"<init>", "(Ljava/text/AttributedCharacterIterator;Ljava/awt/font/FontRenderContext;)V", nullptr, $PUBLIC, $method(static_cast<void(TextMeasurer::*)($AttributedCharacterIterator*,$FontRenderContext*)>(&TextMeasurer::init$))},
	{"calcLineBreak", "(IF)I", nullptr, $PRIVATE, $method(static_cast<int32_t(TextMeasurer::*)(int32_t,float)>(&TextMeasurer::calcLineBreak))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"deleteChar", "(Ljava/text/AttributedCharacterIterator;I)V", nullptr, $PUBLIC, $method(static_cast<void(TextMeasurer::*)($AttributedCharacterIterator*,int32_t)>(&TextMeasurer::deleteChar))},
	{"ensureComponents", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(TextMeasurer::*)(int32_t,int32_t)>(&TextMeasurer::ensureComponents))},
	{"generateComponents", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(TextMeasurer::*)(int32_t,int32_t)>(&TextMeasurer::generateComponents))},
	{"getAdvanceBetween", "(II)F", nullptr, $PUBLIC, $method(static_cast<float(TextMeasurer::*)(int32_t,int32_t)>(&TextMeasurer::getAdvanceBetween))},
	{"getChars", "()[C", nullptr, 0, $method(static_cast<$chars*(TextMeasurer::*)()>(&TextMeasurer::getChars))},
	{"getLayout", "(II)Ljava/awt/font/TextLayout;", nullptr, $PUBLIC, $method(static_cast<$TextLayout*(TextMeasurer::*)(int32_t,int32_t)>(&TextMeasurer::getLayout))},
	{"getLineBreakIndex", "(IF)I", nullptr, $PUBLIC, $method(static_cast<int32_t(TextMeasurer::*)(int32_t,float)>(&TextMeasurer::getLineBreakIndex))},
	{"initAll", "(Ljava/text/AttributedCharacterIterator;)V", nullptr, $PRIVATE, $method(static_cast<void(TextMeasurer::*)($AttributedCharacterIterator*)>(&TextMeasurer::initAll))},
	{"insertChar", "(Ljava/text/AttributedCharacterIterator;I)V", nullptr, $PUBLIC, $method(static_cast<void(TextMeasurer::*)($AttributedCharacterIterator*,int32_t)>(&TextMeasurer::insertChar))},
	{"invalidateComponents", "()V", nullptr, $PRIVATE, $method(static_cast<void(TextMeasurer::*)()>(&TextMeasurer::invalidateComponents))},
	{"makeComponentsOnRange", "(II)[Lsun/font/TextLineComponent;", nullptr, $PRIVATE, $method(static_cast<$TextLineComponentArray*(TextMeasurer::*)(int32_t,int32_t)>(&TextMeasurer::makeComponentsOnRange))},
	{"makeLayoutWindow", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(TextMeasurer::*)(int32_t)>(&TextMeasurer::makeLayoutWindow))},
	{"makeTextLineOnRange", "(II)Ljava/awt/font/TextLine;", nullptr, $PRIVATE, $method(static_cast<$TextLine*(TextMeasurer::*)(int32_t,int32_t)>(&TextMeasurer::makeTextLineOnRange))},
	{"printStats", "()V", nullptr, $PRIVATE, $method(static_cast<void(TextMeasurer::*)()>(&TextMeasurer::printStats))},
	{"trailingCdWhitespaceStart", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(TextMeasurer::*)(int32_t,int32_t)>(&TextMeasurer::trailingCdWhitespaceStart))},
	{}
};

$ClassInfo _TextMeasurer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.font.TextMeasurer",
	"java.lang.Object",
	"java.lang.Cloneable",
	_TextMeasurer_FieldInfo_,
	_TextMeasurer_MethodInfo_
};

$Object* allocate$TextMeasurer($Class* clazz) {
	return $of($alloc(TextMeasurer));
}

float TextMeasurer::EST_LINES = 0.0;
bool TextMeasurer::wantStats = false;

void TextMeasurer::init$($AttributedCharacterIterator* text, $FontRenderContext* frc) {
	$set(this, fLineBreak, nullptr);
	$set(this, charIter, nullptr);
	this->layoutCount = 0;
	this->layoutCharCount = 0;
	this->fJustifyRatio = (float)1;
	this->formattedChars = 0;
	this->collectStats = false;
	$set(this, fFrc, frc);
	initAll(text);
}

$Object* TextMeasurer::clone() {
	$var(TextMeasurer, other, nullptr);
	try {
		$assign(other, $cast(TextMeasurer, $Cloneable::clone()));
	} catch ($CloneNotSupportedException& e) {
		$throwNew($Error);
	}
	if (this->fComponents != nullptr) {
		$set($nc(other), fComponents, $cast($TextLineComponentArray, $nc(this->fComponents)->clone()));
	}
	return $of(other);
}

void TextMeasurer::invalidateComponents() {
	this->fComponentStart = (this->fComponentLimit = $nc(this->fChars)->length);
	$set(this, fComponents, nullptr);
	this->haveLayoutWindow = false;
}

void TextMeasurer::initAll($AttributedCharacterIterator* text) {
	$useLocalCurrentObjectStackCache();
	this->fStart = $nc(text)->getBeginIndex();
	$set(this, fChars, $new($chars, text->getEndIndex() - this->fStart));
	int32_t n = 0;
	for (char16_t c = text->first(); c != $CharacterIterator::DONE; c = text->next()) {
		$nc(this->fChars)->set(n++, c);
	}
	text->first();
	$set(this, fBidi, $new($Bidi, text));
	if ($nc(this->fBidi)->isLeftToRight()) {
		$set(this, fBidi, nullptr);
	}
	text->first();
	$var($Map, paragraphAttrs, text->getAttributes());
	$var($NumericShaper, shaper, $AttributeValues::getNumericShaping(paragraphAttrs));
	if (shaper != nullptr) {
		shaper->shape(this->fChars, 0, $nc(this->fChars)->length);
	}
	$set(this, fParagraph, $new($StyledParagraph, text, this->fChars));
	{
		this->fJustifyRatio = $AttributeValues::getJustification(paragraphAttrs);
		bool haveFont = $TextLine::advanceToFirstFont(text);
		if (haveFont) {
			$var($Font, defaultFont, $TextLine::getFontAtCurrentPos(text));
			int32_t var$0 = text->getIndex();
			int32_t charsStart = var$0 - text->getBeginIndex();
			$var($LineMetrics, lm, $nc(defaultFont)->getLineMetrics(this->fChars, charsStart, charsStart + 1, this->fFrc));
			this->fBaseline = (int8_t)$nc(lm)->getBaselineIndex();
			$set(this, fBaselineOffsets, lm->getBaselineOffsets());
		} else {
			$init($TextAttribute);
			$var($GraphicAttribute, graphic, $cast($GraphicAttribute, $nc(paragraphAttrs)->get($TextAttribute::CHAR_REPLACEMENT)));
			this->fBaseline = $TextLayout::getBaselineFromGraphic(graphic);
			$var($Hashtable, fmap, $new($Hashtable, 5, (float)0.9));
			$var($Font, dummyFont, $new($Font, static_cast<$Map*>(fmap)));
			$var($LineMetrics, lm, dummyFont->getLineMetrics(" "_s, 0, 1, this->fFrc));
			$set(this, fBaselineOffsets, $nc(lm)->getBaselineOffsets());
		}
		$set(this, fBaselineOffsets, $TextLine::getNormalizedOffsets(this->fBaselineOffsets, this->fBaseline));
	}
	invalidateComponents();
}

void TextMeasurer::generateComponents(int32_t startingAt, int32_t endingAt) {
	$useLocalCurrentObjectStackCache();
	if (this->collectStats) {
		this->formattedChars += (endingAt - startingAt);
	}
	int32_t layoutFlags = 0;
	$var($TextLabelFactory, factory, $new($TextLabelFactory, this->fFrc, this->fChars, this->fBidi, layoutFlags));
	$var($ints, charsLtoV, nullptr);
	if (this->fBidi != nullptr) {
		$set(this, fLevels, $BidiUtils::getLevels(this->fBidi));
		$var($ints, charsVtoL, $BidiUtils::createVisualToLogicalMap(this->fLevels));
		$assign(charsLtoV, $BidiUtils::createInverseMap(charsVtoL));
		this->fIsDirectionLTR = $nc(this->fBidi)->baseIsLeftToRight();
	} else {
		$set(this, fLevels, nullptr);
		this->fIsDirectionLTR = true;
	}
	try {
		$set(this, fComponents, $TextLine::getComponents(this->fParagraph, this->fChars, startingAt, endingAt, charsLtoV, this->fLevels, factory));
	} catch ($IllegalArgumentException& e) {
		$nc($System::out)->println($$str({"startingAt="_s, $$str(startingAt), "; endingAt="_s, $$str(endingAt)}));
		$nc($System::out)->println($$str({"fComponentLimit="_s, $$str(this->fComponentLimit)}));
		$throw(e);
	}
	this->fComponentStart = startingAt;
	this->fComponentLimit = endingAt;
}

int32_t TextMeasurer::calcLineBreak(int32_t pos, float maxAdvance) {
	$useLocalCurrentObjectStackCache();
	int32_t startPos = pos;
	float width = maxAdvance;
	int32_t tlcIndex = 0;
	int32_t tlcStart = this->fComponentStart;
	for (tlcIndex = 0; tlcIndex < $nc(this->fComponents)->length; ++tlcIndex) {
		int32_t gaLimit = tlcStart + $nc($nc(this->fComponents)->get(tlcIndex))->getNumCharacters();
		if (gaLimit > startPos) {
			break;
		} else {
			tlcStart = gaLimit;
		}
	}
	for (; tlcIndex < $nc(this->fComponents)->length; ++tlcIndex) {
		$var($TextLineComponent, tlc, $nc(this->fComponents)->get(tlcIndex));
		int32_t numCharsInGa = $nc(tlc)->getNumCharacters();
		int32_t lineBreak = tlc->getLineBreakIndex(startPos - tlcStart, width);
		if (lineBreak == numCharsInGa && tlcIndex < $nc(this->fComponents)->length) {
			width -= tlc->getAdvanceBetween(startPos - tlcStart, lineBreak);
			tlcStart += numCharsInGa;
			startPos = tlcStart;
		} else {
			return tlcStart + lineBreak;
		}
	}
	if (this->fComponentLimit < $nc(this->fChars)->length) {
		generateComponents(pos, $nc(this->fChars)->length);
		return calcLineBreak(pos, maxAdvance);
	}
	return $nc(this->fChars)->length;
}

int32_t TextMeasurer::trailingCdWhitespaceStart(int32_t startPos, int32_t limitPos) {
	if (this->fLevels != nullptr) {
		int8_t baseLevel = (int8_t)(this->fIsDirectionLTR ? 0 : 1);
		for (int32_t cdWsStart = limitPos; --cdWsStart >= startPos;) {
			if (($nc(this->fLevels)->get(cdWsStart) % 2) == baseLevel || $Character::getDirectionality($nc(this->fChars)->get(cdWsStart)) != $Character::DIRECTIONALITY_WHITESPACE) {
				return ++cdWsStart;
			}
		}
	}
	return startPos;
}

$TextLineComponentArray* TextMeasurer::makeComponentsOnRange(int32_t startPos, int32_t limitPos) {
	$useLocalCurrentObjectStackCache();
	int32_t cdWsStart = trailingCdWhitespaceStart(startPos, limitPos);
	int32_t tlcIndex = 0;
	int32_t tlcStart = this->fComponentStart;
	for (tlcIndex = 0; tlcIndex < $nc(this->fComponents)->length; ++tlcIndex) {
		int32_t gaLimit = tlcStart + $nc($nc(this->fComponents)->get(tlcIndex))->getNumCharacters();
		if (gaLimit > startPos) {
			break;
		} else {
			tlcStart = gaLimit;
		}
	}
	int32_t componentCount = 0;
	{
		bool split = false;
		int32_t compStart = tlcStart;
		int32_t lim = tlcIndex;
		for (bool cont = true; cont; ++lim) {
			int32_t gaLimit = compStart + $nc($nc(this->fComponents)->get(lim))->getNumCharacters();
			bool var$0 = cdWsStart > $Math::max(compStart, startPos);
			if (var$0 && cdWsStart < $Math::min(gaLimit, limitPos)) {
				split = true;
			}
			if (gaLimit >= limitPos) {
				cont = false;
			} else {
				compStart = gaLimit;
			}
		}
		componentCount = lim - tlcIndex;
		if (split) {
			++componentCount;
		}
	}
	$var($TextLineComponentArray, components, $new($TextLineComponentArray, componentCount));
	int32_t newCompIndex = 0;
	int32_t linePos = startPos;
	int32_t breakPt = cdWsStart;
	int32_t subsetFlag = 0;
	if (breakPt == startPos) {
		subsetFlag = this->fIsDirectionLTR ? $TextLineComponent::LEFT_TO_RIGHT : $TextLineComponent::RIGHT_TO_LEFT;
		breakPt = limitPos;
	} else {
		subsetFlag = $TextLineComponent::UNCHANGED;
	}
	while (linePos < limitPos) {
		int32_t compLength = $nc($nc(this->fComponents)->get(tlcIndex))->getNumCharacters();
		int32_t tlcLimit = tlcStart + compLength;
		int32_t start = $Math::max(linePos, tlcStart);
		int32_t limit = $Math::min(breakPt, tlcLimit);
		components->set(newCompIndex++, $($nc($nc(this->fComponents)->get(tlcIndex))->getSubset(start - tlcStart, limit - tlcStart, subsetFlag)));
		linePos += (limit - start);
		if (linePos == breakPt) {
			breakPt = limitPos;
			subsetFlag = this->fIsDirectionLTR ? $TextLineComponent::LEFT_TO_RIGHT : $TextLineComponent::RIGHT_TO_LEFT;
		}
		if (linePos == tlcLimit) {
			++tlcIndex;
			tlcStart = tlcLimit;
		}
	}
	return components;
}

$TextLine* TextMeasurer::makeTextLineOnRange(int32_t startPos, int32_t limitPos) {
	$useLocalCurrentObjectStackCache();
	$var($ints, charsLtoV, nullptr);
	$var($bytes, charLevels, nullptr);
	if (this->fBidi != nullptr) {
		$var($Bidi, lineBidi, $nc(this->fBidi)->createLineBidi(startPos, limitPos));
		$assign(charLevels, $BidiUtils::getLevels(lineBidi));
		$var($ints, charsVtoL, $BidiUtils::createVisualToLogicalMap(charLevels));
		$assign(charsLtoV, $BidiUtils::createInverseMap(charsVtoL));
	}
	$var($TextLineComponentArray, components, makeComponentsOnRange(startPos, limitPos));
	return $new($TextLine, this->fFrc, components, this->fBaselineOffsets, this->fChars, startPos, limitPos, charsLtoV, charLevels, this->fIsDirectionLTR);
}

void TextMeasurer::ensureComponents(int32_t start, int32_t limit) {
	if (start < this->fComponentStart || limit > this->fComponentLimit) {
		generateComponents(start, limit);
	}
}

void TextMeasurer::makeLayoutWindow(int32_t localStart) {
	int32_t compStart = localStart;
	int32_t compLimit = $nc(this->fChars)->length;
	if (this->layoutCount > 0 && !this->haveLayoutWindow) {
		float avgLineLength = (float)$Math::max($div(this->layoutCharCount, this->layoutCount), 1);
		compLimit = $Math::min(localStart + $cast(int32_t, (avgLineLength * TextMeasurer::EST_LINES)), $nc(this->fChars)->length);
	}
	if (localStart > 0 || compLimit < $nc(this->fChars)->length) {
		if (this->charIter == nullptr) {
			$set(this, charIter, $new($CharArrayIterator, this->fChars));
		} else {
			$nc(this->charIter)->reset(this->fChars);
		}
		if (this->fLineBreak == nullptr) {
			$set(this, fLineBreak, $BreakIterator::getLineInstance());
		}
		$nc(this->fLineBreak)->setText(static_cast<$CharacterIterator*>(this->charIter));
		if (localStart > 0) {
			if (!$nc(this->fLineBreak)->isBoundary(localStart)) {
				compStart = $nc(this->fLineBreak)->preceding(localStart);
			}
		}
		if (compLimit < $nc(this->fChars)->length) {
			if (!$nc(this->fLineBreak)->isBoundary(compLimit)) {
				compLimit = $nc(this->fLineBreak)->following(compLimit);
			}
		}
	}
	ensureComponents(compStart, compLimit);
	this->haveLayoutWindow = true;
}

int32_t TextMeasurer::getLineBreakIndex(int32_t start, float maxAdvance) {
	int32_t localStart = start - this->fStart;
	if (!this->haveLayoutWindow || localStart < this->fComponentStart || localStart >= this->fComponentLimit) {
		makeLayoutWindow(localStart);
	}
	return calcLineBreak(localStart, maxAdvance) + this->fStart;
}

float TextMeasurer::getAdvanceBetween(int32_t start, int32_t limit) {
	$useLocalCurrentObjectStackCache();
	int32_t localStart = start - this->fStart;
	int32_t localLimit = limit - this->fStart;
	ensureComponents(localStart, localLimit);
	$var($TextLine, line, makeTextLineOnRange(localStart, localLimit));
	return $nc($($nc(line)->getMetrics()))->advance;
}

$TextLayout* TextMeasurer::getLayout(int32_t start, int32_t limit) {
	int32_t localStart = start - this->fStart;
	int32_t localLimit = limit - this->fStart;
	ensureComponents(localStart, localLimit);
	$var($TextLine, textLine, makeTextLineOnRange(localStart, localLimit));
	if (localLimit < $nc(this->fChars)->length) {
		this->layoutCharCount += limit - start;
		++this->layoutCount;
	}
	return $new($TextLayout, textLine, this->fBaseline, this->fBaselineOffsets, this->fJustifyRatio);
}

void TextMeasurer::printStats() {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println($$str({"formattedChars: "_s, $$str(this->formattedChars)}));
	this->collectStats = false;
}

void TextMeasurer::insertChar($AttributedCharacterIterator* newParagraph, int32_t insertPos) {
	if (this->collectStats) {
		printStats();
	}
	if (TextMeasurer::wantStats) {
		this->collectStats = true;
	}
	this->fStart = $nc(newParagraph)->getBeginIndex();
	int32_t end = newParagraph->getEndIndex();
	if (end - this->fStart != $nc(this->fChars)->length + 1) {
		initAll(newParagraph);
	}
	$var($chars, newChars, $new($chars, end - this->fStart));
	int32_t newCharIndex = insertPos - this->fStart;
	$System::arraycopy(this->fChars, 0, newChars, 0, newCharIndex);
	char16_t newChar = newParagraph->setIndex(insertPos);
	newChars->set(newCharIndex, newChar);
	$System::arraycopy(this->fChars, newCharIndex, newChars, newCharIndex + 1, end - insertPos - 1);
	$set(this, fChars, newChars);
	bool var$0 = this->fBidi != nullptr || $Bidi::requiresBidi(newChars, newCharIndex, newCharIndex + 1);
	$init($TextAttribute);
	if (var$0 || newParagraph->getAttribute($TextAttribute::BIDI_EMBEDDING) != nullptr) {
		$set(this, fBidi, $new($Bidi, newParagraph));
		if ($nc(this->fBidi)->isLeftToRight()) {
			$set(this, fBidi, nullptr);
		}
	}
	$set(this, fParagraph, $StyledParagraph::insertChar(newParagraph, this->fChars, insertPos, this->fParagraph));
	invalidateComponents();
}

void TextMeasurer::deleteChar($AttributedCharacterIterator* newParagraph, int32_t deletePos) {
	this->fStart = $nc(newParagraph)->getBeginIndex();
	int32_t end = newParagraph->getEndIndex();
	if (end - this->fStart != $nc(this->fChars)->length - 1) {
		initAll(newParagraph);
	}
	$var($chars, newChars, $new($chars, end - this->fStart));
	int32_t changedIndex = deletePos - this->fStart;
	$System::arraycopy(this->fChars, 0, newChars, 0, deletePos - this->fStart);
	$System::arraycopy(this->fChars, changedIndex + 1, newChars, changedIndex, end - deletePos);
	$set(this, fChars, newChars);
	if (this->fBidi != nullptr) {
		$set(this, fBidi, $new($Bidi, newParagraph));
		if ($nc(this->fBidi)->isLeftToRight()) {
			$set(this, fBidi, nullptr);
		}
	}
	$set(this, fParagraph, $StyledParagraph::deleteChar(newParagraph, this->fChars, deletePos, this->fParagraph));
	invalidateComponents();
}

$chars* TextMeasurer::getChars() {
	return this->fChars;
}

void clinit$TextMeasurer($Class* class$) {
	TextMeasurer::EST_LINES = (float)2.1;
	TextMeasurer::wantStats = false;
}

TextMeasurer::TextMeasurer() {
}

$Class* TextMeasurer::load$($String* name, bool initialize) {
	$loadClass(TextMeasurer, name, initialize, &_TextMeasurer_ClassInfo_, clinit$TextMeasurer, allocate$TextMeasurer);
	return class$;
}

$Class* TextMeasurer::class$ = nullptr;

		} // font
	} // awt
} // java