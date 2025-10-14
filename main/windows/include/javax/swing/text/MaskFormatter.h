#ifndef _javax_swing_text_MaskFormatter_h_
#define _javax_swing_text_MaskFormatter_h_
//$ class javax.swing.text.MaskFormatter
//$ extends javax.swing.text.DefaultFormatter

#include <java/lang/Array.h>
#include <javax/swing/text/DefaultFormatter.h>

#pragma push_macro("ALPHA_NUMERIC_KEY")
#undef ALPHA_NUMERIC_KEY
#pragma push_macro("ANYTHING_KEY")
#undef ANYTHING_KEY
#pragma push_macro("CHARACTER_KEY")
#undef CHARACTER_KEY
#pragma push_macro("DIGIT_KEY")
#undef DIGIT_KEY
#pragma push_macro("HEX_KEY")
#undef HEX_KEY
#pragma push_macro("LITERAL_KEY")
#undef LITERAL_KEY
#pragma push_macro("LOWERCASE_KEY")
#undef LOWERCASE_KEY
#pragma push_macro("UPPERCASE_KEY")
#undef UPPERCASE_KEY

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace javax {
	namespace swing {
		class JFormattedTextField;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class DefaultFormatter$ReplaceHolder;
			class MaskFormatter$MaskCharacter;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import MaskFormatter : public ::javax::swing::text::DefaultFormatter {
	$class(MaskFormatter, 0, ::javax::swing::text::DefaultFormatter)
public:
	MaskFormatter();
	void init$();
	void init$($String* mask);
	void append(::java::lang::StringBuilder* result, $String* value, $ints* index, $String* placeholder, $Array<::javax::swing::text::MaskFormatter$MaskCharacter>* mask);
	virtual bool canReplace(::javax::swing::text::DefaultFormatter$ReplaceHolder* rh) override;
	char16_t getCharacter(int32_t index, char16_t aChar);
	virtual $String* getInvalidCharacters();
	int32_t getInvalidOffset($String* string, bool completeMatch);
	char16_t getLiteral(int32_t index);
	virtual $String* getMask();
	::javax::swing::text::MaskFormatter$MaskCharacter* getMaskCharacter(int32_t index);
	int32_t getMaxLength();
	virtual $String* getPlaceholder();
	virtual char16_t getPlaceholderCharacter();
	virtual $String* getValidCharacters();
	virtual bool getValueContainsLiteralCharacters();
	virtual void install(::javax::swing::JFormattedTextField* ftf) override;
	bool isLiteral(int32_t index);
	virtual bool isNavigatable(int32_t offset) override;
	bool isPlaceholder(int32_t index, char16_t aChar);
	bool isValidCharacter(int32_t index, char16_t aChar);
	virtual bool isValidEdit(::javax::swing::text::DefaultFormatter$ReplaceHolder* rh) override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual void setInvalidCharacters($String* invalidCharacters);
	virtual void setMask($String* mask);
	virtual void setPlaceholder($String* placeholder);
	virtual void setPlaceholderCharacter(char16_t placeholder);
	virtual void setValidCharacters($String* validCharacters);
	virtual void setValueContainsLiteralCharacters(bool containsLiteralChars);
	virtual $Object* stringToValue($String* value) override;
	$Object* stringToValue($String* value, bool completeMatch);
	$String* stripLiteralChars($String* string);
	void updateInternalMask();
	virtual $String* valueToString(Object$* value) override;
	static const char16_t DIGIT_KEY = ((char16_t)35);
	static const char16_t LITERAL_KEY = ((char16_t)39);
	static const char16_t UPPERCASE_KEY = ((char16_t)85);
	static const char16_t LOWERCASE_KEY = ((char16_t)76);
	static const char16_t ALPHA_NUMERIC_KEY = ((char16_t)65);
	static const char16_t CHARACTER_KEY = ((char16_t)63);
	static const char16_t ANYTHING_KEY = ((char16_t)42);
	static const char16_t HEX_KEY = ((char16_t)72);
	static $Array<::javax::swing::text::MaskFormatter$MaskCharacter>* EmptyMaskChars;
	$String* mask = nullptr;
	$Array<::javax::swing::text::MaskFormatter$MaskCharacter>* maskChars = nullptr;
	$String* validCharacters = nullptr;
	$String* invalidCharacters = nullptr;
	$String* placeholderString = nullptr;
	char16_t placeholder = 0;
	bool containsLiteralChars = false;
};

		} // text
	} // swing
} // javax

#pragma pop_macro("ALPHA_NUMERIC_KEY")
#pragma pop_macro("ANYTHING_KEY")
#pragma pop_macro("CHARACTER_KEY")
#pragma pop_macro("DIGIT_KEY")
#pragma pop_macro("HEX_KEY")
#pragma pop_macro("LITERAL_KEY")
#pragma pop_macro("LOWERCASE_KEY")
#pragma pop_macro("UPPERCASE_KEY")

#endif // _javax_swing_text_MaskFormatter_h_