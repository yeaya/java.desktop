#include <javax/swing/text/rtf/RTFGenerator.h>

#include <java/awt/Color.h>
#include <java/io/OutputStream.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/lang/Number.h>
#include <java/util/Dictionary.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Vector.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/TabStop.h>
#include <javax/swing/text/rtf/Constants.h>
#include <javax/swing/text/rtf/RTFAttribute.h>
#include <javax/swing/text/rtf/RTFAttributes$AssertiveAttribute.h>
#include <javax/swing/text/rtf/RTFAttributes.h>
#include <javax/swing/text/rtf/RTFGenerator$CharacterKeywordPair.h>
#include <javax/swing/text/rtf/RTFReader.h>
#include <jcpp.h>

#undef ALIGN_BAR
#undef ALIGN_CENTER
#undef ALIGN_DECIMAL
#undef ALIGN_LEFT
#undef ALIGN_RIGHT
#undef D_CHARACTER
#undef D_DOCUMENT
#undef D_PARAGRAPH
#undef D_SECTION
#undef LEAD_DOTS
#undef LEAD_EQUALS
#undef LEAD_HYPHENS
#undef LEAD_NONE
#undef LEAD_THICKLINE
#undef LEAD_UNDERLINE

using $ColorArray = $Array<::java::awt::Color>;
using $TabStopArray = $Array<::javax::swing::text::TabStop>;
using $RTFAttributeArray = $Array<::javax::swing::text::rtf::RTFAttribute>;
using $RTFGenerator$CharacterKeywordPairArray = $Array<::javax::swing::text::rtf::RTFGenerator$CharacterKeywordPair>;
using $Color = ::java::awt::Color;
using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $Dictionary = ::java::util::Dictionary;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Vector = ::java::util::Vector;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $Segment = ::javax::swing::text::Segment;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $Style = ::javax::swing::text::Style;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $TabStop = ::javax::swing::text::TabStop;
using $Constants = ::javax::swing::text::rtf::Constants;
using $RTFAttribute = ::javax::swing::text::rtf::RTFAttribute;
using $RTFAttributes = ::javax::swing::text::rtf::RTFAttributes;
using $RTFAttributes$AssertiveAttribute = ::javax::swing::text::rtf::RTFAttributes$AssertiveAttribute;
using $RTFGenerator$CharacterKeywordPair = ::javax::swing::text::rtf::RTFGenerator$CharacterKeywordPair;
using $RTFReader = ::javax::swing::text::rtf::RTFReader;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

$FieldInfo _RTFGenerator_FieldInfo_[] = {
	{"colorTable", "Ljava/util/Dictionary;", "Ljava/util/Dictionary<Ljava/lang/Object;Ljava/lang/Integer;>;", 0, $field(RTFGenerator, colorTable)},
	{"colorCount", "I", nullptr, 0, $field(RTFGenerator, colorCount)},
	{"fontTable", "Ljava/util/Dictionary;", "Ljava/util/Dictionary<Ljava/lang/String;Ljava/lang/Integer;>;", 0, $field(RTFGenerator, fontTable)},
	{"fontCount", "I", nullptr, 0, $field(RTFGenerator, fontCount)},
	{"styleTable", "Ljava/util/Dictionary;", "Ljava/util/Dictionary<Ljavax/swing/text/AttributeSet;Ljava/lang/Integer;>;", 0, $field(RTFGenerator, styleTable)},
	{"styleCount", "I", nullptr, 0, $field(RTFGenerator, styleCount)},
	{"outputStream", "Ljava/io/OutputStream;", nullptr, 0, $field(RTFGenerator, outputStream)},
	{"afterKeyword", "Z", nullptr, 0, $field(RTFGenerator, afterKeyword)},
	{"outputAttributes", "Ljavax/swing/text/MutableAttributeSet;", nullptr, 0, $field(RTFGenerator, outputAttributes)},
	{"unicodeCount", "I", nullptr, 0, $field(RTFGenerator, unicodeCount)},
	{"workingSegment", "Ljavax/swing/text/Segment;", nullptr, $PRIVATE, $field(RTFGenerator, workingSegment)},
	{"outputConversion", "[I", nullptr, 0, $field(RTFGenerator, outputConversion)},
	{"defaultRTFColor", "Ljava/awt/Color;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RTFGenerator, defaultRTFColor)},
	{"defaultFontSize", "F", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RTFGenerator, defaultFontSize)},
	{"defaultFontFamily", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RTFGenerator, defaultFontFamily)},
	{"MagicToken", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RTFGenerator, MagicToken)},
	{"textKeywords", "[Ljavax/swing/text/rtf/RTFGenerator$CharacterKeywordPair;", nullptr, $PROTECTED | $STATIC, $staticField(RTFGenerator, textKeywords)},
	{"hexdigits", "[C", nullptr, $STATIC | $FINAL, $staticField(RTFGenerator, hexdigits)},
	{}
};

