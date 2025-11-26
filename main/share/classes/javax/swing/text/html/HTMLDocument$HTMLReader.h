#ifndef _javax_swing_text_html_HTMLDocument$HTMLReader_h_
#define _javax_swing_text_html_HTMLDocument$HTMLReader_h_
//$ class javax.swing.text.html.HTMLDocument$HTMLReader
//$ extends javax.swing.text.html.HTMLEditorKit$ParserCallback

#include <java/lang/Array.h>
#include <javax/swing/text/html/HTMLEditorKit$ParserCallback.h>

namespace java {
	namespace util {
		class Hashtable;
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
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace html {
				class HTML$Tag;
				class HTMLDocument;
				class HTMLDocument$HTMLReader$TagAction;
				class Map;
				class Option;
				class TextAreaDocument;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export HTMLDocument$HTMLReader : public ::javax::swing::text::html::HTMLEditorKit$ParserCallback {
	$class(HTMLDocument$HTMLReader, $NO_CLASS_INIT, ::javax::swing::text::html::HTMLEditorKit$ParserCallback)
public:
	HTMLDocument$HTMLReader();
	void init$(::javax::swing::text::html::HTMLDocument* this$0, int32_t offset);
	void init$(::javax::swing::text::html::HTMLDocument* this$0, int32_t offset, int32_t popDepth, int32_t pushDepth, ::javax::swing::text::html::HTML$Tag* insertTag);
	void init$(::javax::swing::text::html::HTMLDocument* this$0, int32_t offset, int32_t popDepth, int32_t pushDepth, ::javax::swing::text::html::HTML$Tag* insertTag, bool insertInsertTag, bool insertAfterImplied, bool wantsTrailingNewline);
	virtual void addCSSRules($String* rules);
	virtual void addContent($chars* data, int32_t offs, int32_t length);
	virtual void addContent($chars* data, int32_t offs, int32_t length, bool generateImpliedPIfNecessary);
	void addExternalComment($String* comment);
	virtual void addSpecialElement(::javax::swing::text::html::HTML$Tag* t, ::javax::swing::text::MutableAttributeSet* a);
	void adjustEndElement();
	void adjustEndSpecsForPartialInsert();
	virtual void blockClose(::javax::swing::text::html::HTML$Tag* t);
	virtual void blockOpen(::javax::swing::text::html::HTML$Tag* t, ::javax::swing::text::MutableAttributeSet* attr);
	bool canInsertTag(::javax::swing::text::html::HTML$Tag* t, ::javax::swing::text::AttributeSet* attr, bool isBlockTag);
	int32_t depthTo(int32_t offset);
	virtual void flush() override;
	virtual void flushBuffer(bool endOfStream);
	void foundInsertTag(bool isBlockTag);
	void generateEndsSpecsForMidInsert();
	$Array<::javax::swing::text::Element>* getPathTo(int32_t offset);
	virtual void handleComment($chars* data, int32_t pos) override;
	virtual void handleEndOfLineString($String* eol) override;
	virtual void handleEndTag(::javax::swing::text::html::HTML$Tag* t, int32_t pos) override;
	virtual void handleSimpleTag(::javax::swing::text::html::HTML$Tag* t, ::javax::swing::text::MutableAttributeSet* a, int32_t pos) override;
	virtual void handleStartTag(::javax::swing::text::html::HTML$Tag* t, ::javax::swing::text::MutableAttributeSet* a, int32_t pos) override;
	virtual void handleText($chars* data, int32_t pos) override;
	int32_t heightToElementWithName(Object$* name, int32_t offset);
	bool isInsertTag(::javax::swing::text::html::HTML$Tag* tag);
	virtual void linkCSSStyleSheet($String* href);
	virtual void popCharacterStyle();
	virtual void preContent($chars* data);
	virtual void pushCharacterStyle();
	virtual void registerTag(::javax::swing::text::html::HTML$Tag* t, ::javax::swing::text::html::HTMLDocument$HTMLReader$TagAction* a);
	virtual void textAreaContent($chars* data);
	::javax::swing::text::html::HTMLDocument* this$0 = nullptr;
	bool receivedEndHTML = false;
	int32_t flushCount = 0;
	bool insertAfterImplied = false;
	bool wantsTrailingNewline = false;
	int32_t threshold = 0;
	int32_t offset = 0;
	bool inParagraph = false;
	bool impliedP = false;
	bool inPre = false;
	bool inTextArea = false;
	::javax::swing::text::html::TextAreaDocument* textAreaDocument = nullptr;
	bool inTitle = false;
	bool lastWasNewline = false;
	bool emptyAnchor = false;
	bool midInsert = false;
	bool inBody = false;
	::javax::swing::text::html::HTML$Tag* insertTag = nullptr;
	bool insertInsertTag = false;
	bool foundInsertTag$ = false;
	int32_t insertTagDepthDelta = 0;
	int32_t popDepth = 0;
	int32_t pushDepth = 0;
	::javax::swing::text::html::Map* lastMap = nullptr;
	bool inStyle = false;
	$String* defaultStyle = nullptr;
	::java::util::Vector* styles = nullptr;
	bool inHead = false;
	bool isStyleCSS = false;
	bool emptyDocument = false;
	::javax::swing::text::AttributeSet* styleAttributes = nullptr;
	::javax::swing::text::html::Option* option = nullptr;
	::java::util::Vector* parseBuffer = nullptr;
	::javax::swing::text::MutableAttributeSet* charAttr = nullptr;
	::java::util::Stack* charAttrStack = nullptr;
	::java::util::Hashtable* tagMap = nullptr;
	int32_t inBlock = 0;
	::javax::swing::text::html::HTML$Tag* nextTagAfterPImplied = nullptr;
};

			} // html
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_html_HTMLDocument$HTMLReader_h_