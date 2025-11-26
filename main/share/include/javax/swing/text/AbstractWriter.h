#ifndef _javax_swing_text_AbstractWriter_h_
#define _javax_swing_text_AbstractWriter_h_
//$ class javax.swing.text.AbstractWriter
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NEWLINE")
#undef NEWLINE

namespace java {
	namespace io {
		class Writer;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Document;
			class Element;
			class ElementIterator;
			class Segment;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import AbstractWriter : public ::java::lang::Object {
	$class(AbstractWriter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AbstractWriter();
	void init$(::java::io::Writer* w, ::javax::swing::text::Document* doc);
	void init$(::java::io::Writer* w, ::javax::swing::text::Document* doc, int32_t pos, int32_t len);
	void init$(::java::io::Writer* w, ::javax::swing::text::Element* root);
	void init$(::java::io::Writer* w, ::javax::swing::text::Element* root, int32_t pos, int32_t len);
	virtual void decrIndent();
	virtual bool getCanWrapLines();
	virtual int32_t getCurrentLineLength();
	virtual ::javax::swing::text::Document* getDocument();
	virtual ::javax::swing::text::ElementIterator* getElementIterator();
	virtual int32_t getEndOffset();
	virtual int32_t getIndentLevel();
	virtual int32_t getIndentSpace();
	virtual int32_t getLineLength();
	virtual $String* getLineSeparator();
	virtual int32_t getStartOffset();
	virtual $String* getText(::javax::swing::text::Element* elem);
	virtual ::java::io::Writer* getWriter();
	virtual bool inRange(::javax::swing::text::Element* next);
	virtual void incrIndent();
	virtual void indent();
	int32_t indexOf($chars* chars, char16_t sChar, int32_t startIndex, int32_t endIndex);
	virtual bool isLineEmpty();
	virtual void output($chars* content, int32_t start, int32_t length);
	virtual void setCanWrapLines(bool newValue);
	virtual void setCurrentLineLength(int32_t length);
	virtual void setIndentSpace(int32_t space);
	virtual void setLineLength(int32_t l);
	virtual void setLineSeparator($String* value);
	virtual void text(::javax::swing::text::Element* elem);
	virtual void write() {}
	virtual void write(char16_t ch);
	virtual void write($String* content);
	virtual void write($chars* chars, int32_t startIndex, int32_t length);
	virtual void writeAttributes(::javax::swing::text::AttributeSet* attr);
	virtual void writeLineSeparator();
	::javax::swing::text::ElementIterator* it = nullptr;
	::java::io::Writer* out = nullptr;
	int32_t indentLevel = 0;
	int32_t indentSpace = 0;
	::javax::swing::text::Document* doc = nullptr;
	int32_t maxLineLength = 0;
	int32_t currLength = 0;
	int32_t startOffset = 0;
	int32_t endOffset = 0;
	int32_t offsetIndent = 0;
	$String* lineSeparator = nullptr;
	bool canWrapLines = false;
	bool isLineEmpty$ = false;
	$chars* indentChars = nullptr;
	$chars* tempChars = nullptr;
	$chars* newlineChars = nullptr;
	::javax::swing::text::Segment* segment = nullptr;
	static const char16_t NEWLINE = ((char16_t)10);
};

		} // text
	} // swing
} // javax

#pragma pop_macro("NEWLINE")

#endif // _javax_swing_text_AbstractWriter_h_