$MethodInfo _RTFGenerator_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(RTFGenerator::*)($OutputStream*)>(&RTFGenerator::init$))},
	{"approximationForUnicode", "(C)Ljava/lang/String;", nullptr, 0},
	{"attrDiff", "(Ljavax/swing/text/MutableAttributeSet;Ljavax/swing/text/AttributeSet;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($MutableAttributeSet*,$AttributeSet*,Object$*,Object$*)>(&RTFGenerator::attrDiff))},
	{"checkControlWord", "(Ljavax/swing/text/MutableAttributeSet;Ljavax/swing/text/AttributeSet;Ljavax/swing/text/rtf/RTFAttribute;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"checkControlWords", "(Ljavax/swing/text/MutableAttributeSet;Ljavax/swing/text/AttributeSet;[Ljavax/swing/text/rtf/RTFAttribute;I)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"checkNumericControlWord", "(Ljavax/swing/text/MutableAttributeSet;Ljavax/swing/text/AttributeSet;Ljava/lang/Object;Ljava/lang/String;FF)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"convertCharacter", "([IC)I", nullptr, $PROTECTED | $STATIC, $method(static_cast<int32_t(*)($ints*,char16_t)>(&RTFGenerator::convertCharacter))},
	{"equalArraysOK", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(Object$*,Object$*)>(&RTFGenerator::equalArraysOK))},
	{"examineElement", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC},
	{"findStyle", "(Ljavax/swing/text/AttributeSet;)Ljavax/swing/text/Style;", nullptr, $PRIVATE, $method(static_cast<$Style*(RTFGenerator::*)($AttributeSet*)>(&RTFGenerator::findStyle))},
	{"findStyleNumber", "(Ljavax/swing/text/AttributeSet;Ljava/lang/String;)Ljava/lang/Integer;", nullptr, $PRIVATE, $method(static_cast<$Integer*(RTFGenerator::*)($AttributeSet*,$String*)>(&RTFGenerator::findStyleNumber))},
	{"outputConversionForName", "(Ljava/lang/String;)[I", nullptr, $STATIC, $method(static_cast<$ints*(*)($String*)>(&RTFGenerator::outputConversionForName)), "java.io.IOException"},
	{"outputConversionFromTranslationTable", "([C)[I", nullptr, $STATIC, $method(static_cast<$ints*(*)($chars*)>(&RTFGenerator::outputConversionFromTranslationTable))},
	{"resetCharacterAttributes", "(Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"resetParagraphAttributes", "(Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"resetSectionAttributes", "(Ljavax/swing/text/MutableAttributeSet;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"tallyStyles", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PRIVATE, $method(static_cast<void(RTFGenerator::*)($AttributeSet*)>(&RTFGenerator::tallyStyles))},
	{"updateCharacterAttributes", "(Ljavax/swing/text/MutableAttributeSet;Ljavax/swing/text/AttributeSet;Z)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"updateParagraphAttributes", "(Ljavax/swing/text/MutableAttributeSet;Ljavax/swing/text/AttributeSet;Z)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"updateSectionAttributes", "(Ljavax/swing/text/MutableAttributeSet;Ljavax/swing/text/AttributeSet;Z)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"writeBegingroup", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeCharacter", "(C)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeControlWord", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeControlWord", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeDocument", "(Ljavax/swing/text/Document;Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Document*,$OutputStream*)>(&RTFGenerator::writeDocument)), "java.io.IOException"},
	{"writeDocumentProperties", "(Ljavax/swing/text/Document;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"writeEndgroup", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeLineBreak", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeParagraphElement", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeRTFHeader", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeRTFTrailer", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeRawString", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeText", "(Ljavax/swing/text/Segment;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeTextElement", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _RTFGenerator_InnerClassesInfo_[] = {
	{"javax.swing.text.rtf.RTFGenerator$CharacterKeywordPair", "javax.swing.text.rtf.RTFGenerator", "CharacterKeywordPair", $STATIC},
	{}
};

$ClassInfo _RTFGenerator_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.rtf.RTFGenerator",
	"java.lang.Object",
	nullptr,
	_RTFGenerator_FieldInfo_,
	_RTFGenerator_MethodInfo_,
	nullptr,
	nullptr,
	_RTFGenerator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.rtf.RTFGenerator$CharacterKeywordPair"
};

$Object* allocate$RTFGenerator($Class* clazz) {
	return $of($alloc(RTFGenerator));
}

$Color* RTFGenerator::defaultRTFColor = nullptr;
float RTFGenerator::defaultFontSize = 0.0;
$String* RTFGenerator::defaultFontFamily = nullptr;
$Object* RTFGenerator::MagicToken = nullptr;
$RTFGenerator$CharacterKeywordPairArray* RTFGenerator::textKeywords = nullptr;
$chars* RTFGenerator::hexdigits = nullptr;

void RTFGenerator::writeDocument($Document* d, $OutputStream* to) {
	$init(RTFGenerator);
	$useLocalCurrentObjectStackCache();
	$var(RTFGenerator, gen, $new(RTFGenerator, to));
	$var($Element, root, $nc(d)->getDefaultRootElement());
	gen->examineElement(root);
	gen->writeRTFHeader();
	gen->writeDocumentProperties(d);
	int32_t max = $nc(root)->getElementCount();
	for (int32_t idx = 0; idx < max; ++idx) {
		gen->writeParagraphElement($(root->getElement(idx)));
	}
	gen->writeRTFTrailer();
}

void RTFGenerator::init$($OutputStream* to) {
	$set(this, colorTable, $new($Hashtable));
	$nc(this->colorTable)->put(RTFGenerator::defaultRTFColor, $($Integer::valueOf(0)));
	this->colorCount = 1;
	$set(this, fontTable, $new($Hashtable));
	this->fontCount = 0;
	$set(this, styleTable, $new($Hashtable));
	this->styleCount = 0;
	$set(this, workingSegment, $new($Segment));
	$set(this, outputStream, to);
	this->unicodeCount = 1;
}

void RTFGenerator::examineElement($Element* el) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, a, $nc(el)->getAttributes());
	$var($String, fontName, nullptr);
	$var($Object, foregroundColor, nullptr);
	$var($Object, backgroundColor, nullptr);
	tallyStyles(a);
	if (a != nullptr) {
		$assign(foregroundColor, $StyleConstants::getForeground(a));
		if (foregroundColor != nullptr && $nc(this->colorTable)->get(foregroundColor) == nullptr) {
			$nc(this->colorTable)->put(foregroundColor, $($Integer::valueOf(this->colorCount)));
			++this->colorCount;
		}
		$assign(backgroundColor, a->getAttribute($StyleConstants::Background));
		if (backgroundColor != nullptr && $nc(this->colorTable)->get(backgroundColor) == nullptr) {
			$nc(this->colorTable)->put(backgroundColor, $($Integer::valueOf(this->colorCount)));
			++this->colorCount;
		}
		$assign(fontName, $StyleConstants::getFontFamily(a));
		if (fontName == nullptr) {
			$assign(fontName, RTFGenerator::defaultFontFamily);
		}
		if (fontName != nullptr && $nc(this->fontTable)->get(fontName) == nullptr) {
			$nc(this->fontTable)->put(fontName, $($Integer::valueOf(this->fontCount)));
			++this->fontCount;
		}
	}
	int32_t el_count = el->getElementCount();
	for (int32_t el_idx = 0; el_idx < el_count; ++el_idx) {
		examineElement($(el->getElement(el_idx)));
	}
}

void RTFGenerator::tallyStyles($AttributeSet* a$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, a, a$renamed);
	while (a != nullptr) {
		if ($instanceOf($Style, a)) {
			$var($Integer, aNum, $cast($Integer, $nc(this->styleTable)->get(a)));
			if (aNum == nullptr) {
				this->styleCount = this->styleCount + 1;
				$assign(aNum, $Integer::valueOf(this->styleCount));
				$nc(this->styleTable)->put(a, aNum);
			}
		}
		$assign(a, a->getResolveParent());
	}
}

$Style* RTFGenerator::findStyle($AttributeSet* a$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, a, a$renamed);
	while (a != nullptr) {
		if ($instanceOf($Style, a)) {
			$var($Object, aNum, $nc(this->styleTable)->get(a));
			if (aNum != nullptr) {
				return $cast($Style, a);
			}
		}
		$assign(a, a->getResolveParent());
	}
	return nullptr;
}

$Integer* RTFGenerator::findStyleNumber($AttributeSet* a$renamed, $String* domain) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, a, a$renamed);
	while (a != nullptr) {
		if ($instanceOf($Style, a)) {
			$var($Integer, aNum, $cast($Integer, $nc(this->styleTable)->get(a)));
			if (aNum != nullptr) {
				$init($Constants);
				if (domain == nullptr || $nc(domain)->equals($(a->getAttribute($Constants::StyleType)))) {
					return aNum;
				}
			}
		}
		$assign(a, a->getResolveParent());
	}
	return nullptr;
}

