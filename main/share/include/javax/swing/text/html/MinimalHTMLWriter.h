#ifndef _javax_swing_text_html_MinimalHTMLWriter_h_
#define _javax_swing_text_html_MinimalHTMLWriter_h_
//$ class javax.swing.text.html.MinimalHTMLWriter
//$ extends javax.swing.text.AbstractWriter

#include <javax/swing/text/AbstractWriter.h>

#pragma push_macro("BOLD")
#undef BOLD
#pragma push_macro("ITALIC")
#undef ITALIC
#pragma push_macro("UNDERLINE")
#undef UNDERLINE

namespace java {
	namespace io {
		class Writer;
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class Element;
			class StyledDocument;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class CSS;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import MinimalHTMLWriter : public ::javax::swing::text::AbstractWriter {
	$class(MinimalHTMLWriter, 0, ::javax::swing::text::AbstractWriter)
public:
	MinimalHTMLWriter();
	void init$(::java::io::Writer* w, ::javax::swing::text::StyledDocument* doc);
	void init$(::java::io::Writer* w, ::javax::swing::text::StyledDocument* doc, int32_t pos, int32_t len);
	$String* addStyleName($String* style);
	virtual void endFontTag();
	void endSpanTag();
	virtual bool inFontTag();
	virtual bool isText(::javax::swing::text::Element* elem);
	bool isValidCharacter(char16_t character);
	$String* mapStyleName($String* style);
	void setFontMask(::javax::swing::text::AttributeSet* attr);
	virtual void startFontTag($String* style);
	void startSpanTag($String* style);
	virtual void text(::javax::swing::text::Element* elem) override;
	using ::javax::swing::text::AbstractWriter::write;
	virtual void write() override;
	virtual void writeAttributes(::javax::swing::text::AttributeSet* attr) override;
	virtual void writeBody();
	virtual void writeComponent(::javax::swing::text::Element* elem);
	virtual void writeContent(::javax::swing::text::Element* elem, bool needsIndenting);
	void writeEndMask(int32_t mask);
	virtual void writeEndParagraph();
	virtual void writeEndTag($String* endTag);
	virtual void writeHTMLTags(::javax::swing::text::AttributeSet* attr);
	virtual void writeHeader();
	virtual void writeImage(::javax::swing::text::Element* elem);
	virtual void writeLeaf(::javax::swing::text::Element* elem);
	virtual void writeNonHTMLAttributes(::javax::swing::text::AttributeSet* attr);
	void writeStartMask(int32_t mask);
	virtual void writeStartParagraph(::javax::swing::text::Element* elem);
	virtual void writeStartTag($String* tag);
	virtual void writeStyles();
	static const int32_t BOLD = 1;
	static const int32_t ITALIC = 2;
	static const int32_t UNDERLINE = 4;
	static ::javax::swing::text::html::CSS* css;
	int32_t fontMask = 0;
	int32_t startOffset = 0;
	int32_t endOffset = 0;
	::javax::swing::text::AttributeSet* fontAttributes = nullptr;
	::java::util::Hashtable* styleNameMapping = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#pragma pop_macro("BOLD")
#pragma pop_macro("ITALIC")
#pragma pop_macro("UNDERLINE")

#endif // _javax_swing_text_html_MinimalHTMLWriter_h_