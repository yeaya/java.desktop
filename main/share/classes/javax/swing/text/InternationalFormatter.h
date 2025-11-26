#ifndef _javax_swing_text_InternationalFormatter_h_
#define _javax_swing_text_InternationalFormatter_h_
//$ class javax.swing.text.InternationalFormatter
//$ extends javax.swing.text.DefaultFormatter

#include <java/lang/Array.h>
#include <javax/swing/text/DefaultFormatter.h>

#pragma push_macro("EMPTY_FIELD_ARRAY")
#undef EMPTY_FIELD_ARRAY

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		class Comparable;
	}
}
namespace java {
	namespace text {
		class AttributedCharacterIterator;
		class AttributedCharacterIterator$Attribute;
		class Format;
		class Format$Field;
	}
}
namespace java {
	namespace util {
		class BitSet;
		class Map;
	}
}
namespace javax {
	namespace swing {
		class Action;
		class JFormattedTextField;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class DefaultFormatter$ReplaceHolder;
			class DocumentFilter$FilterBypass;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export InternationalFormatter : public ::javax::swing::text::DefaultFormatter {
	$class(InternationalFormatter, 0, ::javax::swing::text::DefaultFormatter)
public:
	InternationalFormatter();
	void init$();
	void init$(::java::text::Format* format);
	static ::javax::swing::JFormattedTextField* access$000(::javax::swing::text::InternationalFormatter* x0);
	static ::javax::swing::JFormattedTextField* access$100(::javax::swing::text::InternationalFormatter* x0);
	static ::javax::swing::JFormattedTextField* access$200(::javax::swing::text::InternationalFormatter* x0);
	static void access$300(::javax::swing::text::InternationalFormatter* x0);
	virtual $Object* adjustValue(Object$* value, ::java::util::Map* attributes, Object$* field, int32_t direction);
	virtual bool canIncrement(Object$* field, int32_t cursorPosition);
	virtual bool canReplace(::javax::swing::text::DefaultFormatter$ReplaceHolder* rh) override;
	virtual $Object* clone() override;
	virtual $Array<::javax::swing::Action>* getActions() override;
	virtual $Object* getAdjustField(int32_t start, ::java::util::Map* attributes);
	virtual int32_t getAttributeStart(::java::text::AttributedCharacterIterator$Attribute* id);
	virtual ::java::util::Map* getAttributes(int32_t index);
	virtual char16_t getBufferedChar(int32_t index);
	int32_t getFieldTypeCountTo(Object$* f, int32_t start);
	virtual $Array<::java::text::Format$Field>* getFields(int32_t offset);
	virtual ::java::text::Format* getFormat();
	virtual ::java::text::AttributedCharacterIterator* getIterator();
	virtual char16_t getLiteral(int32_t index);
	virtual int32_t getLiteralCountTo(int32_t index);
	virtual ::java::lang::Comparable* getMaximum();
	virtual ::java::lang::Comparable* getMinimum();
	int32_t getNextNonliteralIndex(int32_t index, int32_t direction);
	virtual ::javax::swing::text::DefaultFormatter$ReplaceHolder* getReplaceHolder(::javax::swing::text::DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length, $String* text, ::javax::swing::text::AttributeSet* attrs) override;
	virtual bool getSupportsIncrement();
	virtual void install(::javax::swing::JFormattedTextField* ftf) override;
	virtual bool isLiteral(int32_t index);
	virtual bool isLiteral(::java::util::Map* attributes);
	virtual bool isNavigatable(int32_t offset) override;
	virtual bool isValidMask();
	virtual bool isValidValue(Object$* value, bool wantsCCE);
	void readObject(::java::io::ObjectInputStream* s);
	virtual void replace(::javax::swing::text::DocumentFilter$FilterBypass* fb, int32_t offset, int32_t length, $String* text, ::javax::swing::text::AttributeSet* attrs) override;
	virtual bool replace(::javax::swing::text::DefaultFormatter$ReplaceHolder* rh) override;
	using ::javax::swing::text::DefaultFormatter::repositionCursor;
	void repositionCursor(int32_t startLiteralCount, int32_t end, int32_t direction);
	virtual void resetValue(Object$* value);
	virtual void selectField(Object$* f, int32_t count);
	virtual void setFormat(::java::text::Format* format);
	virtual void setMaximum(::java::lang::Comparable* max);
	virtual void setMinimum(::java::lang::Comparable* minimum);
	virtual $Object* stringToValue($String* text) override;
	virtual $Object* stringToValue($String* text, ::java::text::Format* f);
	virtual void updateMask();
	void updateMask(::java::text::AttributedCharacterIterator* iterator);
	virtual void updateMaskIfNecessary();
	using ::javax::swing::text::DefaultFormatter::updateValue;
	virtual void updateValue(Object$* value) override;
	virtual $String* valueToString(Object$* value) override;
	static $Array<::java::text::Format$Field>* EMPTY_FIELD_ARRAY;
	::java::text::Format* format = nullptr;
	::java::lang::Comparable* max = nullptr;
	::java::lang::Comparable* min = nullptr;
	::java::util::BitSet* literalMask = nullptr;
	::java::text::AttributedCharacterIterator* iterator = nullptr;
	bool validMask = false;
	$String* string = nullptr;
	bool ignoreDocumentMutate = false;
};

		} // text
	} // swing
} // javax

#pragma pop_macro("EMPTY_FIELD_ARRAY")

#endif // _javax_swing_text_InternationalFormatter_h_