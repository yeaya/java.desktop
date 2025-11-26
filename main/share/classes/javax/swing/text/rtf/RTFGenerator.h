#ifndef _javax_swing_text_rtf_RTFGenerator_h_
#define _javax_swing_text_rtf_RTFGenerator_h_
//$ class javax.swing.text.rtf.RTFGenerator
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Color;
	}
}
namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace util {
		class Dictionary;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Document;
			class Element;
			class MutableAttributeSet;
			class Segment;
			class Style;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {
				class RTFAttribute;
				class RTFGenerator$CharacterKeywordPair;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

class RTFGenerator : public ::java::lang::Object {
	$class(RTFGenerator, 0, ::java::lang::Object)
public:
	RTFGenerator();
	void init$(::java::io::OutputStream* to);
	virtual $String* approximationForUnicode(char16_t ch);
	static $Object* attrDiff(::javax::swing::text::MutableAttributeSet* oldAttrs, ::javax::swing::text::AttributeSet* newAttrs, Object$* key, Object$* dfl);
	virtual void checkControlWord(::javax::swing::text::MutableAttributeSet* currentAttributes, ::javax::swing::text::AttributeSet* newAttributes, ::javax::swing::text::rtf::RTFAttribute* word);
	virtual void checkControlWords(::javax::swing::text::MutableAttributeSet* currentAttributes, ::javax::swing::text::AttributeSet* newAttributes, $Array<::javax::swing::text::rtf::RTFAttribute>* words, int32_t domain);
	virtual void checkNumericControlWord(::javax::swing::text::MutableAttributeSet* currentAttributes, ::javax::swing::text::AttributeSet* newAttributes, Object$* attrName, $String* controlWord, float dflt, float scale);
	static int32_t convertCharacter($ints* conversion, char16_t ch);
	static bool equalArraysOK(Object$* a, Object$* b);
	virtual void examineElement(::javax::swing::text::Element* el);
	::javax::swing::text::Style* findStyle(::javax::swing::text::AttributeSet* a);
	::java::lang::Integer* findStyleNumber(::javax::swing::text::AttributeSet* a, $String* domain);
	static $ints* outputConversionForName($String* name);
	static $ints* outputConversionFromTranslationTable($chars* table);
	virtual void resetCharacterAttributes(::javax::swing::text::MutableAttributeSet* currentAttributes);
	virtual void resetParagraphAttributes(::javax::swing::text::MutableAttributeSet* currentAttributes);
	virtual void resetSectionAttributes(::javax::swing::text::MutableAttributeSet* currentAttributes);
	void tallyStyles(::javax::swing::text::AttributeSet* a);
	virtual void updateCharacterAttributes(::javax::swing::text::MutableAttributeSet* current, ::javax::swing::text::AttributeSet* newAttributes, bool updateStyleChanges);
	virtual void updateParagraphAttributes(::javax::swing::text::MutableAttributeSet* current, ::javax::swing::text::AttributeSet* newAttributes, bool emitStyleChanges);
	virtual void updateSectionAttributes(::javax::swing::text::MutableAttributeSet* current, ::javax::swing::text::AttributeSet* newAttributes, bool emitStyleChanges);
	virtual void writeBegingroup();
	virtual void writeCharacter(char16_t ch);
	virtual void writeControlWord($String* keyword);
	virtual void writeControlWord($String* keyword, int32_t arg);
	static void writeDocument(::javax::swing::text::Document* d, ::java::io::OutputStream* to);
	virtual void writeDocumentProperties(::javax::swing::text::Document* doc);
	virtual void writeEndgroup();
	virtual void writeLineBreak();
	virtual void writeParagraphElement(::javax::swing::text::Element* el);
	virtual void writeRTFHeader();
	virtual void writeRTFTrailer();
	virtual void writeRawString($String* str);
	virtual void writeText(::javax::swing::text::Segment* s);
	virtual void writeText($String* s);
	virtual void writeTextElement(::javax::swing::text::Element* el);
	::java::util::Dictionary* colorTable = nullptr;
	int32_t colorCount = 0;
	::java::util::Dictionary* fontTable = nullptr;
	int32_t fontCount = 0;
	::java::util::Dictionary* styleTable = nullptr;
	int32_t styleCount = 0;
	::java::io::OutputStream* outputStream = nullptr;
	bool afterKeyword = false;
	::javax::swing::text::MutableAttributeSet* outputAttributes = nullptr;
	int32_t unicodeCount = 0;
	::javax::swing::text::Segment* workingSegment = nullptr;
	$ints* outputConversion = nullptr;
	static ::java::awt::Color* defaultRTFColor;
	static float defaultFontSize;
	static $String* defaultFontFamily;
	static $Object* MagicToken;
	static $Array<::javax::swing::text::rtf::RTFGenerator$CharacterKeywordPair>* textKeywords;
	static $chars* hexdigits;
};

			} // rtf
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_rtf_RTFGenerator_h_