$Object* RTFGenerator::attrDiff($MutableAttributeSet* oldAttrs, $AttributeSet* newAttrs, Object$* key, Object$* dfl) {
	$init(RTFGenerator);
	$useLocalCurrentObjectStackCache();
	$var($Object, oldValue, nullptr);
	$var($Object, newValue, nullptr);
	$assign(oldValue, $nc(oldAttrs)->getAttribute(key));
	$assign(newValue, $nc(newAttrs)->getAttribute(key));
	if ($equals(newValue, oldValue)) {
		return $of(nullptr);
	}
	if (newValue == nullptr) {
		oldAttrs->removeAttribute(key);
		if (dfl != nullptr && !$of(dfl)->equals(oldValue)) {
			return $of(dfl);
		} else {
			return $of(nullptr);
		}
	}
	if (oldValue == nullptr || !equalArraysOK(oldValue, newValue)) {
		oldAttrs->addAttribute(key, newValue);
		return $of(newValue);
	}
	return $of(nullptr);
}

bool RTFGenerator::equalArraysOK(Object$* a, Object$* b) {
	$init(RTFGenerator);
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, aa, nullptr);
	$var($ObjectArray, bb, nullptr);
	if ($equals(a, b)) {
		return true;
	}
	if (a == nullptr || b == nullptr) {
		return false;
	}
	if ($nc($of(a))->equals(b)) {
		return true;
	}
	bool var$0 = $nc($of(a))->getClass()->isArray();
	if (!(var$0 && $nc($of(b))->getClass()->isArray())) {
		return false;
	}
	$assign(aa, $cast($ObjectArray, a));
	$assign(bb, $cast($ObjectArray, b));
	if ($nc(aa)->length != $nc(bb)->length) {
		return false;
	}
	int32_t i = 0;
	int32_t l = $nc(aa)->length;
	for (i = 0; i < l; ++i) {
		if (!equalArraysOK(aa->get(i), $nc(bb)->get(i))) {
			return false;
		}
	}
	return true;
}

