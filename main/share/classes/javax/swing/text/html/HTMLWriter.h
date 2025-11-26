#ifndef _javax_swing_text_html_HTMLWriter_h_
#define _javax_swing_text_html_HTMLWriter_h_
//$ class javax.swing.text.html.HTMLWriter
//$ extends javax.swing.text.AbstractWriter

#include <java/lang/Array.h>
#include <javax/swing/text/AbstractWriter.h>

namespace java {
	namespace io {
		class Writer;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class Stack;
		class Vector;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
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
			namespace html {
				class CSS$Attribute;
				class HTML$Tag;
				class HTMLDocument;
				class Option;
				class StyleSheet;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export HTMLWriter : public ::javax::swing::text::AbstractWriter {
	$class(HTMLWriter, $NO_CLASS_INIT, ::javax::swing::text::AbstractWriter)
public:
	HTMLWriter();
	void init$(::java::io::Writer* w, ::javax::swing::text::html::HTMLDocument* doc);
	void init$(::java::io::Writer* w, ::javax::swing::text::html::HTMLDocument* doc, int32_t pos, int32_t len);
	static void addAttribute(::javax::swing::text::MutableAttributeSet* to, Object$* key, Object$* value);
	virtual void closeOutUnwantedEmbeddedTags(::javax::swing::text::AttributeSet* attr);
	virtual void comment(::javax::swing::text::Element* elem);
	virtual ::javax::swing::text::AttributeSet* convertToHTML(::javax::swing::text::AttributeSet* from, ::javax::swing::text::MutableAttributeSet* to);
	static void convertToHTML32(::javax::swing::text::AttributeSet* from, ::javax::swing::text::MutableAttributeSet* to);
	static void convertToHTML40(::javax::swing::text::AttributeSet* from, ::javax::swing::text::MutableAttributeSet* to);
	static void createFontAttribute(::javax::swing::text::html::CSS$Attribute* a, ::javax::swing::text::AttributeSet* from, ::javax::swing::text::MutableAttributeSet* to);
	virtual void emptyTag(::javax::swing::text::Element* elem);
	virtual void endTag(::javax::swing::text::Element* elem);
	bool indentNeedsIncrementing(::javax::swing::text::Element* current, ::javax::swing::text::Element* next);
	void indentSmart();
	virtual bool isBlockTag(::javax::swing::text::AttributeSet* attr);
	bool isFormElementWithContent(::javax::swing::text::AttributeSet* attr);
	bool isPreTagWithParagraphTag(::javax::swing::text::AttributeSet* attr);
	virtual bool matchNameAttribute(::javax::swing::text::AttributeSet* attr, ::javax::swing::text::html::HTML$Tag* tag);
	bool noMatchForTagInAttributes(::javax::swing::text::AttributeSet* attr, ::javax::swing::text::html::HTML$Tag* t, Object$* tagValue);
	virtual void output($chars* chars, int32_t start, int32_t length) override;
	void output($String* string);
	virtual void selectContent(::javax::swing::text::AttributeSet* attr);
	virtual void startTag(::javax::swing::text::Element* elem);
	virtual bool synthesizedElement(::javax::swing::text::Element* elem);
	virtual void text(::javax::swing::text::Element* elem) override;
	virtual void textAreaContent(::javax::swing::text::AttributeSet* attr);
	using ::javax::swing::text::AbstractWriter::write;
	virtual void write() override;
	virtual void writeAdditionalComments();
	virtual void writeAttributes(::javax::swing::text::AttributeSet* attr) override;
	virtual void writeComment($String* string);
	virtual void writeEmbeddedTags(::javax::swing::text::AttributeSet* attr);
	virtual void writeLineSeparator() override;
	virtual void writeMaps(::java::util::Enumeration* maps);
	virtual void writeOption(::javax::swing::text::html::Option* option);
	virtual bool writeStyle($String* name, ::javax::swing::text::Style* style, bool outputStyle);
	virtual void writeStyleEndTag();
	virtual void writeStyleStartTag();
	virtual void writeStyles(::javax::swing::text::html::StyleSheet* sheet);
	::java::util::Stack* blockElementStack = nullptr;
	bool inContent = false;
	bool inPre = false;
	int32_t preEndOffset = 0;
	bool inTextArea = false;
	bool newlineOutputed = false;
	bool completeDoc = false;
	::java::util::Vector* tags = nullptr;
	::java::util::Vector* tagValues = nullptr;
	::javax::swing::text::Segment* segment = nullptr;
	::java::util::Vector* tagsToRemove = nullptr;
	bool wroteHead = false;
	bool replaceEntities = false;
	$chars* tempChars = nullptr;
	bool indentNext = false;
	bool writeCSS = false;
	::javax::swing::text::MutableAttributeSet* convAttr = nullptr;
	::javax::swing::text::MutableAttributeSet* oConvAttr = nullptr;
	bool indented = false;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTMLWriter_h_