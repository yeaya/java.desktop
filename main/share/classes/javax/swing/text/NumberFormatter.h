#ifndef _javax_swing_text_NumberFormatter_h_
#define _javax_swing_text_NumberFormatter_h_
//$ class javax.swing.text.NumberFormatter
//$ extends javax.swing.text.InternationalFormatter

#include <javax/swing/text/InternationalFormatter.h>

namespace java {
	namespace text {
		class DecimalFormatSymbols;
		class Format;
		class NumberFormat;
		class NumberFormat$Field;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class DocumentFilter$FilterBypass;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export NumberFormatter : public ::javax::swing::text::InternationalFormatter {
	$class(NumberFormatter, $NO_CLASS_INIT, ::javax::swing::text::InternationalFormatter)
public:
	NumberFormatter();
	void init$();
	void init$(::java::text::NumberFormat* format);
	$Object* convertValueToValueClass(Object$* value, $Class* valueClass);
	::java::text::DecimalFormatSymbols* getDecimalFormatSymbols();
	char16_t getDecimalSeparator();
	::java::text::NumberFormat$Field* getFieldFrom(int32_t index, int32_t direction);
	char16_t getMinusSign();
	char16_t getPositiveSign();
	virtual bool isLegalInsertText($String* text) override;
	using ::javax::swing::text::InternationalFormatter::isLiteral;
	virtual bool isLiteral(::java::util::Map* attrs) override;
	virtual bool isNavigatable(int32_t index) override;
	using ::javax::swing::text::InternationalFormatter::replace;
	virtual void replace(::javax::swing::text::DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length, $String* string, ::javax::swing::text::AttributeSet* attr) override;
	virtual void setFormat(::java::text::Format* format) override;
	using ::javax::swing::text::InternationalFormatter::stringToValue;
	virtual $Object* stringToValue($String* text, ::java::text::Format* f) override;
	$Object* toggleExponentSign(int32_t offset, char16_t aChar);
	$Object* toggleSign(bool positive);
	bool toggleSignIfNecessary(::javax::swing::text::DocumentFilter$FilterBypass* fb, int32_t offset, char16_t aChar);
	using ::javax::swing::text::InternationalFormatter::updateValue;
	$String* specialChars = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_NumberFormatter_h_