void RTFGenerator::writeLineBreak() {
	writeRawString("\n"_s);
	this->afterKeyword = false;
}

void RTFGenerator::writeRTFHeader() {
	$useLocalCurrentObjectStackCache();
	int32_t index = 0;
	writeBegingroup();
	writeControlWord("rtf"_s, 1);
	writeControlWord("ansi"_s);
	$set(this, outputConversion, outputConversionForName("ansi"_s));
	writeLineBreak();
	$var($StringArray, sortedFontTable, $new($StringArray, this->fontCount));
	$var($Enumeration, fonts, $nc(this->fontTable)->keys());
	$var($String, font, nullptr);
	while ($nc(fonts)->hasMoreElements()) {
		$assign(font, $cast($String, fonts->nextElement()));
		$var($Integer, num, $cast($Integer, $nc(this->fontTable)->get(font)));
		sortedFontTable->set($nc(num)->intValue(), font);
	}
	writeBegingroup();
	writeControlWord("fonttbl"_s);
	for (index = 0; index < this->fontCount; ++index) {
		writeControlWord("f"_s, index);
		writeControlWord("fnil"_s);
		writeText(sortedFontTable->get(index));
		writeText(";"_s);
	}
	writeEndgroup();
	writeLineBreak();
	if (this->colorCount > 1) {
		$var($ColorArray, sortedColorTable, $new($ColorArray, this->colorCount));
		$var($Enumeration, colors, $nc(this->colorTable)->keys());
		$var($Color, color, nullptr);
		while ($nc(colors)->hasMoreElements()) {
			$assign(color, $cast($Color, colors->nextElement()));
			$var($Integer, num, $cast($Integer, $nc(this->colorTable)->get(color)));
			sortedColorTable->set($nc(num)->intValue(), color);
		}
		writeBegingroup();
		writeControlWord("colortbl"_s);
		for (index = 0; index < this->colorCount; ++index) {
			$assign(color, sortedColorTable->get(index));
			if (color != nullptr) {
				writeControlWord("red"_s, color->getRed());
				writeControlWord("green"_s, color->getGreen());
				writeControlWord("blue"_s, color->getBlue());
			}
			writeRawString(";"_s);
		}
		writeEndgroup();
		writeLineBreak();
	}
	if (this->styleCount > 1) {
		writeBegingroup();
		writeControlWord("stylesheet"_s);
		$var($Enumeration, styles, $nc(this->styleTable)->keys());
		while ($nc(styles)->hasMoreElements()) {
			$var($Style, style, $cast($Style, styles->nextElement()));
			int32_t styleNumber = $nc(($cast($Integer, $($nc(this->styleTable)->get(style)))))->intValue();
			writeBegingroup();
			$init($Constants);
			$var($String, styleType, $cast($String, $nc(style)->getAttribute($Constants::StyleType)));
			if (styleType == nullptr) {
				$assign(styleType, $Constants::STParagraph);
			}
			if ($nc(styleType)->equals($Constants::STCharacter)) {
				writeControlWord("*"_s);
				writeControlWord("cs"_s, styleNumber);
			} else {
				if (styleType->equals($Constants::STSection)) {
					writeControlWord("*"_s);
					writeControlWord("ds"_s, styleNumber);
				} else {
					writeControlWord("s"_s, styleNumber);
				}
			}
			$var($AttributeSet, basis, style->getResolveParent());
			$var($MutableAttributeSet, goat, nullptr);
			if (basis == nullptr) {
				$assign(goat, $new($SimpleAttributeSet));
			} else {
				$assign(goat, $new($SimpleAttributeSet, basis));
			}
			updateSectionAttributes(goat, style, false);
			updateParagraphAttributes(goat, style, false);
			updateCharacterAttributes(goat, style, false);
			$assign(basis, style->getResolveParent());
			if (basis != nullptr && $instanceOf($Style, basis)) {
				$var($Integer, basedOn, $cast($Integer, $nc(this->styleTable)->get(basis)));
				if (basedOn != nullptr) {
					writeControlWord("sbasedon"_s, basedOn->intValue());
				}
			}
			$var($Style, nextStyle, $cast($Style, style->getAttribute($Constants::StyleNext)));
			if (nextStyle != nullptr) {
				$var($Integer, nextNum, $cast($Integer, $nc(this->styleTable)->get(nextStyle)));
				if (nextNum != nullptr) {
					writeControlWord("snext"_s, nextNum->intValue());
				}
			}
			$var($Boolean, hidden, $cast($Boolean, style->getAttribute($Constants::StyleHidden)));
			if (hidden != nullptr && hidden->booleanValue()) {
				writeControlWord("shidden"_s);
			}
			$var($Boolean, additive, $cast($Boolean, style->getAttribute($Constants::StyleAdditive)));
			if (additive != nullptr && additive->booleanValue()) {
				writeControlWord("additive"_s);
			}
			writeText($(style->getName()));
			writeText(";"_s);
			writeEndgroup();
		}
		writeEndgroup();
		writeLineBreak();
	}
	$set(this, outputAttributes, $new($SimpleAttributeSet));
}

void RTFGenerator::writeDocumentProperties($Document* doc) {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	bool wroteSomething = false;
	$init($RTFAttributes);
	for (i = 0; i < $nc($RTFAttributes::attributes)->length; ++i) {
		$var($RTFAttribute, attr, $nc($RTFAttributes::attributes)->get(i));
		if ($nc(attr)->domain() != $RTFAttribute::D_DOCUMENT) {
			continue;
		}
		$var($Object, prop, $nc(doc)->getProperty($($nc(attr)->swingName())));
		bool ok = $nc(attr)->writeValue(prop, this, false);
		if (ok) {
			wroteSomething = true;
		}
	}
	if (wroteSomething) {
		writeLineBreak();
	}
}

void RTFGenerator::writeRTFTrailer() {
	writeEndgroup();
	writeLineBreak();
}

void RTFGenerator::checkNumericControlWord($MutableAttributeSet* currentAttributes, $AttributeSet* newAttributes, Object$* attrName, $String* controlWord, float dflt, float scale) {
	$var($Object, parm, nullptr);
	if (($assign(parm, attrDiff(currentAttributes, newAttributes, attrName, RTFGenerator::MagicToken))) != nullptr) {
		float targ = 0.0;
		if ($equals(parm, RTFGenerator::MagicToken)) {
			targ = dflt;
		} else {
			targ = $nc(($cast($Number, parm)))->floatValue();
		}
		writeControlWord(controlWord, $Math::round(targ * scale));
	}
}

void RTFGenerator::checkControlWord($MutableAttributeSet* currentAttributes, $AttributeSet* newAttributes, $RTFAttribute* word) {
	$useLocalCurrentObjectStackCache();
	$var($Object, parm, nullptr);
	if (($assign(parm, attrDiff(currentAttributes, newAttributes, $($nc(word)->swingName()), RTFGenerator::MagicToken))) != nullptr) {
		if ($equals(parm, RTFGenerator::MagicToken)) {
			$assign(parm, nullptr);
		}
		if (!$nc(word)->writeValue(parm, this, true) && $instanceOf($RTFAttributes$AssertiveAttribute, word)) {
			$nc(currentAttributes)->removeAttribute($(word->swingName()));
		}
	}
}

void RTFGenerator::checkControlWords($MutableAttributeSet* currentAttributes, $AttributeSet* newAttributes, $RTFAttributeArray* words, int32_t domain) {
	$useLocalCurrentObjectStackCache();
	int32_t wordIndex = 0;
	int32_t wordCount = $nc(words)->length;
	for (wordIndex = 0; wordIndex < wordCount; ++wordIndex) {
		$var($RTFAttribute, attr, words->get(wordIndex));
		if ($nc(attr)->domain() == domain) {
			checkControlWord(currentAttributes, newAttributes, attr);
		}
	}
}

void RTFGenerator::updateSectionAttributes($MutableAttributeSet* current, $AttributeSet* newAttributes, bool emitStyleChanges) {
	$useLocalCurrentObjectStackCache();
	if (emitStyleChanges) {
		$var($Object, oldStyle, $nc(current)->getAttribute("sectionStyle"_s));
		$init($Constants);
		$var($Object, newStyle, findStyleNumber(newAttributes, $Constants::STSection));
		if (!$equals(oldStyle, newStyle)) {
			if (oldStyle != nullptr) {
				resetSectionAttributes(current);
			}
			if (newStyle != nullptr) {
				writeControlWord("ds"_s, $nc(($cast($Integer, newStyle)))->intValue());
				current->addAttribute("sectionStyle"_s, newStyle);
			} else {
				current->removeAttribute("sectionStyle"_s);
			}
		}
	}
	$init($RTFAttributes);
	checkControlWords(current, newAttributes, $RTFAttributes::attributes, $RTFAttribute::D_SECTION);
}

void RTFGenerator::resetSectionAttributes($MutableAttributeSet* currentAttributes) {
	$useLocalCurrentObjectStackCache();
	writeControlWord("sectd"_s);
	int32_t wordIndex = 0;
	$init($RTFAttributes);
	int32_t wordCount = $nc($RTFAttributes::attributes)->length;
	for (wordIndex = 0; wordIndex < wordCount; ++wordIndex) {
		$var($RTFAttribute, attr, $nc($RTFAttributes::attributes)->get(wordIndex));
		if ($nc(attr)->domain() == $RTFAttribute::D_SECTION) {
			attr->setDefault(currentAttributes);
		}
	}
	$nc(currentAttributes)->removeAttribute("sectionStyle"_s);
}

void RTFGenerator::updateParagraphAttributes($MutableAttributeSet* current, $AttributeSet* newAttributes, bool emitStyleChanges) {
	$useLocalCurrentObjectStackCache();
	$var($Object, parm, nullptr);
	$var($Object, oldStyle, nullptr);
	$var($Object, newStyle, nullptr);
	if (emitStyleChanges) {
		$assign(oldStyle, $nc(current)->getAttribute("paragraphStyle"_s));
		$init($Constants);
		$assign(newStyle, findStyleNumber(newAttributes, $Constants::STParagraph));
		if (!$equals(oldStyle, newStyle)) {
			if (oldStyle != nullptr) {
				resetParagraphAttributes(current);
				$assign(oldStyle, nullptr);
			}
		}
	} else {
		$assign(oldStyle, nullptr);
		$assign(newStyle, nullptr);
	}
	$init($Constants);
	$var($Object, oldTabs, $nc(current)->getAttribute($Constants::Tabs));
	$var($Object, newTabs, $nc(newAttributes)->getAttribute($Constants::Tabs));
	if (!$equals(oldTabs, newTabs)) {
		if (oldTabs != nullptr) {
			resetParagraphAttributes(current);
			$assign(oldTabs, nullptr);
			$assign(oldStyle, nullptr);
		}
	}
	if (!$equals(oldStyle, newStyle) && newStyle != nullptr) {
		writeControlWord("s"_s, $nc(($cast($Integer, newStyle)))->intValue());
		current->addAttribute("paragraphStyle"_s, newStyle);
	}
	$init($RTFAttributes);
	checkControlWords(current, newAttributes, $RTFAttributes::attributes, $RTFAttribute::D_PARAGRAPH);
	if (!$equals(oldTabs, newTabs) && newTabs != nullptr) {
		$var($TabStopArray, tabs, $cast($TabStopArray, newTabs));
		int32_t index = 0;
		for (index = 0; index < tabs->length; ++index) {
			$var($TabStop, tab, tabs->get(index));
			switch ($nc(tab)->getAlignment()) {
			case $TabStop::ALIGN_LEFT:
				{}
			case $TabStop::ALIGN_BAR:
				{
					break;
				}
			case $TabStop::ALIGN_RIGHT:
				{
					writeControlWord("tqr"_s);
					break;
				}
			case $TabStop::ALIGN_CENTER:
				{
					writeControlWord("tqc"_s);
					break;
				}
			case $TabStop::ALIGN_DECIMAL:
				{
					writeControlWord("tqdec"_s);
					break;
				}
			}
			switch (tab->getLeader()) {
			case $TabStop::LEAD_NONE:
				{
					break;
				}
			case $TabStop::LEAD_DOTS:
				{
					writeControlWord("tldot"_s);
					break;
				}
			case $TabStop::LEAD_HYPHENS:
				{
					writeControlWord("tlhyph"_s);
					break;
				}
			case $TabStop::LEAD_UNDERLINE:
				{
					writeControlWord("tlul"_s);
					break;
				}
			case $TabStop::LEAD_THICKLINE:
				{
					writeControlWord("tlth"_s);
					break;
				}
			case $TabStop::LEAD_EQUALS:
				{
					writeControlWord("tleq"_s);
					break;
				}
			}
			int32_t twips = $Math::round(20.0f * tab->getPosition());
			if (tab->getAlignment() == $TabStop::ALIGN_BAR) {
				writeControlWord("tb"_s, twips);
			} else {
				writeControlWord("tx"_s, twips);
			}
		}
		current->addAttribute($Constants::Tabs, tabs);
	}
}

void RTFGenerator::writeParagraphElement($Element* el) {
	$useLocalCurrentObjectStackCache();
	updateParagraphAttributes(this->outputAttributes, $($nc(el)->getAttributes()), true);
	int32_t sub_count = $nc(el)->getElementCount();
	for (int32_t idx = 0; idx < sub_count; ++idx) {
		writeTextElement($(el->getElement(idx)));
	}
	writeControlWord("par"_s);
	writeLineBreak();
}

void RTFGenerator::resetParagraphAttributes($MutableAttributeSet* currentAttributes) {
	$useLocalCurrentObjectStackCache();
	writeControlWord("pard"_s);
	$init($StyleConstants);
	$nc(currentAttributes)->addAttribute($StyleConstants::Alignment, $($Integer::valueOf(0)));
	int32_t wordIndex = 0;
	$init($RTFAttributes);
	int32_t wordCount = $nc($RTFAttributes::attributes)->length;
	for (wordIndex = 0; wordIndex < wordCount; ++wordIndex) {
		$var($RTFAttribute, attr, $nc($RTFAttributes::attributes)->get(wordIndex));
		if ($nc(attr)->domain() == $RTFAttribute::D_PARAGRAPH) {
			attr->setDefault(currentAttributes);
		}
	}
	currentAttributes->removeAttribute("paragraphStyle"_s);
	$init($Constants);
	currentAttributes->removeAttribute($Constants::Tabs);
}

void RTFGenerator::updateCharacterAttributes($MutableAttributeSet* current, $AttributeSet* newAttributes, bool updateStyleChanges) {
	$useLocalCurrentObjectStackCache();
	$var($Object, parm, nullptr);
	if (updateStyleChanges) {
		$var($Object, oldStyle, $nc(current)->getAttribute("characterStyle"_s));
		$init($Constants);
		$var($Object, newStyle, findStyleNumber(newAttributes, $Constants::STCharacter));
		if (!$equals(oldStyle, newStyle)) {
			if (oldStyle != nullptr) {
				resetCharacterAttributes(current);
			}
			if (newStyle != nullptr) {
				writeControlWord("cs"_s, $nc(($cast($Integer, newStyle)))->intValue());
				current->addAttribute("characterStyle"_s, newStyle);
			} else {
				current->removeAttribute("characterStyle"_s);
			}
		}
	}
	$init($StyleConstants);
	if (($assign(parm, attrDiff(current, newAttributes, $StyleConstants::FontFamily, nullptr))) != nullptr) {
		$var($Integer, fontNum, $cast($Integer, $nc(this->fontTable)->get(parm)));
		writeControlWord("f"_s, $nc(fontNum)->intValue());
	}
	checkNumericControlWord(current, newAttributes, $StyleConstants::FontSize, "fs"_s, RTFGenerator::defaultFontSize, 2.0f);
	$init($RTFAttributes);
	checkControlWords(current, newAttributes, $RTFAttributes::attributes, $RTFAttribute::D_CHARACTER);
	checkNumericControlWord(current, newAttributes, $StyleConstants::LineSpacing, "sl"_s, (float)0, 20.0f);
	if (($assign(parm, attrDiff(current, newAttributes, $StyleConstants::Background, RTFGenerator::MagicToken))) != nullptr) {
		int32_t colorNum = 0;
		if ($equals(parm, RTFGenerator::MagicToken)) {
			colorNum = 0;
		} else {
			colorNum = $nc(($cast($Integer, $($nc(this->colorTable)->get(parm)))))->intValue();
		}
		writeControlWord("cb"_s, colorNum);
	}
	if (($assign(parm, attrDiff(current, newAttributes, $StyleConstants::Foreground, nullptr))) != nullptr) {
		int32_t colorNum = 0;
		if ($equals(parm, RTFGenerator::MagicToken)) {
			colorNum = 0;
		} else {
			colorNum = $nc(($cast($Integer, $($nc(this->colorTable)->get(parm)))))->intValue();
		}
		writeControlWord("cf"_s, colorNum);
	}
}

void RTFGenerator::resetCharacterAttributes($MutableAttributeSet* currentAttributes) {
	$useLocalCurrentObjectStackCache();
	writeControlWord("plain"_s);
	int32_t wordIndex = 0;
	$init($RTFAttributes);
	int32_t wordCount = $nc($RTFAttributes::attributes)->length;
	for (wordIndex = 0; wordIndex < wordCount; ++wordIndex) {
		$var($RTFAttribute, attr, $nc($RTFAttributes::attributes)->get(wordIndex));
		if ($nc(attr)->domain() == $RTFAttribute::D_CHARACTER) {
			attr->setDefault(currentAttributes);
		}
	}
	$StyleConstants::setFontFamily(currentAttributes, RTFGenerator::defaultFontFamily);
	$nc(currentAttributes)->removeAttribute($StyleConstants::FontSize);
	currentAttributes->removeAttribute($StyleConstants::Background);
	currentAttributes->removeAttribute($StyleConstants::Foreground);
	currentAttributes->removeAttribute($StyleConstants::LineSpacing);
	currentAttributes->removeAttribute("characterStyle"_s);
}

void RTFGenerator::writeTextElement($Element* el) {
	$useLocalCurrentObjectStackCache();
	updateCharacterAttributes(this->outputAttributes, $($nc(el)->getAttributes()), true);
	if ($nc(el)->isLeaf()) {
		try {
			int32_t var$0 = el->getStartOffset();
			int32_t var$1 = el->getEndOffset();
			$nc($(el->getDocument()))->getText(var$0, var$1 - el->getStartOffset(), this->workingSegment);
		} catch ($BadLocationException& ble) {
			ble->printStackTrace();
			$throwNew($InternalError, $(ble->getMessage()));
		}
		writeText(this->workingSegment);
	} else {
		int32_t sub_count = el->getElementCount();
		for (int32_t idx = 0; idx < sub_count; ++idx) {
			writeTextElement($(el->getElement(idx)));
		}
	}
}

void RTFGenerator::writeText($Segment* s) {
	int32_t pos = 0;
	int32_t end = 0;
	$var($chars, array, nullptr);
	pos = $nc(s)->offset;
	end = pos + s->count;
	$assign(array, s->array);
	for (; pos < end; ++pos) {
		writeCharacter($nc(array)->get(pos));
	}
}

void RTFGenerator::writeText($String* s) {
	int32_t pos = 0;
	int32_t end = 0;
	pos = 0;
	end = $nc(s)->length();
	for (; pos < end; ++pos) {
		writeCharacter(s->charAt(pos));
	}
}

void RTFGenerator::writeRawString($String* str) {
	int32_t strlen = $nc(str)->length();
	for (int32_t offset = 0; offset < strlen; ++offset) {
		$nc(this->outputStream)->write((int32_t)str->charAt(offset));
	}
}

void RTFGenerator::writeControlWord($String* keyword) {
	$nc(this->outputStream)->write((int32_t)u'\\');
	writeRawString(keyword);
	this->afterKeyword = true;
}

void RTFGenerator::writeControlWord($String* keyword, int32_t arg) {
	$nc(this->outputStream)->write((int32_t)u'\\');
	writeRawString(keyword);
	writeRawString($($String::valueOf(arg)));
	this->afterKeyword = true;
}

void RTFGenerator::writeBegingroup() {
	$nc(this->outputStream)->write((int32_t)u'{');
	this->afterKeyword = false;
}

void RTFGenerator::writeEndgroup() {
	$nc(this->outputStream)->write((int32_t)u'}');
	this->afterKeyword = false;
}

void RTFGenerator::writeCharacter(char16_t ch) {
	if (ch == 160) {
		$nc(this->outputStream)->write(92);
		$nc(this->outputStream)->write(126);
		this->afterKeyword = false;
		return;
	}
	if (ch == 9) {
		writeControlWord("tab"_s);
		return;
	}
	if (ch == 10 || ch == 13) {
		return;
	}
	int32_t b = convertCharacter(this->outputConversion, ch);
	if (b == 0) {
		int32_t i = 0;
		for (i = 0; i < $nc(RTFGenerator::textKeywords)->length; ++i) {
			if ($nc($nc(RTFGenerator::textKeywords)->get(i))->character == ch) {
				writeControlWord($nc($nc(RTFGenerator::textKeywords)->get(i))->keyword);
				return;
			}
		}
		$var($String, approximation, approximationForUnicode(ch));
		if ($nc(approximation)->length() != this->unicodeCount) {
			this->unicodeCount = approximation->length();
			writeControlWord("uc"_s, this->unicodeCount);
		}
		writeControlWord("u"_s, (int32_t)ch);
		writeRawString(" "_s);
		writeRawString(approximation);
		this->afterKeyword = false;
		return;
	}
	if (b > 127) {
		int32_t nybble = 0;
		$nc(this->outputStream)->write((int32_t)u'\\');
		$nc(this->outputStream)->write((int32_t)u'\'');
		nybble = (int32_t)((uint32_t)((int32_t)(b & (uint32_t)240)) >> 4);
		$nc(this->outputStream)->write((int32_t)$nc(RTFGenerator::hexdigits)->get(nybble));
		nybble = ((int32_t)(b & (uint32_t)15));
		$nc(this->outputStream)->write((int32_t)$nc(RTFGenerator::hexdigits)->get(nybble));
		this->afterKeyword = false;
		return;
	}
	switch (b) {
	case u'}':
		{}
	case u'{':
		{}
	case u'\\':
		{
			$nc(this->outputStream)->write(92);
			this->afterKeyword = false;
		}
	default:
		{
			if (this->afterKeyword) {
				$nc(this->outputStream)->write(32);
				this->afterKeyword = false;
			}
			$nc(this->outputStream)->write(b);
			break;
		}
	}
}

$String* RTFGenerator::approximationForUnicode(char16_t ch) {
	return "?"_s;
}

$ints* RTFGenerator::outputConversionFromTranslationTable($chars* table) {
	$init(RTFGenerator);
	$var($ints, conversion, $new($ints, 2 * $nc(table)->length));
	int32_t index = 0;
	for (index = 0; index < table->length; ++index) {
		conversion->set(index * 2, table->get(index));
		conversion->set((index * 2) + 1, index);
	}
	return conversion;
}

$ints* RTFGenerator::outputConversionForName($String* name) {
	$init(RTFGenerator);
	$var($chars, table, $cast($chars, $RTFReader::getCharacterSet(name)));
	return outputConversionFromTranslationTable(table);
}

int32_t RTFGenerator::convertCharacter($ints* conversion, char16_t ch) {
	$init(RTFGenerator);
	int32_t index = 0;
	for (index = 0; index < $nc(conversion)->length; index += 2) {
		if (conversion->get(index) == ch) {
			return conversion->get(index + 1);
		}
	}
	return 0;
}

void clinit$RTFGenerator($Class* class$) {
	$useLocalCurrentObjectStackCache();
	RTFGenerator::defaultFontSize = 12.0f;
	$assignStatic(RTFGenerator::defaultFontFamily, "Helvetica"_s);
	$init($Color);
	$assignStatic(RTFGenerator::defaultRTFColor, $Color::black);
	{
		$assignStatic(RTFGenerator::MagicToken, $new($Object));
		$init($RTFReader);
		$var($Dictionary, textKeywordDictionary, $RTFReader::textKeywords);
		$var($Enumeration, keys, $nc(textKeywordDictionary)->keys());
		$var($Vector, tempPairs, $new($Vector));
		while ($nc(keys)->hasMoreElements()) {
			$var($RTFGenerator$CharacterKeywordPair, pair, $new($RTFGenerator$CharacterKeywordPair));
			$set(pair, keyword, $cast($String, keys->nextElement()));
			pair->character = $nc(($cast($String, $(textKeywordDictionary->get(pair->keyword)))))->charAt(0);
			tempPairs->addElement(pair);
		}
		$assignStatic(RTFGenerator::textKeywords, $new($RTFGenerator$CharacterKeywordPairArray, tempPairs->size()));
		tempPairs->copyInto(RTFGenerator::textKeywords);
	}
	$assignStatic(RTFGenerator::hexdigits, $new($chars, {
		u'0',
		u'1',
		u'2',
		u'3',
		u'4',
		u'5',
		u'6',
		u'7',
		u'8',
		u'9',
		u'a',
		u'b',
		u'c',
		u'd',
		u'e',
		u'f'
	}));
}

RTFGenerator::RTFGenerator() {
}

$Class* RTFGenerator::load$($String* name, bool initialize) {
	$loadClass(RTFGenerator, name, initialize, &_RTFGenerator_ClassInfo_, clinit$RTFGenerator, allocate$RTFGenerator);
	return class$;
}

$Class* RTFGenerator::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax